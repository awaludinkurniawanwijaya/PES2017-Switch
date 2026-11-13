#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83208568"))) PPC_WEAK_FUNC(sub_83208568);
PPC_FUNC_IMPL(__imp__sub_83208568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x832085B8;
	sub_832979A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83207d90
	ctx.lr = 0x832085C8;
	sub_83207D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x832085D0;
	sub_83255A88(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832084b8
	ctx.lr = 0x832085E0;
	sub_832084B8(ctx, base);
loc_832085E0:
	// b 0x832085e0
	goto loc_832085E0;
}

__attribute__((alias("__imp__sub_832085E4"))) PPC_WEAK_FUNC(sub_832085E4);
PPC_FUNC_IMPL(__imp__sub_832085E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832085E8"))) PPC_WEAK_FUNC(sub_832085E8);
PPC_FUNC_IMPL(__imp__sub_832085E8) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x83208638;
	sub_832979A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83207d90
	ctx.lr = 0x83208648;
	sub_83207D90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x83208650;
	sub_83255A88(ctx, base);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r8,r9,24688
	ctx.r8.s64 = ctx.r9.s64 + 24688;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208688
	if (!cr6.eq) goto loc_83208688;
	// bl 0x832084b8
	ctx.lr = 0x83208674;
	sub_832084B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83208688:
	// bl 0x832081a0
	ctx.lr = 0x8320868C;
	sub_832081A0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832086A0"))) PPC_WEAK_FUNC(sub_832086A0);
PPC_FUNC_IMPL(__imp__sub_832086A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832086A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83255b10
	ctx.lr = 0x832086C8;
	sub_83255B10(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x832083d0
	ctx.lr = 0x832086D8;
	sub_832083D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298458
	ctx.lr = 0x832086E8;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_832086E8"))) PPC_WEAK_FUNC(sub_832086E8);
PPC_FUNC_IMPL(__imp__sub_832086E8) {
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
	// lis r30,-31748
	ctx.r30.s64 = -2080636928;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r31,r30,25224
	ctx.r31.s64 = ctx.r30.s64 + 25224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83208714;
	sub_83294018(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r11,r11,-32024
	ctx.r11.s64 = ctx.r11.s64 + -32024;
	// addi r10,r10,-31944
	ctx.r10.s64 = ctx.r10.s64 + -31944;
	// addi r9,r9,-31848
	ctx.r9.s64 = ctx.r9.s64 + -31848;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r11,r8,-31752
	ctx.r11.s64 = ctx.r8.s64 + -31752;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,25224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25224, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x83294018
	ctx.lr = 0x83208764;
	sub_83294018(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320877C"))) PPC_WEAK_FUNC(sub_8320877C);
PPC_FUNC_IMPL(__imp__sub_8320877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208780"))) PPC_WEAK_FUNC(sub_83208780);
PPC_FUNC_IMPL(__imp__sub_83208780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83208788;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,25224
	ctx.r28.s64 = ctx.r11.s64 + 25224;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r29,r28,56
	ctx.r29.s64 = ctx.r28.s64 + 56;
	// addi r31,r10,26932
	ctx.r31.s64 = ctx.r10.s64 + 26932;
	// addi r30,r11,26908
	ctx.r30.s64 = ctx.r11.s64 + 26908;
loc_832087B0:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832087cc
	if (cr6.eq) goto loc_832087CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832083d0
	ctx.lr = 0x832087C8;
	sub_832083D0(ctx, base);
	// li r27,-13
	ctx.r27.s64 = -13;
loc_832087CC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,120
	ctx.r11.s64 = ctx.r28.s64 + 120;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x832087b0
	if (cr6.lt) goto loc_832087B0;
	// addi r31,r28,56
	ctx.r31.s64 = ctx.r28.s64 + 56;
loc_832087E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832087f4
	if (cr6.eq) goto loc_832087F4;
	// bl 0x83209d68
	ctx.lr = 0x832087F0;
	sub_83209D68(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_832087F4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r28,120
	ctx.r11.s64 = ctx.r28.s64 + 120;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832087e0
	if (cr6.lt) goto loc_832087E0;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x83294018
	ctx.lr = 0x8320881C;
	sub_83294018(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208828"))) PPC_WEAK_FUNC(sub_83208828);
PPC_FUNC_IMPL(__imp__sub_83208828) {
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
	// bl 0x832086e8
	ctx.lr = 0x83208838;
	sub_832086E8(ctx, base);
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

__attribute__((alias("__imp__sub_8320884C"))) PPC_WEAK_FUNC(sub_8320884C);
PPC_FUNC_IMPL(__imp__sub_8320884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208850"))) PPC_WEAK_FUNC(sub_83208850);
PPC_FUNC_IMPL(__imp__sub_83208850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83208868
	if (!cr6.eq) goto loc_83208868;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83208868:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320887C"))) PPC_WEAK_FUNC(sub_8320887C);
PPC_FUNC_IMPL(__imp__sub_8320887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83208880"))) PPC_WEAK_FUNC(sub_83208880);
PPC_FUNC_IMPL(__imp__sub_83208880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83208888;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832088b0
	if (cr6.eq) goto loc_832088B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_832088B0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832089ac
	if (cr6.eq) goto loc_832089AC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x832089ac
	if (!cr6.gt) goto loc_832089AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x832088e0
	if (cr6.lt) goto loc_832088E0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_832088D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// ble cr6,0x832088d0
	if (!cr6.gt) goto loc_832088D0;
loc_832088E0:
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mullw r11,r31,r28
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_832088F4:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x83208918
	if (cr6.lt) goto loc_83208918;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83208964
	if (cr6.eq) goto loc_83208964;
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r29,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// b 0x832088f4
	goto loc_832088F4;
loc_83208918:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83208928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8320897c
	if (cr6.eq) goto loc_8320897C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83208994
	if (cr6.eq) goto loc_83208994;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// bge cr6,0x83208954
	if (!cr6.lt) goto loc_83208954;
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r29,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// b 0x832088f4
	goto loc_832088F4;
loc_83208954:
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r29,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// b 0x832088f4
	goto loc_832088F4;
loc_83208964:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832089ac
	if (cr6.eq) goto loc_832089AC;
loc_8320896C:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8320897C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83208988
	if (cr6.eq) goto loc_83208988;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_83208988:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83208994:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832089ac
	if (cr6.eq) goto loc_832089AC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8320896c
	if (cr6.lt) goto loc_8320896C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_832089AC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832089B8"))) PPC_WEAK_FUNC(sub_832089B8);
PPC_FUNC_IMPL(__imp__sub_832089B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832089C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832089f8
	if (!cr6.eq) goto loc_832089F8;
loc_832089EC:
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832089F8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832089ec
	if (cr6.eq) goto loc_832089EC;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83208880
	ctx.lr = 0x83208A18;
	sub_83208880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83208a3c
	if (!cr6.eq) goto loc_83208A3C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r25,-6
	ctx.r25.s64 = -6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208a48
	if (!cr6.eq) goto loc_83208A48;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83208A3C:
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x83208a98
	if (!cr6.eq) goto loc_83208A98;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83208A48:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bge cr6,0x83208a74
	if (!cr6.lt) goto loc_83208A74;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// mullw r10,r29,r31
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf r9,r29,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mullw r5,r9,r31
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83293f28
	ctx.lr = 0x83208A74;
	sub_83293F28(ctx, base);
loc_83208A74:
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83208A88;
	sub_83293EC8(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83208a94
	if (cr6.eq) goto loc_83208A94;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_83208A94:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_83208A98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208AA0"))) PPC_WEAK_FUNC(sub_83208AA0);
PPC_FUNC_IMPL(__imp__sub_83208AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83208ad8
	if (cr6.eq) goto loc_83208AD8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83208ad8
	if (cr6.eq) goto loc_83208AD8;
	// cmpwi cr6,r9,45
	cr6.compare<int32_t>(ctx.r9.s32, 45, xer);
	// beq cr6,0x83208ac8
	if (cr6.eq) goto loc_83208AC8;
	// cmpwi cr6,r9,43
	cr6.compare<int32_t>(ctx.r9.s32, 43, xer);
	// bne cr6,0x83208ae0
	if (!cr6.eq) goto loc_83208AE0;
loc_83208AC8:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83208ae8
	if (!cr6.eq) goto loc_83208AE8;
loc_83208AD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83208AE0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83208b10
	if (cr6.eq) goto loc_83208B10;
loc_83208AE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83208AF0:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83208ad8
	if (cr6.lt) goto loc_83208AD8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83208ad8
	if (cr6.gt) goto loc_83208AD8;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83208af0
	if (!cr6.eq) goto loc_83208AF0;
loc_83208B10:
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// bne cr6,0x83208b30
	if (!cr6.eq) goto loc_83208B30;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_83208B30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83208B38"))) PPC_WEAK_FUNC(sub_83208B38);
PPC_FUNC_IMPL(__imp__sub_83208B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83208b48
	if (!cr6.eq) goto loc_83208B48;
loc_83208B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83208B48:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83208b40
	if (cr6.eq) goto loc_83208B40;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83208B64:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x83208c20
	if (cr6.eq) goto loc_83208C20;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x83208c20
	if (cr6.eq) goto loc_83208C20;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// bne cr6,0x83208b94
	if (!cr6.eq) goto loc_83208B94;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83208b8c
	if (cr6.eq) goto loc_83208B8C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83208b40
	if (!cr6.eq) goto loc_83208B40;
loc_83208B8C:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208B94:
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// beq cr6,0x83208bfc
	if (cr6.eq) goto loc_83208BFC;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// beq cr6,0x83208bfc
	if (cr6.eq) goto loc_83208BFC;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83208b40
	if (cr6.lt) goto loc_83208B40;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83208b40
	if (cr6.gt) goto loc_83208B40;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83208bc8
	if (!cr6.eq) goto loc_83208BC8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208BC8:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83208bf4
	if (cr6.eq) goto loc_83208BF4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83208bf4
	if (cr6.eq) goto loc_83208BF4;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x83208bec
	if (!cr6.eq) goto loc_83208BEC;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208BEC:
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x83208b40
	if (!cr6.eq) goto loc_83208B40;
loc_83208BF4:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208BFC:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83208c0c
	if (cr6.eq) goto loc_83208C0C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83208b40
	if (!cr6.eq) goto loc_83208B40;
loc_83208C0C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83208b40
	if (cr6.eq) goto loc_83208B40;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208C20:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83208c30
	if (!cr6.eq) goto loc_83208C30;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83208c54
	goto loc_83208C54;
loc_83208C30:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x83208b40
	if (!cr6.eq) goto loc_83208B40;
	// li r10,6
	ctx.r10.s64 = 6;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x83208c54
	if (!cr6.eq) goto loc_83208C54;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83208c78
	if (cr6.eq) goto loc_83208C78;
loc_83208C54:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83208b64
	if (!cr6.eq) goto loc_83208B64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83208C78:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83208C88"))) PPC_WEAK_FUNC(sub_83208C88);
PPC_FUNC_IMPL(__imp__sub_83208C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83208C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83208d58
	if (cr6.eq) goto loc_83208D58;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83208ce0
	if (!cr6.gt) goto loc_83208CE0;
loc_83208CC0:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83208d60
	if (cr6.eq) goto loc_83208D60;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83208cc0
	if (cr6.lt) goto loc_83208CC0;
loc_83208CE0:
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x83208D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83208D24;
	sub_83294018(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bl 0x83204f38
	ctx.lr = 0x83208D48;
	sub_83204F38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_83208D58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83208D60:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bl 0x83204f38
	ctx.lr = 0x83208D6C;
	sub_83204F38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83208D78"))) PPC_WEAK_FUNC(sub_83208D78);
PPC_FUNC_IMPL(__imp__sub_83208D78) {
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83208dfc
	if (!cr6.eq) goto loc_83208DFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83208e40
	if (cr6.eq) goto loc_83208E40;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83208e40
	if (!cr6.gt) goto loc_83208E40;
loc_83208DB0:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83208de0
	if (cr6.eq) goto loc_83208DE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83208db0
	if (cr6.lt) goto loc_83208DB0;
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
loc_83208DE0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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
loc_83208DFC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83208e34
	if (cr6.eq) goto loc_83208E34;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83208e34
	if (!cr6.gt) goto loc_83208E34;
loc_83208E18:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83208e54
	if (cr6.eq) goto loc_83208E54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83208e18
	if (cr6.lt) goto loc_83208E18;
loc_83208E34:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83208c88
	ctx.lr = 0x83208E40;
	sub_83208C88(ctx, base);
loc_83208E40:
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
loc_83208E54:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x83204f38
	ctx.lr = 0x83208E60;
	sub_83204F38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83208E78"))) PPC_WEAK_FUNC(sub_83208E78);
PPC_FUNC_IMPL(__imp__sub_83208E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83208e90
	if (cr6.gt) goto loc_83208E90;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x83208e90
	if (cr6.gt) goto loc_83208E90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83208E90:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83208ee0
	if (!cr6.gt) goto loc_83208EE0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x83208ee0
	if (!cr6.gt) goto loc_83208EE0;
loc_83208EB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// bne cr6,0x83208ed0
	if (!cr6.eq) goto loc_83208ED0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x83208ee8
	if (cr6.eq) goto loc_83208EE8;
loc_83208ED0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83208eb8
	if (cr6.lt) goto loc_83208EB8;
loc_83208EE0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83208EE8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83208EF0"))) PPC_WEAK_FUNC(sub_83208EF0);
PPC_FUNC_IMPL(__imp__sub_83208EF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83208f1c
	if (cr6.eq) goto loc_83208F1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83208f28
	goto loc_83208F28;
loc_83208F1C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83208F28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83208f3c
	if (!cr6.eq) goto loc_83208F3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320903c
	goto loc_8320903C;
loc_83208F3C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r30,r11,25344
	ctx.r30.s64 = ctx.r11.s64 + 25344;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83208fa0
	if (!cr6.gt) goto loc_83208FA0;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x83208fa0
	if (!cr6.gt) goto loc_83208FA0;
loc_83208F64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83208f78
	if (cr6.eq) goto loc_83208F78;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x83208f84
	goto loc_83208F84;
loc_83208F78:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83208F84:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83209054
	if (cr6.eq) goto loc_83209054;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x83208f64
	if (cr6.lt) goto loc_83208F64;
loc_83208FA0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r5,r10,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83208FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83208FD4;
	sub_83294018(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83208fe4
	if (!cr6.eq) goto loc_83208FE4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83208FE4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8320903C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83209054:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// b 0x8320903c
	goto loc_8320903C;
}

__attribute__((alias("__imp__sub_83209094"))) PPC_WEAK_FUNC(sub_83209094);
PPC_FUNC_IMPL(__imp__sub_83209094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209098"))) PPC_WEAK_FUNC(sub_83209098);
PPC_FUNC_IMPL(__imp__sub_83209098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832090A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8320919c
	if (!cr6.gt) goto loc_8320919C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r29,r11,25344
	ctx.r29.s64 = ctx.r11.s64 + 25344;
	// lbz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320919c
	if (cr6.eq) goto loc_8320919C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8320919c
	if (!cr6.gt) goto loc_8320919C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// ble cr6,0x8320919c
	if (!cr6.gt) goto loc_8320919C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_832090EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bne cr6,0x8320918c
	if (!cr6.eq) goto loc_8320918C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// beq cr6,0x83209128
	if (cr6.eq) goto loc_83209128;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296be0
	ctx.lr = 0x83209128;
	sub_83296BE0(ctx, base);
loc_83209128:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255980
	ctx.lr = 0x83209130;
	sub_83255980(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83255980
	ctx.lr = 0x83209140;
	sub_83255980(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// subfic r5,r30,23
	xer.ca = ctx.r30.u32 <= 23;
	ctx.r5.s64 = 23 - ctx.r30.s64;
	// addi r4,r10,9
	ctx.r4.s64 = ctx.r10.s64 + 9;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x83296be0
	ctx.lr = 0x83209158;
	sub_83296BE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8320918C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x832090ec
	if (cr6.lt) goto loc_832090EC;
loc_8320919C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832091A4"))) PPC_WEAK_FUNC(sub_832091A4);
PPC_FUNC_IMPL(__imp__sub_832091A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832091A8"))) PPC_WEAK_FUNC(sub_832091A8);
PPC_FUNC_IMPL(__imp__sub_832091A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832091c0
	if (!cr6.eq) goto loc_832091C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832091C0:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832091D4"))) PPC_WEAK_FUNC(sub_832091D4);
PPC_FUNC_IMPL(__imp__sub_832091D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832091D8"))) PPC_WEAK_FUNC(sub_832091D8);
PPC_FUNC_IMPL(__imp__sub_832091D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832091E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,25344
	ctx.r31.s64 = ctx.r11.s64 + 25344;
	// lbz r11,25344(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83209444
	if (cr6.eq) goto loc_83209444;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r5,256
	cr6.compare<int32_t>(ctx.r5.s32, 256, xer);
	// ble cr6,0x83209224
	if (!cr6.gt) goto loc_83209224;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320921C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83209224:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83294018
	ctx.lr = 0x83209230;
	sub_83294018(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832093a0
	if (!cr6.gt) goto loc_832093A0;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt 0x83209314
	if (cr0.lt) goto loc_83209314;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_8320926C:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83209298
	if (cr6.eq) goto loc_83209298;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83209304
	if (!cr6.gt) goto loc_83209304;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x83209304
	if (!cr6.lt) goto loc_83209304;
	// stbx r28,r9,r27
	PPC_STORE_U8(ctx.r9.u32 + ctx.r27.u32, ctx.r28.u8);
	// b 0x83209304
	goto loc_83209304;
loc_83209298:
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// bge cr6,0x83209304
	if (!cr6.lt) goto loc_83209304;
loc_832092A0:
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832092c0
	if (!cr6.eq) goto loc_832092C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x832092a0
	if (cr6.lt) goto loc_832092A0;
	// b 0x83209304
	goto loc_83209304;
loc_832092C0:
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832092dc
	if (!cr6.gt) goto loc_832092DC;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x832092dc
	if (!cr6.lt) goto loc_832092DC;
	// stbx r28,r9,r27
	PPC_STORE_U8(ctx.r9.u32 + ctx.r27.u32, ctx.r28.u8);
loc_832092DC:
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// stw r29,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r29.u32);
	// stw r29,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r29.u32);
	// stwu r29,-12(r10)
	ea = -12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
loc_83209304:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x8320926c
	if (!cr6.gt) goto loc_8320926C;
loc_83209314:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325bb48
	ctx.lr = 0x8320931C;
	sub_8325BB48(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83209350
	if (!cr6.gt) goto loc_83209350;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_83209334:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83209350
	if (cr6.eq) goto loc_83209350;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83209334
	if (cr6.lt) goto loc_83209334;
loc_83209350:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,-28248
	ctx.r6.s64 = ctx.r11.s64 + -28248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83296fd0
	ctx.lr = 0x83209364;
	sub_83296FD0(ctx, base);
	// addi r10,r30,31
	ctx.r10.s64 = ctx.r30.s64 + 31;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r10,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x832093a0
	if (!cr6.lt) goto loc_832093A0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83209398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_832093A0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83209424
	if (!cr6.gt) goto loc_83209424;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// ble cr6,0x832093f8
	if (!cr6.gt) goto loc_832093F8;
loc_832093C4:
	// lbzx r7,r10,r27
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832093e0
	if (!cr6.eq) goto loc_832093E0;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x832093e4
	goto loc_832093E4;
loc_832093E0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_832093E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x832093c4
	if (cr6.lt) goto loc_832093C4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_832093F8:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, xer);
	// beq cr6,0x83209424
	if (cr6.eq) goto loc_83209424;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r30,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8320941C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_83209424:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x83209444
	if (cr6.eq) goto loc_83209444;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83209444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83209444:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320944C"))) PPC_WEAK_FUNC(sub_8320944C);
PPC_FUNC_IMPL(__imp__sub_8320944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209450"))) PPC_WEAK_FUNC(sub_83209450);
PPC_FUNC_IMPL(__imp__sub_83209450) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,444
	ctx.r5.s64 = 444;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83209478;
	sub_83294018(ctx, base);
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// lis r8,-31748
	ctx.r8.s64 = -2080636928;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r11,r11,10584
	ctx.r11.s64 = ctx.r11.s64 + 10584;
	// addi r5,r8,25344
	ctx.r5.s64 = ctx.r8.s64 + 25344;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,25344(r8)
	PPC_STORE_U8(ctx.r8.u32 + 25344, ctx.r10.u8);
	// addi r11,r6,10584
	ctx.r11.s64 = ctx.r6.s64 + 10584;
	// lis r7,-31913
	ctx.r7.s64 = -2091450368;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// addi r10,r7,10584
	ctx.r10.s64 = ctx.r7.s64 + 10584;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// addi r9,r8,11696
	ctx.r9.s64 = ctx.r8.s64 + 11696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// stw r9,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r9.u32);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83209508"))) PPC_WEAK_FUNC(sub_83209508);
PPC_FUNC_IMPL(__imp__sub_83209508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83209510;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320953c
	if (!cr6.eq) goto loc_8320953C;
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,10584
	ctx.r31.s64 = ctx.r11.s64 + 10584;
	// addi r29,r10,10584
	ctx.r29.s64 = ctx.r10.s64 + 10584;
	// addi r30,r9,11696
	ctx.r30.s64 = ctx.r9.s64 + 11696;
	// b 0x832095b4
	goto loc_832095B4;
loc_8320953C:
	// lwz r31,144(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r27,140(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r29,148(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r28,r11,27052
	ctx.r28.s64 = ctx.r11.s64 + 27052;
	// bne cr6,0x83209574
	if (!cr6.eq) goto loc_83209574;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,27016
	ctx.r4.s64 = ctx.r11.s64 + 27016;
	// bl 0x832083d0
	ctx.lr = 0x8320956C;
	sub_832083D0(ctx, base);
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// addi r31,r11,10584
	ctx.r31.s64 = ctx.r11.s64 + 10584;
loc_83209574:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83209594
	if (!cr6.eq) goto loc_83209594;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,26976
	ctx.r4.s64 = ctx.r11.s64 + 26976;
	// bl 0x832083d0
	ctx.lr = 0x8320958C;
	sub_832083D0(ctx, base);
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// addi r29,r11,10584
	ctx.r29.s64 = ctx.r11.s64 + 10584;
loc_83209594:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832095b4
	if (!cr6.eq) goto loc_832095B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,26940
	ctx.r4.s64 = ctx.r11.s64 + 26940;
	// bl 0x832083d0
	ctx.lr = 0x832095AC;
	sub_832083D0(ctx, base);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r30,r11,11696
	ctx.r30.s64 = ctx.r11.s64 + 11696;
loc_832095B4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832095e0
	if (cr6.eq) goto loc_832095E0;
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832095E0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// stw r27,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r27.u32);
	// stw r31,432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 432, ctx.r31.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// stw r30,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209600"))) PPC_WEAK_FUNC(sub_83209600);
PPC_FUNC_IMPL(__imp__sub_83209600) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,444
	ctx.r5.s64 = 444;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x83209624;
	sub_83294018(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,25344
	ctx.r31.s64 = ctx.r11.s64 + 25344;
	// lbz r10,25344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83209670
	if (cr6.eq) goto loc_83209670;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83209654
	if (cr6.eq) goto loc_83209654;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83209654;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83209654:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83209670
	if (cr6.eq) goto loc_83209670;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83209670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83209670:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832096B8"))) PPC_WEAK_FUNC(sub_832096B8);
PPC_FUNC_IMPL(__imp__sub_832096B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x8320970c
	if (cr6.gt) goto loc_8320970C;
	// bge cr6,0x832096f4
	if (!cr6.lt) goto loc_832096F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,27096
	ctx.r4.s64 = ctx.r11.s64 + 27096;
	// addi r3,r10,27052
	ctx.r3.s64 = ctx.r10.s64 + 27052;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83208568
	ctx.lr = 0x832096F4;
	sub_83208568(ctx, base);
loc_832096F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832096F8:
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
loc_8320970C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// bne cr6,0x83209734
	if (!cr6.eq) goto loc_83209734;
	// lwz r9,432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83209730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8320974c
	goto loc_8320974C;
loc_83209734:
	// lwz r9,436(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8320974C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8320974C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832096f8
	if (!cr6.eq) goto loc_832096F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,27088
	ctx.r5.s64 = ctx.r11.s64 + 27088;
	// addi r4,r10,27064
	ctx.r4.s64 = ctx.r10.s64 + 27064;
	// addi r3,r9,27052
	ctx.r3.s64 = ctx.r9.s64 + 27052;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83208568
	ctx.lr = 0x83209774;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83209774"))) PPC_WEAK_FUNC(sub_83209774);
PPC_FUNC_IMPL(__imp__sub_83209774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209778"))) PPC_WEAK_FUNC(sub_83209778);
PPC_FUNC_IMPL(__imp__sub_83209778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8320978c
	if (cr6.gt) goto loc_8320978C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8320978C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// lwz r9,432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lwz r3,428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832097A4"))) PPC_WEAK_FUNC(sub_832097A4);
PPC_FUNC_IMPL(__imp__sub_832097A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832097A8"))) PPC_WEAK_FUNC(sub_832097A8);
PPC_FUNC_IMPL(__imp__sub_832097A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// lwz r9,440(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// lwz r3,428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832097CC"))) PPC_WEAK_FUNC(sub_832097CC);
PPC_FUNC_IMPL(__imp__sub_832097CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832097D0"))) PPC_WEAK_FUNC(sub_832097D0);
PPC_FUNC_IMPL(__imp__sub_832097D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
loc_832097EC:
	// lhz r31,-14(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + -14);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83209854
	if (!cr6.gt) goto loc_83209854;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
loc_83209808:
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83209888
	if (cr6.gt) goto loc_83209888;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83209888
	if (!cr6.lt) goto loc_83209888;
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83209874
	if (cr6.eq) goto loc_83209874;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
loc_8320983C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83209854
	if (!cr6.lt) goto loc_83209854;
loc_83209844:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, xer);
	// blt cr6,0x83209808
	if (cr6.lt) goto loc_83209808;
loc_83209854:
	// lhz r10,-14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + -14);
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// beq cr6,0x832098a4
	if (cr6.eq) goto loc_832098A4;
	// lbz r10,-12(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83209890
	if (cr6.eq) goto loc_83209890;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x83209898
	goto loc_83209898;
loc_83209874:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// b 0x8320983c
	goto loc_8320983C;
loc_83209888:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83209844
	goto loc_83209844;
loc_83209890:
	// lhz r10,-24(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + -24);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
loc_83209898:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832098bc
	if (!cr6.lt) goto loc_832098BC;
loc_832098A4:
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blt cr6,0x832097ec
	if (cr6.lt) goto loc_832097EC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832098BC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832098C8"))) PPC_WEAK_FUNC(sub_832098C8);
PPC_FUNC_IMPL(__imp__sub_832098C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832098D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,25344
	ctx.r30.s64 = ctx.r11.s64 + 25344;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832098F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83208c88
	ctx.lr = 0x83209904;
	sub_83208C88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209910"))) PPC_WEAK_FUNC(sub_83209910);
PPC_FUNC_IMPL(__imp__sub_83209910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83209918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,25344
	ctx.r29.s64 = ctx.r11.s64 + 25344;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8320993C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83208d78
	ctx.lr = 0x83209954;
	sub_83208D78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209960"))) PPC_WEAK_FUNC(sub_83209960);
PPC_FUNC_IMPL(__imp__sub_83209960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r8,r11,25344
	ctx.r8.s64 = ctx.r11.s64 + 25344;
	// beq cr6,0x832099ac
	if (cr6.eq) goto loc_832099AC;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832099ac
	if (!cr6.gt) goto loc_832099AC;
loc_83209984:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x832099a4
	if (cr6.eq) goto loc_832099A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83209984
	if (cr6.lt) goto loc_83209984;
	// b 0x832099ac
	goto loc_832099AC;
loc_832099A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_832099AC:
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832099BC"))) PPC_WEAK_FUNC(sub_832099BC);
PPC_FUNC_IMPL(__imp__sub_832099BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832099C0"))) PPC_WEAK_FUNC(sub_832099C0);
PPC_FUNC_IMPL(__imp__sub_832099C0) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// beq cr6,0x83209a5c
	if (cr6.eq) goto loc_83209A5C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83209a94
	if (!cr6.eq) goto loc_83209A94;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// addi r31,r10,26752
	ctx.r31.s64 = ctx.r10.s64 + 26752;
	// lis r3,-31967
	ctx.r3.s64 = -2094989312;
	// lis r5,-31967
	ctx.r5.s64 = -2094989312;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r9,436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r8,440(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r6,428(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r4,-26424
	ctx.r10.s64 = ctx.r4.s64 + -26424;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r9,r3,-26352
	ctx.r9.s64 = ctx.r3.s64 + -26352;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// addi r8,r5,-26272
	ctx.r8.s64 = ctx.r5.s64 + -26272;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r8,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r8.u32);
	// bl 0x8325bcc0
	ctx.lr = 0x83209A48;
	sub_8325BCC0(ctx, base);
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
loc_83209A5C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83209a94
	if (cr6.eq) goto loc_83209A94;
	// lis r6,-31748
	ctx.r6.s64 = -2080636928;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r6,26752
	ctx.r5.s64 = ctx.r6.s64 + 26752;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 428, ctx.r9.u32);
	// stw r8,432(r5)
	PPC_STORE_U32(ctx.r5.u32 + 432, ctx.r8.u32);
	// stw r7,436(r5)
	PPC_STORE_U32(ctx.r5.u32 + 436, ctx.r7.u32);
	// stw r6,440(r5)
	PPC_STORE_U32(ctx.r5.u32 + 440, ctx.r6.u32);
loc_83209A94:
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

__attribute__((alias("__imp__sub_83209AA8"))) PPC_WEAK_FUNC(sub_83209AA8);
PPC_FUNC_IMPL(__imp__sub_83209AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// ble cr6,0x83209abc
	if (!cr6.gt) goto loc_83209ABC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832096b8
	sub_832096B8(ctx, base);
	return;
loc_83209ABC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83209af4
	if (!cr6.gt) goto loc_83209AF4;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83209ae0
	if (!cr6.lt) goto loc_83209AE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83209AE0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83209aec
	if (!cr6.lt) goto loc_83209AEC;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209AEC:
	// addic. r11,r11,-3
	xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83209afc
	if (!cr0.lt) goto loc_83209AFC;
loc_83209AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83209AFC:
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addi r11,r9,26752
	ctx.r11.s64 = ctx.r9.s64 + 26752;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// b 0x8325b4d8
	sub_8325B4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209B14"))) PPC_WEAK_FUNC(sub_83209B14);
PPC_FUNC_IMPL(__imp__sub_83209B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209B18"))) PPC_WEAK_FUNC(sub_83209B18);
PPC_FUNC_IMPL(__imp__sub_83209B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83209B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83209b3c
	if (!cr6.eq) goto loc_83209B3C;
loc_83209B30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83209B3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83209B44;
	sub_83296BA8(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r30,256
	cr6.compare<int32_t>(ctx.r30.s32, 256, xer);
	// ble cr6,0x83209b68
	if (!cr6.gt) goto loc_83209B68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832096b8
	ctx.lr = 0x83209B64;
	sub_832096B8(ctx, base);
	// b 0x83209bb8
	goto loc_83209BB8;
loc_83209B68:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83209b30
	if (!cr6.gt) goto loc_83209B30;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, xer);
	// bge cr6,0x83209b8c
	if (!cr6.lt) goto loc_83209B8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83209B8C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83209b98
	if (!cr6.lt) goto loc_83209B98;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209B98:
	// addic. r11,r11,-3
	xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83209b30
	if (cr0.lt) goto loc_83209B30;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addi r11,r9,26752
	ctx.r11.s64 = ctx.r9.s64 + 26752;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// bl 0x8325b4d8
	ctx.lr = 0x83209BB8;
	sub_8325B4D8(ctx, base);
loc_83209BB8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83209b30
	if (cr6.eq) goto loc_83209B30;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83209bec
	if (!cr6.gt) goto loc_83209BEC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// subf r9,r3,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83209BDC:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83209bdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83209BDC;
loc_83209BEC:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83209c14
	if (!cr6.lt) goto loc_83209C14;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83209c14
	if (cr0.eq) goto loc_83209C14;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83209C0C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83209c0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83209C0C;
loc_83209C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209C1C"))) PPC_WEAK_FUNC(sub_83209C1C);
PPC_FUNC_IMPL(__imp__sub_83209C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209C20"))) PPC_WEAK_FUNC(sub_83209C20);
PPC_FUNC_IMPL(__imp__sub_83209C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83209C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83209c44
	if (!cr6.eq) goto loc_83209C44;
loc_83209C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83209C44:
	// lbz r9,3(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83209c68
	if (cr6.eq) goto loc_83209C68;
loc_83209C58:
	// lbzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83209c58
	if (!cr6.eq) goto loc_83209C58;
loc_83209C68:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(ctx.r31.s32, 256, xer);
	// ble cr6,0x83209ce4
	if (!cr6.gt) goto loc_83209CE4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x83209ca0
	if (cr6.gt) goto loc_83209CA0;
	// bge cr6,0x83209c38
	if (!cr6.lt) goto loc_83209C38;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,27096
	ctx.r4.s64 = ctx.r11.s64 + 27096;
	// addi r3,r10,27052
	ctx.r3.s64 = ctx.r10.s64 + 27052;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83208568
	ctx.lr = 0x83209CA0;
	sub_83208568(ctx, base);
loc_83209CA0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// lwz r9,432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lwz r3,428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83209CBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83209d3c
	if (!cr6.eq) goto loc_83209D3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,27088
	ctx.r5.s64 = ctx.r11.s64 + 27088;
	// addi r4,r10,27064
	ctx.r4.s64 = ctx.r10.s64 + 27064;
	// addi r3,r9,27052
	ctx.r3.s64 = ctx.r9.s64 + 27052;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83208568
	ctx.lr = 0x83209CE4;
	sub_83208568(ctx, base);
loc_83209CE4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83209c38
	if (!cr6.gt) goto loc_83209C38;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// bge cr6,0x83209d08
	if (!cr6.lt) goto loc_83209D08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83209D08:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83209d14
	if (!cr6.lt) goto loc_83209D14;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209D14:
	// addic. r11,r11,-3
	xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x83209c38
	if (cr0.lt) goto loc_83209C38;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addi r11,r9,26752
	ctx.r11.s64 = ctx.r9.s64 + 26752;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// bl 0x8325b4d8
	ctx.lr = 0x83209D34;
	sub_8325B4D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83209c38
	if (cr6.eq) goto loc_83209C38;
loc_83209D3C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83209d60
	if (!cr6.gt) goto loc_83209D60;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_83209D50:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83209d50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83209D50;
loc_83209D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83209D68"))) PPC_WEAK_FUNC(sub_83209D68);
PPC_FUNC_IMPL(__imp__sub_83209D68) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83209ddc
	if (cr6.eq) goto loc_83209DDC;
	// bl 0x832097d0
	ctx.lr = 0x83209D8C;
	sub_832097D0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// bge cr6,0x83209da4
	if (!cr6.lt) goto loc_83209DA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83209dbc
	goto loc_83209DBC;
loc_83209DA4:
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// dcbt r11,r31
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8325b658
	ctx.lr = 0x83209DB8;
	sub_8325B658(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_83209DBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83209ddc
	if (!cr6.eq) goto loc_83209DDC;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83209DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83209DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83209DF4"))) PPC_WEAK_FUNC(sub_83209DF4);
PPC_FUNC_IMPL(__imp__sub_83209DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83209DF8"))) PPC_WEAK_FUNC(sub_83209DF8);
PPC_FUNC_IMPL(__imp__sub_83209DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83209E00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83209e30
	if (!cr6.lt) goto loc_83209E30;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,27140
	ctx.r4.s64 = ctx.r11.s64 + 27140;
	// addi r3,r10,27052
	ctx.r3.s64 = ctx.r10.s64 + 27052;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x83208568
	ctx.lr = 0x83209E30;
	sub_83208568(ctx, base);
loc_83209E30:
	// bne cr6,0x83209e50
	if (!cr6.eq) goto loc_83209E50;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83209e44
	if (cr6.eq) goto loc_83209E44;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x83209E44;
	sub_83209D68(ctx, base);
loc_83209E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83209E48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83209E50:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83209ebc
	if (!cr6.eq) goto loc_83209EBC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83209e98
	if (!cr6.gt) goto loc_83209E98;
	// cmpwi cr6,r25,256
	cr6.compare<int32_t>(ctx.r25.s32, 256, xer);
	// bgt cr6,0x83209e98
	if (cr6.gt) goto loc_83209E98;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r9,r25
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, xer);
	// bge cr6,0x83209e84
	if (!cr6.lt) goto loc_83209E84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83209E84:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83209e90
	if (!cr6.lt) goto loc_83209E90;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209E90:
	// addic. r11,r11,-3
	xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83209ea0
	if (!cr0.lt) goto loc_83209EA0;
loc_83209E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8320a014
	goto loc_8320A014;
loc_83209EA0:
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addi r11,r9,26752
	ctx.r11.s64 = ctx.r9.s64 + 26752;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// bl 0x8325b4d8
	ctx.lr = 0x83209EB8;
	sub_8325B4D8(ctx, base);
	// b 0x8320a014
	goto loc_8320A014;
loc_83209EBC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x83209ef4
	if (cr6.gt) goto loc_83209EF4;
	// bl 0x832097d0
	ctx.lr = 0x83209ECC;
	sub_832097D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8320a01c
	if (cr6.lt) goto loc_8320A01C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8325b658
	ctx.lr = 0x83209EF0;
	sub_8325B658(ctx, base);
	// b 0x8320a01c
	goto loc_8320A01C;
loc_83209EF4:
	// bl 0x832097d0
	ctx.lr = 0x83209EF8;
	sub_832097D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8320a01c
	if (cr6.lt) goto loc_8320A01C;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r25,256
	cr6.compare<int32_t>(ctx.r25.s32, 256, xer);
	// ble cr6,0x83209f18
	if (!cr6.gt) goto loc_83209F18;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x83209f40
	goto loc_83209F40;
loc_83209F18:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bge cr6,0x83209f30
	if (!cr6.lt) goto loc_83209F30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83209F30:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83209f3c
	if (!cr6.lt) goto loc_83209F3C;
	// li r11,3
	ctx.r11.s64 = 3;
loc_83209F3C:
	// addi r29,r11,-3
	ctx.r29.s64 = ctx.r11.s64 + -3;
loc_83209F40:
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// bne cr6,0x83209f50
	if (!cr6.eq) goto loc_83209F50;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8320a014
	goto loc_8320A014;
loc_83209F50:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// blt cr6,0x83209fd4
	if (cr6.lt) goto loc_83209FD4;
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// dcbt r10,r30
	// bl 0x8325b4d8
	ctx.lr = 0x83209F70;
	sub_8325B4D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// bge cr6,0x83209f80
	if (!cr6.lt) goto loc_83209F80;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83209F80:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83209f94
	if (!cr6.eq) goto loc_83209F94;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x83209ffc
	goto loc_83209FFC;
loc_83209F94:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83209ffc
	if (!cr6.gt) goto loc_83209FFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
loc_83209FB8:
	// ld r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// stdu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r7,r11,r9
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83209fb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83209FB8;
	// b 0x83209ffc
	goto loc_83209FFC;
loc_83209FD4:
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83209FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// slw r5,r26,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83209FFC;
	sub_83293EC8(ctx, base);
loc_83209FFC:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// dcbt r11,r30
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8325b658
	ctx.lr = 0x8320A010;
	sub_8325B658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320A014:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320a028
	if (!cr6.eq) goto loc_8320A028;
loc_8320A01C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832096b8
	ctx.lr = 0x8320A028;
	sub_832096B8(ctx, base);
loc_8320A028:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83209e48
	if (!cr6.gt) goto loc_83209E48;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83209e48
	if (!cr6.eq) goto loc_83209E48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r11,27132
	ctx.r5.s64 = ctx.r11.s64 + 27132;
	// addi r4,r10,27064
	ctx.r4.s64 = ctx.r10.s64 + 27064;
	// addi r3,r9,27052
	ctx.r3.s64 = ctx.r9.s64 + 27052;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x83208568
	ctx.lr = 0x8320A058;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8320A058"))) PPC_WEAK_FUNC(sub_8320A058);
PPC_FUNC_IMPL(__imp__sub_8320A058) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// bge cr6,0x8320a088
	if (!cr6.lt) goto loc_8320A088;
loc_8320A07C:
	// addi r11,r11,30768
	ctx.r11.s64 = ctx.r11.s64 + 30768;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// b 0x8320a0ec
	goto loc_8320A0EC;
loc_8320A088:
	// cmpwi cr6,r5,83
	cr6.compare<int32_t>(ctx.r5.s32, 83, xer);
	// bge cr6,0x8320a07c
	if (!cr6.lt) goto loc_8320A07C;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,30768
	ctx.r30.s64 = ctx.r11.s64 + 30768;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x8320a0c4
	if (cr6.eq) goto loc_8320A0C4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// addi r3,r10,32164
	ctx.r3.s64 = ctx.r10.s64 + 32164;
	// bl 0x83298338
	ctx.lr = 0x8320A0BC;
	sub_83298338(ctx, base);
	// addi r3,r30,664
	ctx.r3.s64 = ctx.r30.s64 + 664;
	// b 0x8320a0ec
	goto loc_8320A0EC;
loc_8320A0C4:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x8320a0e8
	if (!cr6.eq) goto loc_8320A0E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,32120
	ctx.r4.s64 = ctx.r11.s64 + 32120;
	// addi r3,r10,32164
	ctx.r3.s64 = ctx.r10.s64 + 32164;
	// bl 0x83298338
	ctx.lr = 0x8320A0E8;
	sub_83298338(ctx, base);
loc_8320A0E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8320A0EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320A104"))) PPC_WEAK_FUNC(sub_8320A104);
PPC_FUNC_IMPL(__imp__sub_8320A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A108"))) PPC_WEAK_FUNC(sub_8320A108);
PPC_FUNC_IMPL(__imp__sub_8320A108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31440
	ctx.r9.s64 = ctx.r11.s64 + 31440;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_8320A118:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x8320a144
	if (cr6.eq) goto loc_8320A144;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r9,684
	ctx.r8.s64 = ctx.r9.s64 + 684;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8320a118
	if (cr6.lt) goto loc_8320A118;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,10524
	ctx.r3.s64 = ctx.r11.s64 + 10524;
	// blr 
	return;
loc_8320A144:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320A150"))) PPC_WEAK_FUNC(sub_8320A150);
PPC_FUNC_IMPL(__imp__sub_8320A150) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x83a759f8
	sub_83A759F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A16C"))) PPC_WEAK_FUNC(sub_8320A16C);
PPC_FUNC_IMPL(__imp__sub_8320A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A170"))) PPC_WEAK_FUNC(sub_8320A170);
PPC_FUNC_IMPL(__imp__sub_8320A170) {
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
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fe778
	ctx.lr = 0x8320A194;
	sub_831FE778(ctx, base);
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
	// bl 0x83a759f8
	ctx.lr = 0x8320A1AC;
	sub_83A759F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320A1C4"))) PPC_WEAK_FUNC(sub_8320A1C4);
PPC_FUNC_IMPL(__imp__sub_8320A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A1C8"))) PPC_WEAK_FUNC(sub_8320A1C8);
PPC_FUNC_IMPL(__imp__sub_8320A1C8) {
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
	// bl 0x83234de8
	ctx.lr = 0x8320A1DC;
	sub_83234DE8(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,127
	ctx.r11.s64 = 127;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r10,261
	ctx.r10.s64 = 261;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A204;
	sub_8321C750(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// bl 0x83215368
	ctx.lr = 0x8320A218;
	sub_83215368(ctx, base);
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

__attribute__((alias("__imp__sub_8320A230"))) PPC_WEAK_FUNC(sub_8320A230);
PPC_FUNC_IMPL(__imp__sub_8320A230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320A238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320a250
	if (cr6.eq) goto loc_8320A250;
	// bl 0x8320e738
	ctx.lr = 0x8320A250;
	sub_8320E738(ctx, base);
loc_8320A250:
	// bl 0x83234de8
	ctx.lr = 0x8320A254;
	sub_83234DE8(ctx, base);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,261
	ctx.r11.s64 = 261;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// li r29,127
	ctx.r29.s64 = 127;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r29.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A27C;
	sub_8321C750(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x83215368
	ctx.lr = 0x8320A290;
	sub_83215368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832018e0
	ctx.lr = 0x8320A298;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ori r4,r6,8400
	ctx.r4.u64 = ctx.r6.u64 | 8400;
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r4,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8320a2d0
	if (cr6.eq) goto loc_8320A2D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320A2D0;
	sub_83222030(ctx, base);
loc_8320A2D0:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A2E8"))) PPC_WEAK_FUNC(sub_8320A2E8);
PPC_FUNC_IMPL(__imp__sub_8320A2E8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1102
	cr6.compare<uint32_t>(ctx.r11.u32, 1102, xer);
	// beq cr6,0x8320a334
	if (cr6.eq) goto loc_8320A334;
	// cmplwi cr6,r11,1103
	cr6.compare<uint32_t>(ctx.r11.u32, 1103, xer);
	// beq cr6,0x8320a31c
	if (cr6.eq) goto loc_8320A31C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320A31C:
	// bl 0x8321ef98
	ctx.lr = 0x8320A320;
	sub_8321EF98(ctx, base);
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
loc_8320A334:
	// bl 0x8321fb10
	ctx.lr = 0x8320A338;
	sub_8321FB10(ctx, base);
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

__attribute__((alias("__imp__sub_8320A34C"))) PPC_WEAK_FUNC(sub_8320A34C);
PPC_FUNC_IMPL(__imp__sub_8320A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A350"))) PPC_WEAK_FUNC(sub_8320A350);
PPC_FUNC_IMPL(__imp__sub_8320A350) {
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
	// bl 0x83234de8
	ctx.lr = 0x8320A364;
	sub_83234DE8(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,128
	ctx.r11.s64 = 128;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r10,262
	ctx.r10.s64 = 262;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A38C;
	sub_8321C750(ctx, base);
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

__attribute__((alias("__imp__sub_8320A3A4"))) PPC_WEAK_FUNC(sub_8320A3A4);
PPC_FUNC_IMPL(__imp__sub_8320A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A3A8"))) PPC_WEAK_FUNC(sub_8320A3A8);
PPC_FUNC_IMPL(__imp__sub_8320A3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320A3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320a3c8
	if (cr6.eq) goto loc_8320A3C8;
	// bl 0x8320e738
	ctx.lr = 0x8320A3C8;
	sub_8320E738(ctx, base);
loc_8320A3C8:
	// bl 0x83234de8
	ctx.lr = 0x8320A3CC;
	sub_83234DE8(ctx, base);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,262
	ctx.r11.s64 = 262;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// li r29,128
	ctx.r29.s64 = 128;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r29.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A3F4;
	sub_8321C750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832018e0
	ctx.lr = 0x8320A3FC;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,8400
	ctx.r6.u64 = ctx.r8.u64 | 8400;
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sraw r11,r6,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320a434
	if (cr6.eq) goto loc_8320A434;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320A434;
	sub_83222030(ctx, base);
loc_8320A434:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A44C"))) PPC_WEAK_FUNC(sub_8320A44C);
PPC_FUNC_IMPL(__imp__sub_8320A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A450"))) PPC_WEAK_FUNC(sub_8320A450);
PPC_FUNC_IMPL(__imp__sub_8320A450) {
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
	// bl 0x83234de8
	ctx.lr = 0x8320A464;
	sub_83234DE8(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,130
	ctx.r11.s64 = 130;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r10,264
	ctx.r10.s64 = 264;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A48C;
	sub_8321C750(ctx, base);
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

__attribute__((alias("__imp__sub_8320A4A4"))) PPC_WEAK_FUNC(sub_8320A4A4);
PPC_FUNC_IMPL(__imp__sub_8320A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A4A8"))) PPC_WEAK_FUNC(sub_8320A4A8);
PPC_FUNC_IMPL(__imp__sub_8320A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320A4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,12288
	ctx.r10.s64 = 12288;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r7
	ctx.r8.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8320a534
	if (!cr6.eq) goto loc_8320A534;
	// li r4,140
	ctx.r4.s64 = 140;
	// bl 0x83221378
	ctx.lr = 0x8320A514;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320a550
	if (!cr6.eq) goto loc_8320A550;
	// li r6,140
	ctx.r6.s64 = 140;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,1884
	ctx.r5.s64 = 1884;
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d628
	ctx.lr = 0x8320A534;
	sub_8320D628(ctx, base);
loc_8320A534:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b710
	ctx.lr = 0x8320A540;
	sub_8322B710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e7d0
	ctx.lr = 0x8320A548;
	sub_8322E7D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320A550:
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320a580
	if (cr6.eq) goto loc_8320A580;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83259198
	ctx.lr = 0x8320A568;
	sub_83259198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320a5a0
	if (cr6.eq) goto loc_8320A5A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83262418
	ctx.lr = 0x8320A57C;
	sub_83262418(ctx, base);
	// b 0x8320a59c
	goto loc_8320A59C;
loc_8320A580:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83261d70
	ctx.lr = 0x8320A588;
	sub_83261D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320a5a0
	if (cr6.eq) goto loc_8320A5A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832600e8
	ctx.lr = 0x8320A59C;
	sub_832600E8(ctx, base);
loc_8320A59C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8320A5A0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320a5cc
	if (cr6.eq) goto loc_8320A5CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x8320A5C4;
	sub_8322DFB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320A5CC:
	// li r5,1884
	ctx.r5.s64 = 1884;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d778
	ctx.lr = 0x8320A5E0;
	sub_8320D778(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A5E8"))) PPC_WEAK_FUNC(sub_8320A5E8);
PPC_FUNC_IMPL(__imp__sub_8320A5E8) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8320a618
	if (cr6.lt) goto loc_8320A618;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x8320a620
	if (!cr6.gt) goto loc_8320A620;
loc_8320A618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8320A620;
	sub_8320E738(ctx, base);
loc_8320A620:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320a6c8
	if (!cr6.gt) goto loc_8320A6C8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1884
	ctx.r8.s64 = 1884;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,12288
	ctx.r7.s64 = 12288;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// srw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// cntlzw r3,r9
	ctx.r3.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// and r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8320a6c8
	if (!cr6.eq) goto loc_8320A6C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320a4a8
	ctx.lr = 0x8320A6C8;
	sub_8320A4A8(ctx, base);
loc_8320A6C8:
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

__attribute__((alias("__imp__sub_8320A6E0"))) PPC_WEAK_FUNC(sub_8320A6E0);
PPC_FUNC_IMPL(__imp__sub_8320A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320A6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83234de8
	ctx.lr = 0x8320A6F4;
	sub_83234DE8(ctx, base);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,264
	ctx.r11.s64 = 264;
	// li r28,130
	ctx.r28.s64 = 130;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r28,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r28.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8321c750
	ctx.lr = 0x8320A71C;
	sub_8321C750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832018e0
	ctx.lr = 0x8320A724;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,8400
	ctx.r6.u64 = ctx.r8.u64 | 8400;
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sraw r11,r6,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320a75c
	if (cr6.eq) goto loc_8320A75C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320A75C;
	sub_83222030(ctx, base);
loc_8320A75C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320a5e8
	ctx.lr = 0x8320A778;
	sub_8320A5E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A780"))) PPC_WEAK_FUNC(sub_8320A780);
PPC_FUNC_IMPL(__imp__sub_8320A780) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1884
	cr6.compare<uint32_t>(ctx.r11.u32, 1884, xer);
	// beq cr6,0x8320a7d8
	if (cr6.eq) goto loc_8320A7D8;
	// cmplwi cr6,r11,1987
	cr6.compare<uint32_t>(ctx.r11.u32, 1987, xer);
	// beq cr6,0x8320a7b4
	if (cr6.eq) goto loc_8320A7B4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320A7B4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322dfb0
	ctx.lr = 0x8320A7C4;
	sub_8322DFB0(ctx, base);
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
loc_8320A7D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8320a4a8
	ctx.lr = 0x8320A7E0;
	sub_8320A4A8(ctx, base);
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

__attribute__((alias("__imp__sub_8320A7F4"))) PPC_WEAK_FUNC(sub_8320A7F4);
PPC_FUNC_IMPL(__imp__sub_8320A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A7F8"))) PPC_WEAK_FUNC(sub_8320A7F8);
PPC_FUNC_IMPL(__imp__sub_8320A7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320A800;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1884
	ctx.r26.s64 = 1884;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r26.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// bl 0x8322ab20
	ctx.lr = 0x8320A82C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320a84c
	if (cr6.eq) goto loc_8320A84C;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832240b8
	ctx.lr = 0x8320A844;
	sub_832240B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8320A84C:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320a904
	if (cr6.eq) goto loc_8320A904;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,21,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FE;
	// cmplwi cr6,r8,262
	cr6.compare<uint32_t>(ctx.r8.u32, 262, xer);
	// bne cr6,0x8320a904
	if (!cr6.eq) goto loc_8320A904;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r8,0,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83262690
	ctx.lr = 0x8320A89C;
	sub_83262690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832390b0
	ctx.lr = 0x8320A8AC;
	sub_832390B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320a8c0
	if (cr6.eq) goto loc_8320A8C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83261cf8
	ctx.lr = 0x8320A8C0;
	sub_83261CF8(ctx, base);
loc_8320A8C0:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// sth r26,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r26.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r28,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322c4b8
	ctx.lr = 0x8320A8E4;
	sub_8322C4B8(ctx, base);
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8320A8F4;
	sub_83266DD0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8320A904:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320a918
	if (!cr6.eq) goto loc_8320A918;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83213150
	ctx.lr = 0x8320A918;
	sub_83213150(ctx, base);
loc_8320A918:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320A920"))) PPC_WEAK_FUNC(sub_8320A920);
PPC_FUNC_IMPL(__imp__sub_8320A920) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1884
	cr6.compare<uint32_t>(ctx.r11.u32, 1884, xer);
	// beq cr6,0x8320a9ac
	if (cr6.eq) goto loc_8320A9AC;
	// cmplwi cr6,r11,1987
	cr6.compare<uint32_t>(ctx.r11.u32, 1987, xer);
	// beq cr6,0x8320a95c
	if (cr6.eq) goto loc_8320A95C;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_8320A95C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,1987
	ctx.r10.s64 = 1987;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x8322ab20
	ctx.lr = 0x8320A980;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320a99c
	if (cr6.eq) goto loc_8320A99C;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832240b8
	ctx.lr = 0x8320A998;
	sub_832240B8(ctx, base);
	// b 0x8320a9b4
	goto loc_8320A9B4;
loc_8320A99C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8320A9A8;
	sub_8320CF60(ctx, base);
	// b 0x8320a9b4
	goto loc_8320A9B4;
loc_8320A9AC:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8320a7f8
	ctx.lr = 0x8320A9B4;
	sub_8320A7F8(ctx, base);
loc_8320A9B4:
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

__attribute__((alias("__imp__sub_8320A9CC"))) PPC_WEAK_FUNC(sub_8320A9CC);
PPC_FUNC_IMPL(__imp__sub_8320A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320A9D0"))) PPC_WEAK_FUNC(sub_8320A9D0);
PPC_FUNC_IMPL(__imp__sub_8320A9D0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x8320ab20
	if (cr6.gt) goto loc_8320AB20;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22012
	ctx.r12.s64 = ctx.r12.s64 + -22012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320AA70;
	case 1:
		goto loc_8320AB20;
	case 2:
		goto loc_8320AB20;
	case 3:
		goto loc_8320AAF0;
	case 4:
		goto loc_8320AAF0;
	case 5:
		goto loc_8320AB20;
	case 6:
		goto loc_8320AB20;
	case 7:
		goto loc_8320AA90;
	case 8:
		goto loc_8320AB20;
	case 9:
		goto loc_8320AB20;
	case 10:
		goto loc_8320AB20;
	case 11:
		goto loc_8320AB20;
	case 12:
		goto loc_8320AB20;
	case 13:
		goto loc_8320AB20;
	case 14:
		goto loc_8320AB20;
	case 15:
		goto loc_8320AB20;
	case 16:
		goto loc_8320AB20;
	case 17:
		goto loc_8320AB08;
	case 18:
		goto loc_8320AB08;
	case 19:
		goto loc_8320AB20;
	case 20:
		goto loc_8320AB20;
	case 21:
		goto loc_8320AB20;
	case 22:
		goto loc_8320AB20;
	case 23:
		goto loc_8320AB20;
	case 24:
		goto loc_8320AB20;
	case 25:
		goto loc_8320AAB0;
	case 26:
		goto loc_8320AAD0;
	default:
		return;
	}
	// lwz r25,-21904(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21904);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21776(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21776);
	// lwz r25,-21776(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21776);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21872(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21872);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21752(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21752);
	// lwz r25,-21752(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21752);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21728(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21728);
	// lwz r25,-21840(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21840);
	// lwz r25,-21808(0)
	ctx.r25.u64 = PPC_LOAD_U32(-21808);
loc_8320AA70:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8321bae8
	ctx.lr = 0x8320AA7C;
	sub_8321BAE8(ctx, base);
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
loc_8320AA90:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x8320AA9C;
	sub_8321BAE8(ctx, base);
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
loc_8320AAB0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8321bae8
	ctx.lr = 0x8320AABC;
	sub_8321BAE8(ctx, base);
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
loc_8320AAD0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x8320AADC;
	sub_8321BAE8(ctx, base);
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
loc_8320AAF0:
	// bl 0x8321bfe0
	ctx.lr = 0x8320AAF4;
	sub_8321BFE0(ctx, base);
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
loc_8320AB08:
	// bl 0x8321efd0
	ctx.lr = 0x8320AB0C;
	sub_8321EFD0(ctx, base);
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
loc_8320AB20:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320AB34"))) PPC_WEAK_FUNC(sub_8320AB34);
PPC_FUNC_IMPL(__imp__sub_8320AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320AB38"))) PPC_WEAK_FUNC(sub_8320AB38);
PPC_FUNC_IMPL(__imp__sub_8320AB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320ab74
	if (cr6.eq) goto loc_8320AB74;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8320AB50:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320ab64
	if (!cr6.eq) goto loc_8320AB64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8320AB64:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ab50
	if (!cr6.eq) goto loc_8320AB50;
	// blr 
	return;
loc_8320AB74:
	// b 0x832017b8
	sub_832017B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320AB78"))) PPC_WEAK_FUNC(sub_8320AB78);
PPC_FUNC_IMPL(__imp__sub_8320AB78) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320abd0
	if (cr6.eq) goto loc_8320ABD0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320abc8
	if (cr6.eq) goto loc_8320ABC8;
loc_8320ABA8:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320abbc
	if (!cr6.eq) goto loc_8320ABBC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8320ABBC:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320aba8
	if (!cr6.eq) goto loc_8320ABA8;
loc_8320ABC8:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8320abd8
	goto loc_8320ABD8;
loc_8320ABD0:
	// bl 0x832017b8
	ctx.lr = 0x8320ABD4;
	sub_832017B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320ABD8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320ac00
	if (cr6.eq) goto loc_8320AC00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320AC00;
	sub_83222030(ctx, base);
loc_8320AC00:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320AC24"))) PPC_WEAK_FUNC(sub_8320AC24);
PPC_FUNC_IMPL(__imp__sub_8320AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320AC28"))) PPC_WEAK_FUNC(sub_8320AC28);
PPC_FUNC_IMPL(__imp__sub_8320AC28) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ac70
	if (!cr6.eq) goto loc_8320AC70;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,32224
	ctx.r4.s64 = ctx.r11.s64 + 32224;
	// addi r3,r10,32212
	ctx.r3.s64 = ctx.r10.s64 + 32212;
	// bl 0x83208330
	ctx.lr = 0x8320AC5C;
	sub_83208330(ctx, base);
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
loc_8320AC70:
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320ac98
	if (cr6.eq) goto loc_8320AC98;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ac98
	if (cr6.eq) goto loc_8320AC98;
loc_8320AC88:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ac88
	if (!cr6.eq) goto loc_8320AC88;
loc_8320AC98:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r7,r11,24688
	ctx.r7.s64 = ctx.r11.s64 + 24688;
	// ori r6,r8,128
	ctx.r6.u64 = ctx.r8.u64 | 128;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320acc4
	if (cr6.eq) goto loc_8320ACC4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 524288;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8320ACC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320acdc
	if (!cr6.eq) goto loc_8320ACDC;
	// stw r31,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r31.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8320ace4
	goto loc_8320ACE4;
loc_8320ACDC:
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r31,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r31.u32);
loc_8320ACE4:
	// li r10,12289
	ctx.r10.s64 = 12289;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lhz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r8.u16);
	// bl 0x832141d0
	ctx.lr = 0x8320AD08;
	sub_832141D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83264948
	ctx.lr = 0x8320AD10;
	sub_83264948(ctx, base);
	// lhz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r5,82(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// bl 0x8322b100
	ctx.lr = 0x8320AD2C;
	sub_8322B100(ctx, base);
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

__attribute__((alias("__imp__sub_8320AD40"))) PPC_WEAK_FUNC(sub_8320AD40);
PPC_FUNC_IMPL(__imp__sub_8320AD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8320ad58
	if (cr6.eq) goto loc_8320AD58;
	// b 0x8320ac28
	sub_8320AC28(ctx, base);
	return;
loc_8320AD58:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83201850
	sub_83201850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320AD60"))) PPC_WEAK_FUNC(sub_8320AD60);
PPC_FUNC_IMPL(__imp__sub_8320AD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320ad70
	if (cr6.eq) goto loc_8320AD70;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x8320ad88
	goto loc_8320AD88;
loc_8320AD70:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ad88
	if (cr6.eq) goto loc_8320AD88;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
loc_8320AD88:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320adbc
	if (cr6.eq) goto loc_8320ADBC;
loc_8320AD94:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320adb0
	if (!cr6.eq) goto loc_8320ADB0;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8320ADB0:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ad94
	if (!cr6.eq) goto loc_8320AD94;
loc_8320ADBC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320ADC4"))) PPC_WEAK_FUNC(sub_8320ADC4);
PPC_FUNC_IMPL(__imp__sub_8320ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320ADC8"))) PPC_WEAK_FUNC(sub_8320ADC8);
PPC_FUNC_IMPL(__imp__sub_8320ADC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320ae1c
	if (cr6.eq) goto loc_8320AE1C;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8320ae1c
	if (cr6.lt) goto loc_8320AE1C;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
loc_8320ADE0:
	// lhz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8320ae10
	if (!cr6.eq) goto loc_8320AE10;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r8,r9,0,5,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r8,r8,0,29,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x8320ae10
	if (!cr6.eq) goto loc_8320AE10;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8320AE10:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ade0
	if (!cr6.eq) goto loc_8320ADE0;
loc_8320AE1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320AE24"))) PPC_WEAK_FUNC(sub_8320AE24);
PPC_FUNC_IMPL(__imp__sub_8320AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320AE28"))) PPC_WEAK_FUNC(sub_8320AE28);
PPC_FUNC_IMPL(__imp__sub_8320AE28) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320b078
	if (cr6.eq) goto loc_8320B078;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320b078
	if (cr6.eq) goto loc_8320B078;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// andc r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r11,r5,32
	xer.ca = ctx.r5.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r5.s64;
	// srawi r4,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// subfic r10,r4,4
	xer.ca = ctx.r4.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r4.s64;
	// bge cr6,0x8320aeb0
	if (!cr6.lt) goto loc_8320AEB0;
loc_8320AE84:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// andc r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r3,32
	xer.ca = ctx.r3.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r3.s64;
	// srawi r5,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x8320ae84
	if (cr6.lt) goto loc_8320AE84;
loc_8320AEB0:
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320aed0
	if (!cr6.eq) goto loc_8320AED0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_8320AED0:
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lis r8,1024
	ctx.r8.s64 = 67108864;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8320AEE8:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8320af6c
	if (!cr6.eq) goto loc_8320AF6C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r10,r10,0,29,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8320af6c
	if (!cr6.eq) goto loc_8320AF6C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320af6c
	if (!cr6.eq) goto loc_8320AF6C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320af6c
	if (cr6.eq) goto loc_8320AF6C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r7,r10,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8320af54
	if (!cr0.eq) goto loc_8320AF54;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8320AF34:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320af5c
	if (cr6.eq) goto loc_8320AF5C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8320af34
	if (cr0.eq) goto loc_8320AF34;
loc_8320AF54:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320af60
	goto loc_8320AF60;
loc_8320AF5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320AF60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320b07c
	if (cr6.eq) goto loc_8320B07C;
loc_8320AF6C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320aee8
	if (!cr6.eq) goto loc_8320AEE8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32280
	ctx.r4.s64 = ctx.r11.s64 + 32280;
	// bl 0x83296d78
	ctx.lr = 0x8320AF88;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320afc8
	if (!cr6.eq) goto loc_8320AFC8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320afc8
	if (cr6.eq) goto loc_8320AFC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8320AFA4:
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8320b07c
	if (cr6.eq) goto loc_8320B07C;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320afa4
	if (!cr6.eq) goto loc_8320AFA4;
loc_8320AFC8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296de8
	ctx.lr = 0x8320AFDC;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320b078
	if (!cr6.eq) goto loc_8320B078;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320b038
	if (cr6.eq) goto loc_8320B038;
loc_8320AFF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8320b078
	if (!cr6.lt) goto loc_8320B078;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bne cr6,0x8320aff8
	if (!cr6.eq) goto loc_8320AFF8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8320b078
	if (cr6.lt) goto loc_8320B078;
loc_8320B038:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8320B03C:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8320b06c
	if (!cr6.eq) goto loc_8320B06C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,0,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r9,r9,0,29,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320b06c
	if (!cr6.eq) goto loc_8320B06C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320b07c
	if (cr6.eq) goto loc_8320B07C;
loc_8320B06C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b03c
	if (!cr6.eq) goto loc_8320B03C;
loc_8320B078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320B07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320B094"))) PPC_WEAK_FUNC(sub_8320B094);
PPC_FUNC_IMPL(__imp__sub_8320B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B098"))) PPC_WEAK_FUNC(sub_8320B098);
PPC_FUNC_IMPL(__imp__sub_8320B098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b0a8
	if (!cr6.eq) goto loc_8320B0A8;
loc_8320B0A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8320B0A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320b0a0
	if (cr6.eq) goto loc_8320B0A0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x8320ae28
	sub_8320AE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B0B8"))) PPC_WEAK_FUNC(sub_8320B0B8);
PPC_FUNC_IMPL(__imp__sub_8320B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320b0ec
	if (cr6.eq) goto loc_8320B0EC;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8320b0d8
	if (cr6.lt) goto loc_8320B0D8;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8320adc8
	sub_8320ADC8(ctx, base);
	return;
loc_8320B0D8:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320b0ec
	if (cr6.eq) goto loc_8320B0EC;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x8320ae28
	sub_8320AE28(ctx, base);
	return;
loc_8320B0EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320B0F4"))) PPC_WEAK_FUNC(sub_8320B0F4);
PPC_FUNC_IMPL(__imp__sub_8320B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B0F8"))) PPC_WEAK_FUNC(sub_8320B0F8);
PPC_FUNC_IMPL(__imp__sub_8320B0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320b1c8
	if (cr6.eq) goto loc_8320B1C8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320b1c8
	if (cr6.eq) goto loc_8320B1C8;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320b1c8
	if (cr6.eq) goto loc_8320B1C8;
	// lis r6,1024
	ctx.r6.s64 = 67108864;
loc_8320B118:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320b1bc
	if (!cr6.eq) goto loc_8320B1BC;
	// rlwinm r11,r11,0,5,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r11,r11,0,29,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8320b1bc
	if (!cr6.eq) goto loc_8320B1BC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320b1bc
	if (!cr6.eq) goto loc_8320B1BC;
	// lwz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320b1bc
	if (cr6.eq) goto loc_8320B1BC;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320b1b0
	if (cr6.eq) goto loc_8320B1B0;
loc_8320B164:
	// lbzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x8320b174
	if (!cr6.eq) goto loc_8320B174;
	// li r9,95
	ctx.r9.s64 = 95;
loc_8320B174:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x8320b184
	if (!cr6.eq) goto loc_8320B184;
	// li r8,95
	ctx.r8.s64 = 95;
loc_8320B184:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8320b1a8
	if (!cr6.eq) goto loc_8320B1A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8320b164
	if (!cr6.eq) goto loc_8320B164;
loc_8320B1A8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8320b1bc
	if (!cr6.eq) goto loc_8320B1BC;
loc_8320B1B0:
	// lbzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8320B1BC:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b118
	if (!cr6.eq) goto loc_8320B118;
loc_8320B1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320B1D0"))) PPC_WEAK_FUNC(sub_8320B1D0);
PPC_FUNC_IMPL(__imp__sub_8320B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320B1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320b210
	if (cr6.eq) goto loc_8320B210;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b200
	if (!cr6.eq) goto loc_8320B200;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320b208
	goto loc_8320B208;
loc_8320B200:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320B208:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320B210;
	sub_8320D0F8(ctx, base);
loc_8320B210:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320b2e0
	if (cr6.lt) goto loc_8320B2E0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832264e0
	ctx.lr = 0x8320B25C;
	sub_832264E0(ctx, base);
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8320b288
	if (!cr6.eq) goto loc_8320B288;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8320B270;
	sub_832277E8(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r4,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r4.u16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8320b288
	if (!cr6.eq) goto loc_8320B288;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r4,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r4.u16);
loc_8320B288:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320b2b4
	if (!cr6.eq) goto loc_8320B2B4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b2ac
	if (!cr6.eq) goto loc_8320B2AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8320b2b8
	goto loc_8320B2B8;
loc_8320B2AC:
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x8320b2b8
	goto loc_8320B2B8;
loc_8320B2B4:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_8320B2B8:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8320b2cc
	if (cr6.lt) goto loc_8320B2CC;
	// bl 0x8320adc8
	ctx.lr = 0x8320B2C8;
	sub_8320ADC8(ctx, base);
	// b 0x8320b2d4
	goto loc_8320B2D4;
loc_8320B2CC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8320ae28
	ctx.lr = 0x8320B2D4;
	sub_8320AE28(ctx, base);
loc_8320B2D4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b2f0
	if (!cr6.eq) goto loc_8320B2F0;
loc_8320B2E0:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x8320B2E8;
	sub_83213150(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320B2F0:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320b320
	if (cr6.eq) goto loc_8320B320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320B320;
	sub_83222030(ctx, base);
loc_8320B320:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B338"))) PPC_WEAK_FUNC(sub_8320B338);
PPC_FUNC_IMPL(__imp__sub_8320B338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320B340;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b368
	if (!cr6.eq) goto loc_8320B368;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r29,r11,32288
	ctx.r29.s64 = ctx.r11.s64 + 32288;
	// b 0x8320b3ac
	goto loc_8320B3AC;
loc_8320B368:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83217740
	ctx.lr = 0x8320B388;
	sub_83217740(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b3a8
	if (!cr6.eq) goto loc_8320B3A8;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8320B39C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b3a8
	if (!cr6.eq) goto loc_8320B3A8;
	// bl 0x83227908
	ctx.lr = 0x8320B3A8;
	sub_83227908(ctx, base);
loc_8320B3A8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8320B3AC:
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320B3B4;
	sub_832277F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320b3c8
	if (!cr6.eq) goto loc_8320B3C8;
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x8320b3d0
	goto loc_8320B3D0;
loc_8320B3C8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
loc_8320B3D0:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320B3D8;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320B3E4;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,32212
	ctx.r9.s64 = ctx.r11.s64 + 32212;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r10,32296
	ctx.r4.s64 = ctx.r10.s64 + 32296;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320B410;
	sub_832085E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B418"))) PPC_WEAK_FUNC(sub_8320B418);
PPC_FUNC_IMPL(__imp__sub_8320B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320B420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320b45c
	if (cr6.eq) goto loc_8320B45C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b44c
	if (!cr6.eq) goto loc_8320B44C;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320b454
	goto loc_8320B454;
loc_8320B44C:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320B454:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320B45C;
	sub_8320D0F8(ctx, base);
loc_8320B45C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320b4e8
	if (cr6.lt) goto loc_8320B4E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320B490;
	sub_832133D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8320b4d0
	if (cr6.eq) goto loc_8320B4D0;
	// bl 0x8320ad60
	ctx.lr = 0x8320B4A4;
	sub_8320AD60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8320b4e8
	if (!cr6.lt) goto loc_8320B4E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320B4C8;
	sub_8320B338(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8320b4e8
	goto loc_8320B4E8;
loc_8320B4D0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320B4E8;
	sub_8320D4B0(ctx, base);
loc_8320B4E8:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320b514
	if (cr6.eq) goto loc_8320B514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320B514;
	sub_83222030(ctx, base);
loc_8320B514:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B528"))) PPC_WEAK_FUNC(sub_8320B528);
PPC_FUNC_IMPL(__imp__sub_8320B528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320B530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8320b574
	if (!cr6.eq) goto loc_8320B574;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320b574
	if (cr6.eq) goto loc_8320B574;
loc_8320B558:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b528
	ctx.lr = 0x8320B568;
	sub_8320B528(ctx, base);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320b558
	if (!cr6.eq) goto loc_8320B558;
loc_8320B574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B57C"))) PPC_WEAK_FUNC(sub_8320B57C);
PPC_FUNC_IMPL(__imp__sub_8320B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B580"))) PPC_WEAK_FUNC(sub_8320B580);
PPC_FUNC_IMPL(__imp__sub_8320B580) {
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
	// beq cr6,0x8320b67c
	if (cr6.eq) goto loc_8320B67C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320b5bc
	if (cr6.eq) goto loc_8320B5BC;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// b 0x8320b5e4
	goto loc_8320B5E4;
loc_8320B5BC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320b5d0
	if (cr6.eq) goto loc_8320B5D0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x8320b5e4
	goto loc_8320B5E4;
loc_8320B5D0:
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b5e4
	if (!cr6.eq) goto loc_8320B5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201530
	ctx.lr = 0x8320B5E4;
	sub_83201530(ctx, base);
loc_8320B5E4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320b5f8
	if (cr6.eq) goto loc_8320B5F8;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8320B5F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320b648
	if (cr6.eq) goto loc_8320B648;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x8320b648
	if (!cr6.eq) goto loc_8320B648;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// beq cr6,0x8320b648
	if (cr6.eq) goto loc_8320B648;
loc_8320B62C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8320b528
	ctx.lr = 0x8320B63C;
	sub_8320B528(ctx, base);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320b62c
	if (!cr6.eq) goto loc_8320B62C;
loc_8320B648:
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// li r9,-100
	ctx.r9.s64 = -100;
	// lhz r8,82(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// sth r9,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r9.u16);
	// lhz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// bl 0x8322b100
	ctx.lr = 0x8320B67C;
	sub_8322B100(ctx, base);
loc_8320B67C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320B694"))) PPC_WEAK_FUNC(sub_8320B694);
PPC_FUNC_IMPL(__imp__sub_8320B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B698"))) PPC_WEAK_FUNC(sub_8320B698);
PPC_FUNC_IMPL(__imp__sub_8320B698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320B6A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320b70c
	if (!cr6.gt) goto loc_8320B70C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,12
	ctx.r27.s64 = 12;
loc_8320B6C8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x8320b6f4
	if (!cr6.eq) goto loc_8320B6F4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x8320b6f4
	if (!cr6.eq) goto loc_8320B6F4;
	// sth r27,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r27.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832356e0
	ctx.lr = 0x8320B6F4;
	sub_832356E0(ctx, base);
loc_8320B6F4:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8320b6c8
	if (cr6.lt) goto loc_8320B6C8;
loc_8320B70C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320B714"))) PPC_WEAK_FUNC(sub_8320B714);
PPC_FUNC_IMPL(__imp__sub_8320B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320B718"))) PPC_WEAK_FUNC(sub_8320B718);
PPC_FUNC_IMPL(__imp__sub_8320B718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320B720;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320b75c
	if (cr6.eq) goto loc_8320B75C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b74c
	if (!cr6.eq) goto loc_8320B74C;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320b754
	goto loc_8320B754;
loc_8320B74C:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320B754:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320B75C;
	sub_8320D0F8(ctx, base);
loc_8320B75C:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320ba60
	if (cr6.lt) goto loc_8320BA60;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320B790;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320b7c4
	if (!cr6.eq) goto loc_8320B7C4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320B7B8;
	sub_8320D4B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320B7C4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8320b81c
	if (!cr6.eq) goto loc_8320B81C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320b7e0
	if (!cr6.eq) goto loc_8320B7E0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r5,r11,32340
	ctx.r5.s64 = ctx.r11.s64 + 32340;
	// b 0x8320b7ec
	goto loc_8320B7EC;
loc_8320B7E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832260e8
	ctx.lr = 0x8320B7E8;
	sub_832260E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8320B7EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r7,r11,32332
	ctx.r7.s64 = ctx.r11.s64 + 32332;
	// addi r6,r10,32368
	ctx.r6.s64 = ctx.r10.s64 + 32368;
	// addi r4,r9,32348
	ctx.r4.s64 = ctx.r9.s64 + 32348;
	// addi r3,r8,32212
	ctx.r3.s64 = ctx.r8.s64 + 32212;
	// bl 0x832085e8
	ctx.lr = 0x8320B810;
	sub_832085E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320B81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832169a8
	ctx.lr = 0x8320B824;
	sub_832169A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b86c
	if (!cr6.eq) goto loc_8320B86C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x8320B844;
	sub_83266AF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8320b858
	if (!cr6.eq) goto loc_8320B858;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320b870
	goto loc_8320B870;
loc_8320B858:
	// cmpwi cr6,r29,-1000
	cr6.compare<int32_t>(ctx.r29.s32, -1000, xer);
	// bgt cr6,0x8320b86c
	if (cr6.gt) goto loc_8320B86C;
	// cmpwi cr6,r29,-3000
	cr6.compare<int32_t>(ctx.r29.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320b870
	if (cr6.gt) goto loc_8320B870;
loc_8320B86C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320B870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b8a8
	if (!cr6.eq) goto loc_8320B8A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8320B884;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320b8a8
	if (cr6.eq) goto loc_8320B8A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320B8A4;
	sub_83266A90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8320B8A8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b91c
	if (!cr6.eq) goto loc_8320B91C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// blt cr6,0x8320b91c
	if (cr6.lt) goto loc_8320B91C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320b8d4
	if (cr6.eq) goto loc_8320B8D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b698
	ctx.lr = 0x8320B8D4;
	sub_8320B698(ctx, base);
loc_8320B8D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8320b904
	if (cr6.eq) goto loc_8320B904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ac28
	ctx.lr = 0x8320B8F4;
	sub_8320AC28(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x8320b964
	goto loc_8320B964;
loc_8320B904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201850
	ctx.lr = 0x8320B90C;
	sub_83201850(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x8320b964
	goto loc_8320B964;
loc_8320B91C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320B924;
	sub_8320B580(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320b938
	if (cr6.eq) goto loc_8320B938;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b698
	ctx.lr = 0x8320B938;
	sub_8320B698(ctx, base);
loc_8320B938:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8320b95c
	if (cr6.eq) goto loc_8320B95C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ac28
	ctx.lr = 0x8320B958;
	sub_8320AC28(ctx, base);
	// b 0x8320b964
	goto loc_8320B964;
loc_8320B95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201850
	ctx.lr = 0x8320B964;
	sub_83201850(ctx, base);
loc_8320B964:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r29,-17
	cr6.compare<int32_t>(ctx.r29.s32, -17, xer);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x8320b980
	if (!cr6.eq) goto loc_8320B980;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320b998
	goto loc_8320B998;
loc_8320B980:
	// cmpwi cr6,r29,-1000
	cr6.compare<int32_t>(ctx.r29.s32, -1000, xer);
	// bgt cr6,0x8320b994
	if (cr6.gt) goto loc_8320B994;
	// cmpwi cr6,r29,-3000
	cr6.compare<int32_t>(ctx.r29.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320b998
	if (cr6.gt) goto loc_8320B998;
loc_8320B994:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320B998:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320b9bc
	if (!cr6.eq) goto loc_8320B9BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x8320B9B8;
	sub_83266AF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8320B9BC:
	// cmpwi cr6,r29,-17
	cr6.compare<int32_t>(ctx.r29.s32, -17, xer);
	// bne cr6,0x8320b9cc
	if (!cr6.eq) goto loc_8320B9CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320b9e4
	goto loc_8320B9E4;
loc_8320B9CC:
	// cmpwi cr6,r29,-1000
	cr6.compare<int32_t>(ctx.r29.s32, -1000, xer);
	// bgt cr6,0x8320b9e0
	if (cr6.gt) goto loc_8320B9E0;
	// cmpwi cr6,r29,-3000
	cr6.compare<int32_t>(ctx.r29.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320b9e4
	if (cr6.gt) goto loc_8320B9E4;
loc_8320B9E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320B9E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ba1c
	if (!cr6.eq) goto loc_8320BA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8320B9F8;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ba1c
	if (cr6.eq) goto loc_8320BA1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320BA18;
	sub_83266A90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8320BA1C:
	// cmpwi cr6,r29,-17
	cr6.compare<int32_t>(ctx.r29.s32, -17, xer);
	// bne cr6,0x8320ba2c
	if (!cr6.eq) goto loc_8320BA2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320ba44
	goto loc_8320BA44;
loc_8320BA2C:
	// cmpwi cr6,r29,-1000
	cr6.compare<int32_t>(ctx.r29.s32, -1000, xer);
	// bgt cr6,0x8320ba40
	if (cr6.gt) goto loc_8320BA40;
	// cmpwi cr6,r29,-3000
	cr6.compare<int32_t>(ctx.r29.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320ba44
	if (cr6.gt) goto loc_8320BA44;
loc_8320BA40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320BA44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ba60
	if (!cr6.eq) goto loc_8320BA60;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832240b8
	ctx.lr = 0x8320BA60;
	sub_832240B8(ctx, base);
loc_8320BA60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BA6C"))) PPC_WEAK_FUNC(sub_8320BA6C);
PPC_FUNC_IMPL(__imp__sub_8320BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BA70"))) PPC_WEAK_FUNC(sub_8320BA70);
PPC_FUNC_IMPL(__imp__sub_8320BA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bac4
	if (cr6.eq) goto loc_8320BAC4;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8320bab8
	if (cr6.lt) goto loc_8320BAB8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320bab8
	if (cr6.eq) goto loc_8320BAB8;
loc_8320BA90:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320baac
	if (!cr6.eq) goto loc_8320BAAC;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x8320babc
	if (cr6.eq) goto loc_8320BABC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8320BAAC:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ba90
	if (!cr6.eq) goto loc_8320BA90;
loc_8320BAB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320BABC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8320BAC4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320badc
	if (cr6.eq) goto loc_8320BADC;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
loc_8320BADC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8320bb1c
	if (cr6.lt) goto loc_8320BB1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320bb1c
	if (cr6.eq) goto loc_8320BB1C;
loc_8320BAF4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320bb10
	if (!cr6.eq) goto loc_8320BB10;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8320BB10:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320baf4
	if (!cr6.eq) goto loc_8320BAF4;
loc_8320BB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320BB24"))) PPC_WEAK_FUNC(sub_8320BB24);
PPC_FUNC_IMPL(__imp__sub_8320BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BB28"))) PPC_WEAK_FUNC(sub_8320BB28);
PPC_FUNC_IMPL(__imp__sub_8320BB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320BB30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320bb68
	if (cr6.eq) goto loc_8320BB68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320bb58
	if (!cr6.eq) goto loc_8320BB58;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320bb60
	goto loc_8320BB60;
loc_8320BB58:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320BB60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320BB68;
	sub_8320D0F8(ctx, base);
loc_8320BB68:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320bc44
	if (cr6.lt) goto loc_8320BC44;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221558
	ctx.lr = 0x8320BB98;
	sub_83221558(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320bc28
	if (cr6.eq) goto loc_8320BC28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8320BBAC;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320ba70
	ctx.lr = 0x8320BBB8;
	sub_8320BA70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bc0c
	if (cr6.eq) goto loc_8320BC0C;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320bbf4
	if (cr6.eq) goto loc_8320BBF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320BBF4;
	sub_83222030(ctx, base);
loc_8320BBF4:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320BC0C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// bl 0x8320d548
	ctx.lr = 0x8320BC24;
	sub_8320D548(ctx, base);
	// b 0x8320bc44
	goto loc_8320BC44;
loc_8320BC28:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r6,42
	ctx.r6.s64 = 42;
	// bl 0x8320d428
	ctx.lr = 0x8320BC44;
	sub_8320D428(ctx, base);
loc_8320BC44:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320bc70
	if (cr6.eq) goto loc_8320BC70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320BC70;
	sub_83222030(ctx, base);
loc_8320BC70:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BC8C"))) PPC_WEAK_FUNC(sub_8320BC8C);
PPC_FUNC_IMPL(__imp__sub_8320BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BC90"))) PPC_WEAK_FUNC(sub_8320BC90);
PPC_FUNC_IMPL(__imp__sub_8320BC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320BC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320bcd4
	if (cr6.eq) goto loc_8320BCD4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320bcc4
	if (!cr6.eq) goto loc_8320BCC4;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320bccc
	goto loc_8320BCCC;
loc_8320BCC4:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320BCCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320BCD4;
	sub_8320D0F8(ctx, base);
loc_8320BCD4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320bd38
	if (cr6.lt) goto loc_8320BD38;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320BD08;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bd44
	if (cr6.eq) goto loc_8320BD44;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x8320bd6c
	if (cr6.eq) goto loc_8320BD6C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320BD38;
	sub_8320B338(ctx, base);
loc_8320BD38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320BD44:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320BD60;
	sub_8320D4B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320BD6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x8320BD80;
	sub_83266AF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8320bd94
	if (!cr6.eq) goto loc_8320BD94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320bdac
	goto loc_8320BDAC;
loc_8320BD94:
	// cmpwi cr6,r28,-1000
	cr6.compare<int32_t>(ctx.r28.s32, -1000, xer);
	// bgt cr6,0x8320bda8
	if (cr6.gt) goto loc_8320BDA8;
	// cmpwi cr6,r28,-3000
	cr6.compare<int32_t>(ctx.r28.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320bdac
	if (cr6.gt) goto loc_8320BDAC;
loc_8320BDA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320BDAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320bde4
	if (!cr6.eq) goto loc_8320BDE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8320BDC0;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320bde4
	if (cr6.eq) goto loc_8320BDE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320BDE0;
	sub_83266A90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8320BDE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320BDEC;
	sub_8320B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832018e0
	ctx.lr = 0x8320BDF4;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r8,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r4.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320be30
	if (cr6.eq) goto loc_8320BE30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320BE30;
	sub_83222030(ctx, base);
loc_8320BE30:
	// li r11,13
	ctx.r11.s64 = 13;
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320BE4C"))) PPC_WEAK_FUNC(sub_8320BE4C);
PPC_FUNC_IMPL(__imp__sub_8320BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BE50"))) PPC_WEAK_FUNC(sub_8320BE50);
PPC_FUNC_IMPL(__imp__sub_8320BE50) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bea8
	if (cr6.eq) goto loc_8320BEA8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320bea8
	if (cr6.eq) goto loc_8320BEA8;
loc_8320BE7C:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8320bec4
	if (cr6.eq) goto loc_8320BEC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8320be50
	ctx.lr = 0x8320BE90;
	sub_8320BE50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320beac
	if (!cr6.eq) goto loc_8320BEAC;
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320be7c
	if (!cr6.eq) goto loc_8320BE7C;
loc_8320BEA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320BEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8320BEC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8320beac
	goto loc_8320BEAC;
}

__attribute__((alias("__imp__sub_8320BECC"))) PPC_WEAK_FUNC(sub_8320BECC);
PPC_FUNC_IMPL(__imp__sub_8320BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320BED0"))) PPC_WEAK_FUNC(sub_8320BED0);
PPC_FUNC_IMPL(__imp__sub_8320BED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320BED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bef8
	if (cr6.eq) goto loc_8320BEF8;
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x8320bf14
	goto loc_8320BF14;
loc_8320BEF8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320bf14
	if (cr6.eq) goto loc_8320BF14;
	// lwz r28,348(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
loc_8320BF14:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320bf40
	if (cr6.eq) goto loc_8320BF40;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320bf30
	if (!cr6.eq) goto loc_8320BF30;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320bf38
	goto loc_8320BF38;
loc_8320BF30:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320BF38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320BF40;
	sub_8320D0F8(ctx, base);
loc_8320BF40:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320bfdc
	if (cr6.lt) goto loc_8320BFDC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320BF74;
	sub_832133D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bfa0
	if (cr6.eq) goto loc_8320BFA0;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x8320bfd8
	if (cr6.eq) goto loc_8320BFD8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8320bfdc
	if (cr6.eq) goto loc_8320BFDC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320be50
	ctx.lr = 0x8320BF98;
	sub_8320BE50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8320bfdc
	goto loc_8320BFDC;
loc_8320BFA0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320bfdc
	if (!cr6.eq) goto loc_8320BFDC;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,92
	ctx.r11.u64 = ctx.r8.u64 ^ 92;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320bfdc
	if (cr6.eq) goto loc_8320BFDC;
loc_8320BFD8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8320BFDC:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320c008
	if (cr6.eq) goto loc_8320C008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320C008;
	sub_83222030(ctx, base);
loc_8320C008:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C01C"))) PPC_WEAK_FUNC(sub_8320C01C);
PPC_FUNC_IMPL(__imp__sub_8320C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C020"))) PPC_WEAK_FUNC(sub_8320C020);
PPC_FUNC_IMPL(__imp__sub_8320C020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320C028;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320c060
	if (cr6.eq) goto loc_8320C060;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c050
	if (!cr6.eq) goto loc_8320C050;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320c058
	goto loc_8320C058;
loc_8320C050:
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320C058:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320C060;
	sub_8320D0F8(ctx, base);
loc_8320C060:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83273b48
	ctx.lr = 0x8320C068;
	sub_83273B48(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320c098
	if (cr6.eq) goto loc_8320C098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320C098;
	sub_83222030(ctx, base);
loc_8320C098:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8320c188
	if (cr6.lt) goto loc_8320C188;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,38
	ctx.r4.s64 = 38;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8320C0EC;
	sub_83221378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c11c
	if (!cr6.eq) goto loc_8320C11C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,25412
	ctx.r5.s64 = ctx.r11.s64 + 25412;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320C114;
	sub_8320D4B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320C11C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8320c13c
	if (!cr6.eq) goto loc_8320C13C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c13c
	if (cr6.eq) goto loc_8320C13C;
	// lwz r27,348(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
loc_8320C13C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83213e48
	ctx.lr = 0x8320C144;
	sub_83213E48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83267de0
	ctx.lr = 0x8320C154;
	sub_83267DE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832183c8
	ctx.lr = 0x8320C160;
	sub_832183C8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fcbb0
	ctx.lr = 0x8320C170;
	sub_831FCBB0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832197e8
	ctx.lr = 0x8320C188;
	sub_832197E8(ctx, base);
loc_8320C188:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C190"))) PPC_WEAK_FUNC(sub_8320C190);
PPC_FUNC_IMPL(__imp__sub_8320C190) {
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
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8320ba70
	ctx.lr = 0x8320C1C0;
	sub_8320BA70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c1f4
	if (!cr6.eq) goto loc_8320C1F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// beq cr6,0x8320c1e8
	if (cr6.eq) goto loc_8320C1E8;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// b 0x8320c204
	goto loc_8320C204;
loc_8320C1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832017f0
	ctx.lr = 0x8320C1F0;
	sub_832017F0(ctx, base);
	// b 0x8320c210
	goto loc_8320C210;
loc_8320C1F4:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
loc_8320C204:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c210
	if (cr6.eq) goto loc_8320C210;
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
loc_8320C210:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8320c224
	if (!cr6.eq) goto loc_8320C224;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8320c230
	goto loc_8320C230;
loc_8320C224:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8320C230:
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// bl 0x8322b100
	ctx.lr = 0x8320C250;
	sub_8322B100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832141d0
	ctx.lr = 0x8320C258;
	sub_832141D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83264948
	ctx.lr = 0x8320C260;
	sub_83264948(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320C278"))) PPC_WEAK_FUNC(sub_8320C278);
PPC_FUNC_IMPL(__imp__sub_8320C278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320C280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320c2bc
	if (cr6.eq) goto loc_8320C2BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c2ac
	if (!cr6.eq) goto loc_8320C2AC;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320c2b4
	goto loc_8320C2B4;
loc_8320C2AC:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320C2B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320C2BC;
	sub_8320D0F8(ctx, base);
loc_8320C2BC:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8320c3f0
	if (cr6.lt) goto loc_8320C3F0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221558
	ctx.lr = 0x8320C2EC;
	sub_83221558(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320c3d4
	if (cr6.eq) goto loc_8320C3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8320C300;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320ba70
	ctx.lr = 0x8320C30C;
	sub_8320BA70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320c3b0
	if (cr6.eq) goto loc_8320C3B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x83266af0
	ctx.lr = 0x8320C328;
	sub_83266AF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8320c33c
	if (!cr6.eq) goto loc_8320C33C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320c354
	goto loc_8320C354;
loc_8320C33C:
	// cmpwi cr6,r31,-1000
	cr6.compare<int32_t>(ctx.r31.s32, -1000, xer);
	// bgt cr6,0x8320c350
	if (cr6.gt) goto loc_8320C350;
	// cmpwi cr6,r31,-3000
	cr6.compare<int32_t>(ctx.r31.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320c354
	if (cr6.gt) goto loc_8320C354;
loc_8320C350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320C354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c38c
	if (!cr6.eq) goto loc_8320C38C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83216950
	ctx.lr = 0x8320C368;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c38c
	if (cr6.eq) goto loc_8320C38C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320C388;
	sub_83266A90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320C38C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320C394;
	sub_8320B580(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x8320C3A4;
	sub_83266DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320C3B0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// bl 0x8320d548
	ctx.lr = 0x8320C3C8;
	sub_8320D548(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320C3D4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// li r6,42
	ctx.r6.s64 = 42;
	// bl 0x8320d428
	ctx.lr = 0x8320C3F0;
	sub_8320D428(ctx, base);
loc_8320C3F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C3FC"))) PPC_WEAK_FUNC(sub_8320C3FC);
PPC_FUNC_IMPL(__imp__sub_8320C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C400"))) PPC_WEAK_FUNC(sub_8320C400);
PPC_FUNC_IMPL(__imp__sub_8320C400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320C408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8320c440
	if (cr6.eq) goto loc_8320C440;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c430
	if (!cr6.eq) goto loc_8320C430;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320c438
	goto loc_8320C438;
loc_8320C430:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320C438:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320C440;
	sub_8320D0F8(ctx, base);
loc_8320C440:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8320c56c
	if (cr6.lt) goto loc_8320C56C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320C474;
	sub_832133D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c4a0
	if (!cr6.eq) goto loc_8320C4A0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// li r6,124
	ctx.r6.s64 = 124;
	// bl 0x8320d428
	ctx.lr = 0x8320C49C;
	sub_8320D428(ctx, base);
	// b 0x8320c4c8
	goto loc_8320C4C8;
loc_8320C4A0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x8320c4c8
	if (cr6.eq) goto loc_8320C4C8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320C4C4;
	sub_8320B338(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8320C4C8:
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222578
	ctx.lr = 0x8320C4D4;
	sub_83222578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320c514
	if (cr6.eq) goto loc_8320C514;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c51c
	if (cr6.eq) goto loc_8320C51C;
loc_8320C4F0:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320c504
	if (!cr6.eq) goto loc_8320C504;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8320C504:
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c4f0
	if (!cr6.eq) goto loc_8320C4F0;
	// b 0x8320c51c
	goto loc_8320C51C;
loc_8320C514:
	// bl 0x832017b8
	ctx.lr = 0x8320C518;
	sub_832017B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8320C51C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8320c52c
	if (cr6.lt) goto loc_8320C52C;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8320c54c
	if (cr6.lt) goto loc_8320C54C;
loc_8320C52C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// bl 0x8320d548
	ctx.lr = 0x8320C544;
	sub_8320D548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320C54C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320c56c
	if (cr6.eq) goto loc_8320C56C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320C55C;
	sub_8320B580(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320C56C;
	sub_8320C190(ctx, base);
loc_8320C56C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C574"))) PPC_WEAK_FUNC(sub_8320C574);
PPC_FUNC_IMPL(__imp__sub_8320C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320C578"))) PPC_WEAK_FUNC(sub_8320C578);
PPC_FUNC_IMPL(__imp__sub_8320C578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320C580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8320c5bc
	if (cr6.eq) goto loc_8320C5BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c5ac
	if (!cr6.eq) goto loc_8320C5AC;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320c5b4
	goto loc_8320C5B4;
loc_8320C5AC:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320C5B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320C5BC;
	sub_8320D0F8(ctx, base);
loc_8320C5BC:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8320c834
	if (cr6.lt) goto loc_8320C834;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320C5F0;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c624
	if (!cr6.eq) goto loc_8320C624;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320C618;
	sub_8320D4B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8320C624:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8320c650
	if (!cr6.eq) goto loc_8320C650;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// bl 0x8320d548
	ctx.lr = 0x8320C644;
	sub_8320D548(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8320C650:
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x8320C658;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832169a8
	ctx.lr = 0x8320C664;
	sub_832169A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c6ac
	if (!cr6.eq) goto loc_8320C6AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x8320C684;
	sub_83266AF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8320c698
	if (!cr6.eq) goto loc_8320C698;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320c6b0
	goto loc_8320C6B0;
loc_8320C698:
	// cmpwi cr6,r28,-1000
	cr6.compare<int32_t>(ctx.r28.s32, -1000, xer);
	// bgt cr6,0x8320c6ac
	if (cr6.gt) goto loc_8320C6AC;
	// cmpwi cr6,r28,-3000
	cr6.compare<int32_t>(ctx.r28.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320c6b0
	if (cr6.gt) goto loc_8320C6B0;
loc_8320C6AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320C6B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c6e8
	if (!cr6.eq) goto loc_8320C6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8320C6C4;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c6e8
	if (cr6.eq) goto loc_8320C6E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320C6E4;
	sub_83266A90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8320C6E8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c720
	if (!cr6.eq) goto loc_8320C720;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// blt cr6,0x8320c720
	if (cr6.lt) goto loc_8320C720;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320C710;
	sub_8320C190(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// b 0x8320c738
	goto loc_8320C738;
loc_8320C720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320C728;
	sub_8320B580(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320C738;
	sub_8320C190(ctx, base);
loc_8320C738:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r28,-17
	cr6.compare<int32_t>(ctx.r28.s32, -17, xer);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x8320c754
	if (!cr6.eq) goto loc_8320C754;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320c76c
	goto loc_8320C76C;
loc_8320C754:
	// cmpwi cr6,r28,-1000
	cr6.compare<int32_t>(ctx.r28.s32, -1000, xer);
	// bgt cr6,0x8320c768
	if (cr6.gt) goto loc_8320C768;
	// cmpwi cr6,r28,-3000
	cr6.compare<int32_t>(ctx.r28.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320c76c
	if (cr6.gt) goto loc_8320C76C;
loc_8320C768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320C76C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c790
	if (!cr6.eq) goto loc_8320C790;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x8320C78C;
	sub_83266AF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8320C790:
	// cmpwi cr6,r28,-17
	cr6.compare<int32_t>(ctx.r28.s32, -17, xer);
	// bne cr6,0x8320c7a0
	if (!cr6.eq) goto loc_8320C7A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320c7b8
	goto loc_8320C7B8;
loc_8320C7A0:
	// cmpwi cr6,r28,-1000
	cr6.compare<int32_t>(ctx.r28.s32, -1000, xer);
	// bgt cr6,0x8320c7b4
	if (cr6.gt) goto loc_8320C7B4;
	// cmpwi cr6,r28,-3000
	cr6.compare<int32_t>(ctx.r28.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320c7b8
	if (cr6.gt) goto loc_8320C7B8;
loc_8320C7B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320C7B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c7f0
	if (!cr6.eq) goto loc_8320C7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x8320C7CC;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320c7f0
	if (cr6.eq) goto loc_8320C7F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x8320C7EC;
	sub_83266A90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8320C7F0:
	// cmpwi cr6,r28,-17
	cr6.compare<int32_t>(ctx.r28.s32, -17, xer);
	// bne cr6,0x8320c800
	if (!cr6.eq) goto loc_8320C800;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320c818
	goto loc_8320C818;
loc_8320C800:
	// cmpwi cr6,r28,-1000
	cr6.compare<int32_t>(ctx.r28.s32, -1000, xer);
	// bgt cr6,0x8320c814
	if (cr6.gt) goto loc_8320C814;
	// cmpwi cr6,r28,-3000
	cr6.compare<int32_t>(ctx.r28.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8320c818
	if (cr6.gt) goto loc_8320C818;
loc_8320C814:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320C818:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320c834
	if (!cr6.eq) goto loc_8320C834;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832240b8
	ctx.lr = 0x8320C834;
	sub_832240B8(ctx, base);
loc_8320C834:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320C840"))) PPC_WEAK_FUNC(sub_8320C840);
PPC_FUNC_IMPL(__imp__sub_8320C840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8320C848;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8320c880
	if (cr6.eq) goto loc_8320C880;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320c870
	if (!cr6.eq) goto loc_8320C870;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320c878
	goto loc_8320C878;
loc_8320C870:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320C878:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320C880;
	sub_8320D0F8(ctx, base);
loc_8320C880:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8320ca3c
	if (cr6.lt) goto loc_8320CA3C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320C8BC;
	sub_832133D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8320c928
	if (cr6.eq) goto loc_8320C928;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x8320c90c
	if (!cr6.eq) goto loc_8320C90C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320ad60
	ctx.lr = 0x8320C8E0;
	sub_8320AD60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8320c940
	if (!cr6.lt) goto loc_8320C940;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32396
	ctx.r5.s64 = ctx.r11.s64 + 32396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320C904;
	sub_8320B338(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8320c940
	goto loc_8320C940;
loc_8320C90C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32396
	ctx.r5.s64 = ctx.r11.s64 + 32396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320C920;
	sub_8320B338(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8320c940
	goto loc_8320C940;
loc_8320C928:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,32396
	ctx.r5.s64 = ctx.r11.s64 + 32396;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320C940;
	sub_8320D4B0(ctx, base);
loc_8320C940:
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320C950;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8320c9bc
	if (cr6.eq) goto loc_8320C9BC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x8320c9a0
	if (!cr6.eq) goto loc_8320C9A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8320ad60
	ctx.lr = 0x8320C974;
	sub_8320AD60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8320c9d4
	if (!cr6.lt) goto loc_8320C9D4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,32388
	ctx.r5.s64 = ctx.r11.s64 + 32388;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320C998;
	sub_8320B338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8320c9d4
	goto loc_8320C9D4;
loc_8320C9A0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,32388
	ctx.r5.s64 = ctx.r11.s64 + 32388;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320b338
	ctx.lr = 0x8320C9B4;
	sub_8320B338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8320c9d4
	goto loc_8320C9D4;
loc_8320C9BC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r5,r11,32388
	ctx.r5.s64 = ctx.r11.s64 + 32388;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320d4b0
	ctx.lr = 0x8320C9D4;
	sub_8320D4B0(ctx, base);
loc_8320C9D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320ca3c
	if (cr6.eq) goto loc_8320CA3C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320ca3c
	if (cr6.eq) goto loc_8320CA3C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8320ca3c
	if (cr6.eq) goto loc_8320CA3C;
	// cmpw cr6,r26,r25
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, xer);
	// ble cr6,0x8320ca0c
	if (!cr6.gt) goto loc_8320CA0C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8320CA0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320CA14;
	sub_8320B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320CA1C;
	sub_8320B580(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320CA2C;
	sub_8320C190(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320CA3C;
	sub_8320C190(ctx, base);
loc_8320CA3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320CA44"))) PPC_WEAK_FUNC(sub_8320CA44);
PPC_FUNC_IMPL(__imp__sub_8320CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CA48"))) PPC_WEAK_FUNC(sub_8320CA48);
PPC_FUNC_IMPL(__imp__sub_8320CA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8320CA50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8320ca88
	if (cr6.eq) goto loc_8320CA88;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ca78
	if (!cr6.eq) goto loc_8320CA78;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8320ca80
	goto loc_8320CA80;
loc_8320CA78:
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
loc_8320CA80:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8320d0f8
	ctx.lr = 0x8320CA88;
	sub_8320D0F8(ctx, base);
loc_8320CA88:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8320cb94
	if (cr6.lt) goto loc_8320CB94;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8320CAB8;
	sub_83222578(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8320ba70
	ctx.lr = 0x8320CAC8;
	sub_8320BA70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320caec
	if (!cr6.eq) goto loc_8320CAEC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// addi r5,r11,32412
	ctx.r5.s64 = ctx.r11.s64 + 32412;
	// bl 0x8320d5b8
	ctx.lr = 0x8320CAEC;
	sub_8320D5B8(ctx, base);
loc_8320CAEC:
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83222578
	ctx.lr = 0x8320CAF8;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320ba70
	ctx.lr = 0x8320CB08;
	sub_8320BA70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320cb2c
	if (!cr6.eq) goto loc_8320CB2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// addi r5,r11,32404
	ctx.r5.s64 = ctx.r11.s64 + 32404;
	// bl 0x8320d5b8
	ctx.lr = 0x8320CB2C;
	sub_8320D5B8(ctx, base);
loc_8320CB2C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320cb94
	if (cr6.eq) goto loc_8320CB94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320cb94
	if (cr6.eq) goto loc_8320CB94;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8320cb94
	if (cr6.eq) goto loc_8320CB94;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// ble cr6,0x8320cb64
	if (!cr6.gt) goto loc_8320CB64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8320CB64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320CB6C;
	sub_8320B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8320CB74;
	sub_8320B580(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320CB84;
	sub_8320C190(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320c190
	ctx.lr = 0x8320CB94;
	sub_8320C190(ctx, base);
loc_8320CB94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320CB9C"))) PPC_WEAK_FUNC(sub_8320CB9C);
PPC_FUNC_IMPL(__imp__sub_8320CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CBA0"))) PPC_WEAK_FUNC(sub_8320CBA0);
PPC_FUNC_IMPL(__imp__sub_8320CBA0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1258
	cr6.compare<uint32_t>(ctx.r11.u32, 1258, xer);
	// bgt cr6,0x8320cd38
	if (cr6.gt) goto loc_8320CD38;
	// beq cr6,0x8320cd20
	if (cr6.eq) goto loc_8320CD20;
	// addi r11,r11,-1130
	ctx.r11.s64 = ctx.r11.s64 + -1130;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8320cd38
	if (cr6.gt) goto loc_8320CD38;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13344
	ctx.r12.s64 = ctx.r12.s64 + -13344;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320CC18;
	case 1:
		goto loc_8320CC30;
	case 2:
		goto loc_8320CC48;
	case 3:
		goto loc_8320CC60;
	case 4:
		goto loc_8320CC78;
	case 5:
		goto loc_8320CC90;
	case 6:
		goto loc_8320CD38;
	case 7:
		goto loc_8320CD38;
	case 8:
		goto loc_8320CD38;
	case 9:
		goto loc_8320CCA8;
	case 10:
		goto loc_8320CCC0;
	case 11:
		goto loc_8320CCD8;
	case 12:
		goto loc_8320CCF0;
	case 13:
		goto loc_8320CD08;
	default:
		return;
	}
	// lwz r25,-13288(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13288);
	// lwz r25,-13264(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13264);
	// lwz r25,-13240(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13240);
	// lwz r25,-13216(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13216);
	// lwz r25,-13192(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13192);
	// lwz r25,-13168(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13168);
	// lwz r25,-13000(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13000);
	// lwz r25,-13000(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13000);
	// lwz r25,-13000(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13000);
	// lwz r25,-13144(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13144);
	// lwz r25,-13120(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13120);
	// lwz r25,-13096(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13096);
	// lwz r25,-13072(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13072);
	// lwz r25,-13048(0)
	ctx.r25.u64 = PPC_LOAD_U32(-13048);
loc_8320CC18:
	// bl 0x8320b1d0
	ctx.lr = 0x8320CC1C;
	sub_8320B1D0(ctx, base);
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
loc_8320CC30:
	// bl 0x8320b418
	ctx.lr = 0x8320CC34;
	sub_8320B418(ctx, base);
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
loc_8320CC48:
	// bl 0x8320b718
	ctx.lr = 0x8320CC4C;
	sub_8320B718(ctx, base);
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
loc_8320CC60:
	// bl 0x8320c278
	ctx.lr = 0x8320CC64;
	sub_8320C278(ctx, base);
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
loc_8320CC78:
	// bl 0x8320bb28
	ctx.lr = 0x8320CC7C;
	sub_8320BB28(ctx, base);
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
loc_8320CC90:
	// bl 0x8320c400
	ctx.lr = 0x8320CC94;
	sub_8320C400(ctx, base);
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
loc_8320CCA8:
	// bl 0x8320c578
	ctx.lr = 0x8320CCAC;
	sub_8320C578(ctx, base);
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
loc_8320CCC0:
	// bl 0x8320bc90
	ctx.lr = 0x8320CCC4;
	sub_8320BC90(ctx, base);
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
loc_8320CCD8:
	// bl 0x8320c840
	ctx.lr = 0x8320CCDC;
	sub_8320C840(ctx, base);
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
loc_8320CCF0:
	// bl 0x8320ca48
	ctx.lr = 0x8320CCF4;
	sub_8320CA48(ctx, base);
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
loc_8320CD08:
	// bl 0x8320c020
	ctx.lr = 0x8320CD0C;
	sub_8320C020(ctx, base);
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
loc_8320CD20:
	// bl 0x8320bed0
	ctx.lr = 0x8320CD24;
	sub_8320BED0(ctx, base);
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
loc_8320CD38:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CD4C"))) PPC_WEAK_FUNC(sub_8320CD4C);
PPC_FUNC_IMPL(__imp__sub_8320CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CD50"))) PPC_WEAK_FUNC(sub_8320CD50);
PPC_FUNC_IMPL(__imp__sub_8320CD50) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,392
	ctx.r10.s64 = 392;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// bl 0x8325b4d8
	ctx.lr = 0x8320CD74;
	sub_8325B4D8(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CD8C"))) PPC_WEAK_FUNC(sub_8320CD8C);
PPC_FUNC_IMPL(__imp__sub_8320CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CD90"))) PPC_WEAK_FUNC(sub_8320CD90);
PPC_FUNC_IMPL(__imp__sub_8320CD90) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8325dc38
	ctx.lr = 0x8320CDAC;
	sub_8325DC38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,392
	ctx.r10.s64 = 392;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// bl 0x8325b658
	ctx.lr = 0x8320CDC8;
	sub_8325B658(ctx, base);
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

__attribute__((alias("__imp__sub_8320CDDC"))) PPC_WEAK_FUNC(sub_8320CDDC);
PPC_FUNC_IMPL(__imp__sub_8320CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CDE0"))) PPC_WEAK_FUNC(sub_8320CDE0);
PPC_FUNC_IMPL(__imp__sub_8320CDE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8320CE08;
	sub_83294018(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x8325de18
	ctx.lr = 0x8320CE34;
	sub_8325DE18(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CE58"))) PPC_WEAK_FUNC(sub_8320CE58);
PPC_FUNC_IMPL(__imp__sub_8320CE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,252
	ctx.r10.s64 = 252;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// b 0x8325b4d8
	sub_8325B4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320CE70"))) PPC_WEAK_FUNC(sub_8320CE70);
PPC_FUNC_IMPL(__imp__sub_8320CE70) {
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
	// beq cr6,0x8320cee8
	if (cr6.eq) goto loc_8320CEE8;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ceac
	if (cr6.eq) goto loc_8320CEAC;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// b 0x8320cec0
	goto loc_8320CEC0;
loc_8320CEAC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320cebc
	if (cr6.eq) goto loc_8320CEBC;
	// bl 0x83209d68
	ctx.lr = 0x8320CEBC;
	sub_83209D68(ctx, base);
loc_8320CEBC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8320CEC0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320cee8
	if (cr6.eq) goto loc_8320CEE8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,252
	ctx.r10.s64 = 252;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,252
	ctx.r3.s64 = ctx.r11.s64 + 252;
	// bl 0x8325b658
	ctx.lr = 0x8320CEE8;
	sub_8325B658(ctx, base);
loc_8320CEE8:
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

__attribute__((alias("__imp__sub_8320CEFC"))) PPC_WEAK_FUNC(sub_8320CEFC);
PPC_FUNC_IMPL(__imp__sub_8320CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CF00"))) PPC_WEAK_FUNC(sub_8320CF00);
PPC_FUNC_IMPL(__imp__sub_8320CF00) {
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
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8320CF24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8320cf24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320CF24;
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320cf44
	if (cr6.eq) goto loc_8320CF44;
	// bl 0x83209c20
	ctx.lr = 0x8320CF40;
	sub_83209C20(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_8320CF44:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8320CF60"))) PPC_WEAK_FUNC(sub_8320CF60);
PPC_FUNC_IMPL(__imp__sub_8320CF60) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320cfa0
	if (cr6.eq) goto loc_8320CFA0;
	// bl 0x83222030
	ctx.lr = 0x8320CFA0;
	sub_83222030(ctx, base);
loc_8320CFA0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320CFC4"))) PPC_WEAK_FUNC(sub_8320CFC4);
PPC_FUNC_IMPL(__imp__sub_8320CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320CFC8"))) PPC_WEAK_FUNC(sub_8320CFC8);
PPC_FUNC_IMPL(__imp__sub_8320CFC8) {
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
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320CFEC;
	sub_832277F8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32452
	ctx.r4.s64 = ctx.r11.s64 + 32452;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D00C;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D024"))) PPC_WEAK_FUNC(sub_8320D024);
PPC_FUNC_IMPL(__imp__sub_8320D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D028"))) PPC_WEAK_FUNC(sub_8320D028);
PPC_FUNC_IMPL(__imp__sub_8320D028) {
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
	// lhz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D04C;
	sub_832277F8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,32452
	ctx.r4.s64 = ctx.r10.s64 + 32452;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D06C;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D084"))) PPC_WEAK_FUNC(sub_8320D084);
PPC_FUNC_IMPL(__imp__sub_8320D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D088"))) PPC_WEAK_FUNC(sub_8320D088);
PPC_FUNC_IMPL(__imp__sub_8320D088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,28(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320d0c8
	if (!cr6.eq) goto loc_8320D0C8;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D0B4;
	sub_832277F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320d0c8
	if (!cr6.eq) goto loc_8320D0C8;
	// bl 0x83227908
	ctx.lr = 0x8320D0C4;
	sub_83227908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8320D0C8:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,32504
	ctx.r4.s64 = ctx.r10.s64 + 32504;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D0EC;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D0F4"))) PPC_WEAK_FUNC(sub_8320D0F4);
PPC_FUNC_IMPL(__imp__sub_8320D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D0F8"))) PPC_WEAK_FUNC(sub_8320D0F8);
PPC_FUNC_IMPL(__imp__sub_8320D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D114;
	sub_83221C30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320d144
	if (!cr6.eq) goto loc_8320D144;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D130;
	sub_832277F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320d144
	if (!cr6.eq) goto loc_8320D144;
	// bl 0x83227908
	ctx.lr = 0x8320D140;
	sub_83227908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8320D144:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,32504
	ctx.r4.s64 = ctx.r10.s64 + 32504;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D168;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D170"))) PPC_WEAK_FUNC(sub_8320D170);
PPC_FUNC_IMPL(__imp__sub_8320D170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832260e8
	ctx.lr = 0x8320D188;
	sub_832260E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320d1b4
	if (!cr6.eq) goto loc_8320D1B4;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D1A0;
	sub_832277F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320d1b4
	if (!cr6.eq) goto loc_8320D1B4;
	// bl 0x83227908
	ctx.lr = 0x8320D1B0;
	sub_83227908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8320D1B4:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,32504
	ctx.r4.s64 = ctx.r10.s64 + 32504;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D1D8;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D1E0"))) PPC_WEAK_FUNC(sub_8320D1E0);
PPC_FUNC_IMPL(__imp__sub_8320D1E0) {
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
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D1F4;
	sub_832277F8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,32560
	ctx.r4.s64 = ctx.r10.s64 + 32560;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// bl 0x832085e8
	ctx.lr = 0x8320D20C;
	sub_832085E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D21C"))) PPC_WEAK_FUNC(sub_8320D21C);
PPC_FUNC_IMPL(__imp__sub_8320D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D220"))) PPC_WEAK_FUNC(sub_8320D220);
PPC_FUNC_IMPL(__imp__sub_8320D220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83221c30
	ctx.lr = 0x8320D244;
	sub_83221C30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D250;
	sub_832277F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D25C;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r10,32592
	ctx.r4.s64 = ctx.r10.s64 + 32592;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D284;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D28C"))) PPC_WEAK_FUNC(sub_8320D28C);
PPC_FUNC_IMPL(__imp__sub_8320D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D290"))) PPC_WEAK_FUNC(sub_8320D290);
PPC_FUNC_IMPL(__imp__sub_8320D290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D298;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D2AC;
	sub_832277F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D2B8;
	sub_83225C80(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r10,32440
	ctx.r8.s64 = ctx.r10.s64 + 32440;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r9,32624
	ctx.r4.s64 = ctx.r9.s64 + 32624;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D2DC;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D2E4"))) PPC_WEAK_FUNC(sub_8320D2E4);
PPC_FUNC_IMPL(__imp__sub_8320D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D2E8"))) PPC_WEAK_FUNC(sub_8320D2E8);
PPC_FUNC_IMPL(__imp__sub_8320D2E8) {
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
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x8320D308;
	sub_832277F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D318;
	sub_83221C30(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,32668
	ctx.r4.s64 = ctx.r10.s64 + 32668;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D338;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D350"))) PPC_WEAK_FUNC(sub_8320D350);
PPC_FUNC_IMPL(__imp__sub_8320D350) {
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
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D370;
	sub_832277F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D380;
	sub_83221C30(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r10,32440
	ctx.r8.s64 = ctx.r10.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,32692
	ctx.r4.s64 = ctx.r9.s64 + 32692;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D3A0;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D3B8"))) PPC_WEAK_FUNC(sub_8320D3B8);
PPC_FUNC_IMPL(__imp__sub_8320D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83221c30
	ctx.lr = 0x8320D3DC;
	sub_83221C30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x8320D3E8;
	sub_832277F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D3F4;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r10,32716
	ctx.r4.s64 = ctx.r10.s64 + 32716;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D41C;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D424"))) PPC_WEAK_FUNC(sub_8320D424);
PPC_FUNC_IMPL(__imp__sub_8320D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D428"))) PPC_WEAK_FUNC(sub_8320D428);
PPC_FUNC_IMPL(__imp__sub_8320D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320D430;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83221c30
	ctx.lr = 0x8320D450;
	sub_83221C30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x8320D45C;
	sub_832277F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D46C;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D478;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,32440
	ctx.r11.s64 = ctx.r11.s64 + 32440;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r10,32736
	ctx.r4.s64 = ctx.r10.s64 + 32736;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D4A4;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D4AC"))) PPC_WEAK_FUNC(sub_8320D4AC);
PPC_FUNC_IMPL(__imp__sub_8320D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D4B0"))) PPC_WEAK_FUNC(sub_8320D4B0);
PPC_FUNC_IMPL(__imp__sub_8320D4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320d4c0
	if (!cr6.eq) goto loc_8320D4C0;
	// li r11,92
	ctx.r11.s64 = 92;
	// b 0x8320d4c8
	goto loc_8320D4C8;
loc_8320D4C0:
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8320D4C8:
	// lhz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8320d428
	sub_8320D428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D4D4"))) PPC_WEAK_FUNC(sub_8320D4D4);
PPC_FUNC_IMPL(__imp__sub_8320D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D4D8"))) PPC_WEAK_FUNC(sub_8320D4D8);
PPC_FUNC_IMPL(__imp__sub_8320D4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D4E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D4F8;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D508;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D514;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r10,32760
	ctx.r4.s64 = ctx.r10.s64 + 32760;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D53C;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D544"))) PPC_WEAK_FUNC(sub_8320D544);
PPC_FUNC_IMPL(__imp__sub_8320D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D548"))) PPC_WEAK_FUNC(sub_8320D548);
PPC_FUNC_IMPL(__imp__sub_8320D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D568;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D578;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D584;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r10,-32736
	ctx.r4.s64 = ctx.r10.s64 + -32736;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D5AC;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D5B4"))) PPC_WEAK_FUNC(sub_8320D5B4);
PPC_FUNC_IMPL(__imp__sub_8320D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D5B8"))) PPC_WEAK_FUNC(sub_8320D5B8);
PPC_FUNC_IMPL(__imp__sub_8320D5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D5C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D5D8;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D5E8;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320D5F4;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r10,-32708
	ctx.r4.s64 = ctx.r10.s64 + -32708;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D61C;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D624"))) PPC_WEAK_FUNC(sub_8320D624);
PPC_FUNC_IMPL(__imp__sub_8320D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D628"))) PPC_WEAK_FUNC(sub_8320D628);
PPC_FUNC_IMPL(__imp__sub_8320D628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320D630;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83221c30
	ctx.lr = 0x8320D650;
	sub_83221C30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x8320D65C;
	sub_832277F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D66C;
	sub_83221C30(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5972
	ctx.r9.s64 = ctx.r11.s64 + 5972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83225c80
	ctx.lr = 0x8320D688;
	sub_83225C80(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r11,r8,32440
	ctx.r11.s64 = ctx.r8.s64 + 32440;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r7,-32672
	ctx.r4.s64 = ctx.r7.s64 + -32672;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D6B4;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D6BC"))) PPC_WEAK_FUNC(sub_8320D6BC);
PPC_FUNC_IMPL(__imp__sub_8320D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D6C0"))) PPC_WEAK_FUNC(sub_8320D6C0);
PPC_FUNC_IMPL(__imp__sub_8320D6C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// b 0x8320d628
	sub_8320D628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D6DC"))) PPC_WEAK_FUNC(sub_8320D6DC);
PPC_FUNC_IMPL(__imp__sub_8320D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D6E0"))) PPC_WEAK_FUNC(sub_8320D6E0);
PPC_FUNC_IMPL(__imp__sub_8320D6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D700;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D710;
	sub_83221C30(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5972
	ctx.r9.s64 = ctx.r11.s64 + 5972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83225c80
	ctx.lr = 0x8320D72C;
	sub_83225C80(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r11,r8,32440
	ctx.r11.s64 = ctx.r8.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r7,-32644
	ctx.r4.s64 = ctx.r7.s64 + -32644;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D754;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D75C"))) PPC_WEAK_FUNC(sub_8320D75C);
PPC_FUNC_IMPL(__imp__sub_8320D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D760"))) PPC_WEAK_FUNC(sub_8320D760);
PPC_FUNC_IMPL(__imp__sub_8320D760) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// b 0x8320d6e0
	sub_8320D6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D778"))) PPC_WEAK_FUNC(sub_8320D778);
PPC_FUNC_IMPL(__imp__sub_8320D778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D798;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D7A8;
	sub_83221C30(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5972
	ctx.r9.s64 = ctx.r11.s64 + 5972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83225c80
	ctx.lr = 0x8320D7C4;
	sub_83225C80(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r11,r8,32440
	ctx.r11.s64 = ctx.r8.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r7,-32604
	ctx.r4.s64 = ctx.r7.s64 + -32604;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D7EC;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D7F4"))) PPC_WEAK_FUNC(sub_8320D7F4);
PPC_FUNC_IMPL(__imp__sub_8320D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D7F8"))) PPC_WEAK_FUNC(sub_8320D7F8);
PPC_FUNC_IMPL(__imp__sub_8320D7F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// b 0x8320d778
	sub_8320D778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D810"))) PPC_WEAK_FUNC(sub_8320D810);
PPC_FUNC_IMPL(__imp__sub_8320D810) {
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
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320D830;
	sub_832277F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D840;
	sub_83221C30(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r8,r10,5972
	ctx.r8.s64 = ctx.r10.s64 + 5972;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r7,32440
	ctx.r3.s64 = ctx.r7.s64 + 32440;
	// addi r4,r9,-32576
	ctx.r4.s64 = ctx.r9.s64 + -32576;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x832085e8
	ctx.lr = 0x8320D868;
	sub_832085E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320D880"))) PPC_WEAK_FUNC(sub_8320D880);
PPC_FUNC_IMPL(__imp__sub_8320D880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320D888;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320D8A0;
	sub_832277F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320D8B0;
	sub_83221C30(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5972
	ctx.r9.s64 = ctx.r11.s64 + 5972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83225c80
	ctx.lr = 0x8320D8CC;
	sub_83225C80(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r11,r8,32440
	ctx.r11.s64 = ctx.r8.s64 + 32440;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r7,-32552
	ctx.r4.s64 = ctx.r7.s64 + -32552;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320D8F4;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D8FC"))) PPC_WEAK_FUNC(sub_8320D8FC);
PPC_FUNC_IMPL(__imp__sub_8320D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D900"))) PPC_WEAK_FUNC(sub_8320D900);
PPC_FUNC_IMPL(__imp__sub_8320D900) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// b 0x8320d880
	sub_8320D880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D918"))) PPC_WEAK_FUNC(sub_8320D918);
PPC_FUNC_IMPL(__imp__sub_8320D918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,-32516
	ctx.r4.s64 = ctx.r11.s64 + -32516;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D934"))) PPC_WEAK_FUNC(sub_8320D934);
PPC_FUNC_IMPL(__imp__sub_8320D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320D938"))) PPC_WEAK_FUNC(sub_8320D938);
PPC_FUNC_IMPL(__imp__sub_8320D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bge cr6,0x8320d988
	if (!cr6.lt) goto loc_8320D988;
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320D988:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r29,r11,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8320D998;
	sub_83209AA8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ble cr6,0x8320d9dc
	if (!cr6.gt) goto loc_8320D9DC;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8320D9B8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stwu r31,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8320d9b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320D9B8;
loc_8320D9DC:
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320D9E8"))) PPC_WEAK_FUNC(sub_8320D9E8);
PPC_FUNC_IMPL(__imp__sub_8320D9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320D9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8320da34
	if (!cr6.gt) goto loc_8320DA34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8320DA10:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83222030
	ctx.lr = 0x8320DA1C;
	sub_83222030(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8320da10
	if (cr6.lt) goto loc_8320DA10;
loc_8320DA34:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8320da48
	if (cr6.eq) goto loc_8320DA48;
	// bl 0x83209d68
	ctx.lr = 0x8320DA48;
	sub_83209D68(ctx, base);
loc_8320DA48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DA50"))) PPC_WEAK_FUNC(sub_8320DA50);
PPC_FUNC_IMPL(__imp__sub_8320DA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320DA58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x8320db40
	if (cr6.lt) goto loc_8320DB40;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r28,r11,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(ctx.r28.s32, 16, xer);
	// bge cr6,0x8320da80
	if (!cr6.lt) goto loc_8320DA80;
	// li r28,16
	ctx.r28.s64 = 16;
loc_8320DA80:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// ble cr6,0x8320db40
	if (!cr6.gt) goto loc_8320DB40;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bne cr6,0x8320dad8
	if (!cr6.eq) goto loc_8320DAD8;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8320DAAC;
	sub_83209AA8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8320DABC;
	sub_83293EC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// b 0x8320dae4
	goto loc_8320DAE4;
loc_8320DAD8:
	// rlwinm r4,r28,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8320DAE0;
	sub_83209DF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8320DAE4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r11,r8,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble 0x8320db3c
	if (!cr0.gt) goto loc_8320DB3C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8320DB18:
	// stwu r30,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stwu r30,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8320db18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320DB18;
loc_8320DB3C:
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
loc_8320DB40:
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DB4C"))) PPC_WEAK_FUNC(sub_8320DB4C);
PPC_FUNC_IMPL(__imp__sub_8320DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320DB50"))) PPC_WEAK_FUNC(sub_8320DB50);
PPC_FUNC_IMPL(__imp__sub_8320DB50) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x8320da50
	sub_8320DA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DB60"))) PPC_WEAK_FUNC(sub_8320DB60);
PPC_FUNC_IMPL(__imp__sub_8320DB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320DB68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// ble cr6,0x8320dba8
	if (!cr6.gt) goto loc_8320DBA8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32500
	ctx.r4.s64 = ctx.r11.s64 + -32500;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83208330
	ctx.lr = 0x8320DB9C;
	sub_83208330(ctx, base);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_8320DBA8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// ble cr6,0x8320dbd8
	if (!cr6.gt) goto loc_8320DBD8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8320DBC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8320DBCC;
	sub_83222030(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x8320dbc4
	if (!cr0.eq) goto loc_8320DBC4;
loc_8320DBD8:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DBEC"))) PPC_WEAK_FUNC(sub_8320DBEC);
PPC_FUNC_IMPL(__imp__sub_8320DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320DBF0"))) PPC_WEAK_FUNC(sub_8320DBF0);
PPC_FUNC_IMPL(__imp__sub_8320DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x8320dc1c
	if (!cr6.lt) goto loc_8320DC1C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
loc_8320DC1C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8320da50
	sub_8320DA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DC24"))) PPC_WEAK_FUNC(sub_8320DC24);
PPC_FUNC_IMPL(__imp__sub_8320DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320DC28"))) PPC_WEAK_FUNC(sub_8320DC28);
PPC_FUNC_IMPL(__imp__sub_8320DC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// bge cr6,0x8320dc40
	if (!cr6.lt) goto loc_8320DC40;
	// b 0x8320da50
	sub_8320DA50(ctx, base);
	return;
loc_8320DC40:
	// subf r4,r4,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x8320db60
	sub_8320DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DC48"))) PPC_WEAK_FUNC(sub_8320DC48);
PPC_FUNC_IMPL(__imp__sub_8320DC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320DC4C"))) PPC_WEAK_FUNC(sub_8320DC4C);
PPC_FUNC_IMPL(__imp__sub_8320DC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320DC50"))) PPC_WEAK_FUNC(sub_8320DC50);
PPC_FUNC_IMPL(__imp__sub_8320DC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320DC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832767b8
	ctx.lr = 0x8320DC64;
	sub_832767B8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stb r30,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r30.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320dc88
	if (cr6.eq) goto loc_8320DC88;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
loc_8320DC88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320dcac
	if (cr6.eq) goto loc_8320DCAC;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x8320dcac
	if (!cr6.lt) goto loc_8320DCAC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8320DCAC:
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// rlwinm r7,r9,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r8,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x8320dcec
	if (!cr6.gt) goto loc_8320DCEC;
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x83209df8
	ctx.lr = 0x8320DCE8;
	sub_83209DF8(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
loc_8320DCEC:
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// lhzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// sthx r7,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u16);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x8320dd30
	if (!cr6.lt) goto loc_8320DD30;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
loc_8320DD30:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x8320dd48
	if (!cr6.gt) goto loc_8320DD48;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
loc_8320DD48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DD50"))) PPC_WEAK_FUNC(sub_8320DD50);
PPC_FUNC_IMPL(__imp__sub_8320DD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320DD58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320dd7c
	if (cr6.eq) goto loc_8320DD7C;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
loc_8320DD7C:
	// bl 0x832767b8
	ctx.lr = 0x8320DD80;
	sub_832767B8(ctx, base);
	// stb r30,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r30.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320ddb0
	if (cr6.eq) goto loc_8320DDB0;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x8320ddb0
	if (!cr6.lt) goto loc_8320DDB0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8320DDB0:
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r31.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// rlwinm r7,r9,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r8,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x8320ddf0
	if (!cr6.gt) goto loc_8320DDF0;
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x83209df8
	ctx.lr = 0x8320DDEC;
	sub_83209DF8(ctx, base);
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
loc_8320DDF0:
	// lhzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r31.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8320de2c
	if (cr0.lt) goto loc_8320DE2C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,10
	ctx.r9.s64 = ctx.r30.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8320DE14:
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bdnz 0x8320de14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8320DE14;
loc_8320DE2C:
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// sthx r10,r28,r31
	PPC_STORE_U16(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u16);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// sth r4,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r4.u16);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x8320de64
	if (!cr6.lt) goto loc_8320DE64;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
loc_8320DE64:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x8320de7c
	if (!cr6.gt) goto loc_8320DE7C;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
loc_8320DE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DE84"))) PPC_WEAK_FUNC(sub_8320DE84);
PPC_FUNC_IMPL(__imp__sub_8320DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320DE88"))) PPC_WEAK_FUNC(sub_8320DE88);
PPC_FUNC_IMPL(__imp__sub_8320DE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320DE90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x8320dc50
	ctx.lr = 0x8320DEB0;
	sub_8320DC50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// li r8,122
	ctx.r8.s64 = 122;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// sth r8,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r8.u16);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// stw r26,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// bl 0x83200388
	ctx.lr = 0x8320DEEC;
	sub_83200388(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x8320df00
	if (cr6.lt) goto loc_8320DF00;
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
loc_8320DF00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DF08"))) PPC_WEAK_FUNC(sub_8320DF08);
PPC_FUNC_IMPL(__imp__sub_8320DF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320DF10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8320dc50
	ctx.lr = 0x8320DF30;
	sub_8320DC50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// li r8,122
	ctx.r8.s64 = 122;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// sth r8,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r8.u16);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// stw r26,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// bl 0x83200388
	ctx.lr = 0x8320DF6C;
	sub_83200388(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x8320df80
	if (cr6.lt) goto loc_8320DF80;
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
loc_8320DF80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320DF88"))) PPC_WEAK_FUNC(sub_8320DF88);
PPC_FUNC_IMPL(__imp__sub_8320DF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320DF90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320dfb4
	if (cr6.eq) goto loc_8320DFB4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_8320DFB4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320e0cc
	if (!cr6.eq) goto loc_8320E0CC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8320dfd8
	if (!cr6.eq) goto loc_8320DFD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320e004
	goto loc_8320E004;
loc_8320DFD8:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133d0
	ctx.lr = 0x8320DFE4;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320dff4
	if (!cr6.eq) goto loc_8320DFF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320e004
	goto loc_8320E004;
loc_8320DFF4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8320E004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e0cc
	if (cr6.eq) goto loc_8320E0CC;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24856
	ctx.r10.s64 = ctx.r11.s64 + 24856;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320e0a0
	if (cr6.eq) goto loc_8320E0A0;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e050
	if (cr6.eq) goto loc_8320E050;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832124d8
	ctx.lr = 0x8320E048;
	sub_832124D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320E050:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8320e064
	if (cr6.eq) goto loc_8320E064;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8320e07c
	goto loc_8320E07C;
loc_8320E064:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// lhz r9,86(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 86);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8320E07C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320e0cc
	if (!cr6.eq) goto loc_8320E0CC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832828c8
	ctx.lr = 0x8320E098;
	sub_832828C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320E0A0:
	// lbz r11,39(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 39);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x8320e0cc
	if (!cr6.eq) goto loc_8320E0CC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83277400
	ctx.lr = 0x8320E0C4;
	sub_83277400(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320E0CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E0D8"))) PPC_WEAK_FUNC(sub_8320E0D8);
PPC_FUNC_IMPL(__imp__sub_8320E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320E0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8320e10c
	if (!cr6.eq) goto loc_8320E10C;
	// bl 0x83226ff0
	ctx.lr = 0x8320E104;
	sub_83226FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8320e150
	goto loc_8320E150;
loc_8320E10C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83226fe8
	ctx.lr = 0x8320E120;
	sub_83226FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8320e148
	if (cr6.eq) goto loc_8320E148;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320e1d4
	if (cr6.eq) goto loc_8320E1D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8320E13C;
	sub_8320CF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320E148:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bgt cr6,0x8320e1e0
	if (cr6.gt) goto loc_8320E1E0;
loc_8320E150:
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8320e1c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E1C0;
	// bdzf 4*cr6+eq,0x8320e180
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E180;
	// bdzf 4*cr6+eq,0x8320e18c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E18C;
	// bdzf 4*cr6+eq,0x8320e1a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E1A0;
	// bdzf 4*cr6+eq,0x8320e1b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E1B4;
	// bne cr6,0x8320e170
	if (!cr6.eq) goto loc_8320E170;
loc_8320E170:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8320e1c0
	goto loc_8320E1C0;
loc_8320E180:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r31,r11,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x8320e1c0
	goto loc_8320E1C0;
loc_8320E18C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// orc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// rlwinm r31,r9,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// b 0x8320e1c0
	goto loc_8320E1C0;
loc_8320E1A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r31,r9,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// b 0x8320e1c0
	goto loc_8320E1C0;
loc_8320E1B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
loc_8320E1C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320e1d4
	if (cr6.eq) goto loc_8320E1D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8320E1D4;
	sub_8320CF60(ctx, base);
loc_8320E1D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320E1E0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32460
	ctx.r4.s64 = ctx.r11.s64 + -32460;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x8320E1F8;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8320E1F8"))) PPC_WEAK_FUNC(sub_8320E1F8);
PPC_FUNC_IMPL(__imp__sub_8320E1F8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x8320e0d8
	ctx.lr = 0x8320E248;
	sub_8320E0D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x8320E254;
	sub_83222508(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320db60
	ctx.lr = 0x8320E260;
	sub_8320DB60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E278"))) PPC_WEAK_FUNC(sub_8320E278);
PPC_FUNC_IMPL(__imp__sub_8320E278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320E280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83226ff0
	ctx.lr = 0x8320E2AC;
	sub_83226FF0(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320e2d8
	if (cr6.eq) goto loc_8320E2D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320E2D8;
	sub_83222030(ctx, base);
loc_8320E2D8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320db60
	ctx.lr = 0x8320E2F0;
	sub_8320DB60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E2F8"))) PPC_WEAK_FUNC(sub_8320E2F8);
PPC_FUNC_IMPL(__imp__sub_8320E2F8) {
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
	// bl 0x83208aa0
	ctx.lr = 0x8320E310;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8320e350
	if (cr6.eq) goto loc_8320E350;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832986f8
	ctx.lr = 0x8320E328;
	sub_832986F8(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8320e338
	if (cr6.eq) goto loc_8320E338;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8320E338:
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
loc_8320E350:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83208b38
	ctx.lr = 0x8320E358;
	sub_83208B38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e3ac
	if (cr6.eq) goto loc_8320E3AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83298928
	ctx.lr = 0x8320E370;
	sub_83298928(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8320e38c
	if (cr6.eq) goto loc_8320E38C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320E38C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8320E3AC:
	// bl 0x832277e8
	ctx.lr = 0x8320E3B0;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,656
	cr6.compare<uint32_t>(ctx.r11.u32, 656, xer);
	// beq cr6,0x8320e3c4
	if (cr6.eq) goto loc_8320E3C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320E3C4:
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

__attribute__((alias("__imp__sub_8320E3D8"))) PPC_WEAK_FUNC(sub_8320E3D8);
PPC_FUNC_IMPL(__imp__sub_8320E3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r9,-652
	ctx.r10.s64 = ctx.r9.s64 + -652;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x8320e4dc
	if (cr6.gt) goto loc_8320E4DC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8320e444
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E444;
	// bdzf 4*cr6+eq,0x8320e478
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8320E478;
	// bne cr6,0x8320e4ac
	if (!cr6.eq) goto loc_8320E4AC;
	// bl 0x8320e2f8
	ctx.lr = 0x8320E414;
	sub_8320E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e518
	if (cr6.eq) goto loc_8320E518;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x83208330
	ctx.lr = 0x8320E434;
	sub_83208330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320E444:
	// bl 0x8320e2f8
	ctx.lr = 0x8320E448;
	sub_8320E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e518
	if (cr6.eq) goto loc_8320E518;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32380
	ctx.r4.s64 = ctx.r11.s64 + -32380;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x83208330
	ctx.lr = 0x8320E468;
	sub_83208330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320E478:
	// bl 0x8320e2f8
	ctx.lr = 0x8320E47C;
	sub_8320E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e518
	if (cr6.eq) goto loc_8320E518;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32412
	ctx.r4.s64 = ctx.r11.s64 + -32412;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x83208330
	ctx.lr = 0x8320E49C;
	sub_83208330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320E4AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,538
	ctx.r10.s64 = 538;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83201428
	ctx.lr = 0x8320E4CC;
	sub_83201428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320E4DC:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8320e504
	if (!cr6.eq) goto loc_8320E504;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832277f8
	ctx.lr = 0x8320E4F0;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e504
	if (!cr6.eq) goto loc_8320E504;
	// bl 0x83227908
	ctx.lr = 0x8320E500;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8320E504:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-32436
	ctx.r4.s64 = ctx.r11.s64 + -32436;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x83208330
	ctx.lr = 0x8320E518;
	sub_83208330(ctx, base);
loc_8320E518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E528"))) PPC_WEAK_FUNC(sub_8320E528);
PPC_FUNC_IMPL(__imp__sub_8320E528) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83282e30
	ctx.lr = 0x8320E544;
	sub_83282E30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320e578
	if (!cr6.eq) goto loc_8320E578;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,912
	cr6.compare<uint32_t>(ctx.r11.u32, 912, xer);
	// bne cr6,0x8320e590
	if (!cr6.eq) goto loc_8320E590;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r9,r11,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320e590
	if (cr6.eq) goto loc_8320E590;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x8320E578;
	sub_83222030(ctx, base);
loc_8320E578:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_8320E590:
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

__attribute__((alias("__imp__sub_8320E5A8"))) PPC_WEAK_FUNC(sub_8320E5A8);
PPC_FUNC_IMPL(__imp__sub_8320E5A8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832264e0
	ctx.lr = 0x8320E5EC;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320e618
	if (!cr6.eq) goto loc_8320E618;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8320E600;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320e618
	if (!cr6.eq) goto loc_8320E618;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8320E618:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320e6f0
	if (cr6.eq) goto loc_8320E6F0;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bgt cr6,0x8320e694
	if (cr6.gt) goto loc_8320E694;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bge cr6,0x8320e6b0
	if (!cr6.lt) goto loc_8320E6B0;
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8320e6dc
	if (cr6.gt) goto loc_8320E6DC;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6548
	ctx.r12.s64 = ctx.r12.s64 + -6548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320E6B0;
	case 1:
		goto loc_8320E6DC;
	case 2:
		goto loc_8320E6B0;
	case 3:
		goto loc_8320E6B0;
	case 4:
		goto loc_8320E6DC;
	case 5:
		goto loc_8320E6DC;
	case 6:
		goto loc_8320E6DC;
	case 7:
		goto loc_8320E6DC;
	case 8:
		goto loc_8320E6B0;
	case 9:
		goto loc_8320E6B0;
	default:
		return;
	}
	// lwz r25,-6480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6480);
	// lwz r25,-6436(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6436);
	// lwz r25,-6480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6480);
	// lwz r25,-6480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6480);
	// lwz r25,-6436(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6436);
	// lwz r25,-6436(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6436);
	// lwz r25,-6436(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6436);
	// lwz r25,-6436(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6436);
	// lwz r25,-6480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6480);
	// lwz r25,-6480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-6480);
loc_8320E694:
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bgt cr6,0x8320e6d4
	if (cr6.gt) goto loc_8320E6D4;
	// beq cr6,0x8320e6c0
	if (cr6.eq) goto loc_8320E6C0;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// blt cr6,0x8320e6dc
	if (cr6.lt) goto loc_8320E6DC;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x8320e6dc
	if (cr6.gt) goto loc_8320E6DC;
loc_8320E6B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8322b710
	ctx.lr = 0x8320E6BC;
	sub_8322B710(ctx, base);
	// b 0x8320e720
	goto loc_8320E720;
loc_8320E6C0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83248eb0
	ctx.lr = 0x8320E6D0;
	sub_83248EB0(ctx, base);
	// b 0x8320e720
	goto loc_8320E720;
loc_8320E6D4:
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// beq cr6,0x8320e6b0
	if (cr6.eq) goto loc_8320E6B0;
loc_8320E6DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320E6E4;
	sub_83225C80(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r9,-32280
	ctx.r4.s64 = ctx.r9.s64 + -32280;
	// b 0x8320e700
	goto loc_8320E700;
loc_8320E6F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320E6F8;
	sub_83225C80(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r9,-32316
	ctx.r4.s64 = ctx.r9.s64 + -32316;
loc_8320E700:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r8,r11,32440
	ctx.r8.s64 = ctx.r11.s64 + 32440;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83208330
	ctx.lr = 0x8320E71C;
	sub_83208330(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8320E720:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320E738"))) PPC_WEAK_FUNC(sub_8320E738);
PPC_FUNC_IMPL(__imp__sub_8320E738) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320e774
	if (cr6.eq) goto loc_8320E774;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8320e77c
	if (!cr6.eq) goto loc_8320E77C;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320E768;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e77c
	if (!cr6.eq) goto loc_8320E77C;
loc_8320E774:
	// bl 0x83227908
	ctx.lr = 0x8320E778;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8320E77C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-32252
	ctx.r5.s64 = ctx.r11.s64 + -32252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8320E794;
	sub_83297A40(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x832085e8
	ctx.lr = 0x8320E7A4;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_8320E7B8"))) PPC_WEAK_FUNC(sub_8320E7B8);
PPC_FUNC_IMPL(__imp__sub_8320E7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320E7C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320e7e4
	if (cr6.eq) goto loc_8320E7E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r30,r11,32436
	ctx.r30.s64 = ctx.r11.s64 + 32436;
	// b 0x8320e7ec
	goto loc_8320E7EC;
loc_8320E7E4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r30,r11,32432
	ctx.r30.s64 = ctx.r11.s64 + 32432;
loc_8320E7EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320e814
	if (cr6.eq) goto loc_8320E814;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8320e81c
	if (!cr6.eq) goto loc_8320E81C;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320E808;
	sub_832277F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e81c
	if (!cr6.eq) goto loc_8320E81C;
loc_8320E814:
	// bl 0x83227908
	ctx.lr = 0x8320E818;
	sub_83227908(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8320E81C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r5,r11,-32216
	ctx.r5.s64 = ctx.r11.s64 + -32216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8320E83C;
	sub_83297A40(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x832085e8
	ctx.lr = 0x8320E84C;
	sub_832085E8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320E854"))) PPC_WEAK_FUNC(sub_8320E854);
PPC_FUNC_IMPL(__imp__sub_8320E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320E858"))) PPC_WEAK_FUNC(sub_8320E858);
PPC_FUNC_IMPL(__imp__sub_8320E858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320E860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83222030
	ctx.lr = 0x8320E878;
	sub_83222030(ctx, base);
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r11,12288
	ctx.r11.s64 = 12288;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320ea88
	if (cr6.eq) goto loc_8320EA88;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// addi r9,r4,-349
	ctx.r9.s64 = ctx.r4.s64 + -349;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfic r7,r4,162
	xer.ca = ctx.r4.u32 <= 162;
	ctx.r7.s64 = 162 - ctx.r4.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8320e8e0
	if (cr6.eq) goto loc_8320E8E0;
loc_8320E8C4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x8321fd18
	ctx.lr = 0x8320E8D4;
	sub_8321FD18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320E8E0:
	// subfic r9,r4,348
	xer.ca = ctx.r4.u32 <= 348;
	ctx.r9.s64 = 348 - ctx.r4.s64;
	// addi r8,r4,-352
	ctx.r8.s64 = ctx.r4.s64 + -352;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320e8c4
	if (!cr6.eq) goto loc_8320E8C4;
	// subfic r9,r4,351
	xer.ca = ctx.r4.u32 <= 351;
	ctx.r9.s64 = 351 - ctx.r4.s64;
	// addi r8,r4,-356
	ctx.r8.s64 = ctx.r4.s64 + -356;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8320e8c4
	if (!cr6.eq) goto loc_8320E8C4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e9b8
	if (!cr6.eq) goto loc_8320E9B8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25384
	ctx.r11.s64 = ctx.r11.s64 + 25384;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320e950
	if (!cr6.eq) goto loc_8320E950;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r11,960
	ctx.r30.s64 = ctx.r11.s64 + 960;
	// b 0x8320e954
	goto loc_8320E954;
loc_8320E950:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8320E954:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320e978
	if (!cr6.eq) goto loc_8320E978;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320E968;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320e974
	if (!cr6.eq) goto loc_8320E974;
	// bl 0x83227908
	ctx.lr = 0x8320E974;
	sub_83227908(ctx, base);
loc_8320E974:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320E978:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x83225c80
	ctx.lr = 0x8320E984;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-32136
	ctx.r4.s64 = ctx.r10.s64 + -32136;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320E9AC;
	sub_832085E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320E9B8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// blt cr6,0x8320e8c4
	if (cr6.lt) goto loc_8320E8C4;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// ble cr6,0x8320e9d4
	if (!cr6.gt) goto loc_8320E9D4;
	// cmplwi cr6,r11,129
	cr6.compare<uint32_t>(ctx.r11.u32, 129, xer);
	// bne cr6,0x8320e8c4
	if (!cr6.eq) goto loc_8320E8C4;
loc_8320E9D4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83216ad0
	ctx.lr = 0x8320E9DC;
	sub_83216AD0(ctx, base);
loc_8320E9DC:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x8320ea7c
	if (!cr6.eq) goto loc_8320EA7C;
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// xori r11,r30,1255
	ctx.r11.u64 = ctx.r30.u64 ^ 1255;
	// xori r10,r30,1254
	ctx.r10.u64 = ctx.r30.u64 ^ 1254;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xori r11,r30,1253
	ctx.r11.u64 = ctx.r30.u64 ^ 1253;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// xori r11,r30,1152
	ctx.r11.u64 = ctx.r30.u64 ^ 1152;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// or r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 | ctx.r4.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8320ea7c
	if (cr6.eq) goto loc_8320EA7C;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320ea64
	if (cr6.eq) goto loc_8320EA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8320EA64;
	sub_83222030(ctx, base);
loc_8320EA64:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,29
	ctx.r10.s64 = 29;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r27,0
	ctx.r27.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_8320EA7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320EA88:
	// cmpwi cr6,r8,15
	cr6.compare<int32_t>(ctx.r8.s32, 15, xer);
	// bne cr6,0x8320ea9c
	if (!cr6.eq) goto loc_8320EA9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324bd00
	ctx.lr = 0x8320EA98;
	sub_8324BD00(ctx, base);
	// b 0x8320e9dc
	goto loc_8320E9DC;
loc_8320EA9C:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// xori r10,r11,1255
	ctx.r10.u64 = ctx.r11.u64 ^ 1255;
	// xori r9,r11,1254
	ctx.r9.u64 = ctx.r11.u64 ^ 1254;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// xori r10,r11,1253
	ctx.r10.u64 = ctx.r11.u64 ^ 1253;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// xori r10,r11,1152
	ctx.r10.u64 = ctx.r11.u64 ^ 1152;
	// srawi r9,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// or r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 | ctx.r3.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320ea7c
	if (!cr6.eq) goto loc_8320EA7C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8320e8c4
	if (!cr6.eq) goto loc_8320E8C4;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// cmplwi cr6,r11,619
	cr6.compare<uint32_t>(ctx.r11.u32, 619, xer);
	// addi r31,r10,25384
	ctx.r31.s64 = ctx.r10.s64 + 25384;
	// bne cr6,0x8320eb08
	if (!cr6.eq) goto loc_8320EB08;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320eb30
	goto loc_8320EB30;
loc_8320EB08:
	// cmplwi cr6,r11,621
	cr6.compare<uint32_t>(ctx.r11.u32, 621, xer);
	// bne cr6,0x8320eb18
	if (!cr6.eq) goto loc_8320EB18;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8320eb30
	goto loc_8320EB30;
loc_8320EB18:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32196
	ctx.r4.s64 = ctx.r11.s64 + -32196;
	// bl 0x83296d78
	ctx.lr = 0x8320EB28;
	sub_83296D78(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8320EB30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ea7c
	if (!cr6.eq) goto loc_8320EA7C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320eb54
	if (!cr6.eq) goto loc_8320EB54;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r11,960
	ctx.r30.s64 = ctx.r11.s64 + 960;
	// b 0x8320eb58
	goto loc_8320EB58;
loc_8320EB54:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8320EB58:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320eb7c
	if (!cr6.eq) goto loc_8320EB7C;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320EB6C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320eb78
	if (!cr6.eq) goto loc_8320EB78;
	// bl 0x83227908
	ctx.lr = 0x8320EB78;
	sub_83227908(ctx, base);
loc_8320EB78:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320EB7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x83225c80
	ctx.lr = 0x8320EB88;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-32180
	ctx.r4.s64 = ctx.r10.s64 + -32180;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320EBB0;
	sub_832085E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EBBC"))) PPC_WEAK_FUNC(sub_8320EBBC);
PPC_FUNC_IMPL(__imp__sub_8320EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320EBC0"))) PPC_WEAK_FUNC(sub_8320EBC0);
PPC_FUNC_IMPL(__imp__sub_8320EBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320EBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320ebf8
	if (cr6.eq) goto loc_8320EBF8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320ed08
	if (!cr6.eq) goto loc_8320ED08;
loc_8320EBF8:
	// lhz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r6,r11,-356
	ctx.r6.s64 = ctx.r11.s64 + -356;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfic r4,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r4.s64 = 162 - ctx.r11.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// and r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ctx.r7.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320ed08
	if (!cr6.eq) goto loc_8320ED08;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8320ecc4
	if (!cr6.eq) goto loc_8320ECC4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,25384
	ctx.r11.s64 = ctx.r11.s64 + 25384;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320ec54
	if (!cr6.eq) goto loc_8320EC54;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r11,960
	ctx.r30.s64 = ctx.r11.s64 + 960;
	// b 0x8320ec58
	goto loc_8320EC58;
loc_8320EC54:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8320EC58:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320ec7c
	if (cr6.eq) goto loc_8320EC7C;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320ec84
	if (!cr6.eq) goto loc_8320EC84;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320EC74;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ec80
	if (!cr6.eq) goto loc_8320EC80;
loc_8320EC7C:
	// bl 0x83227908
	ctx.lr = 0x8320EC80;
	sub_83227908(ctx, base);
loc_8320EC80:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320EC84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x83225c80
	ctx.lr = 0x8320EC90;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-32008
	ctx.r4.s64 = ctx.r10.s64 + -32008;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320ECB8;
	sub_832085E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320ECC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320ece8
	if (cr6.eq) goto loc_8320ECE8;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320ecf0
	if (!cr6.eq) goto loc_8320ECF0;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320ECE0;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ecec
	if (!cr6.eq) goto loc_8320ECEC;
loc_8320ECE8:
	// bl 0x83227908
	ctx.lr = 0x8320ECEC;
	sub_83227908(ctx, base);
loc_8320ECEC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320ECF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x83225c80
	ctx.lr = 0x8320ECFC;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r10,-32048
	ctx.r4.s64 = ctx.r10.s64 + -32048;
	// b 0x8320ed84
	goto loc_8320ED84;
loc_8320ED08:
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,122
	cr6.compare<uint32_t>(ctx.r10.u32, 122, xer);
	// blt cr6,0x8320ed44
	if (cr6.lt) goto loc_8320ED44;
	// cmplwi cr6,r10,123
	cr6.compare<uint32_t>(ctx.r10.u32, 123, xer);
	// ble cr6,0x8320ed28
	if (!cr6.gt) goto loc_8320ED28;
	// cmplwi cr6,r10,129
	cr6.compare<uint32_t>(ctx.r10.u32, 129, xer);
	// bne cr6,0x8320ed44
	if (!cr6.eq) goto loc_8320ED44;
loc_8320ED28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x83217198
	ctx.lr = 0x8320ED38;
	sub_83217198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320ED44:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8320ed68
	if (cr6.eq) goto loc_8320ED68;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320ed70
	if (!cr6.eq) goto loc_8320ED70;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8320ED60;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320ed6c
	if (!cr6.eq) goto loc_8320ED6C;
loc_8320ED68:
	// bl 0x83227908
	ctx.lr = 0x8320ED6C;
	sub_83227908(ctx, base);
loc_8320ED6C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320ED70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x83225c80
	ctx.lr = 0x8320ED7C;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r10,-32092
	ctx.r4.s64 = ctx.r10.s64 + -32092;
loc_8320ED84:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320EDA0;
	sub_832085E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EDAC"))) PPC_WEAK_FUNC(sub_8320EDAC);
PPC_FUNC_IMPL(__imp__sub_8320EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320EDB0"))) PPC_WEAK_FUNC(sub_8320EDB0);
PPC_FUNC_IMPL(__imp__sub_8320EDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320EDB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r11,-8
	ctx.r27.s64 = ctx.r11.s64 + -8;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320ee20
	if (cr6.eq) goto loc_8320EE20;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8320ee20
	if (cr6.eq) goto loc_8320EE20;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x8320ee54
	if (!cr6.eq) goto loc_8320EE54;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320ee54
	if (cr6.eq) goto loc_8320EE54;
loc_8320EE20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320EE28;
	sub_83225C80(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320EE34;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-31964
	ctx.r4.s64 = ctx.r10.s64 + -31964;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320EE54;
	sub_832085E8(ctx, base);
loc_8320EE54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x832264e0
	ctx.lr = 0x8320EE88;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8320eeb4
	if (!cr6.eq) goto loc_8320EEB4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8320EE9C;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320eeb4
	if (!cr6.eq) goto loc_8320EEB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8320EEB4:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320ebc0
	ctx.lr = 0x8320EEC8;
	sub_8320EBC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8320EED8;
	sub_8320DB60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320EEE4"))) PPC_WEAK_FUNC(sub_8320EEE4);
PPC_FUNC_IMPL(__imp__sub_8320EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320EEE8"))) PPC_WEAK_FUNC(sub_8320EEE8);
PPC_FUNC_IMPL(__imp__sub_8320EEE8) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324c880
	ctx.lr = 0x8320EF24;
	sub_8324C880(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r11,-31924
	ctx.r5.s64 = ctx.r11.s64 + -31924;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83297a40
	ctx.lr = 0x8320EF44;
	sub_83297A40(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83255a88
	ctx.lr = 0x8320EF4C;
	sub_83255A88(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x832085e8
	ctx.lr = 0x8320EF5C;
	sub_832085E8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8320EF74"))) PPC_WEAK_FUNC(sub_8320EF74);
PPC_FUNC_IMPL(__imp__sub_8320EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320EF78"))) PPC_WEAK_FUNC(sub_8320EF78);
PPC_FUNC_IMPL(__imp__sub_8320EF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8320EF80;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// bl 0x832264e0
	ctx.lr = 0x8320EFE8;
	sub_832264E0(ctx, base);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320f014
	if (!cr6.eq) goto loc_8320F014;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8320EFFC;
	sub_832277E8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320f014
	if (!cr6.eq) goto loc_8320F014;
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
loc_8320F014:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320f278
	if (cr6.eq) goto loc_8320F278;
	// lhz r3,2(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,312
	cr6.compare<uint32_t>(ctx.r3.u32, 312, xer);
	// bgt cr6,0x8320f1b4
	if (cr6.gt) goto loc_8320F1B4;
	// beq cr6,0x8320f1a8
	if (cr6.eq) goto loc_8320F1A8;
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// blt cr6,0x8320f1c4
	if (cr6.lt) goto loc_8320F1C4;
	// cmplwi cr6,r3,123
	cr6.compare<uint32_t>(ctx.r3.u32, 123, xer);
	// ble cr6,0x8320f06c
	if (!cr6.gt) goto loc_8320F06C;
	// cmplwi cr6,r3,129
	cr6.compare<uint32_t>(ctx.r3.u32, 129, xer);
	// bne cr6,0x8320f1c4
	if (!cr6.eq) goto loc_8320F1C4;
loc_8320F06C:
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320f0d8
	if (cr6.eq) goto loc_8320F0D8;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8320F08C;
	sub_83221C30(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8320f0b8
	if (!cr6.eq) goto loc_8320F0B8;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8320F0A4;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320f0b8
	if (!cr6.eq) goto loc_8320F0B8;
	// bl 0x83227908
	ctx.lr = 0x8320F0B4;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8320F0B8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-31776
	ctx.r4.s64 = ctx.r11.s64 + -31776;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320F0D0;
	sub_832085E8(ctx, base);
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8320f128
	goto loc_8320F128;
loc_8320F0D8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8320f0f4
	if (cr6.eq) goto loc_8320F0F4;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8320f14c
	if (!cr6.eq) goto loc_8320F14C;
loc_8320F0F4:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8322a890
	ctx.lr = 0x8320F0FC;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320f14c
	if (cr6.eq) goto loc_8320F14C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322d8a8
	ctx.lr = 0x8320F11C;
	sub_8322D8A8(ctx, base);
loc_8320F11C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x8320f140
	if (!cr6.eq) goto loc_8320F140;
loc_8320F128:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320F130;
	sub_83225C80(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x8320eee8
	ctx.lr = 0x8320F140;
	sub_8320EEE8(ctx, base);
loc_8320F140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8320F14C:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83221c30
	ctx.lr = 0x8320F15C;
	sub_83221C30(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8320f188
	if (!cr6.eq) goto loc_8320F188;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8320F174;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320f188
	if (!cr6.eq) goto loc_8320F188;
	// bl 0x83227908
	ctx.lr = 0x8320F184;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8320F188:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-31812
	ctx.r4.s64 = ctx.r11.s64 + -31812;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320F1A0;
	sub_832085E8(ctx, base);
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8320f128
	goto loc_8320F128;
loc_8320F1A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832497c0
	ctx.lr = 0x8320F1B0;
	sub_832497C0(ctx, base);
	// b 0x8320f11c
	goto loc_8320F11C;
loc_8320F1B4:
	// cmplwi cr6,r11,338
	cr6.compare<uint32_t>(ctx.r11.u32, 338, xer);
	// beq cr6,0x8320f26c
	if (cr6.eq) goto loc_8320F26C;
	// cmplwi cr6,r11,343
	cr6.compare<uint32_t>(ctx.r11.u32, 343, xer);
	// beq cr6,0x8320f260
	if (cr6.eq) goto loc_8320F260;
loc_8320F1C4:
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// xori r11,r3,1255
	ctx.r11.u64 = ctx.r3.u64 ^ 1255;
	// xori r10,r3,1254
	ctx.r10.u64 = ctx.r3.u64 ^ 1254;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// xori r11,r3,1253
	ctx.r11.u64 = ctx.r3.u64 ^ 1253;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xori r11,r3,1152
	ctx.r11.u64 = ctx.r3.u64 ^ 1152;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// or r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 | ctx.r4.u64;
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8320f258
	if (!cr6.eq) goto loc_8320F258;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320f230
	if (!cr6.eq) goto loc_8320F230;
	// bl 0x832277f8
	ctx.lr = 0x8320F220;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320f22c
	if (!cr6.eq) goto loc_8320F22C;
	// bl 0x83227908
	ctx.lr = 0x8320F22C;
	sub_83227908(ctx, base);
loc_8320F22C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320F230:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320F238;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-31856
	ctx.r4.s64 = ctx.r10.s64 + -31856;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320F258;
	sub_832085E8(ctx, base);
loc_8320F258:
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8320f128
	goto loc_8320F128;
loc_8320F260:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83284fe0
	ctx.lr = 0x8320F268;
	sub_83284FE0(ctx, base);
	// b 0x8320f11c
	goto loc_8320F11C;
loc_8320F26C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83236c18
	ctx.lr = 0x8320F274;
	sub_83236C18(ctx, base);
	// b 0x8320f11c
	goto loc_8320F11C;
loc_8320F278:
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// xori r11,r3,1255
	ctx.r11.u64 = ctx.r3.u64 ^ 1255;
	// xori r10,r3,1254
	ctx.r10.u64 = ctx.r3.u64 ^ 1254;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// xori r11,r3,1253
	ctx.r11.u64 = ctx.r3.u64 ^ 1253;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// srawi r10,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// xori r11,r3,1152
	ctx.r11.u64 = ctx.r3.u64 ^ 1152;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// srawi r7,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8320f258
	if (!cr6.eq) goto loc_8320F258;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8320f314
	if (!cr6.eq) goto loc_8320F314;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8320f2f4
	if (!cr6.eq) goto loc_8320F2F4;
	// bl 0x832277f8
	ctx.lr = 0x8320F2DC;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320f2f0
	if (!cr6.eq) goto loc_8320F2F0;
	// bl 0x83227908
	ctx.lr = 0x8320F2EC;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8320F2F0:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_8320F2F4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-31896
	ctx.r4.s64 = ctx.r11.s64 + -31896;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x832085e8
	ctx.lr = 0x8320F30C;
	sub_832085E8(ctx, base);
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8320f128
	goto loc_8320F128;
loc_8320F314:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8320f334
	if (!cr6.eq) goto loc_8320F334;
	// bl 0x832277f8
	ctx.lr = 0x8320F324;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8320f330
	if (!cr6.eq) goto loc_8320F330;
	// bl 0x83227908
	ctx.lr = 0x8320F330;
	sub_83227908(ctx, base);
loc_8320F330:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320F334:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320F33C;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-31856
	ctx.r4.s64 = ctx.r10.s64 + -31856;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320F35C;
	sub_832085E8(ctx, base);
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8320f128
	goto loc_8320F128;
}

__attribute__((alias("__imp__sub_8320F364"))) PPC_WEAK_FUNC(sub_8320F364);
PPC_FUNC_IMPL(__imp__sub_8320F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320F368"))) PPC_WEAK_FUNC(sub_8320F368);
PPC_FUNC_IMPL(__imp__sub_8320F368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320F370;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320ef78
	ctx.lr = 0x8320F3AC;
	sub_8320EF78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8320f3e8
	if (cr6.eq) goto loc_8320F3E8;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8320F3C4;
	sub_8320DB60(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x8320F3E8;
	sub_832240B8(ctx, base);
loc_8320F3E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8320F3F0;
	sub_83222030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320F3FC"))) PPC_WEAK_FUNC(sub_8320F3FC);
PPC_FUNC_IMPL(__imp__sub_8320F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320F400"))) PPC_WEAK_FUNC(sub_8320F400);
PPC_FUNC_IMPL(__imp__sub_8320F400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8320F408;
	__savegprlr_25(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x832264e0
	ctx.lr = 0x8320F450;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f47c
	if (!cr6.eq) goto loc_8320F47C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x8320F464;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f47c
	if (!cr6.eq) goto loc_8320F47C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8320F47C:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1035
	cr6.compare<int32_t>(ctx.r10.s32, 1035, xer);
	// blt cr6,0x8320f49c
	if (cr6.lt) goto loc_8320F49C;
	// cmpwi cr6,r10,1036
	cr6.compare<int32_t>(ctx.r10.s32, 1036, xer);
	// bgt cr6,0x8320f49c
	if (cr6.gt) goto loc_8320F49C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8320F49C:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// beq cr6,0x8320f4c4
	if (cr6.eq) goto loc_8320F4C4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8320da50
	ctx.lr = 0x8320F4C0;
	sub_8320DA50(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_8320F4C4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r26,90(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// li r25,2
	ctx.r25.s64 = 2;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r26,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r26.u8);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// bl 0x8322d8a8
	ctx.lr = 0x8320F51C;
	sub_8322D8A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x8320f564
	if (!cr6.eq) goto loc_8320F564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8324c880
	ctx.lr = 0x8320F548;
	sub_8324C880(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,-31732
	ctx.r4.s64 = ctx.r11.s64 + -31732;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x832085e8
	ctx.lr = 0x8320F564;
	sub_832085E8(ctx, base);
loc_8320F564:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8320f59c
	if (cr6.eq) goto loc_8320F59C;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320db60
	ctx.lr = 0x8320F578;
	sub_8320DB60(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x8320F59C;
	sub_832240B8(ctx, base);
loc_8320F59C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83222030
	ctx.lr = 0x8320F5A4;
	sub_83222030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320F5B0"))) PPC_WEAK_FUNC(sub_8320F5B0);
PPC_FUNC_IMPL(__imp__sub_8320F5B0) {
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
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lhz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x8320f7d0
	if (cr6.gt) goto loc_8320F7D0;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2560
	ctx.r12.s64 = ctx.r12.s64 + -2560;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320F7DC;
	case 1:
		goto loc_8320F648;
	case 2:
		goto loc_8320F640;
	case 3:
		goto loc_8320F648;
	case 4:
		goto loc_8320F648;
	case 5:
		goto loc_8320F648;
	case 6:
		goto loc_8320F648;
	case 7:
		goto loc_8320F650;
	case 8:
		goto loc_8320F648;
	case 9:
		goto loc_8320F650;
	case 10:
		goto loc_8320F648;
	case 11:
		goto loc_8320F648;
	case 12:
		goto loc_8320F658;
	case 13:
		goto loc_8320F658;
	case 14:
		goto loc_8320F648;
	case 15:
		goto loc_8320F7C0;
	default:
		return;
	}
	// lwz r25,-2084(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2084);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2496(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2496);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2480);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2480(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2480);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2472(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2472);
	// lwz r25,-2472(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2472);
	// lwz r25,-2488(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2488);
	// lwz r25,-2112(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2112);
loc_8320F640:
	// li r11,519
	ctx.r11.s64 = 519;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F648:
	// li r11,518
	ctx.r11.s64 = 518;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F650:
	// li r11,520
	ctx.r11.s64 = 520;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F658:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,-349
	ctx.r9.s64 = ctx.r11.s64 + -349;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfic r7,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r7.s64 = 162 - ctx.r11.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8320f730
	if (!cr6.eq) goto loc_8320F730;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320f730
	if (cr6.eq) goto loc_8320F730;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,129
	cr6.compare<uint32_t>(ctx.r11.u32, 129, xer);
	// bgt cr6,0x8320f738
	if (cr6.gt) goto loc_8320F738;
	// beq cr6,0x8320f730
	if (cr6.eq) goto loc_8320F730;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bgt cr6,0x8320f704
	if (cr6.gt) goto loc_8320F704;
	// beq cr6,0x8320f7c0
	if (cr6.eq) goto loc_8320F7C0;
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8320f724
	if (cr6.gt) goto loc_8320F724;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2356
	ctx.r12.s64 = ctx.r12.s64 + -2356;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320F730;
	case 1:
		goto loc_8320F730;
	case 2:
		goto loc_8320F730;
	case 3:
		goto loc_8320F730;
	case 4:
		goto loc_8320F7C8;
	case 5:
		goto loc_8320F7C8;
	case 6:
		goto loc_8320F730;
	case 7:
		goto loc_8320F730;
	case 8:
		goto loc_8320F730;
	case 9:
		goto loc_8320F730;
	case 10:
		goto loc_8320F730;
	case 11:
		goto loc_8320F730;
	case 12:
		goto loc_8320F730;
	case 13:
		goto loc_8320F730;
	default:
		return;
	}
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2104(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2104);
	// lwz r25,-2104(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2104);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
loc_8320F704:
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// bgt cr6,0x8320f724
	if (cr6.gt) goto loc_8320F724;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bge cr6,0x8320f730
	if (!cr6.lt) goto loc_8320F730;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// blt cr6,0x8320f724
	if (cr6.lt) goto loc_8320F724;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// ble cr6,0x8320f730
	if (!cr6.gt) goto loc_8320F730;
loc_8320F724:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x8321fd18
	ctx.lr = 0x8320F730;
	sub_8321FD18(ctx, base);
loc_8320F730:
	// li r11,521
	ctx.r11.s64 = 521;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F738:
	// addi r11,r11,-134
	ctx.r11.s64 = ctx.r11.s64 + -134;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x8320f724
	if (cr6.gt) goto loc_8320F724;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2212
	ctx.r12.s64 = ctx.r12.s64 + -2212;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8320F730;
	case 1:
		goto loc_8320F730;
	case 2:
		goto loc_8320F730;
	case 3:
		goto loc_8320F730;
	case 4:
		goto loc_8320F724;
	case 5:
		goto loc_8320F724;
	case 6:
		goto loc_8320F730;
	case 7:
		goto loc_8320F7C8;
	case 8:
		goto loc_8320F7C0;
	case 9:
		goto loc_8320F724;
	case 10:
		goto loc_8320F724;
	case 11:
		goto loc_8320F724;
	case 12:
		goto loc_8320F724;
	case 13:
		goto loc_8320F724;
	case 14:
		goto loc_8320F724;
	case 15:
		goto loc_8320F724;
	case 16:
		goto loc_8320F724;
	case 17:
		goto loc_8320F724;
	case 18:
		goto loc_8320F724;
	case 19:
		goto loc_8320F724;
	case 20:
		goto loc_8320F724;
	case 21:
		goto loc_8320F724;
	case 22:
		goto loc_8320F724;
	case 23:
		goto loc_8320F724;
	case 24:
		goto loc_8320F730;
	default:
		return;
	}
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
	// lwz r25,-2104(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2104);
	// lwz r25,-2112(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2112);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2268(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2268);
	// lwz r25,-2256(0)
	ctx.r25.u64 = PPC_LOAD_U32(-2256);
loc_8320F7C0:
	// li r11,525
	ctx.r11.s64 = 525;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F7C8:
	// li r11,564
	ctx.r11.s64 = 564;
	// b 0x8320f7e0
	goto loc_8320F7E0;
loc_8320F7D0:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x8321fd18
	ctx.lr = 0x8320F7DC;
	sub_8321FD18(ctx, base);
loc_8320F7DC:
	// li r11,524
	ctx.r11.s64 = 524;
loc_8320F7E0:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83223c38
	ctx.lr = 0x8320F800;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_8320F814"))) PPC_WEAK_FUNC(sub_8320F814);
PPC_FUNC_IMPL(__imp__sub_8320F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320F818"))) PPC_WEAK_FUNC(sub_8320F818);
PPC_FUNC_IMPL(__imp__sub_8320F818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8320F820;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f870
	if (!cr6.eq) goto loc_8320F870;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f870
	if (!cr6.eq) goto loc_8320F870;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320f860
	if (!cr6.eq) goto loc_8320F860;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320F860:
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8322a6f0
	ctx.lr = 0x8320F868;
	sub_8322A6F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320F870:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f934
	if (!cr6.eq) goto loc_8320F934;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320f934
	if (cr6.eq) goto loc_8320F934;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x8320f8a8
	if (cr6.eq) goto loc_8320F8A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320f8ac
	if (cr6.eq) goto loc_8320F8AC;
	// bl 0x8323a6f0
	ctx.lr = 0x8320F8A0;
	sub_8323A6F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320f8ac
	if (!cr6.eq) goto loc_8320F8AC;
loc_8320F8A8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8320F8AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f934
	if (!cr6.eq) goto loc_8320F934;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83237cb8
	ctx.lr = 0x8320F8CC;
	sub_83237CB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8320f92c
	if (!cr6.eq) goto loc_8320F92C;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// subfic r7,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r7.s64 = 162 - ctx.r11.s64;
	// addi r6,r11,-349
	ctx.r6.s64 = ctx.r11.s64 + -349;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srw r3,r9,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ctx.r4.u64;
	// and r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ctx.r3.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8320f940
	if (cr6.eq) goto loc_8320F940;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_8320F924:
	// bl 0x8320f818
	ctx.lr = 0x8320F928;
	sub_8320F818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8320F92C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8320F934;
	sub_83222030(ctx, base);
loc_8320F934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8320F940:
	// xori r11,r11,55
	ctx.r11.u64 = ctx.r11.u64 ^ 55;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8320f980
	if (cr6.eq) goto loc_8320F980;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8320f924
	goto loc_8320F924;
loc_8320F980:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83225c80
	ctx.lr = 0x8320F988;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-31712
	ctx.r4.s64 = ctx.r10.s64 + -31712;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83208568
	ctx.lr = 0x8320F9A4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8320F9A4"))) PPC_WEAK_FUNC(sub_8320F9A4);
PPC_FUNC_IMPL(__imp__sub_8320F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320F9A8"))) PPC_WEAK_FUNC(sub_8320F9A8);
PPC_FUNC_IMPL(__imp__sub_8320F9A8) {
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
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x8320f9e0
	if (cr6.lt) goto loc_8320F9E0;
loc_8320F9CC:
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
loc_8320F9E0:
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(ctx.r11.s32, 176, xer);
	// bgt cr6,0x8320fa98
	if (cr6.gt) goto loc_8320FA98;
	// beq cr6,0x8320fa70
	if (cr6.eq) goto loc_8320FA70;
	// cmpwi cr6,r11,163
	cr6.compare<int32_t>(ctx.r11.s32, 163, xer);
	// beq cr6,0x8320fa48
	if (cr6.eq) goto loc_8320FA48;
	// cmpwi cr6,r11,174
	cr6.compare<int32_t>(ctx.r11.s32, 174, xer);
	// beq cr6,0x8320fa20
	if (cr6.eq) goto loc_8320FA20;
	// cmpwi cr6,r11,175
	cr6.compare<int32_t>(ctx.r11.s32, 175, xer);
	// bne cr6,0x8320f9cc
	if (!cr6.eq) goto loc_8320F9CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r3,r10,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320FA20:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r10,0,22,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380;
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320FA48:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r10,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFE;
	// rlwinm r9,r9,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320FA70:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r12,3450
	ctx.r12.s64 = 3450;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8320FA98:
	// cmpwi cr6,r11,297
	cr6.compare<int32_t>(ctx.r11.s32, 297, xer);
	// beq cr6,0x8320fb00
	if (cr6.eq) goto loc_8320FB00;
	// cmpwi cr6,r11,298
	cr6.compare<int32_t>(ctx.r11.s32, 298, xer);
	// bne cr6,0x8320f9cc
	if (!cr6.eq) goto loc_8320F9CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r10,0,20,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF8;
	// rlwinm r9,r9,0,25,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC7F;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320f9cc
	if (cr6.eq) goto loc_8320F9CC;
	// bl 0x83220448
	ctx.lr = 0x8320FAC4;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8320fadc
	if (cr6.lt) goto loc_8320FADC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320FADC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320f9cc
	if (!cr6.eq) goto loc_8320F9CC;
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// b 0x8320fb4c
	goto loc_8320FB4C;
loc_8320FB00:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r10,0,20,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF8;
	// rlwinm r9,r9,0,25,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC7F;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320f9cc
	if (cr6.eq) goto loc_8320F9CC;
	// bl 0x83220448
	ctx.lr = 0x8320FB1C;
	sub_83220448(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
loc_8320FB4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8320fb58
	if (cr6.eq) goto loc_8320FB58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320FB58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8320FB74"))) PPC_WEAK_FUNC(sub_8320FB74);
PPC_FUNC_IMPL(__imp__sub_8320FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320FB78"))) PPC_WEAK_FUNC(sub_8320FB78);
PPC_FUNC_IMPL(__imp__sub_8320FB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8320FB80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x8320fbb0
	if (!cr6.eq) goto loc_8320FBB0;
	// li r11,276
	ctx.r11.s64 = 276;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320FBB0:
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8320fbd0
	if (!cr6.eq) goto loc_8320FBD0;
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320FBD0:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,29
	cr6.compare<int32_t>(ctx.r31.s32, 29, xer);
	// blt cr6,0x8320fc14
	if (cr6.lt) goto loc_8320FC14;
	// cmpwi cr6,r31,163
	cr6.compare<int32_t>(ctx.r31.s32, 163, xer);
	// bge cr6,0x8320fc1c
	if (!cr6.lt) goto loc_8320FC1C;
	// cmpwi cr6,r31,122
	cr6.compare<int32_t>(ctx.r31.s32, 122, xer);
	// bne cr6,0x8320fbfc
	if (!cr6.eq) goto loc_8320FBFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
loc_8320FBFC:
	// cmpwi cr6,r31,44
	cr6.compare<int32_t>(ctx.r31.s32, 44, xer);
	// bne cr6,0x8320fc08
	if (!cr6.eq) goto loc_8320FC08;
	// li r31,29
	ctx.r31.s64 = 29;
loc_8320FC08:
	// addi r11,r31,134
	ctx.r11.s64 = ctx.r31.s64 + 134;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x8320fc44
	goto loc_8320FC44;
loc_8320FC14:
	// cmpwi cr6,r31,163
	cr6.compare<int32_t>(ctx.r31.s32, 163, xer);
	// blt cr6,0x8320fc30
	if (cr6.lt) goto loc_8320FC30;
loc_8320FC1C:
	// cmpwi cr6,r31,349
	cr6.compare<int32_t>(ctx.r31.s32, 349, xer);
	// bge cr6,0x8320fc38
	if (!cr6.lt) goto loc_8320FC38;
	// li r11,189
	ctx.r11.s64 = 189;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x8320fc44
	goto loc_8320FC44;
loc_8320FC30:
	// cmpwi cr6,r31,349
	cr6.compare<int32_t>(ctx.r31.s32, 349, xer);
	// blt cr6,0x8320fc44
	if (cr6.lt) goto loc_8320FC44;
loc_8320FC38:
	// cmpwi cr6,r31,352
	cr6.compare<int32_t>(ctx.r31.s32, 352, xer);
	// bge cr6,0x8320fc44
	if (!cr6.lt) goto loc_8320FC44;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
loc_8320FC44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221440
	ctx.lr = 0x8320FC4C;
	sub_83221440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8320fc78
	if (cr6.eq) goto loc_8320FC78;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// beq cr6,0x8320fc78
	if (cr6.eq) goto loc_8320FC78;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320fc78
	if (cr6.eq) goto loc_8320FC78;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8320FC78:
	// cmpwi cr6,r31,140
	cr6.compare<int32_t>(ctx.r31.s32, 140, xer);
	// bne cr6,0x8320fcb0
	if (!cr6.eq) goto loc_8320FCB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8320fca8
	if (cr6.eq) goto loc_8320FCA8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8320FCA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8320FCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320FCBC"))) PPC_WEAK_FUNC(sub_8320FCBC);
PPC_FUNC_IMPL(__imp__sub_8320FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320FCC0"))) PPC_WEAK_FUNC(sub_8320FCC0);
PPC_FUNC_IMPL(__imp__sub_8320FCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8320FCC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x8320fb78
	ctx.lr = 0x8320FCF4;
	sub_8320FB78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8320fd10
	if (cr6.eq) goto loc_8320FD10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320f9a8
	ctx.lr = 0x8320FD08;
	sub_8320F9A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8320FD10:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320fd3c
	if (cr6.eq) goto loc_8320FD3C;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x8320f818
	ctx.lr = 0x8320FD34;
	sub_8320F818(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8320FD3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8320FD48"))) PPC_WEAK_FUNC(sub_8320FD48);
PPC_FUNC_IMPL(__imp__sub_8320FD48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8320fb78
	ctx.lr = 0x8320FD88;
	sub_8320FB78(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8320fdb0
	if (cr6.eq) goto loc_8320FDB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320f818
	ctx.lr = 0x8320FDAC;
	sub_8320F818(ctx, base);
	// b 0x8320fdb4
	goto loc_8320FDB4;
loc_8320FDB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8320FDB4:
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

__attribute__((alias("__imp__sub_8320FDCC"))) PPC_WEAK_FUNC(sub_8320FDCC);
PPC_FUNC_IMPL(__imp__sub_8320FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8320FDD0"))) PPC_WEAK_FUNC(sub_8320FDD0);
PPC_FUNC_IMPL(__imp__sub_8320FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8320FDD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r27,12288
	ctx.r27.s64 = 12288;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// beq cr6,0x8320fe88
	if (cr6.eq) goto loc_8320FE88;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,163
	cr6.compare<int32_t>(ctx.r11.s32, 163, xer);
	// blt cr6,0x8320fe48
	if (cr6.lt) goto loc_8320FE48;
	// cmpwi cr6,r11,349
	cr6.compare<int32_t>(ctx.r11.s32, 349, xer);
	// bge cr6,0x8320fe50
	if (!cr6.lt) goto loc_8320FE50;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8320feb0
	goto loc_8320FEB0;
loc_8320FE48:
	// cmpwi cr6,r11,349
	cr6.compare<int32_t>(ctx.r11.s32, 349, xer);
	// blt cr6,0x8320fe60
	if (cr6.lt) goto loc_8320FE60;
loc_8320FE50:
	// cmpwi cr6,r11,352
	cr6.compare<int32_t>(ctx.r11.s32, 352, xer);
	// bge cr6,0x8320fe60
	if (!cr6.lt) goto loc_8320FE60;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8320feb0
	goto loc_8320FEB0;
loc_8320FE60:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// bne cr6,0x8320fe74
	if (!cr6.eq) goto loc_8320FE74;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8320feb0
	goto loc_8320FEB0;
loc_8320FE74:
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// bne cr6,0x8320fe88
	if (!cr6.eq) goto loc_8320FE88;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8320feb0
	goto loc_8320FEB0;
loc_8320FE88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8320FE90;
	sub_83225C80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,32440
	ctx.r9.s64 = ctx.r11.s64 + 32440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-31672
	ctx.r4.s64 = ctx.r10.s64 + -31672;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8320FEAC;
	sub_832085E8(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8320FEB0:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8320fefc
	if (cr6.eq) goto loc_8320FEFC;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// srw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r11.u8 & 0x3F));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8320ff00
	if (cr6.eq) goto loc_8320FF00;
loc_8320FEFC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8320FF00:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ff64
	if (cr6.eq) goto loc_8320FF64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320fb78
	ctx.lr = 0x8320FF18;
	sub_8320FB78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8320ff64
	if (cr6.eq) goto loc_8320FF64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8320f9a8
	ctx.lr = 0x8320FF2C;
	sub_8320F9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320ff60
	if (cr6.eq) goto loc_8320FF60;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8320ff60
	if (!cr6.eq) goto loc_8320FF60;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,297
	cr6.compare<int32_t>(ctx.r11.s32, 297, xer);
	// beq cr6,0x8320ff5c
	if (cr6.eq) goto loc_8320FF5C;
	// cmpwi cr6,r11,298
	cr6.compare<int32_t>(ctx.r11.s32, 298, xer);
	// bne cr6,0x8320ff60
	if (!cr6.eq) goto loc_8320FF60;
loc_8320FF5C:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8320FF60:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8320FF64:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320fff4
	if (cr6.eq) goto loc_8320FFF4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320f818
	ctx.lr = 0x8320FF7C;
	sub_8320F818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320fff8
	if (cr6.eq) goto loc_8320FFF8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,164
	cr6.compare<int32_t>(ctx.r11.s32, 164, xer);
	// bne cr6,0x8320fff8
	if (!cr6.eq) goto loc_8320FFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x83272cf0
	ctx.lr = 0x8320FFA0;
	sub_83272CF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x8320ffb4
	if (cr6.eq) goto loc_8320FFB4;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
loc_8320FFB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8320fff8
	if (cr6.eq) goto loc_8320FFF8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8320fff8
	if (cr6.eq) goto loc_8320FFF8;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8320fff8
	if (!cr6.eq) goto loc_8320FFF8;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8320fff8
	if (!cr6.eq) goto loc_8320FFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8320FFF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8320FFF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210000"))) PPC_WEAK_FUNC(sub_83210000);
PPC_FUNC_IMPL(__imp__sub_83210000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83210008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320fdd0
	ctx.lr = 0x8321003C;
	sub_8320FDD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83210084
	if (!cr6.eq) goto loc_83210084;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83210084
	if (cr6.eq) goto loc_83210084;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,167
	cr6.compare<uint32_t>(ctx.r11.u32, 167, xer);
	// bne cr6,0x83210084
	if (!cr6.eq) goto loc_83210084;
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x83210080;
	sub_8320FCC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83210084:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832100ac
	if (cr6.eq) goto loc_832100AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832100AC;
	sub_83222030(ctx, base);
loc_832100AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320db60
	ctx.lr = 0x832100C4;
	sub_8320DB60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832100CC"))) PPC_WEAK_FUNC(sub_832100CC);
PPC_FUNC_IMPL(__imp__sub_832100CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832100D0"))) PPC_WEAK_FUNC(sub_832100D0);
PPC_FUNC_IMPL(__imp__sub_832100D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832100D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x832767b8
	ctx.lr = 0x832100F8;
	sub_832767B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// li r8,122
	ctx.r8.s64 = 122;
	// sth r10,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r10.u16);
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// sth r8,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r8.u16);
	// stw r26,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r26.u32);
	// stw r25,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r25.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x83200388
	ctx.lr = 0x83210138;
	sub_83200388(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x83210144
	if (cr6.lt) goto loc_83210144;
	// sth r29,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r29.u16);
loc_83210144:
	// stb r27,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r27.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83210164
	if (cr6.eq) goto loc_83210164;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// oris r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 67108864;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_83210164:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// bl 0x8320df88
	ctx.lr = 0x8321017C;
	sub_8320DF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x83210184;
	sub_832356E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321018C"))) PPC_WEAK_FUNC(sub_8321018C);
PPC_FUNC_IMPL(__imp__sub_8321018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210190"))) PPC_WEAK_FUNC(sub_83210190);
PPC_FUNC_IMPL(__imp__sub_83210190) {
	PPC_FUNC_PROLOGUE();
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vrlimi128 v63,v62,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// vcsxwfp128 v55,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v58,v61,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v57,v60,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v56,v59,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// stvx128 v55,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832101E4"))) PPC_WEAK_FUNC(sub_832101E4);
PPC_FUNC_IMPL(__imp__sub_832101E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832101E8"))) PPC_WEAK_FUNC(sub_832101E8);
PPC_FUNC_IMPL(__imp__sub_832101E8) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v62,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v57,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v56,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrghw128 v55,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrglw128 v54,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v53,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrglw128 v52,v57,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// stvx128 v55,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210238"))) PPC_WEAK_FUNC(sub_83210238);
PPC_FUNC_IMPL(__imp__sub_83210238) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltw128 v62,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v31,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v4,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v61,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v8,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v60,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v57,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// lvx128 v56,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmulfp128 v1,v56,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v29,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v30,v56,v58
	simde_mm_store_ps(ctx.v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vspltw128 v27,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vmulfp128 v28,v56,v57
	simde_mm_store_ps(ctx.v28.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vspltw128 v3,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vmulfp128 v2,v56,v55
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vspltw128 v5,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v6,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// lvx128 v12,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v7,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vspltw128 v9,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vspltw128 v10,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v11,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vmaddfp v31,v13,v31,v1
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v30,v13,v29,v30
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v1,v13,v27,v28
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v3,v13,v3,v2
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v4,v12,v4,v31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v5,v12,v5,v30
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v13,v12,v6,v1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v7,v12,v7,v3
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v8,v0,v8,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v12,v0,v9,v5
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v13,v0,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v11,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// stvx128 v8,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832102F8"))) PPC_WEAK_FUNC(sub_832102F8);
PPC_FUNC_IMPL(__imp__sub_832102F8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltw128 v10,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v9,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmulfp128 v11,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v10,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v8,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321034C"))) PPC_WEAK_FUNC(sub_8321034C);
PPC_FUNC_IMPL(__imp__sub_8321034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210350"))) PPC_WEAK_FUNC(sub_83210350);
PPC_FUNC_IMPL(__imp__sub_83210350) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw128 v62,-1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// vspltisw128 v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x2)));
	// lvx128 v59,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v57,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v56,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v25,v60,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrglw128 v55,v63,v58
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v54,v59,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v53,v63,v58
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v52,v57,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrghw128 v51,v59,v56
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v50,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrglw128 v49,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrglw128 v48,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v47,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vor128 v0,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v13,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v46,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v11,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vrlimi128 v0,v50,15,1
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 147), 15));
	// vrlimi128 v13,v49,15,2
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 15));
	// vor128 v12,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vrlimi128 v11,v49,15,1
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 147), 15));
	// vrlimi128 v46,v50,15,3
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 57), 15));
	// vmulfp128 v7,v0,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v45,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vrlimi128 v12,v50,15,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 78), 15));
	// vor128 v44,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vmulfp128 v1,v46,v11
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v10,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vrlimi128 v45,v49,15,3
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 57), 15));
	// vor128 v4,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vrlimi128 v44,v48,15,3
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 57), 15));
	// vrlimi128 v10,v48,15,2
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 78), 15));
	// vor128 v5,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vmulfp128 v31,v12,v45
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vor128 v9,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v43,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v8,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vmulfp128 v18,v10,v0
	simde_mm_store_ps(ctx.v18.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v2,v12,v11,v7
	simde_mm_store_ps(ctx.v2.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v42,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vrlimi128 v9,v48,15,1
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 147), 15));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vmulfp128 v24,v43,v12
	simde_mm_store_ps(ctx.v24.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v1,v0,v5,v1
	simde_mm_store_ps(ctx.v1.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v1.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v8,v47,15,1
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 147), 15));
	// vrlimi128 v42,v47,15,3
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 57), 15));
	// vmulfp128 v21,v9,v46
	simde_mm_store_ps(ctx.v21.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vor128 v29,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vrlimi128 v7,v47,15,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 78), 15));
	// vmulfp128 v16,v8,v10
	simde_mm_store_ps(ctx.v16.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v6,v4,v13,v31
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v31.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v31,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vmulfp128 v19,v11,v42
	simde_mm_store_ps(ctx.v19.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vor128 v3,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vmulfp128 v20,v42,v9
	simde_mm_store_ps(ctx.v20.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v17,v13,v8
	simde_mm_store_ps(ctx.v17.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v5,v43,v2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v22,v45,v7
	simde_mm_store_ps(ctx.v22.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vnmsubfp v27,v9,v12,v18
	simde_mm_store_ps(ctx.v27.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v18.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v23,v7,v43
	simde_mm_store_ps(ctx.v23.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vnmsubfp v16,v7,v9,v16
	simde_mm_store_ps(ctx.v16.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v16.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v28,v29,v8,v19
	simde_mm_store_ps(ctx.v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v19.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v29,v8,v31,v20
	simde_mm_store_ps(ctx.v29.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v20.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v17,v11,v7,v17
	simde_mm_store_ps(ctx.v17.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v17.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v5,v10,v1,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vor128 v1,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vnmsubfp v31,v1,v0,v21
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v21.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v6,v9,v6,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vor128 v9,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vnmsubfp v1,v13,v9,v22
	simde_mm_store_ps(ctx.v1.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v22.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v41,v52,v6
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmsum4fp128 v40,v47,v41
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vrefp128 v39,v40
	simde_mm_store_ps(ctx.v39.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v40.f32)));
	// vor128 v5,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vnmsubfp v2,v3,v10,v23
	simde_mm_store_ps(ctx.v2.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v23.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v6,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v9,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vnmsubfp v4,v10,v5,v24
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v24.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v10,v42,v27
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v27.f32)));
	// vnmsubfp v5,v6,v9,v25
	simde_mm_store_ps(ctx.v5.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v25.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v6,v46,v17
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v17.f32)));
	// vmulfp128 v9,v45,v16
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v16.f32)));
	// vmaddfp v10,v7,v31,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v38,v5,v39
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmaddfp v12,v12,v28,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v13,v29,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v37,v41,v38
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmaddfp v12,v0,v1,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v11,v2,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v8,v4,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v37,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v36,v52,v12
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v35,v52,v13
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v34,v52,v0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v33,v36,v38
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v32,v35,v38
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v63,v34,v38
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v38.f32)));
	// stvx128 v33,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210504"))) PPC_WEAK_FUNC(sub_83210504);
PPC_FUNC_IMPL(__imp__sub_83210504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210508"))) PPC_WEAK_FUNC(sub_83210508);
PPC_FUNC_IMPL(__imp__sub_83210508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f4,f5,f11
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f3,f5,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f9.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f5,f7
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f1,f5,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfs f5,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f13,f11,f0,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f12,f9,f0,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f11,f7,f0,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f10,f1,f5
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832105A8"))) PPC_WEAK_FUNC(sub_832105A8);
PPC_FUNC_IMPL(__imp__sub_832105A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vspltw128 v29,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvx128 v60,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v4,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmulfp128 v9,v62,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvx128 v59,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v56,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// lvx128 v0,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v1,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// lvx128 v12,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v2,v62,v58
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vspltw128 v30,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vmulfp128 v31,v62,v56
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v28,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vspltw128 v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v3,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vspltw128 v5,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f3,-8(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw128 v11,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw128 v6,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmaddfp v9,v0,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v8,v62,v55
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vspltw128 v7,v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x0));
	// vspltw128 v54,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v2,v0,v1,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v1,v0,v30,v31
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v0,v0,v28,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmaddfp v31,v13,v29,v9
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw128 v9,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v2,v13,v10,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v10,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vmaddfp v3,v13,v3,v1
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v13,v5,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v12,v4,v31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v11,v12,v11,v2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v13,v12,v6,v3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v12,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v4,v54
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v54.f32)));
	// stvx128 v4,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v9,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v0,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v53,v0,v13
	simde_mm_store_ps(ctx.v53.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v53,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832106AC"))) PPC_WEAK_FUNC(sub_832106AC);
PPC_FUNC_IMPL(__imp__sub_832106AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832106B0"))) PPC_WEAK_FUNC(sub_832106B0);
PPC_FUNC_IMPL(__imp__sub_832106B0) {
	PPC_FUNC_PROLOGUE();
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r11,23264
	ctx.r9.s64 = ctx.r11.s64 + 23264;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x0)));
	// li r8,80
	ctx.r8.s64 = 80;
	// vcfsx v12,v0,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vspltisw128 v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x2)));
	// vsrw128 v60,v63,v0
	ctx.v60.u32[0] = ctx.v63.u32[0] >> (ctx.v0.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v63.u32[1] >> (ctx.v0.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v63.u32[2] >> (ctx.v0.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v63.u32[3] >> (ctx.v0.u8[12] & 0x1F);
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
	// vspltisw128 v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_set1_epi32(int(0x4)));
	// lvx128 v63,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// vmrghw128 v1,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v11,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvx128 v9,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,112
	ctx.r4.s64 = 112;
	// lvx128 v7,r9,r6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,128
	ctx.r3.s64 = 128;
	// lvx128 v6,r9,r5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,144
	ctx.r11.s64 = 144;
	// vmulfp128 v58,v11,v63
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)));
	// li r10,160
	ctx.r10.s64 = 160;
	// vcmpgtfp128 v57,v61,v62
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v5,r9,r4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r9,r3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpuxws128 v31,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_vctuxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_set1_ps(4))));
	// vrlimi128 v57,v61,5,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 5));
	// vadduwm v30,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vandc v10,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vcfux v0,v10,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3E800000)))));
	// vadduwm v29,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vand128 v55,v29,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vand128 v54,v29,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vcmpequw128 v10,v55,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcmpequw128 v53,v54,v61
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vnmsubfp v1,v0,v13,v11
	simde_mm_store_ps(ctx.v1.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v11,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmulfp128 v0,v1,v1
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v0,v8,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v0,v6,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v0,v13,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v9,v0,v9,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v8,v0,v13,v3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v13,v0,v9,v2
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v9,v0,v8,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v0,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v1,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsubfp128 v13,v61,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v1,v13,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321079C"))) PPC_WEAK_FUNC(sub_8321079C);
PPC_FUNC_IMPL(__imp__sub_8321079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832107A0"))) PPC_WEAK_FUNC(sub_832107A0);
PPC_FUNC_IMPL(__imp__sub_832107A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832106b0
	ctx.lr = 0x832107CC;
	sub_832106B0(ctx, base);
	// vspltw128 v63,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xFF));
	// vspltw128 v62,v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xAA));
	// li r11,4
	ctx.r11.s64 = 4;
	// stvewx128 v63,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
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

__attribute__((alias("__imp__sub_832107F4"))) PPC_WEAK_FUNC(sub_832107F4);
PPC_FUNC_IMPL(__imp__sub_832107F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832107F8"))) PPC_WEAK_FUNC(sub_832107F8);
PPC_FUNC_IMPL(__imp__sub_832107F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832106b0
	ctx.lr = 0x83210824;
	sub_832106B0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stvlx v1,0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvrx v1,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v1.u8[i]);
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

__attribute__((alias("__imp__sub_83210844"))) PPC_WEAK_FUNC(sub_83210844);
PPC_FUNC_IMPL(__imp__sub_83210844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210848"))) PPC_WEAK_FUNC(sub_83210848);
PPC_FUNC_IMPL(__imp__sub_83210848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r11,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r8.s64;
	// srawi r7,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// subfic r10,r7,4
	xer.ca = ctx.r7.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r7.s64;
	// bge cr6,0x83210898
	if (!cr6.lt) goto loc_83210898;
loc_8321086C:
	// lwzu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// andc r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subfic r11,r6,32
	xer.ca = ctx.r6.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r6.s64;
	// srawi r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x8321086c
	if (cr6.lt) goto loc_8321086C;
loc_83210898:
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// xor r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832108b8
	if (!cr6.eq) goto loc_832108B8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_832108B8:
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832108C8"))) PPC_WEAK_FUNC(sub_832108C8);
PPC_FUNC_IMPL(__imp__sub_832108C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832108E4:
	// addic. r9,r11,-8
	xer.ca = ctx.r11.u32 > 7;
	ctx.r9.s64 = ctx.r11.s64 + -8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x832108fc
	if (cr0.eq) goto loc_832108FC;
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_832108FC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x832108e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832108E4;
	// blr 
	return;
}

