#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831946F8"))) PPC_WEAK_FUNC(sub_831946F8);
PPC_FUNC_IMPL(__imp__sub_831946F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26832
	ctx.r8.s64 = ctx.r11.s64 + 26832;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8319470C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x83194730
	if (cr6.eq) goto loc_83194730;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// blt cr6,0x8319470c
	if (cr6.lt) goto loc_8319470C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83194730:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194740"))) PPC_WEAK_FUNC(sub_83194740);
PPC_FUNC_IMPL(__imp__sub_83194740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26900
	ctx.r8.s64 = ctx.r11.s64 + 26900;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83194754:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x83194778
	if (cr6.eq) goto loc_83194778;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83194754
	if (cr6.lt) goto loc_83194754;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83194778:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194788"))) PPC_WEAK_FUNC(sub_83194788);
PPC_FUNC_IMPL(__imp__sub_83194788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26900
	ctx.r8.s64 = ctx.r11.s64 + 26900;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
loc_8319479C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x831947c0
	if (cr6.eq) goto loc_831947C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x8319479c
	if (cr6.lt) goto loc_8319479C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831947C0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831947CC"))) PPC_WEAK_FUNC(sub_831947CC);
PPC_FUNC_IMPL(__imp__sub_831947CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831947D0"))) PPC_WEAK_FUNC(sub_831947D0);
PPC_FUNC_IMPL(__imp__sub_831947D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831947D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x831947E4;
	sub_831156E8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// addi r31,r11,26768
	ctx.r31.s64 = ctx.r11.s64 + 26768;
	// addis r25,r30,96
	ctx.r25.s64 = ctx.r30.s64 + 6291456;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r25,-4888
	ctx.r25.s64 = ctx.r25.s64 + -4888;
	// ori r28,r10,11904
	ctx.r28.u64 = ctx.r10.u64 | 11904;
	// addi r27,r11,-3076
	ctx.r27.s64 = ctx.r11.s64 + -3076;
loc_8319480C:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83194840
	if (cr6.eq) goto loc_83194840;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_83194824:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x831948e8
	if (cr6.eq) goto loc_831948E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83194824
	if (cr6.lt) goto loc_83194824;
loc_83194840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83194844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831948cc
	if (cr6.eq) goto loc_831948CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x8319485C;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831948cc
	if (cr6.eq) goto loc_831948CC;
	// rlwinm r7,r29,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
loc_83194878:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x83194888
	if (cr6.lt) goto loc_83194888;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83194888:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x831948ac
	if (!cr6.eq) goto loc_831948AC;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831948b0
	if (cr6.eq) goto loc_831948B0;
loc_831948AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831948B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831948f0
	if (!cr6.eq) goto loc_831948F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83194878
	if (cr6.lt) goto loc_83194878;
loc_831948CC:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r26,12
	cr6.compare<uint32_t>(ctx.r26.u32, 12, xer);
	// blt cr6,0x8319480c
	if (cr6.lt) goto loc_8319480C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831948E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83194844
	goto loc_83194844;
loc_831948F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831948FC"))) PPC_WEAK_FUNC(sub_831948FC);
PPC_FUNC_IMPL(__imp__sub_831948FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83194900"))) PPC_WEAK_FUNC(sub_83194900);
PPC_FUNC_IMPL(__imp__sub_83194900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26912
	ctx.r8.s64 = ctx.r11.s64 + 26912;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
loc_83194914:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x83194938
	if (cr6.eq) goto loc_83194938;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83194914
	if (cr6.lt) goto loc_83194914;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83194938:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194944"))) PPC_WEAK_FUNC(sub_83194944);
PPC_FUNC_IMPL(__imp__sub_83194944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83194948"))) PPC_WEAK_FUNC(sub_83194948);
PPC_FUNC_IMPL(__imp__sub_83194948) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// bl 0x831156e8
	ctx.lr = 0x8319495C;
	sub_831156E8(ctx, base);
	// lhz r4,118(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82c161b8
	ctx.lr = 0x83194968;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194988
	if (!cr6.eq) goto loc_83194988;
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
loc_83194988:
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x831c63e0
	ctx.lr = 0x8319499C;
	sub_831C63E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831949b8
	if (!cr6.eq) goto loc_831949B8;
	// li r11,46
	ctx.r11.s64 = 46;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x831c63e0
	ctx.lr = 0x831949B8;
	sub_831C63E0(ctx, base);
loc_831949B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831949C8"))) PPC_WEAK_FUNC(sub_831949C8);
PPC_FUNC_IMPL(__imp__sub_831949C8) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x831949DC;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831949fc
	if (!cr6.eq) goto loc_831949FC;
loc_831949E8:
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
loc_831949FC:
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x8314e340
	ctx.lr = 0x83194A04;
	sub_8314E340(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x83194A0C;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831949e8
	if (cr6.eq) goto loc_831949E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e438
	ctx.lr = 0x83194A20;
	sub_8314E438(ctx, base);
	// addi r11,r3,-5
	ctx.r11.s64 = ctx.r3.s64 + -5;
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

__attribute__((alias("__imp__sub_83194A3C"))) PPC_WEAK_FUNC(sub_83194A3C);
PPC_FUNC_IMPL(__imp__sub_83194A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83194A40"))) PPC_WEAK_FUNC(sub_83194A40);
PPC_FUNC_IMPL(__imp__sub_83194A40) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194a64
	if (!cr6.eq) goto loc_83194A64;
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x8314e340
	ctx.lr = 0x83194A64;
	sub_8314E340(ctx, base);
loc_83194A64:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26700
	ctx.r11.s64 = ctx.r11.s64 + 26700;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83194A74:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83194aa4
	if (cr6.eq) goto loc_83194AA4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// blt cr6,0x83194a74
	if (cr6.lt) goto loc_83194A74;
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
loc_83194AA4:
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

__attribute__((alias("__imp__sub_83194AB8"))) PPC_WEAK_FUNC(sub_83194AB8);
PPC_FUNC_IMPL(__imp__sub_83194AB8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194adc
	if (!cr6.eq) goto loc_83194ADC;
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x8314e340
	ctx.lr = 0x83194ADC;
	sub_8314E340(ctx, base);
loc_83194ADC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26740
	ctx.r11.s64 = ctx.r11.s64 + 26740;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83194AEC:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83194b1c
	if (cr6.eq) goto loc_83194B1C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// blt cr6,0x83194aec
	if (cr6.lt) goto loc_83194AEC;
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
loc_83194B1C:
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

__attribute__((alias("__imp__sub_83194B30"))) PPC_WEAK_FUNC(sub_83194B30);
PPC_FUNC_IMPL(__imp__sub_83194B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26568
	ctx.r11.s64 = ctx.r11.s64 + 26568;
loc_83194B3C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83194b60
	if (cr6.eq) goto loc_83194B60;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// blt cr6,0x83194b3c
	if (cr6.lt) goto loc_83194B3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83194B60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194B68"))) PPC_WEAK_FUNC(sub_83194B68);
PPC_FUNC_IMPL(__imp__sub_83194B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26780
	ctx.r11.s64 = ctx.r11.s64 + 26780;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83194B7C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83194ba0
	if (cr6.eq) goto loc_83194BA0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// blt cr6,0x83194b7c
	if (cr6.lt) goto loc_83194B7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83194BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194BA8"))) PPC_WEAK_FUNC(sub_83194BA8);
PPC_FUNC_IMPL(__imp__sub_83194BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
loc_83194BB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83194bd8
	if (cr6.eq) goto loc_83194BD8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// blt cr6,0x83194bb4
	if (cr6.lt) goto loc_83194BB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83194BD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83194BE0"))) PPC_WEAK_FUNC(sub_83194BE0);
PPC_FUNC_IMPL(__imp__sub_83194BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83194BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83194BF8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83194C08;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194c2c
	if (!cr6.eq) goto loc_83194C2C;
loc_83194C14:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3076);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83194C2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x83194C38;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83194c14
	if (!cr6.eq) goto loc_83194C14;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83194c14
	if (cr6.eq) goto loc_83194C14;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,54
	ctx.r10.s64 = 54;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831c64a0
	ctx.lr = 0x83194C70;
	sub_831C64A0(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8315bf10
	ctx.lr = 0x83194C7C;
	sub_8315BF10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83194C88"))) PPC_WEAK_FUNC(sub_83194C88);
PPC_FUNC_IMPL(__imp__sub_83194C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83194C90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x831156e8
	ctx.lr = 0x83194CA8;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83194CB8;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194cd0
	if (!cr6.eq) goto loc_83194CD0;
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83194CD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c338
	ctx.lr = 0x83194CDC;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// rlwinm r25,r10,25,26,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3F;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83194e2c
	if (cr6.eq) goto loc_83194E2C;
	// addi r26,r11,96
	ctx.r26.s64 = ctx.r11.s64 + 96;
	// lis r11,99
	ctx.r11.s64 = 6488064;
	// ori r31,r11,11884
	ctx.r31.u64 = ctx.r11.u64 | 11884;
loc_83194D04:
	// cmplwi cr6,r27,58
	cr6.compare<uint32_t>(ctx.r27.u32, 58, xer);
	// bge cr6,0x83194d18
	if (!cr6.lt) goto loc_83194D18;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x83194d20
	if (cr6.lt) goto loc_83194D20;
loc_83194D18:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// b 0x83194d2c
	goto loc_83194D2C;
loc_83194D20:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83194D2C:
	// lwz r4,516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r4,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83194e1c
	if (cr6.eq) goto loc_83194E1C;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_83194D4C:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bge cr6,0x83194d5c
	if (!cr6.lt) goto loc_83194D5C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83194D5C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// rlwinm r24,r11,14,18,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r24,r9
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, xer);
	// bne cr6,0x83194d84
	if (!cr6.eq) goto loc_83194D84;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83194d88
	if (cr6.eq) goto loc_83194D88;
loc_83194D84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83194D88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194dd0
	if (!cr6.eq) goto loc_83194DD0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83194dbc
	if (!cr6.eq) goto loc_83194DBC;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83194dc0
	if (cr6.eq) goto loc_83194DC0;
loc_83194DBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83194DC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83194dd4
	if (cr6.eq) goto loc_83194DD4;
loc_83194DD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83194DD4:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83194de8
	if (cr6.eq) goto loc_83194DE8;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_83194DE8:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83194df8
	if (cr6.eq) goto loc_83194DF8;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_83194DF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194e18
	if (!cr6.eq) goto loc_83194E18;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x83194d4c
	if (cr6.lt) goto loc_83194D4C;
	// b 0x83194e1c
	goto loc_83194E1C;
loc_83194E18:
	// clrlwi r3,r4,26
	ctx.r3.u64 = ctx.r4.u32 & 0x3F;
loc_83194E1C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x83194d04
	if (cr6.lt) goto loc_83194D04;
loc_83194E2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83194E34"))) PPC_WEAK_FUNC(sub_83194E34);
PPC_FUNC_IMPL(__imp__sub_83194E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83194E38"))) PPC_WEAK_FUNC(sub_83194E38);
PPC_FUNC_IMPL(__imp__sub_83194E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83194E40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83194E4C;
	sub_831156E8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// addi r28,r11,26700
	ctx.r28.s64 = ctx.r11.s64 + 26700;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r29,r10,60648
	ctx.r29.u64 = ctx.r10.u64 | 60648;
	// ori r26,r9,11904
	ctx.r26.u64 = ctx.r9.u64 | 11904;
	// addi r27,r11,-3076
	ctx.r27.s64 = ctx.r11.s64 + -3076;
loc_83194E74:
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83194f3c
	if (cr6.eq) goto loc_83194F3C;
	// lwzx r9,r31,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83194eb4
	if (cr6.eq) goto loc_83194EB4;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
loc_83194E98:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x83194f58
	if (cr6.eq) goto loc_83194F58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83194e98
	if (cr6.lt) goto loc_83194E98;
loc_83194EB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83194EB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83194f3c
	if (cr6.eq) goto loc_83194F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x83194ECC;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83194f3c
	if (cr6.eq) goto loc_83194F3C;
	// rlwinm r7,r30,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
loc_83194EE8:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x83194ef8
	if (cr6.lt) goto loc_83194EF8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83194EF8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83194f1c
	if (!cr6.eq) goto loc_83194F1C;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83194f20
	if (cr6.eq) goto loc_83194F20;
loc_83194F1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83194F20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194f60
	if (!cr6.eq) goto loc_83194F60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83194ee8
	if (cr6.lt) goto loc_83194EE8;
loc_83194F3C:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r25,38
	cr6.compare<uint32_t>(ctx.r25.u32, 38, xer);
	// blt cr6,0x83194e74
	if (cr6.lt) goto loc_83194E74;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83194F58:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83194eb8
	goto loc_83194EB8;
loc_83194F60:
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83194F6C"))) PPC_WEAK_FUNC(sub_83194F6C);
PPC_FUNC_IMPL(__imp__sub_83194F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83194F70"))) PPC_WEAK_FUNC(sub_83194F70);
PPC_FUNC_IMPL(__imp__sub_83194F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83194F78;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x83194F90;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83194F98;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83194fb8
	if (!cr6.eq) goto loc_83194FB8;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x83194FB4;
	sub_83123778(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83194FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83194FC4;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83194fdc
	if (!cr6.eq) goto loc_83194FDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83194FDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c338
	ctx.lr = 0x83194FE8;
	sub_8311C338(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83195168
	if (cr6.eq) goto loc_83195168;
	// lis r10,99
	ctx.r10.s64 = 6488064;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r19,r3,96
	ctx.r19.s64 = ctx.r3.s64 + 96;
	// ori r21,r10,11884
	ctx.r21.u64 = ctx.r10.u64 | 11884;
	// addi r22,r11,-3076
	ctx.r22.s64 = ctx.r11.s64 + -3076;
loc_83195014:
	// cmplwi cr6,r20,58
	cr6.compare<uint32_t>(ctx.r20.u32, 58, xer);
	// bge cr6,0x83195028
	if (!cr6.lt) goto loc_83195028;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x83195030
	if (cr6.lt) goto loc_83195030;
loc_83195028:
	// add r24,r27,r21
	ctx.r24.u64 = ctx.r27.u64 + ctx.r21.u64;
	// b 0x8319503c
	goto loc_8319503C;
loc_83195030:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r24,r11,r21
	ctx.r24.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8319503C:
	// lwz r11,516(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 516);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83195150
	if (cr6.eq) goto loc_83195150;
	// addi r23,r24,4
	ctx.r23.s64 = ctx.r24.s64 + 4;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_83195058:
	// cmplwi cr6,r25,16
	cr6.compare<uint32_t>(ctx.r25.u32, 16, xer);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bge cr6,0x83195068
	if (!cr6.lt) goto loc_83195068;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83195068:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8319506C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312db38
	ctx.lr = 0x83195078;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8319512c
	if (cr6.eq) goto loc_8319512C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x83195090;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82635618
	ctx.lr = 0x831950A0;
	sub_82635618(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195118
	if (cr6.eq) goto loc_83195118;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831950d4
	if (!cr6.eq) goto loc_831950D4;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831950d8
	if (cr6.eq) goto loc_831950D8;
loc_831950D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831950D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195118
	if (!cr6.eq) goto loc_83195118;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83195108
	if (!cr6.eq) goto loc_83195108;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319510c
	if (cr6.eq) goto loc_8319510C;
loc_83195108:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319510C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319512c
	if (cr6.eq) goto loc_8319512C;
loc_83195118:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319512c
	if (!cr6.eq) goto loc_8319512C;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8319512C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x8319506c
	if (cr6.lt) goto loc_8319506C;
	// lwz r11,516(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 516);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// blt cr6,0x83195058
	if (cr6.lt) goto loc_83195058;
loc_83195150:
	// lwz r11,532(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 532);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// blt cr6,0x83195014
	if (cr6.lt) goto loc_83195014;
loc_83195168:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83195174"))) PPC_WEAK_FUNC(sub_83195174);
PPC_FUNC_IMPL(__imp__sub_83195174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83195178"))) PPC_WEAK_FUNC(sub_83195178);
PPC_FUNC_IMPL(__imp__sub_83195178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83195180;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x83195198;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x831951A0;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x831951c0
	if (!cr6.eq) goto loc_831951C0;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x831951BC;
	sub_83123778(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831951C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c161b8
	ctx.lr = 0x831951CC;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195440
	if (cr6.eq) goto loc_83195440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c338
	ctx.lr = 0x831951E4;
	sub_8311C338(ctx, base);
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83195440
	if (cr6.eq) goto loc_83195440;
	// lis r11,99
	ctx.r11.s64 = 6488064;
	// addi r18,r3,96
	ctx.r18.s64 = ctx.r3.s64 + 96;
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// ori r21,r11,11884
	ctx.r21.u64 = ctx.r11.u64 | 11884;
loc_8319520C:
	// cmplwi cr6,r19,58
	cr6.compare<uint32_t>(ctx.r19.u32, 58, xer);
	// bge cr6,0x83195220
	if (!cr6.lt) goto loc_83195220;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x83195228
	if (cr6.lt) goto loc_83195228;
loc_83195220:
	// add r23,r28,r21
	ctx.r23.u64 = ctx.r28.u64 + ctx.r21.u64;
	// b 0x83195234
	goto loc_83195234;
loc_83195228:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r23,r11,r21
	ctx.r23.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_83195234:
	// lwz r11,516(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 516);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83195428
	if (cr6.eq) goto loc_83195428;
	// addi r22,r23,4
	ctx.r22.s64 = ctx.r23.s64 + 4;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83195250:
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bge cr6,0x83195260
	if (!cr6.lt) goto loc_83195260;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_83195260:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83195264:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8312db38
	ctx.lr = 0x83195270;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83195404
	if (cr6.eq) goto loc_83195404;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x83195288;
	sub_8311C3D8(ctx, base);
	// lwz r11,-3076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3076);
	// rlwinm r10,r30,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831952b0
	if (!cr6.eq) goto loc_831952B0;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831952b4
	if (cr6.eq) goto loc_831952B4;
loc_831952B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831952B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195328
	if (!cr6.eq) goto loc_83195328;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831952e4
	if (!cr6.eq) goto loc_831952E4;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831952e8
	if (cr6.eq) goto loc_831952E8;
loc_831952E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831952E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195328
	if (!cr6.eq) goto loc_83195328;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83195318
	if (!cr6.eq) goto loc_83195318;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319531c
	if (cr6.eq) goto loc_8319531C;
loc_83195318:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319531C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195404
	if (cr6.eq) goto loc_83195404;
loc_83195328:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83195404
	if (!cr6.eq) goto loc_83195404;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,-3076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3076);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83195368
	if (!cr6.eq) goto loc_83195368;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319536c
	if (cr6.eq) goto loc_8319536C;
loc_83195368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319536C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195404
	if (!cr6.eq) goto loc_83195404;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319539c
	if (!cr6.eq) goto loc_8319539C;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831953a0
	if (cr6.eq) goto loc_831953A0;
loc_8319539C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831953A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195404
	if (!cr6.eq) goto loc_83195404;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831953d0
	if (!cr6.eq) goto loc_831953D0;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831953d4
	if (cr6.eq) goto loc_831953D4;
loc_831953D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831953D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195404
	if (cr6.eq) goto loc_83195404;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831953f8
	if (cr6.eq) goto loc_831953F8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83195404
	if (!cr6.eq) goto loc_83195404;
loc_831953F8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_83195404:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x83195264
	if (cr6.lt) goto loc_83195264;
	// lwz r11,516(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 516);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x83195250
	if (cr6.lt) goto loc_83195250;
loc_83195428:
	// lwz r11,532(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 532);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, xer);
	// blt cr6,0x8319520c
	if (cr6.lt) goto loc_8319520C;
loc_83195440:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83195448"))) PPC_WEAK_FUNC(sub_83195448);
PPC_FUNC_IMPL(__imp__sub_83195448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83195450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r3.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83195460;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,134(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314f1e8
	ctx.lr = 0x83195470;
	sub_8314F1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83195524
	if (cr6.eq) goto loc_83195524;
	// addi r3,r1,134
	ctx.r3.s64 = ctx.r1.s64 + 134;
	// bl 0x8314e438
	ctx.lr = 0x83195484;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83195524
	if (!cr6.eq) goto loc_83195524;
	// lhz r30,134(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8319549C;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195524
	if (cr6.eq) goto loc_83195524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831177a0
	ctx.lr = 0x831954B4;
	sub_831177A0(ctx, base);
	// lwz r7,2116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2116);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83195524
	if (cr6.eq) goto loc_83195524;
	// addi r6,r3,52
	ctx.r6.s64 = ctx.r3.s64 + 52;
	// rlwinm r5,r29,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_831954D0:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bge cr6,0x831954e0
	if (!cr6.lt) goto loc_831954E0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831954E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x83195504
	if (!cr6.eq) goto loc_83195504;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83195508
	if (cr6.eq) goto loc_83195508;
loc_83195504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83195508:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195530
	if (!cr6.eq) goto loc_83195530;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x831954d0
	if (cr6.lt) goto loc_831954D0;
loc_83195524:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195530:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r11,6,26,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83195540"))) PPC_WEAK_FUNC(sub_83195540);
PPC_FUNC_IMPL(__imp__sub_83195540) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x83195554;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195574
	if (!cr6.eq) goto loc_83195574;
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
loc_83195574:
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x8314e438
	ctx.lr = 0x8319557C;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831955bc
	if (cr6.eq) goto loc_831955BC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x831955bc
	if (cr6.eq) goto loc_831955BC;
	// lhz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x831955bc
	if (cr6.eq) goto loc_831955BC;
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(ctx.r11.u32, 77, xer);
	// beq cr6,0x831955bc
	if (cr6.eq) goto loc_831955BC;
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
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
loc_831955BC:
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

__attribute__((alias("__imp__sub_831955D0"))) PPC_WEAK_FUNC(sub_831955D0);
PPC_FUNC_IMPL(__imp__sub_831955D0) {
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
	// sth r3,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r3.u16);
	// bl 0x831156e8
	ctx.lr = 0x831955EC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,134(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314f1e8
	ctx.lr = 0x831955FC;
	sub_8314F1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83195610
	if (!cr6.eq) goto loc_83195610;
loc_83195608:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8319568c
	goto loc_8319568C;
loc_83195610:
	// lhz r30,134(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83195620;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195608
	if (cr6.eq) goto loc_83195608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x83195638;
	sub_8311C338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,134
	ctx.r3.s64 = ctx.r1.s64 + 134;
	// bl 0x8314e438
	ctx.lr = 0x83195644;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83195608
	if (cr6.eq) goto loc_83195608;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83195660
	if (!cr6.eq) goto loc_83195660;
loc_83195658:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8319568c
	goto loc_8319568C;
loc_83195660:
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8314e438
	ctx.lr = 0x83195670;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83195658
	if (cr6.eq) goto loc_83195658;
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// addis r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8319568C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831956A4"))) PPC_WEAK_FUNC(sub_831956A4);
PPC_FUNC_IMPL(__imp__sub_831956A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831956A8"))) PPC_WEAK_FUNC(sub_831956A8);
PPC_FUNC_IMPL(__imp__sub_831956A8) {
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
	// sth r3,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r3.u16);
	// bl 0x831156e8
	ctx.lr = 0x831956C4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,134(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314f1e8
	ctx.lr = 0x831956D4;
	sub_8314F1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831956e8
	if (!cr6.eq) goto loc_831956E8;
loc_831956E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83195738
	goto loc_83195738;
loc_831956E8:
	// lhz r30,134(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x831956F8;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831956e0
	if (cr6.eq) goto loc_831956E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x83195710;
	sub_8311C338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,134
	ctx.r3.s64 = ctx.r1.s64 + 134;
	// bl 0x8314e438
	ctx.lr = 0x8319571C;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x831956e0
	if (cr6.eq) goto loc_831956E0;
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// addis r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83195738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195750"))) PPC_WEAK_FUNC(sub_83195750);
PPC_FUNC_IMPL(__imp__sub_83195750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bgt cr6,0x831958a8
	if (cr6.gt) goto loc_831958A8;
	// lis r12,-31975
	ctx.r12.s64 = -2095513600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22388
	ctx.r12.s64 = ctx.r12.s64 + 22388;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83195828;
	case 1:
		goto loc_83195838;
	case 2:
		goto loc_83195848;
	case 3:
		goto loc_83195858;
	case 4:
		goto loc_83195860;
	case 5:
		goto loc_83195870;
	case 6:
		goto loc_83195880;
	case 7:
		goto loc_83195888;
	case 8:
		goto loc_83195890;
	case 9:
		goto loc_83195878;
	case 10:
		goto loc_83195898;
	case 11:
		goto loc_831958A0;
	case 12:
		goto loc_831958A8;
	case 13:
		goto loc_831958A8;
	case 14:
		goto loc_831958A8;
	case 15:
		goto loc_831958A8;
	case 16:
		goto loc_831958A8;
	case 17:
		goto loc_831958A8;
	case 18:
		goto loc_831958A8;
	case 19:
		goto loc_831958A8;
	case 20:
		goto loc_831958A8;
	case 21:
		goto loc_831958A8;
	case 22:
		goto loc_831958A8;
	case 23:
		goto loc_831958A8;
	case 24:
		goto loc_831958A8;
	case 25:
		goto loc_831958A8;
	case 26:
		goto loc_831958A8;
	case 27:
		goto loc_831958A8;
	case 28:
		goto loc_831958A8;
	case 29:
		goto loc_831958A8;
	case 30:
		goto loc_831958A8;
	case 31:
		goto loc_831958A8;
	case 32:
		goto loc_831958A8;
	case 33:
		goto loc_831958A8;
	case 34:
		goto loc_831958A8;
	case 35:
		goto loc_831958A8;
	case 36:
		goto loc_831958A8;
	case 37:
		goto loc_831958A8;
	case 38:
		goto loc_831958A8;
	case 39:
		goto loc_831958A8;
	case 40:
		goto loc_831958A8;
	case 41:
		goto loc_83195830;
	case 42:
		goto loc_83195868;
	case 43:
		goto loc_83195840;
	case 44:
		goto loc_83195850;
	default:
		return;
	}
	// lwz r24,22568(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22568);
	// lwz r24,22584(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22584);
	// lwz r24,22600(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22600);
	// lwz r24,22616(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22616);
	// lwz r24,22624(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22624);
	// lwz r24,22640(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22640);
	// lwz r24,22656(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22656);
	// lwz r24,22664(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22664);
	// lwz r24,22672(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22672);
	// lwz r24,22648(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22648);
	// lwz r24,22680(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22680);
	// lwz r24,22688(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22688);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22696(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22696);
	// lwz r24,22576(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22576);
	// lwz r24,22632(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22632);
	// lwz r24,22592(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22592);
	// lwz r24,22608(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22608);
loc_83195828:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83195830:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_83195838:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83195840:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_83195848:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83195850:
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
loc_83195858:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_83195860:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83195868:
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
loc_83195870:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_83195878:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_83195880:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_83195888:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_83195890:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_83195898:
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_831958A0:
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
loc_831958A8:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831958B4"))) PPC_WEAK_FUNC(sub_831958B4);
PPC_FUNC_IMPL(__imp__sub_831958B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831958B8"))) PPC_WEAK_FUNC(sub_831958B8);
PPC_FUNC_IMPL(__imp__sub_831958B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,27120
	ctx.r8.s64 = ctx.r10.s64 + 27120;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831958C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x831958f4
	if (cr6.eq) goto loc_831958F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// blt cr6,0x831958c8
	if (cr6.lt) goto loc_831958C8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-3128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3128);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831958F0:
	// blr 
	return;
loc_831958F4:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ble cr6,0x831958f0
	if (!cr6.gt) goto loc_831958F0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195918"))) PPC_WEAK_FUNC(sub_83195918);
PPC_FUNC_IMPL(__imp__sub_83195918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bne cr6,0x8319594c
	if (!cr6.eq) goto loc_8319594C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83195944
	if (cr6.lt) goto loc_83195944;
	// beq cr6,0x8319593c
	if (cr6.eq) goto loc_8319593C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x83195980
	if (!cr6.lt) goto loc_83195980;
	// li r3,10201
	ctx.r3.s64 = 10201;
	// blr 
	return;
loc_8319593C:
	// li r3,10200
	ctx.r3.s64 = 10200;
	// blr 
	return;
loc_83195944:
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
loc_8319594C:
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// bne cr6,0x83195980
	if (!cr6.eq) goto loc_83195980;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83195978
	if (cr6.lt) goto loc_83195978;
	// beq cr6,0x83195970
	if (cr6.eq) goto loc_83195970;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x83195980
	if (!cr6.lt) goto loc_83195980;
	// li r3,13401
	ctx.r3.s64 = 13401;
	// blr 
	return;
loc_83195970:
	// li r3,13400
	ctx.r3.s64 = 13400;
	// blr 
	return;
loc_83195978:
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
loc_83195980:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195988"))) PPC_WEAK_FUNC(sub_83195988);
PPC_FUNC_IMPL(__imp__sub_83195988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,13400
	cr6.compare<int32_t>(ctx.r11.s32, 13400, xer);
	// bgt cr6,0x831959b0
	if (cr6.gt) goto loc_831959B0;
	// beq cr6,0x831959a8
	if (cr6.eq) goto loc_831959A8;
	// cmpwi cr6,r11,10200
	cr6.compare<int32_t>(ctx.r11.s32, 10200, xer);
	// beq cr6,0x831959a8
	if (cr6.eq) goto loc_831959A8;
	// cmpwi cr6,r11,10201
	cr6.compare<int32_t>(ctx.r11.s32, 10201, xer);
	// b 0x831959b4
	goto loc_831959B4;
loc_831959A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831959B0:
	// cmpwi cr6,r11,13401
	cr6.compare<int32_t>(ctx.r11.s32, 13401, xer);
loc_831959B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831959C4"))) PPC_WEAK_FUNC(sub_831959C4);
PPC_FUNC_IMPL(__imp__sub_831959C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831959C8"))) PPC_WEAK_FUNC(sub_831959C8);
PPC_FUNC_IMPL(__imp__sub_831959C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x831959D0;
	__savegprlr_22(ctx, base);
	// li r7,25
	ctx.r7.s64 = 25;
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r7,-332(r1)
	PPC_STORE_U16(ctx.r1.u32 + -332, ctx.r7.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// sth r7,-324(r1)
	PPC_STORE_U16(ctx.r1.u32 + -324, ctx.r7.u16);
	// li r7,23
	ctx.r7.s64 = 23;
	// sth r8,-310(r1)
	PPC_STORE_U16(ctx.r1.u32 + -310, ctx.r8.u16);
	// li r6,17
	ctx.r6.s64 = 17;
	// sth r8,-296(r1)
	PPC_STORE_U16(ctx.r1.u32 + -296, ctx.r8.u16);
	// li r8,86
	ctx.r8.s64 = 86;
	// sth r9,-276(r1)
	PPC_STORE_U16(ctx.r1.u32 + -276, ctx.r9.u16);
	// li r30,26
	ctx.r30.s64 = 26;
	// sth r9,-268(r1)
	PPC_STORE_U16(ctx.r1.u32 + -268, ctx.r9.u16);
	// li r9,87
	ctx.r9.s64 = 87;
	// sth r8,-368(r1)
	PPC_STORE_U16(ctx.r1.u32 + -368, ctx.r8.u16);
	// li r8,19
	ctx.r8.s64 = 19;
	// sth r7,-360(r1)
	PPC_STORE_U16(ctx.r1.u32 + -360, ctx.r7.u16);
	// li r7,88
	ctx.r7.s64 = 88;
	// sth r6,-366(r1)
	PPC_STORE_U16(ctx.r1.u32 + -366, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r6,-352(r1)
	PPC_STORE_U16(ctx.r1.u32 + -352, ctx.r6.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,21
	ctx.r31.s64 = 21;
	// sth r9,-340(r1)
	PPC_STORE_U16(ctx.r1.u32 + -340, ctx.r9.u16);
	// li r5,28
	ctx.r5.s64 = 28;
	// sth r8,-338(r1)
	PPC_STORE_U16(ctx.r1.u32 + -338, ctx.r8.u16);
	// li r6,50
	ctx.r6.s64 = 50;
	// sth r7,-312(r1)
	PPC_STORE_U16(ctx.r1.u32 + -312, ctx.r7.u16);
	// li r29,89
	ctx.r29.s64 = 89;
	// sth r30,-304(r1)
	PPC_STORE_U16(ctx.r1.u32 + -304, ctx.r30.u16);
	// li r28,18
	ctx.r28.s64 = 18;
	// stw r10,-364(r1)
	PPC_STORE_U32(ctx.r1.u32 + -364, ctx.r10.u32);
	// li r27,90
	ctx.r27.s64 = 90;
	// stw r10,-356(r1)
	PPC_STORE_U32(ctx.r1.u32 + -356, ctx.r10.u32);
	// li r26,27
	ctx.r26.s64 = 27;
	// stw r11,-348(r1)
	PPC_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// li r25,91
	ctx.r25.s64 = 91;
	// stw r11,-344(r1)
	PPC_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// li r24,22
	ctx.r24.s64 = 22;
	// stw r10,-336(r1)
	PPC_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// li r23,95
	ctx.r23.s64 = 95;
	// stw r10,-328(r1)
	PPC_STORE_U32(ctx.r1.u32 + -328, ctx.r10.u32);
	// li r22,53
	ctx.r22.s64 = 53;
	// stw r11,-320(r1)
	PPC_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// stw r11,-316(r1)
	PPC_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// li r7,54
	ctx.r7.s64 = 54;
	// stw r10,-308(r1)
	PPC_STORE_U32(ctx.r1.u32 + -308, ctx.r10.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stw r10,-300(r1)
	PPC_STORE_U32(ctx.r1.u32 + -300, ctx.r10.u32);
	// li r9,55
	ctx.r9.s64 = 55;
	// stw r11,-292(r1)
	PPC_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// li r30,96
	ctx.r30.s64 = 96;
	// stw r11,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// sth r29,-284(r1)
	PPC_STORE_U16(ctx.r1.u32 + -284, ctx.r29.u16);
	// sth r28,-282(r1)
	PPC_STORE_U16(ctx.r1.u32 + -282, ctx.r28.u16);
	// stw r10,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// stw r10,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// stw r11,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r11.u32);
	// stw r11,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r11.u32);
	// sth r27,-256(r1)
	PPC_STORE_U16(ctx.r1.u32 + -256, ctx.r27.u16);
	// sth r31,-254(r1)
	PPC_STORE_U16(ctx.r1.u32 + -254, ctx.r31.u16);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// sth r26,-248(r1)
	PPC_STORE_U16(ctx.r1.u32 + -248, ctx.r26.u16);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// sth r31,-240(r1)
	PPC_STORE_U16(ctx.r1.u32 + -240, ctx.r31.u16);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// sth r25,-228(r1)
	PPC_STORE_U16(ctx.r1.u32 + -228, ctx.r25.u16);
	// sth r24,-226(r1)
	PPC_STORE_U16(ctx.r1.u32 + -226, ctx.r24.u16);
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// sth r5,-220(r1)
	PPC_STORE_U16(ctx.r1.u32 + -220, ctx.r5.u16);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// sth r5,-212(r1)
	PPC_STORE_U16(ctx.r1.u32 + -212, ctx.r5.u16);
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// sth r23,-200(r1)
	PPC_STORE_U16(ctx.r1.u32 + -200, ctx.r23.u16);
	// sth r6,-198(r1)
	PPC_STORE_U16(ctx.r1.u32 + -198, ctx.r6.u16);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// sth r22,-192(r1)
	PPC_STORE_U16(ctx.r1.u32 + -192, ctx.r22.u16);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// sth r6,-184(r1)
	PPC_STORE_U16(ctx.r1.u32 + -184, ctx.r6.u16);
	// li r6,51
	ctx.r6.s64 = 51;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r31,30
	ctx.r31.s64 = 30;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// li r29,97
	ctx.r29.s64 = 97;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// li r28,52
	ctx.r28.s64 = 52;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// sth r9,-108(r1)
	PPC_STORE_U16(ctx.r1.u32 + -108, ctx.r9.u16);
	// sth r9,-100(r1)
	PPC_STORE_U16(ctx.r1.u32 + -100, ctx.r9.u16);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// sth r30,-172(r1)
	PPC_STORE_U16(ctx.r1.u32 + -172, ctx.r30.u16);
	// sth r6,-170(r1)
	PPC_STORE_U16(ctx.r1.u32 + -170, ctx.r6.u16);
	// sth r7,-164(r1)
	PPC_STORE_U16(ctx.r1.u32 + -164, ctx.r7.u16);
	// sth r7,-156(r1)
	PPC_STORE_U16(ctx.r1.u32 + -156, ctx.r7.u16);
	// sth r5,-144(r1)
	PPC_STORE_U16(ctx.r1.u32 + -144, ctx.r5.u16);
	// sth r31,-142(r1)
	PPC_STORE_U16(ctx.r1.u32 + -142, ctx.r31.u16);
	// sth r8,-136(r1)
	PPC_STORE_U16(ctx.r1.u32 + -136, ctx.r8.u16);
	// sth r8,-128(r1)
	PPC_STORE_U16(ctx.r1.u32 + -128, ctx.r8.u16);
	// sth r29,-116(r1)
	PPC_STORE_U16(ctx.r1.u32 + -116, ctx.r29.u16);
	// sth r28,-114(r1)
	PPC_STORE_U16(ctx.r1.u32 + -114, ctx.r28.u16);
loc_83195B98:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83195bb8
	if (cr6.eq) goto loc_83195BB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83195b98
	if (cr6.lt) goto loc_83195B98;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83195BB8:
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// sth r7,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r7.u16);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// sth r5,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r5.u16);
	// stw r3,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r3.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83195C08"))) PPC_WEAK_FUNC(sub_83195C08);
PPC_FUNC_IMPL(__imp__sub_83195C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26976
	ctx.r11.s64 = ctx.r11.s64 + 26976;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83195C18:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83195c3c
	if (cr6.eq) goto loc_83195C3C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// blt cr6,0x83195c18
	if (cr6.lt) goto loc_83195C18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83195C3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195C44"))) PPC_WEAK_FUNC(sub_83195C44);
PPC_FUNC_IMPL(__imp__sub_83195C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83195C48"))) PPC_WEAK_FUNC(sub_83195C48);
PPC_FUNC_IMPL(__imp__sub_83195C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26976
	ctx.r11.s64 = ctx.r11.s64 + 26976;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83195C58:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83195ca0
	if (cr6.eq) goto loc_83195CA0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// blt cr6,0x83195c58
	if (cr6.lt) goto loc_83195C58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83195C78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83195c98
	if (!cr6.eq) goto loc_83195C98;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// beq cr6,0x83195c98
	if (cr6.eq) goto loc_83195C98;
	// cmplwi cr6,r9,14
	cr6.compare<uint32_t>(ctx.r9.u32, 14, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83195C98:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83195CA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83195c78
	goto loc_83195C78;
}

__attribute__((alias("__imp__sub_83195CA8"))) PPC_WEAK_FUNC(sub_83195CA8);
PPC_FUNC_IMPL(__imp__sub_83195CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26996
	ctx.r8.s64 = ctx.r11.s64 + 26996;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83195CBC:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x83195ce0
	if (cr6.eq) goto loc_83195CE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// blt cr6,0x83195cbc
	if (cr6.lt) goto loc_83195CBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83195CE0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195CF0"))) PPC_WEAK_FUNC(sub_83195CF0);
PPC_FUNC_IMPL(__imp__sub_83195CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,26900
	ctx.r11.s64 = ctx.r11.s64 + 26900;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83195D04:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x83195d28
	if (cr6.eq) goto loc_83195D28;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x83195d04
	if (cr6.lt) goto loc_83195D04;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83195D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83195D30"))) PPC_WEAK_FUNC(sub_83195D30);
PPC_FUNC_IMPL(__imp__sub_83195D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83195D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r3.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83195d60
	if (!cr6.eq) goto loc_83195D60;
loc_83195D54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195D60:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83194ab8
	ctx.lr = 0x83195D68;
	sub_83194AB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83195d54
	if (cr6.eq) goto loc_83195D54;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bgt cr6,0x83195dc0
	if (cr6.gt) goto loc_83195DC0;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83195dac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DAC;
	// bdzf 4*cr6+eq,0x83195db4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DB4;
	// bdzf 4*cr6+eq,0x83195da4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DA4;
	// bdzf 4*cr6+eq,0x83195dac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DAC;
	// bdzf 4*cr6+eq,0x83195db4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DB4;
	// bdzf 4*cr6+eq,0x83195dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83195DBC;
	// bne cr6,0x83195da4
	if (!cr6.eq) goto loc_83195DA4;
loc_83195DA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83195dc0
	goto loc_83195DC0;
loc_83195DAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83195dc0
	goto loc_83195DC0;
loc_83195DB4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83195dc0
	goto loc_83195DC0;
loc_83195DBC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_83195DC0:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// beq cr6,0x83195d54
	if (cr6.eq) goto loc_83195D54;
	// addi r3,r1,150
	ctx.r3.s64 = ctx.r1.s64 + 150;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x83153330
	ctx.lr = 0x83195DD8;
	sub_83153330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83195e50
	if (!cr6.eq) goto loc_83195E50;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x83195e18
	if (!cr6.eq) goto loc_83195E18;
	// bl 0x831156e8
	ctx.lr = 0x83195DEC;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,150
	ctx.r4.s64 = ctx.r1.s64 + 150;
	// addis r3,r10,205
	ctx.r3.s64 = ctx.r10.s64 + 13434880;
	// addi r3,r3,-18732
	ctx.r3.s64 = ctx.r3.s64 + -18732;
	// bl 0x82bab1d0
	ctx.lr = 0x83195E0C;
	sub_82BAB1D0(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x83195f28
	if (cr6.eq) goto loc_83195F28;
loc_83195E18:
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// bge cr6,0x83195f28
	if (!cr6.lt) goto loc_83195F28;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x83195f28
	if (!cr6.lt) goto loc_83195F28;
	// mulli r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 * 14;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r10,26512
	ctx.r11.s64 = ctx.r10.s64 + 26512;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-224
	ctx.r7.s64 = ctx.r11.s64 + -224;
	// lwzx r31,r8,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195E50:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83195f1c
	if (!cr6.eq) goto loc_83195F1C;
	// lhz r11,150(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// bgt cr6,0x83195ee0
	if (cr6.gt) goto loc_83195EE0;
	// beq cr6,0x83195e80
	if (cr6.eq) goto loc_83195E80;
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(ctx.r11.s32, 29, xer);
	// beq cr6,0x83195ec0
	if (cr6.eq) goto loc_83195EC0;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// beq cr6,0x83195ea0
	if (cr6.eq) goto loc_83195EA0;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bne cr6,0x83195f28
	if (!cr6.eq) goto loc_83195F28;
loc_83195E80:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26512
	ctx.r11.s64 = ctx.r11.s64 + 26512;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195EA0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26512
	ctx.r11.s64 = ctx.r11.s64 + 26512;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195EC0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26512
	ctx.r11.s64 = ctx.r11.s64 + 26512;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195EE0:
	// cmpwi cr6,r11,13401
	cr6.compare<int32_t>(ctx.r11.s32, 13401, xer);
	// bgt cr6,0x83195f28
	if (cr6.gt) goto loc_83195F28;
	// cmpwi cr6,r11,13400
	cr6.compare<int32_t>(ctx.r11.s32, 13400, xer);
	// bge cr6,0x83195f00
	if (!cr6.lt) goto loc_83195F00;
	// cmpwi cr6,r11,10200
	cr6.compare<int32_t>(ctx.r11.s32, 10200, xer);
	// blt cr6,0x83195f28
	if (cr6.lt) goto loc_83195F28;
	// cmpwi cr6,r11,10201
	cr6.compare<int32_t>(ctx.r11.s32, 10201, xer);
	// bgt cr6,0x83195f28
	if (cr6.gt) goto loc_83195F28;
loc_83195F00:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26512
	ctx.r9.s64 = ctx.r11.s64 + 26512;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83195F1C:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83195f28
	if (!cr6.eq) goto loc_83195F28;
	// li r31,3
	ctx.r31.s64 = 3;
loc_83195F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83195F34"))) PPC_WEAK_FUNC(sub_83195F34);
PPC_FUNC_IMPL(__imp__sub_83195F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83195F38"))) PPC_WEAK_FUNC(sub_83195F38);
PPC_FUNC_IMPL(__imp__sub_83195F38) {
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
	// bl 0x831156e8
	ctx.lr = 0x83195F50;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x83195F5C;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x83195f98
	if (cr6.gt) goto loc_83195F98;
	// beq cr6,0x83195fa8
	if (cr6.eq) goto loc_83195FA8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x83195f80
	if (cr6.lt) goto loc_83195F80;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x83195fa8
	if (!cr6.gt) goto loc_83195FA8;
loc_83195F80:
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
loc_83195F98:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x83195f80
	if (cr6.lt) goto loc_83195F80;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bgt cr6,0x83195f80
	if (cr6.gt) goto loc_83195F80;
loc_83195FA8:
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

__attribute__((alias("__imp__sub_83195FC0"))) PPC_WEAK_FUNC(sub_83195FC0);
PPC_FUNC_IMPL(__imp__sub_83195FC0) {
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
	// bl 0x831156e8
	ctx.lr = 0x83195FD8;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x83195FE4;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// blt cr6,0x8319601c
	if (cr6.lt) goto loc_8319601C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// ble cr6,0x83196004
	if (!cr6.gt) goto loc_83196004;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x8319601c
	if (!cr6.eq) goto loc_8319601C;
loc_83196004:
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
loc_8319601C:
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

__attribute__((alias("__imp__sub_83196034"))) PPC_WEAK_FUNC(sub_83196034);
PPC_FUNC_IMPL(__imp__sub_83196034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196038"))) PPC_WEAK_FUNC(sub_83196038);
PPC_FUNC_IMPL(__imp__sub_83196038) {
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
	ctx.lr = 0x83196050;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8319605C;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// addi r10,r11,-18
	ctx.r10.s64 = ctx.r11.s64 + -18;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83196084"))) PPC_WEAK_FUNC(sub_83196084);
PPC_FUNC_IMPL(__imp__sub_83196084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196088"))) PPC_WEAK_FUNC(sub_83196088);
PPC_FUNC_IMPL(__imp__sub_83196088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,-79
	ctx.r11.s64 = ctx.r11.s64 + -79;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x831960bc
	if (cr6.gt) goto loc_831960BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831960ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831960AC;
	// bdzf 4*cr6+eq,0x831960b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831960B4;
	// bne cr6,0x831960ac
	if (!cr6.eq) goto loc_831960AC;
loc_831960AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_831960B4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831960BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831960C4"))) PPC_WEAK_FUNC(sub_831960C4);
PPC_FUNC_IMPL(__imp__sub_831960C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831960C8"))) PPC_WEAK_FUNC(sub_831960C8);
PPC_FUNC_IMPL(__imp__sub_831960C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// blt cr6,0x831960f4
	if (cr6.lt) goto loc_831960F4;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// ble cr6,0x831960ec
	if (!cr6.gt) goto loc_831960EC;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x831960f4
	if (!cr6.eq) goto loc_831960F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831960EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_831960F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831960FC"))) PPC_WEAK_FUNC(sub_831960FC);
PPC_FUNC_IMPL(__imp__sub_831960FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196100"))) PPC_WEAK_FUNC(sub_83196100);
PPC_FUNC_IMPL(__imp__sub_83196100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8319611C:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bge cr6,0x83196170
	if (!cr6.lt) goto loc_83196170;
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
loc_8319612C:
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// ble cr6,0x83196150
	if (!cr6.gt) goto loc_83196150;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sthx r9,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// sthx r5,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u16);
loc_83196150:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319612c
	if (cr6.lt) goto loc_8319612C;
loc_83196170:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319611c
	if (cr6.lt) goto loc_8319611C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83196188"))) PPC_WEAK_FUNC(sub_83196188);
PPC_FUNC_IMPL(__imp__sub_83196188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83196190;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r19,9
	ctx.r19.s64 = 9;
	// addi r29,r11,-5216
	ctx.r29.s64 = ctx.r11.s64 + -5216;
	// li r20,-1
	ctx.r20.s64 = -1;
	// lwz r28,-5216(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5216);
	// bl 0x831156e8
	ctx.lr = 0x831961AC;
	sub_831156E8(ctx, base);
	// lwz r21,48(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addis r23,r21,111
	ctx.r23.s64 = ctx.r21.s64 + 7274496;
	// lbz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r23,5452
	ctx.r23.s64 = ctx.r23.s64 + 5452;
	// ori r26,r11,60648
	ctx.r26.u64 = ctx.r11.u64 | 60648;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// ori r22,r10,11904
	ctx.r22.u64 = ctx.r10.u64 | 11904;
loc_831961D8:
	// cmplwi cr6,r25,9000
	cr6.compare<uint32_t>(ctx.r25.u32, 9000, xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bge cr6,0x831961e8
	if (!cr6.lt) goto loc_831961E8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_831961E8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83196374
	if (cr6.eq) goto loc_83196374;
	// lhz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,65535
	cr6.compare<uint32_t>(ctx.r27.u32, 65535, xer);
	// beq cr6,0x83196374
	if (cr6.eq) goto loc_83196374;
	// bl 0x831156e8
	ctx.lr = 0x83196208;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r3,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319623c
	if (cr6.eq) goto loc_8319623C;
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
loc_83196220:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x83196284
	if (cr6.eq) goto loc_83196284;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83196220
	if (cr6.lt) goto loc_83196220;
loc_8319623C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83196240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319636c
	if (cr6.eq) goto loc_8319636C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8311c338
	ctx.lr = 0x83196254;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8319636c
	if (!cr6.eq) goto loc_8319636C;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x8319628c
	if (cr6.eq) goto loc_8319628C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831962b8
	goto loc_831962B8;
loc_83196284:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83196240
	goto loc_83196240;
loc_8319628C:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x831962a4
	if (cr6.eq) goto loc_831962A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831962b8
	goto loc_831962B8;
loc_831962A4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_831962B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196374
	if (!cr6.eq) goto loc_83196374;
	// rlwinm r8,r28,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x831962fc
	if (!cr6.eq) goto loc_831962FC;
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831962e8
	if (cr6.eq) goto loc_831962E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831962fc
	goto loc_831962FC;
loc_831962E8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_831962FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196360
	if (!cr6.eq) goto loc_83196360;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x83196320
	if (cr6.eq) goto loc_83196320;
	// subfc r11,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x83196354
	goto loc_83196354;
loc_83196320:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r28,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83196340
	if (cr6.eq) goto loc_83196340;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x83196354
	goto loc_83196354;
loc_83196340:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_83196354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196374
	if (cr6.eq) goto loc_83196374;
loc_83196360:
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// b 0x83196374
	goto loc_83196374;
loc_8319636C:
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
loc_83196374:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,588
	ctx.r24.s64 = ctx.r24.s64 + 588;
	// cmplwi cr6,r25,9000
	cr6.compare<uint32_t>(ctx.r25.u32, 9000, xer);
	// blt cr6,0x831961d8
	if (cr6.lt) goto loc_831961D8;
	// clrlwi r8,r20,16
	ctx.r8.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x831964e8
	if (cr6.eq) goto loc_831964E8;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r28,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x831963a8
	if (cr6.eq) goto loc_831963A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831963d4
	goto loc_831963D4;
loc_831963A8:
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831963c0
	if (cr6.eq) goto loc_831963C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831963d4
	goto loc_831963D4;
loc_831963C0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_831963D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831964e8
	if (!cr6.eq) goto loc_831964E8;
	// lwzx r9,r21,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83196410
	if (cr6.eq) goto loc_83196410;
	// add r11,r21,r22
	ctx.r11.u64 = ctx.r21.u64 + ctx.r22.u64;
loc_831963F4:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x831964a0
	if (cr6.eq) goto loc_831964A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831963f4
	if (cr6.lt) goto loc_831963F4;
loc_83196410:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83196414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831964e8
	if (cr6.eq) goto loc_831964E8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8311c338
	ctx.lr = 0x8319642C;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,-27
	ctx.r11.s64 = ctx.r11.s64 + -27;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x831964dc
	if (cr6.gt) goto loc_831964DC;
	// lis r12,-31975
	ctx.r12.s64 = -2095513600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25684
	ctx.r12.s64 = ctx.r12.s64 + 25684;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831964A8;
	case 1:
		goto loc_831964B8;
	case 2:
		goto loc_831964B8;
	case 3:
		goto loc_831964B8;
	case 4:
		goto loc_831964B8;
	case 5:
		goto loc_831964B8;
	case 6:
		goto loc_831964C8;
	case 7:
		goto loc_831964C8;
	case 8:
		goto loc_831964C8;
	case 9:
		goto loc_831964C8;
	case 10:
		goto loc_831964DC;
	case 11:
		goto loc_831964DC;
	case 12:
		goto loc_831964DC;
	case 13:
		goto loc_831964DC;
	case 14:
		goto loc_831964DC;
	case 15:
		goto loc_831964DC;
	case 16:
		goto loc_831964DC;
	case 17:
		goto loc_831964DC;
	case 18:
		goto loc_831964D8;
	default:
		return;
	}
	// lwz r24,25768(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25768);
	// lwz r24,25784(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25784);
	// lwz r24,25784(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25784);
	// lwz r24,25784(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25784);
	// lwz r24,25784(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25784);
	// lwz r24,25784(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25784);
	// lwz r24,25800(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25800);
	// lwz r24,25800(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25800);
	// lwz r24,25800(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25800);
	// lwz r24,25800(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25800);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25820(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25820);
	// lwz r24,25816(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25816);
loc_831964A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83196414
	goto loc_83196414;
loc_831964A8:
	// li r19,5
	ctx.r19.s64 = 5;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831964B8:
	// li r19,6
	ctx.r19.s64 = 6;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831964C8:
	// li r19,7
	ctx.r19.s64 = 7;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831964D8:
	// li r19,4
	ctx.r19.s64 = 4;
loc_831964DC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831964E8:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831964F4"))) PPC_WEAK_FUNC(sub_831964F4);
PPC_FUNC_IMPL(__imp__sub_831964F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831964F8"))) PPC_WEAK_FUNC(sub_831964F8);
PPC_FUNC_IMPL(__imp__sub_831964F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83196500;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83196510;
	sub_831156E8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x8316ea20
	ctx.lr = 0x83196534;
	sub_8316EA20(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// beq cr6,0x83196648
	if (cr6.eq) goto loc_83196648;
	// addis r24,r30,96
	ctx.r24.s64 = ctx.r30.s64 + 6291456;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r24,r24,-4888
	ctx.r24.s64 = ctx.r24.s64 + -4888;
	// ori r27,r10,11904
	ctx.r27.u64 = ctx.r10.u64 | 11904;
	// addi r26,r11,-3076
	ctx.r26.s64 = ctx.r11.s64 + -3076;
loc_83196564:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83196598
	if (cr6.eq) goto loc_83196598;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
loc_8319657C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x83196628
	if (cr6.eq) goto loc_83196628;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319657c
	if (cr6.lt) goto loc_8319657C;
loc_83196598:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8319659C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196634
	if (cr6.eq) goto loc_83196634;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x831965B4;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83196634
	if (cr6.eq) goto loc_83196634;
	// rlwinm r7,r28,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
loc_831965D0:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x831965e0
	if (cr6.lt) goto loc_831965E0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831965E0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x83196604
	if (!cr6.eq) goto loc_83196604;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83196608
	if (cr6.eq) goto loc_83196608;
loc_83196604:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83196608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196630
	if (!cr6.eq) goto loc_83196630;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x831965d0
	if (cr6.lt) goto loc_831965D0;
	// b 0x83196634
	goto loc_83196634;
loc_83196628:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8319659c
	goto loc_8319659C;
loc_83196630:
	// lhz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
loc_83196634:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83196564
	if (!cr6.eq) goto loc_83196564;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83196648:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83196660
	if (cr6.eq) goto loc_83196660;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83196660;
	sub_825952B8(ctx, base);
loc_83196660:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319666C"))) PPC_WEAK_FUNC(sub_8319666C);
PPC_FUNC_IMPL(__imp__sub_8319666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196670"))) PPC_WEAK_FUNC(sub_83196670);
PPC_FUNC_IMPL(__imp__sub_83196670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83196678;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r3.u16);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319668C;
	sub_831156E8(ctx, base);
	// lhz r4,182(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82c161b8
	ctx.lr = 0x83196698;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196780
	if (cr6.eq) goto loc_83196780;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,182
	ctx.r3.s64 = ctx.r1.s64 + 182;
	// bl 0x831c64a0
	ctx.lr = 0x831966B0;
	sub_831C64A0(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x83196780
	if (!cr6.eq) goto loc_83196780;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196780
	if (cr6.eq) goto loc_83196780;
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r10,-3076(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3076);
loc_831966E8:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bge cr6,0x831966f8
	if (!cr6.lt) goto loc_831966F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831966F8:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83196700:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bge cr6,0x83196710
	if (!cr6.lt) goto loc_83196710;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83196710:
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83196738
	if (!cr6.eq) goto loc_83196738;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319673c
	if (cr6.eq) goto loc_8319673C;
loc_83196738:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319673C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196758
	if (!cr6.eq) goto loc_83196758;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835977d8
	ctx.lr = 0x83196754;
	sub_835977D8(ctx, base);
	// lwz r10,-3076(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3076);
loc_83196758:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x83196700
	if (cr6.lt) goto loc_83196700;
	// lwz r11,516(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 516);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// blt cr6,0x831966e8
	if (cr6.lt) goto loc_831966E8;
loc_83196780:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83196788"))) PPC_WEAK_FUNC(sub_83196788);
PPC_FUNC_IMPL(__imp__sub_83196788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83196790;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83196a28
	if (cr6.eq) goto loc_83196A28;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r21,0
	ctx.r21.s64 = 0;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// blt 0x83196800
	if (cr0.lt) goto loc_83196800;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_831967DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x831967EC;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x831967dc
	if (!cr0.lt) goto loc_831967DC;
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83196800:
	// bl 0x831156e8
	ctx.lr = 0x83196804;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// lwzx r9,r22,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83196848
	if (cr6.eq) goto loc_83196848;
	// addis r11,r22,85
	ctx.r11.s64 = ctx.r22.s64 + 5570560;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r11,r11,11904
	ctx.r11.s64 = ctx.r11.s64 + 11904;
loc_8319682C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319687c
	if (cr6.eq) goto loc_8319687C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319682c
	if (cr6.lt) goto loc_8319682C;
loc_83196848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319684C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196884
	if (!cr6.eq) goto loc_83196884;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83196a28
	if (cr6.eq) goto loc_83196A28;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x825952b8
	ctx.lr = 0x83196874;
	sub_825952B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8319687C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8319684c
	goto loc_8319684C;
loc_83196884:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311bf00
	ctx.lr = 0x83196890;
	sub_8311BF00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831968bc
	if (!cr6.eq) goto loc_831968BC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83196a28
	if (cr6.eq) goto loc_83196A28;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x825952b8
	ctx.lr = 0x831968B4;
	sub_825952B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_831968BC:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831c63e0
	ctx.lr = 0x831968D0;
	sub_831C63E0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83196900
	if (!cr6.eq) goto loc_83196900;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83196a28
	if (cr6.eq) goto loc_83196A28;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x825952b8
	ctx.lr = 0x831968F8;
	sub_825952B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83196900:
	// lwz r11,516(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 516);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83196a0c
	if (cr6.eq) goto loc_83196A0C;
	// addi r26,r23,4
	ctx.r26.s64 = ctx.r23.s64 + 4;
loc_83196918:
	// cmplw cr6,r21,r25
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r25.u32, xer);
	// beq cr6,0x83196a0c
	if (cr6.eq) goto loc_83196A0C;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// bge cr6,0x831969f4
	if (!cr6.lt) goto loc_831969F4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831969f4
	if (cr6.eq) goto loc_831969F4;
	// lwz r10,-4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// rlwinm r29,r10,0,0,13
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r28,r10,14
	ctx.r28.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// or r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 | ctx.r28.u64;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83196a0c
	if (cr6.eq) goto loc_83196A0C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r11,0,0,13
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r30,r11,14
	ctx.r30.u64 = ctx.r11.u32 & 0x3FFFF;
	// or r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 | ctx.r30.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_83196970:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312db38
	ctx.lr = 0x8319697C;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x831969e8
	if (cr6.eq) goto loc_831969E8;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311bf90
	ctx.lr = 0x83196994;
	sub_8311BF90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831969e8
	if (cr6.eq) goto loc_831969E8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x831969d0
	if (cr6.eq) goto loc_831969D0;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// beq cr6,0x831969d0
	if (cr6.eq) goto loc_831969D0;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x831969e8
	if (!cr6.eq) goto loc_831969E8;
	// rlwinm r11,r29,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r10,r31,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFC0000;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x831969e8
	goto loc_831969E8;
loc_831969D0:
	// rlwinm r11,r29,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r10,r31,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFC0000;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
loc_831969E8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// ble cr6,0x83196970
	if (!cr6.gt) goto loc_83196970;
loc_831969F4:
	// lwz r11,516(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 516);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x83196918
	if (cr6.lt) goto loc_83196918;
loc_83196A0C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83196a28
	if (cr6.eq) goto loc_83196A28;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x825952b8
	ctx.lr = 0x83196A28;
	sub_825952B8(ctx, base);
loc_83196A28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83196A30"))) PPC_WEAK_FUNC(sub_83196A30);
PPC_FUNC_IMPL(__imp__sub_83196A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83196A38;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,278(r1)
	PPC_STORE_U16(ctx.r1.u32 + 278, ctx.r3.u16);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83196A48;
	sub_831156E8(ctx, base);
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,278(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83196A58;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196acc
	if (cr6.eq) goto loc_83196ACC;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831947d0
	ctx.lr = 0x83196A6C;
	sub_831947D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196acc
	if (cr6.eq) goto loc_83196ACC;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r4,r1,278
	ctx.r4.s64 = ctx.r1.s64 + 278;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// bl 0x831177f8
	ctx.lr = 0x83196AB0;
	sub_831177F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196ad8
	if (!cr6.eq) goto loc_83196AD8;
loc_83196ABC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f73d60
	ctx.lr = 0x83196AC4;
	sub_82F73D60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f73d60
	ctx.lr = 0x83196ACC;
	sub_82F73D60(ctx, base);
loc_83196ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83196AD8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r4,278(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// bl 0x831177a0
	ctx.lr = 0x83196AE4;
	sub_831177A0(ctx, base);
	// lhz r10,278(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83196abc
	if (!cr6.eq) goto loc_83196ABC;
	// lwz r11,2116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2116);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83196b50
	if (!cr6.gt) goto loc_83196B50;
	// addi r28,r3,52
	ctx.r28.s64 = ctx.r3.s64 + 52;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83196B10:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x83196b20
	if (!cr6.lt) goto loc_83196B20;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83196B20:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x83196B34;
	sub_835977D8(ctx, base);
	// lwz r10,2116(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2116);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83196b10
	if (cr6.lt) goto loc_83196B10;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83196B50:
	// lhz r3,278(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// bl 0x83194740
	ctx.lr = 0x83196B5C;
	sub_83194740(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83196c38
	if (cr6.eq) goto loc_83196C38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8315c470
	ctx.lr = 0x83196B78;
	sub_8315C470(ctx, base);
	// lwz r11,-3076(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3076);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// rlwinm r8,r10,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83196ba4
	if (!cr6.eq) goto loc_83196BA4;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83196ba8
	if (cr6.eq) goto loc_83196BA8;
loc_83196BA4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83196BA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196bd0
	if (!cr6.eq) goto loc_83196BD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835977d8
	ctx.lr = 0x83196BC0;
	sub_835977D8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_83196BD0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmplw cr6,r22,r30
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r30.u32, xer);
	// beq cr6,0x83196c38
	if (cr6.eq) goto loc_83196C38;
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
loc_83196BE0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x83196c04
	if (!cr6.eq) goto loc_83196C04;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83196c08
	if (cr6.eq) goto loc_83196C08;
loc_83196C04:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83196C08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196c24
	if (!cr6.eq) goto loc_83196C24;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x83196be0
	if (!cr6.eq) goto loc_83196BE0;
	// b 0x83196c38
	goto loc_83196C38;
loc_83196C24:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82f640d8
	ctx.lr = 0x83196C30;
	sub_82F640D8(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83196C38:
	// subf r11,r22,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r22.s64;
	// li r26,2
	ctx.r26.s64 = 2;
	// srawi. r29,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// beq 0x83196d00
	if (cr0.eq) goto loc_83196D00;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83196C50:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x83196C5C;
	sub_8311C148(ctx, base);
	// lhz r11,278(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// addi r11,r11,-79
	ctx.r11.s64 = ctx.r11.s64 + -79;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83196cf8
	if (cr6.gt) goto loc_83196CF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83196c80
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83196C80;
	// bdzf 4*cr6+eq,0x83196c88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83196C88;
	// bne cr6,0x83196c80
	if (!cr6.eq) goto loc_83196C80;
loc_83196C80:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83196c8c
	goto loc_83196C8C;
loc_83196C88:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83196C8C:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83196cf8
	if (!cr6.lt) goto loc_83196CF8;
	// lwz r11,1292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1292);
	// lwz r10,-3076(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3076);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83196cc0
	if (!cr6.eq) goto loc_83196CC0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83196cc4
	if (cr6.eq) goto loc_83196CC4;
loc_83196CC0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83196CC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196ce8
	if (cr6.eq) goto loc_83196CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x83196CE4;
	sub_835977D8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83196CE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x83196c50
	if (cr6.lt) goto loc_83196C50;
loc_83196CF8:
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_83196D00:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, xer);
	// beq cr6,0x83196d5c
	if (cr6.eq) goto loc_83196D5C;
	// rlwinm r9,r20,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 14) & 0x3FFF;
loc_83196D10:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83196d34
	if (!cr6.eq) goto loc_83196D34;
	// xor r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83196d38
	if (cr6.eq) goto loc_83196D38;
loc_83196D34:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83196D38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196d54
	if (!cr6.eq) goto loc_83196D54;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x83196d10
	if (!cr6.eq) goto loc_83196D10;
	// b 0x83196d5c
	goto loc_83196D5C;
loc_83196D54:
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x83196d98
	if (!cr6.eq) goto loc_83196D98;
loc_83196D5C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83196d74
	if (cr6.eq) goto loc_83196D74;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83196D74;
	sub_825952B8(ctx, base);
loc_83196D74:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83196d8c
	if (cr6.eq) goto loc_83196D8C;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83196D8C;
	sub_825952B8(ctx, base);
loc_83196D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83196D98:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83196db0
	if (cr6.eq) goto loc_83196DB0;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83196DB0;
	sub_825952B8(ctx, base);
loc_83196DB0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83196dc8
	if (cr6.eq) goto loc_83196DC8;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x83196DC8;
	sub_825952B8(ctx, base);
loc_83196DC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83196DD4"))) PPC_WEAK_FUNC(sub_83196DD4);
PPC_FUNC_IMPL(__imp__sub_83196DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196DD8"))) PPC_WEAK_FUNC(sub_83196DD8);
PPC_FUNC_IMPL(__imp__sub_83196DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83196DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83196DF0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831177f8
	ctx.lr = 0x83196E00;
	sub_831177F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83196ef0
	if (cr6.eq) goto loc_83196EF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x831177a0
	ctx.lr = 0x83196E18;
	sub_831177A0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83196ef0
	if (!cr6.eq) goto loc_83196EF0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,2116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2116);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83196eb4
	if (!cr6.gt) goto loc_83196EB4;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83196E58:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x83196e68
	if (!cr6.lt) goto loc_83196E68;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83196E68:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f631a0
	ctx.lr = 0x83196E84;
	sub_82F631A0(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x83196e98
	if (cr6.eq) goto loc_83196E98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x83196E98;
	sub_835977D8(ctx, base);
loc_83196E98:
	// lwz r11,2116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2116);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83196e58
	if (cr6.lt) goto loc_83196E58;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83196EB4:
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83196efc
	if (cr6.eq) goto loc_83196EFC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83196ef0
	if (cr6.eq) goto loc_83196EF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83196EF0;
	sub_825952B8(ctx, base);
loc_83196EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83196EFC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa2cc0
	ctx.lr = 0x83196F08;
	sub_82AA2CC0(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x83196f2c
	if (cr6.eq) goto loc_83196F2C;
loc_83196F14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x83196F20;
	sub_835977D8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83196f14
	if (!cr6.eq) goto loc_83196F14;
loc_83196F2C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83196f48
	if (cr6.eq) goto loc_83196F48;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83196F48;
	sub_825952B8(ctx, base);
loc_83196F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83196F54"))) PPC_WEAK_FUNC(sub_83196F54);
PPC_FUNC_IMPL(__imp__sub_83196F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83196F58"))) PPC_WEAK_FUNC(sub_83196F58);
PPC_FUNC_IMPL(__imp__sub_83196F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83196F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x83196F74;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83196F88;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831970c4
	if (cr6.eq) goto loc_831970C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x83196FA0;
	sub_8311C338(ctx, base);
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83196fc8
	if (!cr6.eq) goto loc_83196FC8;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831970c4
	if (!cr6.eq) goto loc_831970C4;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r31,r11,30,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	// b 0x83196fd0
	goto loc_83196FD0;
loc_83196FC8:
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r31,r11,23,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
loc_83196FD0:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r9,54
	cr6.compare<int32_t>(ctx.r9.s32, 54, xer);
	// bne cr6,0x83196ff4
	if (!cr6.eq) goto loc_83196FF4;
	// rlwinm r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// blt cr6,0x831970c4
	if (cr6.lt) goto loc_831970C4;
	// rlwinm r3,r10,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83196FF4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// beq cr6,0x83197028
	if (cr6.eq) goto loc_83197028;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r30,r11,-3076
	ctx.r30.s64 = ctx.r11.s64 + -3076;
loc_83197014:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x83197020;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83197014
	if (!cr0.eq) goto loc_83197014;
loc_83197028:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x831b0ad8
	ctx.lr = 0x83197040;
	sub_831B0AD8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r31,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x83197088
	if (!cr6.gt) goto loc_83197088;
loc_83197058:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r3,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 2;
	// bl 0x831abd78
	ctx.lr = 0x8319706C;
	sub_831ABD78(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// beq cr6,0x831970d0
	if (cr6.eq) goto loc_831970D0;
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x83197058
	if (cr6.gt) goto loc_83197058;
loc_83197088:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831970a0
	if (cr6.eq) goto loc_831970A0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x831970A0;
	sub_825952B8(ctx, base);
loc_831970A0:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x831970c4
	if (cr6.eq) goto loc_831970C4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x831970C4;
	sub_825952B8(ctx, base);
loc_831970C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831970D0:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831970e8
	if (cr6.eq) goto loc_831970E8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x831970E8;
	sub_825952B8(ctx, base);
loc_831970E8:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x8319710c
	if (cr6.eq) goto loc_8319710C;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8319710C;
	sub_825952B8(ctx, base);
loc_8319710C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197118"))) PPC_WEAK_FUNC(sub_83197118);
PPC_FUNC_IMPL(__imp__sub_83197118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83197120;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83197130;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314f1e8
	ctx.lr = 0x83197140;
	sub_8314F1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831971f4
	if (cr6.eq) goto loc_831971F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83197158;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831971f4
	if (cr6.eq) goto loc_831971F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x83197170;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83197184
	if (cr6.eq) goto loc_83197184;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831971f4
	if (!cr6.eq) goto loc_831971F4;
loc_83197184:
	// addis r27,r29,96
	ctx.r27.s64 = ctx.r29.s64 + 6291456;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831971f4
	if (!cr6.gt) goto loc_831971F4;
	// clrlwi r26,r31,16
	ctx.r26.u64 = ctx.r31.u32 & 0xFFFF;
	// addis r31,r29,85
	ctx.r31.s64 = ctx.r29.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r31,r31,11904
	ctx.r31.s64 = ctx.r31.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_831971B0:
	// cmplwi cr6,r30,300
	cr6.compare<uint32_t>(ctx.r30.u32, 300, xer);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bge cr6,0x831971c0
	if (!cr6.lt) goto loc_831971C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_831971C0:
	// lhz r10,78(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x831971e0
	if (!cr6.eq) goto loc_831971E0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82badd90
	ctx.lr = 0x831971E0;
	sub_82BADD90(ctx, base);
loc_831971E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,548
	ctx.r31.s64 = ctx.r31.s64 + 548;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831971b0
	if (cr6.lt) goto loc_831971B0;
loc_831971F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831971FC"))) PPC_WEAK_FUNC(sub_831971FC);
PPC_FUNC_IMPL(__imp__sub_831971FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83197200"))) PPC_WEAK_FUNC(sub_83197200);
PPC_FUNC_IMPL(__imp__sub_83197200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83197208;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83197218;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r28,r29,96
	ctx.r28.s64 = ctx.r29.s64 + 6291456;
	// addi r28,r28,-4888
	ctx.r28.s64 = ctx.r28.s64 + -4888;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83197288
	if (!cr6.gt) goto loc_83197288;
	// addis r30,r29,85
	ctx.r30.s64 = ctx.r29.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r27,r11,59456
	ctx.r27.u64 = ctx.r11.u64 | 59456;
loc_83197244:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bge cr6,0x83197254
	if (!cr6.lt) goto loc_83197254;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83197254:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83197274
	if (!cr6.eq) goto loc_83197274;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82badd90
	ctx.lr = 0x83197274;
	sub_82BADD90(ctx, base);
loc_83197274:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83197244
	if (cr6.lt) goto loc_83197244;
loc_83197288:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197290"))) PPC_WEAK_FUNC(sub_83197290);
PPC_FUNC_IMPL(__imp__sub_83197290) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8314f1e8
	ctx.lr = 0x831972A8;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197304
	if (cr6.eq) goto loc_83197304;
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
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83197118
	ctx.lr = 0x831972D0;
	sub_83197118(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83197300
	if (cr6.eq) goto loc_83197300;
	// bl 0x82f73d60
	ctx.lr = 0x831972E8;
	sub_82F73D60(ctx, base);
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
loc_83197300:
	// bl 0x82f73d60
	ctx.lr = 0x83197304;
	sub_82F73D60(ctx, base);
loc_83197304:
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

__attribute__((alias("__imp__sub_8319731C"))) PPC_WEAK_FUNC(sub_8319731C);
PPC_FUNC_IMPL(__imp__sub_8319731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83197320"))) PPC_WEAK_FUNC(sub_83197320);
PPC_FUNC_IMPL(__imp__sub_83197320) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x83197338;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831973fc
	if (cr6.eq) goto loc_831973FC;
	// addi r3,r1,150
	ctx.r3.s64 = ctx.r1.s64 + 150;
	// bl 0x8314e340
	ctx.lr = 0x8319734C;
	sub_8314E340(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x83197354;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831973fc
	if (cr6.eq) goto loc_831973FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e438
	ctx.lr = 0x83197368;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x831973fc
	if (!cr6.eq) goto loc_831973FC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x83197118
	ctx.lr = 0x8319738C;
	sub_83197118(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83196100
	ctx.lr = 0x83197394;
	sub_83196100(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x831973b0
	if (!cr6.eq) goto loc_831973B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_831973A8:
	// bl 0x82f73d60
	ctx.lr = 0x831973AC;
	sub_82F73D60(ctx, base);
	// b 0x831973fc
	goto loc_831973FC;
loc_831973B0:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// srawi. r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831973e4
	if (cr0.eq) goto loc_831973E4;
	// lhz r8,150(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831973C8:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x83197414
	if (cr6.eq) goto loc_83197414;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831973c8
	if (cr6.lt) goto loc_831973C8;
loc_831973E4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831973fc
	if (cr6.eq) goto loc_831973FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x831973FC;
	sub_825952B8(ctx, base);
loc_831973FC:
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
loc_83197414:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831973a8
	if (cr6.eq) goto loc_831973A8;
	// bl 0x82f73d60
	ctx.lr = 0x83197428;
	sub_82F73D60(ctx, base);
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

__attribute__((alias("__imp__sub_83197440"))) PPC_WEAK_FUNC(sub_83197440);
PPC_FUNC_IMPL(__imp__sub_83197440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83197448;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83197454;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83197464;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319747c
	if (!cr6.eq) goto loc_8319747C;
loc_83197470:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8319747C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c338
	ctx.lr = 0x83197488;
	sub_8311C338(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x83197290
	ctx.lr = 0x83197494;
	sub_83197290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319751c
	if (cr6.eq) goto loc_8319751C;
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4888
	ctx.r28.s64 = ctx.r28.s64 + -4888;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83197510
	if (!cr6.gt) goto loc_83197510;
	// addis r30,r26,85
	ctx.r30.s64 = ctx.r26.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r29,r11,59456
	ctx.r29.u64 = ctx.r11.u64 | 59456;
loc_831974C8:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// bge cr6,0x831974d8
	if (!cr6.lt) goto loc_831974D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831974D8:
	// lhz r10,78(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// lhz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831974fc
	if (!cr6.eq) goto loc_831974FC;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x83197440
	ctx.lr = 0x831974F0;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197470
	if (cr6.eq) goto loc_83197470;
loc_831974FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x831974c8
	if (cr6.lt) goto loc_831974C8;
loc_83197510:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8319751C:
	// lwz r11,532(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 532);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319760c
	if (cr6.eq) goto loc_8319760C;
	// lis r11,99
	ctx.r11.s64 = 6488064;
	// addi r21,r20,96
	ctx.r21.s64 = ctx.r20.s64 + 96;
	// ori r23,r11,11884
	ctx.r23.u64 = ctx.r11.u64 | 11884;
loc_83197540:
	// cmplwi cr6,r22,58
	cr6.compare<uint32_t>(ctx.r22.u32, 58, xer);
	// bge cr6,0x83197554
	if (!cr6.lt) goto loc_83197554;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x8319755c
	if (cr6.lt) goto loc_8319755C;
loc_83197554:
	// add r27,r26,r23
	ctx.r27.u64 = ctx.r26.u64 + ctx.r23.u64;
	// b 0x83197568
	goto loc_83197568;
loc_8319755C:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r27,r11,r23
	ctx.r27.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_83197568:
	// lwz r11,516(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 516);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831975f4
	if (cr6.eq) goto loc_831975F4;
	// addi r25,r27,4
	ctx.r25.s64 = ctx.r27.s64 + 4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_83197584:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bge cr6,0x83197594
	if (!cr6.lt) goto loc_83197594;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83197594:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83197598:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312db38
	ctx.lr = 0x831975A4;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x831975d0
	if (cr6.eq) goto loc_831975D0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x8311c3d8
	ctx.lr = 0x831975C0;
	sub_8311C3D8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83197470
	if (cr6.eq) goto loc_83197470;
loc_831975D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83197598
	if (cr6.lt) goto loc_83197598;
	// lwz r11,516(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 516);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x83197584
	if (cr6.lt) goto loc_83197584;
loc_831975F4:
	// lwz r11,532(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 532);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r22,r10
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, xer);
	// blt cr6,0x83197540
	if (cr6.lt) goto loc_83197540;
loc_8319760C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197510
	if (cr6.eq) goto loc_83197510;
	// lwz r11,536(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 536);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83197470
	if (cr6.eq) goto loc_83197470;
	// lwz r11,540(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 540);
	// rlwinm r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// addi r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -512;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197644"))) PPC_WEAK_FUNC(sub_83197644);
PPC_FUNC_IMPL(__imp__sub_83197644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83197648"))) PPC_WEAK_FUNC(sub_83197648);
PPC_FUNC_IMPL(__imp__sub_83197648) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83197664;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8316ea20
	ctx.lr = 0x83197688;
	sub_8316EA20(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x831976b8
	if (!cr6.eq) goto loc_831976B8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831976b0
	if (cr6.eq) goto loc_831976B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x831976B0;
	sub_825952B8(ctx, base);
loc_831976B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83197708
	goto loc_83197708;
loc_831976B8:
	// lhz r30,-2(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x831976C8;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831976e4
	if (!cr6.eq) goto loc_831976E4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831976DC;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83197708
	goto loc_83197708;
loc_831976E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x831976F0;
	sub_8311C338(ctx, base);
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x83197440
	ctx.lr = 0x831976F8;
	sub_83197440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83197704;
	sub_82F73D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83197708:
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

__attribute__((alias("__imp__sub_83197720"))) PPC_WEAK_FUNC(sub_83197720);
PPC_FUNC_IMPL(__imp__sub_83197720) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x83197734;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83197754
	if (!cr6.eq) goto loc_83197754;
loc_83197740:
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
loc_83197754:
	// lhz r3,118(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// bl 0x83195540
	ctx.lr = 0x8319775C;
	sub_83195540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831977a0
	if (!cr6.eq) goto loc_831977A0;
	// lhz r3,118(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// bl 0x83197290
	ctx.lr = 0x83197770;
	sub_83197290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83197740
	if (!cr6.eq) goto loc_83197740;
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x8314e438
	ctx.lr = 0x83197784;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x831977a0
	if (!cr6.eq) goto loc_831977A0;
	// lhz r3,118(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// bl 0x83194648
	ctx.lr = 0x83197794;
	sub_83194648(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x831977a4
	if (cr6.eq) goto loc_831977A4;
loc_831977A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831977A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831977B4"))) PPC_WEAK_FUNC(sub_831977B4);
PPC_FUNC_IMPL(__imp__sub_831977B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831977B8"))) PPC_WEAK_FUNC(sub_831977B8);
PPC_FUNC_IMPL(__imp__sub_831977B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831977C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x831977D4;
	sub_831156E8(ctx, base);
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// bl 0x8311c148
	ctx.lr = 0x831977F8;
	sub_8311C148(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83197914
	if (!cr6.eq) goto loc_83197914;
	// addi r9,r3,800
	ctx.r9.s64 = ctx.r3.s64 + 800;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83197814:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x83197834
	if (cr6.eq) goto loc_83197834;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83197814
	if (cr6.lt) goto loc_83197814;
loc_83197834:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831978d8
	if (cr6.eq) goto loc_831978D8;
	// addis r27,r23,96
	ctx.r27.s64 = ctx.r23.s64 + 6291456;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// ori r31,r11,11904
	ctx.r31.u64 = ctx.r11.u64 | 11904;
loc_83197854:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bge cr6,0x83197864
	if (!cr6.lt) goto loc_83197864;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_83197864:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319789c
	if (cr6.eq) goto loc_8319789C;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 + ctx.r31.u64;
loc_83197880:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319790c
	if (cr6.eq) goto loc_8319790C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83197880
	if (cr6.lt) goto loc_83197880;
loc_8319789C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_831978A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831978c4
	if (cr6.eq) goto loc_831978C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8314e3c0
	ctx.lr = 0x831978B8;
	sub_8314E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x831978C4;
	sub_835977D8(ctx, base);
loc_831978C4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x83197854
	if (cr6.lt) goto loc_83197854;
	// lwz r19,112(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_831978D8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x831978E4;
	sub_82A8E3A8(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83197cf8
	if (cr6.eq) goto loc_83197CF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x825952b8
	ctx.lr = 0x83197900;
	sub_825952B8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8319790C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831978a0
	goto loc_831978A0;
loc_83197914:
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// li r20,9
	ctx.r20.s64 = 9;
	// rlwinm r17,r11,19,29,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// cmplwi cr6,r17,1
	cr6.compare<uint32_t>(ctx.r17.u32, 1, xer);
	// bne cr6,0x83197930
	if (!cr6.eq) goto loc_83197930;
	// bl 0x83196188
	ctx.lr = 0x8319792C;
	sub_83196188(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_83197930:
	// addis r18,r23,96
	ctx.r18.s64 = ctx.r23.s64 + 6291456;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// addi r18,r18,-4888
	ctx.r18.s64 = ctx.r18.s64 + -4888;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83197cd0
	if (!cr6.gt) goto loc_83197CD0;
	// addis r25,r23,85
	ctx.r25.s64 = ctx.r23.s64 + 5570560;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r9,194
	ctx.r9.s64 = 12713984;
	// addi r25,r25,11904
	ctx.r25.s64 = ctx.r25.s64 + 11904;
	// ori r21,r10,59456
	ctx.r21.u64 = ctx.r10.u64 | 59456;
	// ori r27,r9,52144
	ctx.r27.u64 = ctx.r9.u64 | 52144;
	// li r22,3
	ctx.r22.s64 = 3;
	// addi r24,r11,-3076
	ctx.r24.s64 = ctx.r11.s64 + -3076;
loc_8319796C:
	// cmplwi cr6,r26,300
	cr6.compare<uint32_t>(ctx.r26.u32, 300, xer);
	// add r29,r23,r21
	ctx.r29.u64 = ctx.r23.u64 + ctx.r21.u64;
	// bge cr6,0x8319797c
	if (!cr6.lt) goto loc_8319797C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8319797C:
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,56
	cr6.compare<uint32_t>(ctx.r3.u32, 56, xer);
	// beq cr6,0x83197994
	if (cr6.eq) goto loc_83197994;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
loc_83197994:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83194ab8
	ctx.lr = 0x8319799C;
	sub_83194AB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83197cbc
	if (!cr6.eq) goto loc_83197CBC;
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83197b0c
	if (!cr6.eq) goto loc_83197B0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhzx r31,r23,r27
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// bl 0x8311c148
	ctx.lr = 0x831979E0;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bgt cr6,0x83197a4c
	if (cr6.gt) goto loc_83197A4C;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x83197afc
	if (!cr6.lt) goto loc_83197AFC;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83197b00
	if (cr6.gt) goto loc_83197B00;
	// lis r12,-31975
	ctx.r12.s64 = -2095513600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31260
	ctx.r12.s64 = ctx.r12.s64 + 31260;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83197AFC;
	case 1:
		goto loc_83197AFC;
	case 2:
		goto loc_83197AFC;
	case 3:
		goto loc_83197AFC;
	case 4:
		goto loc_83197AFC;
	case 5:
		goto loc_83197AFC;
	case 6:
		goto loc_83197A7C;
	case 7:
		goto loc_83197A7C;
	case 8:
		goto loc_83197A7C;
	case 9:
		goto loc_83197AFC;
	case 10:
		goto loc_83197A7C;
	case 11:
		goto loc_83197A7C;
	default:
		return;
	}
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31356(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31356);
	// lwz r24,31356(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31356);
	// lwz r24,31356(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31356);
	// lwz r24,31484(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31484);
	// lwz r24,31356(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31356);
	// lwz r24,31356(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31356);
loc_83197A4C:
	// addi r11,r11,-67
	ctx.r11.s64 = ctx.r11.s64 + -67;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83197b00
	if (cr6.gt) goto loc_83197B00;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83197afc
	if (cr6.eq) goto loc_83197AFC;
	// bdz 0x83197a7c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197A7C;
	// bdz 0x83197b00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197B00;
	// bdz 0x83197b00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197B00;
	// bdz 0x83197a7c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197A7C;
	// bdz 0x83197b00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197B00;
	// b 0x83197ad0
	goto loc_83197AD0;
loc_83197A7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83197A8C;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197aac
	if (cr6.eq) goto loc_83197AAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8311c338
	ctx.lr = 0x83197AA4;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r31,r11,9,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
loc_83197AAC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197b00
	if (cr6.eq) goto loc_83197B00;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83197440
	ctx.lr = 0x83197AC0;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197b00
	if (cr6.eq) goto loc_83197B00;
	// b 0x83197afc
	goto loc_83197AFC;
loc_83197AD0:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c7200
	ctx.lr = 0x83197ADC;
	sub_831C7200(ctx, base);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831c72c0
	ctx.lr = 0x83197AEC;
	sub_831C72C0(ctx, base);
	// cmplw cr6,r14,r31
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r31.u32, xer);
	// bgt cr6,0x83197b00
	if (cr6.gt) goto loc_83197B00;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x83197b00
	if (!cr6.lt) goto loc_83197B00;
loc_83197AFC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83197B00:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
loc_83197B0C:
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(ctx.r17.s32, 1, xer);
	// bne cr6,0x83197bec
	if (!cr6.eq) goto loc_83197BEC;
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83197bec
	if (!cr6.eq) goto loc_83197BEC;
	// addi r9,r20,-4
	ctx.r9.s64 = ctx.r20.s64 + -4;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bgt cr6,0x83197be0
	if (cr6.gt) goto loc_83197BE0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83197bd4
	if (cr6.eq) goto loc_83197BD4;
	// bdz 0x83197b4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197B4C;
	// bdz 0x83197b64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83197B64;
	// b 0x83197b9c
	goto loc_83197B9C;
loc_83197B4C:
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x83197be0
	goto loc_83197BE0;
loc_83197B64:
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x83197be0
	goto loc_83197BE0;
loc_83197B9C:
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,34
	cr6.compare<uint32_t>(ctx.r10.u32, 34, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,35
	cr6.compare<uint32_t>(ctx.r10.u32, 35, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// beq cr6,0x83197bcc
	if (cr6.eq) goto loc_83197BCC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// b 0x83197be0
	goto loc_83197BE0;
loc_83197BCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83197be0
	goto loc_83197BE0;
loc_83197BD4:
	// addi r11,r10,-45
	ctx.r11.s64 = ctx.r10.s64 + -45;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_83197BE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
loc_83197BEC:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// subf r9,r19,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r19.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83197c30
	if (cr6.eq) goto loc_83197C30;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplw cr6,r9,r15
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, xer);
	// ble cr6,0x83197d04
	if (!cr6.gt) goto loc_83197D04;
loc_83197C10:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,88(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83197c10
	if (cr6.gt) goto loc_83197C10;
loc_83197C30:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83197cbc
	if (cr6.eq) goto loc_83197CBC;
	// rlwinm r7,r28,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// addi r9,r29,328
	ctx.r9.s64 = ctx.r29.s64 + 328;
loc_83197C4C:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x83197c5c
	if (cr6.lt) goto loc_83197C5C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83197C5C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x83197c80
	if (!cr6.eq) goto loc_83197C80;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83197c84
	if (cr6.eq) goto loc_83197C84;
loc_83197C80:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83197C84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83197ca4
	if (!cr6.eq) goto loc_83197CA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83197c4c
	if (cr6.lt) goto loc_83197C4C;
	// b 0x83197cbc
	goto loc_83197CBC;
loc_83197CA4:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x83197CB8;
	sub_835977D8(ctx, base);
	// lwz r19,112(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83197CBC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,548
	ctx.r25.s64 = ctx.r25.s64 + 548;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319796c
	if (cr6.lt) goto loc_8319796C;
loc_83197CD0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x83197CDC;
	sub_82A8E3A8(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83197cf8
	if (cr6.eq) goto loc_83197CF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x825952b8
	ctx.lr = 0x83197CF8;
	sub_825952B8(ctx, base);
loc_83197CF8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83197D04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83197D10;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_83197D10"))) PPC_WEAK_FUNC(sub_83197D10);
PPC_FUNC_IMPL(__imp__sub_83197D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83197D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bgt cr6,0x83197ee4
	if (cr6.gt) goto loc_83197EE4;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83197d6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83197D6C;
	// bdzf 4*cr6+eq,0x83197d94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83197D94;
	// bdzf 4*cr6+eq,0x83197dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83197DBC;
	// bne cr6,0x83197dec
	if (!cr6.eq) goto loc_83197DEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x83197D50;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197ee4
	if (cr6.eq) goto loc_83197EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83197118
	ctx.lr = 0x83197D64;
	sub_83197118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197D6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x83197D78;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197ee4
	if (cr6.eq) goto loc_83197EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83197118
	ctx.lr = 0x83197D8C;
	sub_83197118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197D94:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x83197DA0;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197ee4
	if (cr6.eq) goto loc_83197EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83197118
	ctx.lr = 0x83197DB4;
	sub_83197118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197DBC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316b780
	ctx.lr = 0x83197DC8;
	sub_8316B780(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197ee4
	if (cr6.eq) goto loc_83197EE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83197DE4;
	sub_82BADD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197DEC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x83197e08
	if (!cr6.eq) goto loc_83197E08;
	// li r11,10200
	ctx.r11.s64 = 10200;
	// b 0x83197e18
	goto loc_83197E18;
loc_83197E08:
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// li r11,13400
	ctx.r11.s64 = 13400;
	// beq cr6,0x83197e18
	if (cr6.eq) goto loc_83197E18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83197E18:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197e5c
	if (cr6.eq) goto loc_83197E5C;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x83197e38
	if (!cr6.eq) goto loc_83197E38;
	// li r11,10200
	ctx.r11.s64 = 10200;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// b 0x83197e50
	goto loc_83197E50;
loc_83197E38:
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bne cr6,0x83197e4c
	if (!cr6.eq) goto loc_83197E4C;
	// li r11,13400
	ctx.r11.s64 = 13400;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// b 0x83197e50
	goto loc_83197E50;
loc_83197E4C:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
loc_83197E50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83197E5C;
	sub_82BADD90(ctx, base);
loc_83197E5C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x83197e70
	if (!cr6.eq) goto loc_83197E70;
	// li r11,10201
	ctx.r11.s64 = 10201;
	// b 0x83197e80
	goto loc_83197E80;
loc_83197E70:
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// li r11,13401
	ctx.r11.s64 = 13401;
	// beq cr6,0x83197e80
	if (cr6.eq) goto loc_83197E80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83197E80:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83197ee4
	if (cr6.eq) goto loc_83197EE4;
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x83197eb0
	if (!cr6.eq) goto loc_83197EB0;
	// li r11,10201
	ctx.r11.s64 = 10201;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83197EA8;
	sub_82BADD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197EB0:
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bne cr6,0x83197ed4
	if (!cr6.eq) goto loc_83197ED4;
	// li r11,13401
	ctx.r11.s64 = 13401;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83197ECC;
	sub_82BADD90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83197ED4:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83197EE4;
	sub_82BADD90(ctx, base);
loc_83197EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83197EEC"))) PPC_WEAK_FUNC(sub_83197EEC);
PPC_FUNC_IMPL(__imp__sub_83197EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83197EF0"))) PPC_WEAK_FUNC(sub_83197EF0);
PPC_FUNC_IMPL(__imp__sub_83197EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83197EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r3.u16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r29,r4,14,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// lwz r11,-3076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3076);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83197f3c
	if (!cr6.eq) goto loc_83197F3C;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83197f40
	if (cr6.eq) goto loc_83197F40;
loc_83197F3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83197F40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83198078
	if (!cr6.eq) goto loc_83198078;
	// bl 0x831156e8
	ctx.lr = 0x83197F50;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r30,150(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83197F64;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x83197F7C;
	sub_8311C338(ctx, base);
	// lhz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// lhz r3,150(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// bl 0x83197440
	ctx.lr = 0x83197F90;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// addi r4,r1,150
	ctx.r4.s64 = ctx.r1.s64 + 150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831177f8
	ctx.lr = 0x83197FA8;
	sub_831177F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,150(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// bl 0x831177a0
	ctx.lr = 0x83197FC0;
	sub_831177A0(ctx, base);
	// lhz r11,150(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83198078
	if (!cr6.eq) goto loc_83198078;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// blt cr6,0x83197ff8
	if (cr6.lt) goto loc_83197FF8;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// ble cr6,0x83197ff0
	if (!cr6.gt) goto loc_83197FF0;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x83197ff8
	if (!cr6.eq) goto loc_83197FF8;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x83197ffc
	goto loc_83197FFC;
loc_83197FF0:
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x83197ffc
	goto loc_83197FFC;
loc_83197FF8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_83197FFC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83198078
	if (cr6.eq) goto loc_83198078;
	// lwz r8,2120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2120);
loc_8319800C:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83198024
	if (cr6.lt) goto loc_83198024;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// b 0x83198038
	goto loc_83198038;
loc_83198024:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
loc_83198038:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8319805c
	if (!cr6.eq) goto loc_8319805C;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83198060
	if (cr6.eq) goto loc_83198060;
loc_8319805C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83198060:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83198084
	if (!cr6.eq) goto loc_83198084;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8319800c
	if (cr6.lt) goto loc_8319800C;
loc_83198078:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83198084:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198090"))) PPC_WEAK_FUNC(sub_83198090);
PPC_FUNC_IMPL(__imp__sub_83198090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83198098;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x831980AC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r25,192
	ctx.r31.s64 = ctx.r25.s64 + 12582912;
	// addi r31,r31,-10964
	ctx.r31.s64 = ctx.r31.s64 + -10964;
	// bl 0x8319dc88
	ctx.lr = 0x831980C4;
	sub_8319DC88(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x831980d4
	if (!cr6.lt) goto loc_831980D4;
	// mulli r11,r3,532
	ctx.r11.s64 = ctx.r3.s64 * 532;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_831980D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83198264
	if (cr6.eq) goto loc_83198264;
	// lhz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 400);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198264
	if (cr6.eq) goto loc_83198264;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_831980F0:
	// cmplwi cr6,r27,200
	cr6.compare<uint32_t>(ctx.r27.u32, 200, xer);
	// blt cr6,0x83198100
	if (cr6.lt) goto loc_83198100;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// b 0x83198104
	goto loc_83198104;
loc_83198100:
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_83198104:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311bf90
	ctx.lr = 0x8319810C;
	sub_8311BF90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83198250
	if (cr6.eq) goto loc_83198250;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83198130
	if (cr6.eq) goto loc_83198130;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319815c
	goto loc_8319815C;
loc_83198130:
	// lbz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83198148
	if (cr6.eq) goto loc_83198148;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319815c
	goto loc_8319815C;
loc_83198148:
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319815C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198250
	if (cr6.eq) goto loc_83198250;
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bne cr6,0x831981b8
	if (!cr6.eq) goto loc_831981B8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831981b0
	if (cr6.eq) goto loc_831981B0;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
loc_83198190:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x831981a8
	if (cr6.eq) goto loc_831981A8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198190
	if (!cr6.eq) goto loc_83198190;
loc_831981A8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198250
	if (!cr6.eq) goto loc_83198250;
loc_831981B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x83198248
	goto loc_83198248;
loc_831981B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311bf00
	ctx.lr = 0x831981C4;
	sub_8311BF00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83198250
	if (cr6.eq) goto loc_83198250;
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x8319821c
	if (!cr6.eq) goto loc_8319821C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83198214
	if (cr6.eq) goto loc_83198214;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
loc_831981F4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319820c
	if (cr6.eq) goto loc_8319820C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831981f4
	if (!cr6.eq) goto loc_831981F4;
loc_8319820C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198250
	if (!cr6.eq) goto loc_83198250;
loc_83198214:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x83198248
	goto loc_83198248;
loc_8319821C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83198244
	if (cr6.eq) goto loc_83198244;
loc_83198224:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319823c
	if (cr6.eq) goto loc_8319823C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198224
	if (!cr6.eq) goto loc_83198224;
loc_8319823C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198250
	if (!cr6.eq) goto loc_83198250;
loc_83198244:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
loc_83198248:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x83198250;
	sub_82BADD90(ctx, base);
loc_83198250:
	// lhz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 400);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x831980f0
	if (cr6.lt) goto loc_831980F0;
loc_83198264:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319826C"))) PPC_WEAK_FUNC(sub_8319826C);
PPC_FUNC_IMPL(__imp__sub_8319826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198270"))) PPC_WEAK_FUNC(sub_83198270);
PPC_FUNC_IMPL(__imp__sub_83198270) {
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
	// bl 0x831156e8
	ctx.lr = 0x83198290;
	sub_831156E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x83198298;
	sub_8319DC20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83198090
	ctx.lr = 0x831982A8;
	sub_83198090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831982C0"))) PPC_WEAK_FUNC(sub_831982C0);
PPC_FUNC_IMPL(__imp__sub_831982C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x831982C8;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x831982D4;
	sub_831156E8(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,37
	ctx.r10.s64 = 37;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r9,38
	ctx.r9.s64 = 38;
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// li r8,39
	ctx.r8.s64 = 39;
	// li r7,40
	ctx.r7.s64 = 40;
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// sth r8,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r8.u16);
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// addi r17,r1,96
	ctx.r17.s64 = ctx.r1.s64 + 96;
	// li r16,5
	ctx.r16.s64 = 5;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r22,-31772
	ctx.r22.s64 = -2082209792;
	// ori r23,r11,60648
	ctx.r23.u64 = ctx.r11.u64 | 60648;
	// ori r21,r10,11904
	ctx.r21.u64 = ctx.r10.u64 | 11904;
	// li r15,2
	ctx.r15.s64 = 2;
loc_83198324:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// lhz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// bl 0x83197118
	ctx.lr = 0x8319833C;
	sub_83197118(ctx, base);
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r19,116(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmplw cr6,r20,r19
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, xer);
	// beq cr6,0x8319849c
	if (cr6.eq) goto loc_8319849C;
loc_83198350:
	// lhz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x8319835C;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198490
	if (cr6.eq) goto loc_83198490;
	// lwzx r9,r26,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831983a0
	if (cr6.eq) goto loc_831983A0;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r26,r21
	ctx.r11.u64 = ctx.r26.u64 + ctx.r21.u64;
loc_83198384:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x831984d4
	if (cr6.eq) goto loc_831984D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83198384
	if (cr6.lt) goto loc_83198384;
loc_831983A0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_831983A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198490
	if (cr6.eq) goto loc_83198490;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c338
	ctx.lr = 0x831983B8;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831177f8
	ctx.lr = 0x831983C8;
	sub_831177F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198490
	if (cr6.eq) goto loc_83198490;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x831177a0
	ctx.lr = 0x831983E0;
	sub_831177A0(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198490
	if (!cr6.eq) goto loc_83198490;
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r27,2116(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2116);
	// rlwinm r10,r11,0,20,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83198490
	if (cr6.eq) goto loc_83198490;
	// addi r28,r3,52
	ctx.r28.s64 = ctx.r3.s64 + 52;
	// lwz r10,-3076(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3076);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83198414:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bge cr6,0x83198490
	if (!cr6.lt) goto loc_83198490;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x8319842c
	if (!cr6.lt) goto loc_8319842C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8319842C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83198458
	if (!cr6.eq) goto loc_83198458;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319845c
	if (cr6.eq) goto loc_8319845C;
loc_83198458:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319845C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83198478
	if (!cr6.eq) goto loc_83198478;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835977d8
	ctx.lr = 0x83198474;
	sub_835977D8(ctx, base);
	// lwz r10,-3076(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -3076);
loc_83198478:
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// rlwinm r9,r11,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x83198414
	if (cr6.lt) goto loc_83198414;
loc_83198490:
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, xer);
	// bne cr6,0x83198350
	if (!cr6.eq) goto loc_83198350;
loc_8319849C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x831984b4
	if (cr6.eq) goto loc_831984B4;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x831984B4;
	sub_825952B8(ctx, base);
loc_831984B4:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// bne 0x83198324
	if (!cr0.eq) goto loc_83198324;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_831984D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831983a4
	goto loc_831983A4;
}

__attribute__((alias("__imp__sub_831984DC"))) PPC_WEAK_FUNC(sub_831984DC);
PPC_FUNC_IMPL(__imp__sub_831984DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831984E0"))) PPC_WEAK_FUNC(sub_831984E0);
PPC_FUNC_IMPL(__imp__sub_831984E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831984E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// sth r3,214(r1)
	PPC_STORE_U16(ctx.r1.u32 + 214, ctx.r3.u16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831984F8;
	sub_831156E8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,214(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 214);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83197118
	ctx.lr = 0x8319851C;
	sub_83197118(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r24,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r24.s64;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8319853c
	if (cr6.eq) goto loc_8319853C;
	// addi r3,r1,214
	ctx.r3.s64 = ctx.r1.s64 + 214;
	// bl 0x8314e438
	ctx.lr = 0x8319853C;
	sub_8314E438(ctx, base);
loc_8319853C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, xer);
	// beq cr6,0x8319862c
	if (cr6.eq) goto loc_8319862C;
	// addis r25,r30,96
	ctx.r25.s64 = ctx.r30.s64 + 6291456;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r25,r25,-4888
	ctx.r25.s64 = ctx.r25.s64 + -4888;
	// ori r28,r10,11904
	ctx.r28.u64 = ctx.r10.u64 | 11904;
	// addi r26,r11,-3076
	ctx.r26.s64 = ctx.r11.s64 + -3076;
loc_83198560:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83198594
	if (cr6.eq) goto loc_83198594;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_83198578:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x83198654
	if (cr6.eq) goto loc_83198654;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83198578
	if (cr6.lt) goto loc_83198578;
loc_83198594:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83198598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198620
	if (cr6.eq) goto loc_83198620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x831985B0;
	sub_8311C338(ctx, base);
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83198620
	if (cr6.eq) goto loc_83198620;
	// rlwinm r7,r27,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0x3FFF;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
loc_831985CC:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x831985dc
	if (cr6.lt) goto loc_831985DC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831985DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x83198600
	if (!cr6.eq) goto loc_83198600;
	// xor r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83198604
	if (cr6.eq) goto loc_83198604;
loc_83198600:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83198604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319865c
	if (!cr6.eq) goto loc_8319865C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x831985cc
	if (cr6.lt) goto loc_831985CC;
loc_83198620:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x83198560
	if (!cr6.eq) goto loc_83198560;
loc_8319862C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83198648
	if (cr6.eq) goto loc_83198648;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83198648;
	sub_825952B8(ctx, base);
loc_83198648:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83198654:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83198598
	goto loc_83198598;
loc_8319865C:
	// lhz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8319867c
	if (cr6.eq) goto loc_8319867C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8319867C;
	sub_825952B8(ctx, base);
loc_8319867C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198688"))) PPC_WEAK_FUNC(sub_83198688);
PPC_FUNC_IMPL(__imp__sub_83198688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83198690;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x83198698;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r27,r29,96
	ctx.r27.s64 = ctx.r29.s64 + 6291456;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8319870c
	if (!cr6.gt) goto loc_8319870C;
	// addis r30,r29,85
	ctx.r30.s64 = ctx.r29.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_831986C4:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bge cr6,0x831986d4
	if (!cr6.lt) goto loc_831986D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831986D4:
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// rlwinm r9,r10,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831986f8
	if (cr6.eq) goto loc_831986F8;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x83197440
	ctx.lr = 0x831986EC;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198718
	if (cr6.eq) goto loc_83198718;
loc_831986F8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x831986c4
	if (cr6.lt) goto loc_831986C4;
loc_8319870C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198724"))) PPC_WEAK_FUNC(sub_83198724);
PPC_FUNC_IMPL(__imp__sub_83198724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198728"))) PPC_WEAK_FUNC(sub_83198728);
PPC_FUNC_IMPL(__imp__sub_83198728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83198730;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83198740;
	sub_831156E8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x8316ea20
	ctx.lr = 0x83198764;
	sub_8316EA20(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x83198798
	if (!cr6.eq) goto loc_83198798;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8319878c
	if (cr6.eq) goto loc_8319878C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8319878C;
	sub_825952B8(ctx, base);
loc_8319878C:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83197648
	ctx.lr = 0x831987A0;
	sub_83197648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198a84
	if (cr6.eq) goto loc_83198A84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831964f8
	ctx.lr = 0x831987B8;
	sub_831964F8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// bl 0x8314f1e8
	ctx.lr = 0x831987C0;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831987e0
	if (!cr6.eq) goto loc_831987E0;
loc_831987CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831987D4;
	sub_82F73D60(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831987E0:
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x83197290
	ctx.lr = 0x831987EC;
	sub_83197290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319880c
	if (cr6.eq) goto loc_8319880C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x831984e0
	ctx.lr = 0x83198804;
	sub_831984E0(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8319880C:
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8314f1e8
	ctx.lr = 0x83198814;
	sub_8314F1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831987cc
	if (cr6.eq) goto loc_831987CC;
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83198830;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831987cc
	if (cr6.eq) goto loc_831987CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x83198848;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e438
	ctx.lr = 0x83198854;
	sub_8314E438(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83198a30
	if (!cr6.eq) goto loc_83198A30;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319887c
	if (cr6.eq) goto loc_8319887C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83198870;
	sub_82F73D60(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8319887C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8315c470
	ctx.lr = 0x83198888;
	sub_8315C470(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r31,r28,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x831988b0
	if (!cr6.eq) goto loc_831988B0;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831988b4
	if (cr6.eq) goto loc_831988B4;
loc_831988B0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_831988B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831988d4
	if (cr6.eq) goto loc_831988D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831988C8;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831988D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8315c568
	ctx.lr = 0x831988E0;
	sub_8315C568(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x83198904
	if (!cr6.eq) goto loc_83198904;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83198908
	if (cr6.eq) goto loc_83198908;
loc_83198904:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83198908:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198928
	if (cr6.eq) goto loc_83198928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x8319891C;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198928:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x83194be0
	ctx.lr = 0x83198934;
	sub_83194BE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x83198958
	if (!cr6.eq) goto loc_83198958;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319895c
	if (cr6.eq) goto loc_8319895C;
loc_83198958:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8319895C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319897c
	if (cr6.eq) goto loc_8319897C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83198970;
	sub_82F73D60(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8319897C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x83194c88
	ctx.lr = 0x83198988;
	sub_83194C88(ctx, base);
	// addi r11,r3,-46
	ctx.r11.s64 = ctx.r3.s64 + -46;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83198a84
	if (cr6.gt) goto loc_83198A84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831989f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831989F8;
	// bdzf 4*cr6+eq,0x83198a1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83198A1C;
	// bdzf 4*cr6+eq,0x83198a84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83198A84;
	// bdzf 4*cr6+eq,0x83198a84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83198A84;
	// bdzf 4*cr6+eq,0x831989e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831989E4;
	// bdzf 4*cr6+eq,0x831989d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831989D0;
	// bdzf 4*cr6+eq,0x83198a84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83198A84;
	// bne cr6,0x831989d0
	if (!cr6.eq) goto loc_831989D0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831989C4;
	sub_82F73D60(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831989D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831989D8;
	sub_82F73D60(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831989E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x831989EC;
	sub_82F73D60(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831989F8:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,16384
	cr6.compare<uint32_t>(ctx.r10.u32, 16384, xer);
	// ble cr6,0x83198a20
	if (!cr6.gt) goto loc_83198A20;
	// bl 0x82f73d60
	ctx.lr = 0x83198A10;
	sub_82F73D60(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198A1C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_83198A20:
	// bl 0x82f73d60
	ctx.lr = 0x83198A24;
	sub_82F73D60(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198A30:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83198a84
	if (!cr6.eq) goto loc_83198A84;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831987cc
	if (cr6.eq) goto loc_831987CC;
	// lwz r11,536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r31,r11,24,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x83195448
	ctx.lr = 0x83198A58;
	sub_83195448(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bgt cr6,0x83198a74
	if (cr6.gt) goto loc_83198A74;
	// bl 0x82f73d60
	ctx.lr = 0x83198A68;
	sub_82F73D60(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198A74:
	// bl 0x82f73d60
	ctx.lr = 0x83198A78;
	sub_82F73D60(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83198A84:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x83198A8C;
	sub_82F73D60(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198A98"))) PPC_WEAK_FUNC(sub_83198A98);
PPC_FUNC_IMPL(__imp__sub_83198A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83198AA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83198b28
	if (!cr6.eq) goto loc_83198B28;
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83198ADC:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83198af8
	if (cr6.eq) goto loc_83198AF8;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83198b04
	goto loc_83198B04;
loc_83198AF8:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_83198B04:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83198b18
	if (cr6.eq) goto loc_83198B18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83198b1c
	goto loc_83198B1C;
loc_83198B18:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83198B1C:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83198adc
	if (cr6.eq) goto loc_83198ADC;
loc_83198B28:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83198b88
	if (cr6.eq) goto loc_83198B88;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x83198b80
	if (!cr6.eq) goto loc_83198B80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e59f08
	ctx.lr = 0x83198B64;
	sub_82E59F08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83198B80:
	// bl 0x82ff8298
	ctx.lr = 0x83198B84;
	sub_82FF8298(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83198B88:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83198bcc
	if (!cr6.lt) goto loc_83198BCC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e59f08
	ctx.lr = 0x83198BB0;
	sub_82E59F08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83198BCC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82b68198
	ctx.lr = 0x83198BD8;
	sub_82B68198(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83198BEC;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198C04"))) PPC_WEAK_FUNC(sub_83198C04);
PPC_FUNC_IMPL(__imp__sub_83198C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198C08"))) PPC_WEAK_FUNC(sub_83198C08);
PPC_FUNC_IMPL(__imp__sub_83198C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83198C10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83198C34;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// beq 0x83198c78
	if (cr0.eq) goto loc_83198C78;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bl 0x82a8e3a8
	ctx.lr = 0x83198C78;
	sub_82A8E3A8(ctx, base);
loc_83198C78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198C84"))) PPC_WEAK_FUNC(sub_83198C84);
PPC_FUNC_IMPL(__imp__sub_83198C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198C88"))) PPC_WEAK_FUNC(sub_83198C88);
PPC_FUNC_IMPL(__imp__sub_83198C88) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83198ce0
	if (!cr6.eq) goto loc_83198CE0;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_83198CB8:
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83198ccc
	if (!cr6.lt) goto loc_83198CCC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83198cd4
	goto loc_83198CD4;
loc_83198CCC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83198CD4:
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83198cb8
	if (cr6.eq) goto loc_83198CB8;
loc_83198CE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83198cfc
	if (cr6.eq) goto loc_83198CFC;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83198d60
	if (!cr6.lt) goto loc_83198D60;
loc_83198CFC:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// bl 0x82a8e3a8
	ctx.lr = 0x83198D20;
	sub_82A8E3A8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83198c08
	ctx.lr = 0x83198D2C;
	sub_83198C08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff6978
	ctx.lr = 0x83198D40;
	sub_82FF6978(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x83198d60
	if (cr6.eq) goto loc_83198D60;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83198D60;
	sub_825952B8(ctx, base);
loc_83198D60:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
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

__attribute__((alias("__imp__sub_83198D7C"))) PPC_WEAK_FUNC(sub_83198D7C);
PPC_FUNC_IMPL(__imp__sub_83198D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198D80"))) PPC_WEAK_FUNC(sub_83198D80);
PPC_FUNC_IMPL(__imp__sub_83198D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83198D88;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// bl 0x83197118
	ctx.lr = 0x83198DAC;
	sub_83197118(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r23,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r23.s64;
	// srawi r10,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// divwu r7,r11,r10
	ctx.r7.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83198e04
	if (cr0.eq) goto loc_83198E04;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83198e98
	if (cr6.eq) goto loc_83198E98;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x825952b8
	ctx.lr = 0x83198DFC;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83198E04:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// divwu r26,r11,r10
	ctx.r26.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// beq cr6,0x83198e7c
	if (cr6.eq) goto loc_83198E7C;
loc_83198E1C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83198e70
	if (cr6.eq) goto loc_83198E70;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_83198E2C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bge cr6,0x83198ea0
	if (!cr6.lt) goto loc_83198EA0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83198c88
	ctx.lr = 0x83198E54;
	sub_83198C88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x83198E5C;
	sub_835977D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x83198e2c
	if (cr6.lt) goto loc_83198E2C;
loc_83198E70:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplw cr6,r27,r21
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, xer);
	// bne cr6,0x83198e1c
	if (!cr6.eq) goto loc_83198E1C;
loc_83198E7C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83198e98
	if (cr6.eq) goto loc_83198E98;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x825952b8
	ctx.lr = 0x83198E98;
	sub_825952B8(ctx, base);
loc_83198E98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83198EA0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83198e98
	if (cr6.eq) goto loc_83198E98;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x825952b8
	ctx.lr = 0x83198EBC;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198EC4"))) PPC_WEAK_FUNC(sub_83198EC4);
PPC_FUNC_IMPL(__imp__sub_83198EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83198EC8"))) PPC_WEAK_FUNC(sub_83198EC8);
PPC_FUNC_IMPL(__imp__sub_83198EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83198ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b629b0
	ctx.lr = 0x83198EF0;
	sub_82B629B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83198d80
	ctx.lr = 0x83198F00;
	sub_83198D80(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83198f3c
	if (cr6.eq) goto loc_83198F3C;
loc_83198F14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x83157e38
	ctx.lr = 0x83198F24;
	sub_83157E38(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83456c38
	ctx.lr = 0x83198F2C;
	sub_83456C38(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x83198f14
	if (!cr6.eq) goto loc_83198F14;
loc_83198F3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e5a698
	ctx.lr = 0x83198F4C;
	sub_82E5A698(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83198F60;
	sub_825952B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83198F68"))) PPC_WEAK_FUNC(sub_83198F68);
PPC_FUNC_IMPL(__imp__sub_83198F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,308
	ctx.r10.s64 = ctx.r3.s64 + 308;
loc_83198F74:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83198f8c
	if (!cr6.eq) goto loc_83198F8C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x83198fb4
	goto loc_83198FB4;
loc_83198F8C:
	// lhz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83198fac
	if (!cr6.eq) goto loc_83198FAC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83198fb0
	if (cr6.eq) goto loc_83198FB0;
loc_83198FAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83198FB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83198FB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83198fd8
	if (!cr6.eq) goto loc_83198FD8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83198f74
	if (cr6.lt) goto loc_83198F74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83198FD8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83198FF0"))) PPC_WEAK_FUNC(sub_83198FF0);
PPC_FUNC_IMPL(__imp__sub_83198FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-2972
	ctx.r8.s64 = ctx.r11.s64 + -2972;
	// addi r10,r3,2016
	ctx.r10.s64 = ctx.r3.s64 + 2016;
	// lhz r7,-2972(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2972);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8319900C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83199024
	if (!cr6.eq) goto loc_83199024;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8319904c
	goto loc_8319904C;
loc_83199024:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x83199044
	if (!cr6.eq) goto loc_83199044;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83199048
	if (cr6.eq) goto loc_83199048;
loc_83199044:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83199048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319904C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199070
	if (!cr6.eq) goto loc_83199070;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// blt cr6,0x8319900c
	if (cr6.lt) goto loc_8319900C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83199070:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r10.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2016, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2044, ctx.r7.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r6,2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2048, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831990A8"))) PPC_WEAK_FUNC(sub_831990A8);
PPC_FUNC_IMPL(__imp__sub_831990A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831990B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-2972
	ctx.r29.s64 = ctx.r11.s64 + -2972;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831990e0
	if (!cr6.eq) goto loc_831990E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83199108
	goto loc_83199108;
loc_831990E0:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83199100
	if (!cr6.eq) goto loc_83199100;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83199104
	if (cr6.eq) goto loc_83199104;
loc_83199100:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83199104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83199108:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199164
	if (!cr6.eq) goto loc_83199164;
	// bl 0x831156e8
	ctx.lr = 0x83199118;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r3,r10,222
	ctx.r3.s64 = ctx.r10.s64 + 14548992;
	// addi r3,r3,-8252
	ctx.r3.s64 = ctx.r3.s64 + -8252;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83198f68
	ctx.lr = 0x83199134;
	sub_83198F68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83199164
	if (cr6.eq) goto loc_83199164;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
loc_83199164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319916C"))) PPC_WEAK_FUNC(sub_8319916C);
PPC_FUNC_IMPL(__imp__sub_8319916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199170"))) PPC_WEAK_FUNC(sub_83199170);
PPC_FUNC_IMPL(__imp__sub_83199170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83199180
	if (!cr6.eq) goto loc_83199180;
	// blr 
	return;
loc_83199180:
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// ori r11,r11,57599
	ctx.r11.u64 = ctx.r11.u64 | 57599;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x831991a0
	if (!cr6.lt) goto loc_831991A0;
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_831991A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831991A8"))) PPC_WEAK_FUNC(sub_831991A8);
PPC_FUNC_IMPL(__imp__sub_831991A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831991f0
	if (cr6.eq) goto loc_831991F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831991e8
	if (cr6.eq) goto loc_831991E8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831991f4
	if (!cr6.eq) goto loc_831991F4;
	// li r31,20
	ctx.r31.s64 = 20;
	// b 0x831991f4
	goto loc_831991F4;
loc_831991E8:
	// li r31,30
	ctx.r31.s64 = 30;
	// b 0x831991f4
	goto loc_831991F4;
loc_831991F0:
	// li r31,10
	ctx.r31.s64 = 10;
loc_831991F4:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d550
	ctx.lr = 0x83199210;
	sub_8314D550(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-29844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83199270
	if (!cr6.eq) goto loc_83199270;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83199298
	goto loc_83199298;
loc_83199270:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83199294
	if (!cr6.lt) goto loc_83199294;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83199298
	if (cr6.gt) goto loc_83199298;
loc_83199294:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83199298:
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

__attribute__((alias("__imp__sub_831992B0"))) PPC_WEAK_FUNC(sub_831992B0);
PPC_FUNC_IMPL(__imp__sub_831992B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x831992C4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r10,r11,222
	ctx.r10.s64 = ctx.r11.s64 + 14548992;
	// addic. r10,r10,-8252
	xer.ca = ctx.r10.u32 > 8251;
	ctx.r10.s64 = ctx.r10.s64 + -8252;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831992e8
	if (!cr0.eq) goto loc_831992E8;
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
loc_831992E8:
	// addis r3,r11,205
	ctx.r3.s64 = ctx.r11.s64 + 13434880;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x82ad13f0
	ctx.lr = 0x831992F8;
	sub_82AD13F0(ctx, base);
	// subfic r11,r3,403
	xer.ca = ctx.r3.u32 <= 403;
	ctx.r11.s64 = 403 - ctx.r3.s64;
	// mulli r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 * 5000;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8319930c
	if (cr6.gt) goto loc_8319930C;
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8319930C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319931C"))) PPC_WEAK_FUNC(sub_8319931C);
PPC_FUNC_IMPL(__imp__sub_8319931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199320"))) PPC_WEAK_FUNC(sub_83199320);
PPC_FUNC_IMPL(__imp__sub_83199320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83199328;
	__savegprlr_19(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,9000
	ctx.r8.s64 = 9000;
	// li r10,5000
	ctx.r10.s64 = 5000;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// li r9,7000
	ctx.r9.s64 = 7000;
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// ori r8,r25,18928
	ctx.r8.u64 = ctx.r25.u64 | 18928;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// lis r22,0
	ctx.r22.s64 = 0;
	// stw r9,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// ori r8,r10,60000
	ctx.r8.u64 = ctx.r10.u64 | 60000;
	// ori r9,r9,14464
	ctx.r9.u64 = ctx.r9.u64 | 14464;
	// lis r20,0
	ctx.r20.s64 = 0;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lis r21,0
	ctx.r21.s64 = 0;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// ori r10,r22,50000
	ctx.r10.u64 = ctx.r22.u64 | 50000;
	// ori r8,r20,40000
	ctx.r8.u64 = ctx.r20.u64 | 40000;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// ori r9,r21,45000
	ctx.r9.u64 = ctx.r21.u64 | 45000;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lis r19,0
	ctx.r19.s64 = 0;
	// ori r25,r24,64464
	ctx.r25.u64 = ctx.r24.u64 | 64464;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// ori r10,r19,35000
	ctx.r10.u64 = ctx.r19.u64 | 35000;
	// li r8,27000
	ctx.r8.s64 = 27000;
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// li r9,30000
	ctx.r9.s64 = 30000;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lis r23,1
	ctx.r23.s64 = 65536;
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// li r29,15000
	ctx.r29.s64 = 15000;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// li r30,12000
	ctx.r30.s64 = 12000;
	// ori r24,r23,34464
	ctx.r24.u64 = ctx.r23.u64 | 34464;
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// li r10,24000
	ctx.r10.s64 = 24000;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// li r25,21000
	ctx.r25.s64 = 21000;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// li r8,18000
	ctx.r8.s64 = 18000;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r29,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r29.u32);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,20000
	ctx.r3.s64 = 20000;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,8000
	ctx.r5.s64 = 8000;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r6,6000
	ctx.r6.s64 = 6000;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// li r7,4000
	ctx.r7.s64 = 4000;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r9,2000
	ctx.r9.s64 = 2000;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r4,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r4.u32);
	// li r25,1500
	ctx.r25.s64 = 1500;
	// stw r5,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r5.u32);
	// li r29,900
	ctx.r29.s64 = 900;
	// stw r6,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r6.u32);
	// li r8,500
	ctx.r8.s64 = 500;
	// stw r7,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r7.u32);
	// li r30,800
	ctx.r30.s64 = 800;
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r24,700
	ctx.r24.s64 = 700;
	// stw r9,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// li r11,600
	ctx.r11.s64 = 600;
	// li r30,450
	ctx.r30.s64 = 450;
	// stw r25,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r25.u32);
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r29,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r29.u32);
	// li r29,400
	ctx.r29.s64 = 400;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// li r25,300
	ctx.r25.s64 = 300;
	// li r30,250
	ctx.r30.s64 = 250;
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// stw r24,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r24.u32);
	// stw r8,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r8.u32);
	// stw r29,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r29.u32);
	// stw r11,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
	// stw r25,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r25.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x83199574;
	sub_831156E8(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,-2924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831995a8
	if (!cr6.eq) goto loc_831995A8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831995a8
	if (!cr6.eq) goto loc_831995A8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831995A8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831995e4
	if (!cr6.eq) goto loc_831995E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316fb10
	ctx.lr = 0x831995C0;
	sub_8316FB10(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831995f0
	if (!cr6.eq) goto loc_831995F0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,13400
	cr6.compare<uint32_t>(ctx.r11.u32, 13400, xer);
	// beq cr6,0x83199618
	if (cr6.eq) goto loc_83199618;
	// cmplwi cr6,r11,10200
	cr6.compare<uint32_t>(ctx.r11.u32, 10200, xer);
	// beq cr6,0x83199618
	if (cr6.eq) goto loc_83199618;
loc_831995E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831995F0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83199618
	if (!cr6.eq) goto loc_83199618;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,13401
	cr6.compare<uint32_t>(ctx.r11.u32, 13401, xer);
	// beq cr6,0x83199618
	if (cr6.eq) goto loc_83199618;
	// cmplwi cr6,r11,10201
	cr6.compare<uint32_t>(ctx.r11.u32, 10201, xer);
	// beq cr6,0x83199618
	if (cr6.eq) goto loc_83199618;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83199618:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x83199624;
	sub_8311C338(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// bne cr6,0x83199644
	if (!cr6.eq) goto loc_83199644;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x831995e4
	if (!cr6.lt) goto loc_831995E4;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// b 0x83199690
	goto loc_83199690;
loc_83199644:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x83199660
	if (!cr6.eq) goto loc_83199660;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x831995e4
	if (!cr6.lt) goto loc_831995E4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// b 0x83199690
	goto loc_83199690;
loc_83199660:
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x83199684
	if (!cr6.gt) goto loc_83199684;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bge cr6,0x831995e4
	if (!cr6.lt) goto loc_831995E4;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// b 0x83199690
	goto loc_83199690;
loc_83199684:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// bge cr6,0x831995e4
	if (!cr6.lt) goto loc_831995E4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_83199690:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831996ac
	if (cr6.eq) goto loc_831996AC;
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
loc_831996AC:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831996B4"))) PPC_WEAK_FUNC(sub_831996B4);
PPC_FUNC_IMPL(__imp__sub_831996B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831996B8"))) PPC_WEAK_FUNC(sub_831996B8);
PPC_FUNC_IMPL(__imp__sub_831996B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831996C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,-2924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831996fc
	if (!cr6.eq) goto loc_831996FC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199700
	if (cr6.eq) goto loc_83199700;
loc_831996FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83199700:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831998f4
	if (!cr6.eq) goto loc_831998F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83194b30
	ctx.lr = 0x83199714;
	sub_83194B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831998f4
	if (!cr6.eq) goto loc_831998F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83194ba8
	ctx.lr = 0x83199728;
	sub_83194BA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831998f4
	if (!cr6.eq) goto loc_831998F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x831998f4
	if (cr6.eq) goto loc_831998F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x8319978C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x8319980c
	if (!cr6.eq) goto loc_8319980C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r8,r11,28536
	ctx.r8.s64 = ctx.r11.s64 + 28536;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_831997B0:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x831997cc
	if (!cr6.eq) goto loc_831997CC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x831997ec
	if (cr6.eq) goto loc_831997EC;
loc_831997CC:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,312
	cr6.compare<uint32_t>(ctx.r9.u32, 312, xer);
	// blt cr6,0x831997b0
	if (cr6.lt) goto loc_831997B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831997EC:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319980C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r8,r11,27656
	ctx.r8.s64 = ctx.r11.s64 + 27656;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_83199818:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83199834
	if (!cr6.eq) goto loc_83199834;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x8319984c
	if (cr6.eq) goto loc_8319984C;
loc_83199834:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,876
	cr6.compare<uint32_t>(ctx.r9.u32, 876, xer);
	// blt cr6,0x83199818
	if (cr6.lt) goto loc_83199818;
	// b 0x83199868
	goto loc_83199868;
loc_8319984C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831998e8
	if (!cr6.eq) goto loc_831998E8;
loc_83199868:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x831998e8
	if (cr6.gt) goto loc_831998E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831998a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831998A4;
	// bdzf 4*cr6+eq,0x831998b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831998B4;
	// bdzf 4*cr6+eq,0x831998b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831998B4;
	// bdzf 4*cr6+eq,0x831998c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831998C4;
	// bdzf 4*cr6+eq,0x831998d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831998D4;
	// bne cr6,0x831998e4
	if (!cr6.eq) goto loc_831998E4;
	// li r30,20000
	ctx.r30.s64 = 20000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998A4:
	// li r30,10000
	ctx.r30.s64 = 10000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998B4:
	// li r30,5000
	ctx.r30.s64 = 5000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998C4:
	// li r30,1000
	ctx.r30.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998D4:
	// li r30,500
	ctx.r30.s64 = 500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998E4:
	// li r30,300
	ctx.r30.s64 = 300;
loc_831998E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831998F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199900"))) PPC_WEAK_FUNC(sub_83199900);
PPC_FUNC_IMPL(__imp__sub_83199900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83199908;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83199918;
	sub_831156E8(ctx, base);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x83199924;
	sub_8311C338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83194a40
	ctx.lr = 0x83199938;
	sub_83194A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83199964
	if (cr6.eq) goto loc_83199964;
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x831999e0
	goto loc_831999E0;
loc_83199964:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x831999b4
	if (cr6.gt) goto loc_831999B4;
	// beq cr6,0x831999ac
	if (cr6.eq) goto loc_831999AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x831999bc
	if (cr6.gt) goto loc_831999BC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831999dc
	if (cr6.eq) goto loc_831999DC;
	// bdz 0x831999a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999A4;
	// bdz 0x831999ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999AC;
	// bdz 0x831999a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999A4;
	// bdz 0x831999ac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999AC;
	// bdz 0x831999dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999DC;
	// bdz 0x831999dc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831999DC;
loc_831999A4:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x831999e0
	goto loc_831999E0;
loc_831999AC:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x831999e0
	goto loc_831999E0;
loc_831999B4:
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x831999dc
	if (cr6.eq) goto loc_831999DC;
loc_831999BC:
	// lhz r11,78(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x831999e0
	if (!cr6.eq) goto loc_831999E0;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831999e0
	if (!cr6.eq) goto loc_831999E0;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x831999e0
	goto loc_831999E0;
loc_831999DC:
	// li r31,2
	ctx.r31.s64 = 2;
loc_831999E0:
	// mullw r11,r31,r29
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,4276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4276);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199A18"))) PPC_WEAK_FUNC(sub_83199A18);
PPC_FUNC_IMPL(__imp__sub_83199A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83199A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83199A2C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83199A34;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r29,r10,5
	ctx.r29.s64 = ctx.r10.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831239e0
	ctx.lr = 0x83199A54;
	sub_831239E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831239e0
	ctx.lr = 0x83199A64;
	sub_831239E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,27560
	ctx.r5.s64 = ctx.r8.s64 + 27560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x83199A84;
	sub_831178A0(ctx, base);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lwz r11,-2924(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2924);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r31,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83199ab4
	if (!cr6.eq) goto loc_83199AB4;
	// xor r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83199ab8
	if (cr6.eq) goto loc_83199AB8;
loc_83199AB4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83199AB8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83199ac8
	if (cr6.eq) goto loc_83199AC8;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83199AC8:
	// rlwinm r30,r31,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83199ae8
	if (!cr6.eq) goto loc_83199AE8;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199aec
	if (cr6.eq) goto loc_83199AEC;
loc_83199AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83199AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83199b04
	if (cr6.eq) goto loc_83199B04;
loc_83199AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83199B04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x83199B14;
	sub_831239E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83199b38
	if (!cr6.eq) goto loc_83199B38;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199b3c
	if (cr6.eq) goto loc_83199B3C;
loc_83199B38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83199B3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83199af8
	if (cr6.eq) goto loc_83199AF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x83199B50;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831bc350
	ctx.lr = 0x83199B60;
	sub_831BC350(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83199af8
	if (!cr6.eq) goto loc_83199AF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831238b8
	ctx.lr = 0x83199B78;
	sub_831238B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831238b8
	ctx.lr = 0x83199B88;
	sub_831238B8(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123778
	ctx.lr = 0x83199B94;
	sub_83123778(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83199900
	ctx.lr = 0x83199BA4;
	sub_83199900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199BAC"))) PPC_WEAK_FUNC(sub_83199BAC);
PPC_FUNC_IMPL(__imp__sub_83199BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199BB0"))) PPC_WEAK_FUNC(sub_83199BB0);
PPC_FUNC_IMPL(__imp__sub_83199BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83199BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83199BC8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x83199BDC;
	sub_8311C3D8(ctx, base);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r5,r9,27560
	ctx.r5.s64 = ctx.r9.s64 + 27560;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x83199C10;
	sub_831178A0(ctx, base);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-2924(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2924);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x83199c44
	if (!cr6.eq) goto loc_83199C44;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83199c48
	if (cr6.eq) goto loc_83199C48;
loc_83199C44:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83199C48:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83199c58
	if (cr6.eq) goto loc_83199C58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83199C58:
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83199c78
	if (!cr6.eq) goto loc_83199C78;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83199c7c
	if (cr6.eq) goto loc_83199C7C;
loc_83199C78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83199C7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199c94
	if (cr6.eq) goto loc_83199C94;
loc_83199C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83199C94:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83199cb8
	if (!cr6.eq) goto loc_83199CB8;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199cbc
	if (cr6.eq) goto loc_83199CBC;
loc_83199CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83199CBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83199c88
	if (cr6.eq) goto loc_83199C88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831bc350
	ctx.lr = 0x83199CD0;
	sub_831BC350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199c88
	if (!cr6.eq) goto loc_83199C88;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c1298
	ctx.lr = 0x83199CF0;
	sub_831C1298(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c1298
	ctx.lr = 0x83199D08;
	sub_831C1298(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x83199900
	ctx.lr = 0x83199D1C;
	sub_83199900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199D24"))) PPC_WEAK_FUNC(sub_83199D24);
PPC_FUNC_IMPL(__imp__sub_83199D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83199D28"))) PPC_WEAK_FUNC(sub_83199D28);
PPC_FUNC_IMPL(__imp__sub_83199D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83199D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83199D3C;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x83199D50;
	sub_8311C3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8311c148
	ctx.lr = 0x83199D60;
	sub_8311C148(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r9,r10,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83199fdc
	if (!cr6.eq) goto loc_83199FDC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,27560
	ctx.r5.s64 = ctx.r11.s64 + 27560;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x83199D90;
	sub_831178A0(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,-2924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83199dc0
	if (!cr6.eq) goto loc_83199DC0;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199dc4
	if (cr6.eq) goto loc_83199DC4;
loc_83199DC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83199DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199fdc
	if (!cr6.eq) goto loc_83199FDC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8315c050
	ctx.lr = 0x83199DD8;
	sub_8315C050(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83199fdc
	if (!cr6.eq) goto loc_83199FDC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8314e340
	ctx.lr = 0x83199E00;
	sub_8314E340(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r28,r10,28,20,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// cmpwi cr6,r28,46
	cr6.compare<int32_t>(ctx.r28.s32, 46, xer);
	// bge cr6,0x83199e18
	if (!cr6.lt) goto loc_83199E18;
	// li r28,55
	ctx.r28.s64 = 55;
loc_83199E18:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83194a40
	ctx.lr = 0x83199E24;
	sub_83194A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199fdc
	if (!cr6.eq) goto loc_83199FDC;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r31,56
	cr6.compare<uint32_t>(ctx.r31.u32, 56, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// cmplwi cr6,r31,57
	cr6.compare<uint32_t>(ctx.r31.u32, 57, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// cmplwi cr6,r31,58
	cr6.compare<uint32_t>(ctx.r31.u32, 58, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// cmplwi cr6,r31,103
	cr6.compare<uint32_t>(ctx.r31.u32, 103, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83195c48
	ctx.lr = 0x83199E5C;
	sub_83195C48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83199fdc
	if (!cr6.eq) goto loc_83199FDC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x83199fdc
	if (cr6.eq) goto loc_83199FDC;
	// bl 0x830ff290
	ctx.lr = 0x83199E74;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bne cr6,0x83199eec
	if (!cr6.eq) goto loc_83199EEC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r8,r11,29296
	ctx.r8.s64 = ctx.r11.s64 + 29296;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_83199E94:
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// bne cr6,0x83199eac
	if (!cr6.eq) goto loc_83199EAC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, xer);
	// beq cr6,0x83199ecc
	if (cr6.eq) goto loc_83199ECC;
loc_83199EAC:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,276
	cr6.compare<uint32_t>(ctx.r9.u32, 276, xer);
	// blt cr6,0x83199e94
	if (cr6.lt) goto loc_83199E94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199ECC:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199EEC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r8,r11,28848
	ctx.r8.s64 = ctx.r11.s64 + 28848;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_83199EF8:
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// bne cr6,0x83199f10
	if (!cr6.eq) goto loc_83199F10;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, xer);
	// beq cr6,0x83199f28
	if (cr6.eq) goto loc_83199F28;
loc_83199F10:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,444
	cr6.compare<uint32_t>(ctx.r9.u32, 444, xer);
	// blt cr6,0x83199ef8
	if (cr6.lt) goto loc_83199EF8;
	// b 0x83199f44
	goto loc_83199F44;
loc_83199F28:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83199fd0
	if (!cr6.eq) goto loc_83199FD0;
loc_83199F44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c338
	ctx.lr = 0x83199F50;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83199fd0
	if (!cr6.eq) goto loc_83199FD0;
	// addi r11,r28,-46
	ctx.r11.s64 = ctx.r28.s64 + -46;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83199fd0
	if (cr6.gt) goto loc_83199FD0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83199fcc
	if (cr6.eq) goto loc_83199FCC;
	// bdz 0x83199fbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199FBC;
	// bdz 0x83199fd0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199FD0;
	// bdz 0x83199fd0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199FD0;
	// bdz 0x83199fd0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199FD0;
	// bdz 0x83199fac
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199FAC;
	// bdz 0x83199f9c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83199F9C;
	// li r29,3000
	ctx.r29.s64 = 3000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199F9C:
	// li r29,2000
	ctx.r29.s64 = 2000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199FAC:
	// li r29,1000
	ctx.r29.s64 = 1000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199FBC:
	// li r29,500
	ctx.r29.s64 = 500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199FCC:
	// li r29,200
	ctx.r29.s64 = 200;
loc_83199FD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83199FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83199FE8"))) PPC_WEAK_FUNC(sub_83199FE8);
PPC_FUNC_IMPL(__imp__sub_83199FE8) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8314e2f0
	ctx.lr = 0x8319A000;
	sub_8314E2F0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,29576
	ctx.r11.s64 = ctx.r11.s64 + 29576;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8319A014:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a024
	if (!cr6.eq) goto loc_8319A024;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8319A024:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a034
	if (!cr6.eq) goto loc_8319A034;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8319A034:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a044
	if (!cr6.eq) goto loc_8319A044;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_8319A044:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a054
	if (!cr6.eq) goto loc_8319A054;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_8319A054:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a064
	if (!cr6.eq) goto loc_8319A064;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8319A064:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8319a074
	if (!cr6.eq) goto loc_8319A074;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8319A074:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x8319a014
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319A014;
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

__attribute__((alias("__imp__sub_8319A094"))) PPC_WEAK_FUNC(sub_8319A094);
PPC_FUNC_IMPL(__imp__sub_8319A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A098"))) PPC_WEAK_FUNC(sub_8319A098);
PPC_FUNC_IMPL(__imp__sub_8319A098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319A0A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319A0C0;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,27560
	ctx.r5.s64 = ctx.r9.s64 + 27560;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x8319A0E8;
	sub_831178A0(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319a114
	if (!cr6.eq) goto loc_8319A114;
	// xor r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8319a118
	if (cr6.eq) goto loc_8319A118;
loc_8319A114:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8319A118:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319a158
	if (!cr6.eq) goto loc_8319A158;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r9,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319a148
	if (!cr6.eq) goto loc_8319A148;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8319a14c
	if (cr6.eq) goto loc_8319A14C;
loc_8319A148:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8319A14C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319a27c
	if (cr6.eq) goto loc_8319A27C;
loc_8319A158:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319a178
	if (!cr6.eq) goto loc_8319A178;
	// xor r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319a17c
	if (cr6.eq) goto loc_8319A17C;
loc_8319A178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319A17C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319a18c
	if (cr6.eq) goto loc_8319A18C;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8319A18C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,-8252
	ctx.r3.s64 = ctx.r3.s64 + -8252;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319a1cc
	if (cr6.eq) goto loc_8319A1CC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83198ff0
	ctx.lr = 0x8319A1C4;
	sub_83198FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319A1CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8319a204
	if (!cr6.eq) goto loc_8319A204;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83198ff0
	ctx.lr = 0x8319A1FC;
	sub_83198FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319A204:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319a228
	if (!cr6.eq) goto loc_8319A228;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319a22c
	if (cr6.eq) goto loc_8319A22C;
loc_8319A228:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319A22C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x8319a264
	if (cr6.eq) goto loc_8319A264;
	// li r10,5
	ctx.r10.s64 = 5;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83198ff0
	ctx.lr = 0x8319A25C;
	sub_83198FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319A264:
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83198ff0
	ctx.lr = 0x8319A27C;
	sub_83198FF0(ctx, base);
loc_8319A27C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319A284"))) PPC_WEAK_FUNC(sub_8319A284);
PPC_FUNC_IMPL(__imp__sub_8319A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A288"))) PPC_WEAK_FUNC(sub_8319A288);
PPC_FUNC_IMPL(__imp__sub_8319A288) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A2A0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319a2b8
	if (!cr6.eq) goto loc_8319A2B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8319a2e0
	goto loc_8319A2E0;
loc_8319A2B8:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a2d8
	if (!cr6.lt) goto loc_8319A2D8;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a2dc
	if (cr6.gt) goto loc_8319A2DC;
loc_8319A2D8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A2DC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8319A2E0:
	// addis r11,r7,222
	ctx.r11.s64 = ctx.r7.s64 + 14548992;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r11,-8252
	ctx.r11.s64 = ctx.r11.s64 + -8252;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x8319a30c
	if (!cr6.lt) goto loc_8319A30C;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8319a324
	if (cr6.gt) goto loc_8319A324;
loc_8319A30C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
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
loc_8319A324:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8319A33C"))) PPC_WEAK_FUNC(sub_8319A33C);
PPC_FUNC_IMPL(__imp__sub_8319A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A340"))) PPC_WEAK_FUNC(sub_8319A340);
PPC_FUNC_IMPL(__imp__sub_8319A340) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A358;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319a370
	if (!cr6.eq) goto loc_8319A370;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8319a398
	goto loc_8319A398;
loc_8319A370:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a390
	if (!cr6.lt) goto loc_8319A390;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a394
	if (cr6.gt) goto loc_8319A394;
loc_8319A390:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A394:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8319A398:
	// addis r10,r7,222
	ctx.r10.s64 = ctx.r7.s64 + 14548992;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r10,r10,-8252
	ctx.r10.s64 = ctx.r10.s64 + -8252;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8319a3c4
	if (!cr6.lt) goto loc_8319A3C4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8319a3dc
	if (cr6.gt) goto loc_8319A3DC;
loc_8319A3C4:
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
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
loc_8319A3DC:
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A3F4"))) PPC_WEAK_FUNC(sub_8319A3F4);
PPC_FUNC_IMPL(__imp__sub_8319A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A3F8"))) PPC_WEAK_FUNC(sub_8319A3F8);
PPC_FUNC_IMPL(__imp__sub_8319A3F8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A410;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a444
	if (cr6.eq) goto loc_8319A444;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a440
	if (!cr6.lt) goto loc_8319A440;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a444
	if (cr6.gt) goto loc_8319A444;
loc_8319A440:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A444:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57304
	ctx.r8.u64 = ctx.r10.u64 | 57304;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A464"))) PPC_WEAK_FUNC(sub_8319A464);
PPC_FUNC_IMPL(__imp__sub_8319A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A468"))) PPC_WEAK_FUNC(sub_8319A468);
PPC_FUNC_IMPL(__imp__sub_8319A468) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A480;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319a498
	if (!cr6.eq) goto loc_8319A498;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8319a4c0
	goto loc_8319A4C0;
loc_8319A498:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a4b8
	if (!cr6.lt) goto loc_8319A4B8;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a4bc
	if (cr6.gt) goto loc_8319A4BC;
loc_8319A4B8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A4BC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8319A4C0:
	// addis r10,r7,222
	ctx.r10.s64 = ctx.r7.s64 + 14548992;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r10,r10,-8252
	ctx.r10.s64 = ctx.r10.s64 + -8252;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8319a4ec
	if (!cr6.lt) goto loc_8319A4EC;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8319a504
	if (cr6.gt) goto loc_8319A504;
loc_8319A4EC:
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
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
loc_8319A504:
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A51C"))) PPC_WEAK_FUNC(sub_8319A51C);
PPC_FUNC_IMPL(__imp__sub_8319A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A520"))) PPC_WEAK_FUNC(sub_8319A520);
PPC_FUNC_IMPL(__imp__sub_8319A520) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A538;
	sub_831156E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8319a56c
	if (cr6.eq) goto loc_8319A56C;
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// ori r11,r11,57599
	ctx.r11.u64 = ctx.r11.u64 | 57599;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x8319a568
	if (!cr6.lt) goto loc_8319A568;
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319a56c
	if (cr6.gt) goto loc_8319A56C;
loc_8319A568:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8319A56C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addis r9,r9,222
	ctx.r9.s64 = ctx.r9.s64 + 14548992;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r9,r9,-8252
	ctx.r9.s64 = ctx.r9.s64 + -8252;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x8319a590
	if (!cr6.lt) goto loc_8319A590;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319a5a8
	if (cr6.gt) goto loc_8319A5A8;
loc_8319A590:
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
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
loc_8319A5A8:
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8319A5C0"))) PPC_WEAK_FUNC(sub_8319A5C0);
PPC_FUNC_IMPL(__imp__sub_8319A5C0) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A5D8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a60c
	if (cr6.eq) goto loc_8319A60C;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a608
	if (!cr6.lt) goto loc_8319A608;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a60c
	if (cr6.gt) goto loc_8319A60C;
loc_8319A608:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A60C:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57328
	ctx.r8.u64 = ctx.r10.u64 | 57328;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A62C"))) PPC_WEAK_FUNC(sub_8319A62C);
PPC_FUNC_IMPL(__imp__sub_8319A62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A630"))) PPC_WEAK_FUNC(sub_8319A630);
PPC_FUNC_IMPL(__imp__sub_8319A630) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A648;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a67c
	if (cr6.eq) goto loc_8319A67C;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a678
	if (!cr6.lt) goto loc_8319A678;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a67c
	if (cr6.gt) goto loc_8319A67C;
loc_8319A678:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A67C:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57332
	ctx.r8.u64 = ctx.r10.u64 | 57332;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A69C"))) PPC_WEAK_FUNC(sub_8319A69C);
PPC_FUNC_IMPL(__imp__sub_8319A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A6A0"))) PPC_WEAK_FUNC(sub_8319A6A0);
PPC_FUNC_IMPL(__imp__sub_8319A6A0) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A6B8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319a6d0
	if (!cr6.eq) goto loc_8319A6D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8319a6f8
	goto loc_8319A6F8;
loc_8319A6D0:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a6f0
	if (!cr6.lt) goto loc_8319A6F0;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a6f4
	if (cr6.gt) goto loc_8319A6F4;
loc_8319A6F0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A6F4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8319A6F8:
	// addis r10,r7,222
	ctx.r10.s64 = ctx.r7.s64 + 14548992;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r10,r10,-8252
	ctx.r10.s64 = ctx.r10.s64 + -8252;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8319a724
	if (!cr6.lt) goto loc_8319A724;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8319a73c
	if (cr6.gt) goto loc_8319A73C;
loc_8319A724:
	// stw r9,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
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
loc_8319A73C:
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A754"))) PPC_WEAK_FUNC(sub_8319A754);
PPC_FUNC_IMPL(__imp__sub_8319A754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A758"))) PPC_WEAK_FUNC(sub_8319A758);
PPC_FUNC_IMPL(__imp__sub_8319A758) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A770;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a7a4
	if (cr6.eq) goto loc_8319A7A4;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a7a0
	if (!cr6.lt) goto loc_8319A7A0;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a7a4
	if (cr6.gt) goto loc_8319A7A4;
loc_8319A7A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A7A4:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,58872
	ctx.r8.u64 = ctx.r10.u64 | 58872;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A7C4"))) PPC_WEAK_FUNC(sub_8319A7C4);
PPC_FUNC_IMPL(__imp__sub_8319A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A7C8"))) PPC_WEAK_FUNC(sub_8319A7C8);
PPC_FUNC_IMPL(__imp__sub_8319A7C8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A7E0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a814
	if (cr6.eq) goto loc_8319A814;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a810
	if (!cr6.lt) goto loc_8319A810;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a814
	if (cr6.gt) goto loc_8319A814;
loc_8319A810:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A814:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57296
	ctx.r8.u64 = ctx.r10.u64 | 57296;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A834"))) PPC_WEAK_FUNC(sub_8319A834);
PPC_FUNC_IMPL(__imp__sub_8319A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A838"))) PPC_WEAK_FUNC(sub_8319A838);
PPC_FUNC_IMPL(__imp__sub_8319A838) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A850;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a884
	if (cr6.eq) goto loc_8319A884;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a880
	if (!cr6.lt) goto loc_8319A880;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a884
	if (cr6.gt) goto loc_8319A884;
loc_8319A880:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A884:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57300
	ctx.r8.u64 = ctx.r10.u64 | 57300;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A8A4"))) PPC_WEAK_FUNC(sub_8319A8A4);
PPC_FUNC_IMPL(__imp__sub_8319A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A8A8"))) PPC_WEAK_FUNC(sub_8319A8A8);
PPC_FUNC_IMPL(__imp__sub_8319A8A8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A8C0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a8f4
	if (cr6.eq) goto loc_8319A8F4;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a8f0
	if (!cr6.lt) goto loc_8319A8F0;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a8f4
	if (cr6.gt) goto loc_8319A8F4;
loc_8319A8F0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A8F4:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57312
	ctx.r8.u64 = ctx.r10.u64 | 57312;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319A914"))) PPC_WEAK_FUNC(sub_8319A914);
PPC_FUNC_IMPL(__imp__sub_8319A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A918"))) PPC_WEAK_FUNC(sub_8319A918);
PPC_FUNC_IMPL(__imp__sub_8319A918) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319A930;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319a964
	if (cr6.eq) goto loc_8319A964;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319a960
	if (!cr6.lt) goto loc_8319A960;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319a964
	if (cr6.gt) goto loc_8319A964;
loc_8319A960:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319A964:
	// addis r9,r9,222
	ctx.r9.s64 = ctx.r9.s64 + 14548992;
	// addi r9,r9,-8252
	ctx.r9.s64 = ctx.r9.s64 + -8252;
	// lwz r10,1592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1592);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1592, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8319A98C"))) PPC_WEAK_FUNC(sub_8319A98C);
PPC_FUNC_IMPL(__imp__sub_8319A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319A990"))) PPC_WEAK_FUNC(sub_8319A990);
PPC_FUNC_IMPL(__imp__sub_8319A990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319A998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-2972
	ctx.r11.s64 = ctx.r11.s64 + -2972;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319a9c8
	if (!cr6.eq) goto loc_8319A9C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319a9f0
	goto loc_8319A9F0;
loc_8319A9C8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319a9e8
	if (!cr6.eq) goto loc_8319A9E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319a9ec
	if (cr6.eq) goto loc_8319A9EC;
loc_8319A9E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319A9EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319A9F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319aa74
	if (!cr6.eq) goto loc_8319AA74;
	// bl 0x831156e8
	ctx.lr = 0x8319AA00;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319aa18
	if (!cr6.eq) goto loc_8319AA18;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8319aa48
	goto loc_8319AA48;
loc_8319AA18:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8319aa34
	if (cr6.lt) goto loc_8319AA34;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8319aa48
	goto loc_8319AA48;
loc_8319AA34:
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319aa48
	if (cr6.gt) goto loc_8319AA48;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8319AA48:
	// addis r29,r9,222
	ctx.r29.s64 = ctx.r9.s64 + 14548992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r29,-8252
	ctx.r29.s64 = ctx.r29.s64 + -8252;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83198f68
	ctx.lr = 0x8319AA5C;
	sub_83198F68(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,1584(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,1584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1584, ctx.r10.u32);
loc_8319AA74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319AA7C"))) PPC_WEAK_FUNC(sub_8319AA7C);
PPC_FUNC_IMPL(__imp__sub_8319AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AA80"))) PPC_WEAK_FUNC(sub_8319AA80);
PPC_FUNC_IMPL(__imp__sub_8319AA80) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319AA98;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319aacc
	if (cr6.eq) goto loc_8319AACC;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319aac8
	if (!cr6.lt) goto loc_8319AAC8;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319aacc
	if (cr6.gt) goto loc_8319AACC;
loc_8319AAC8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319AACC:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57324
	ctx.r8.u64 = ctx.r10.u64 | 57324;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319AAEC"))) PPC_WEAK_FUNC(sub_8319AAEC);
PPC_FUNC_IMPL(__imp__sub_8319AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AAF0"))) PPC_WEAK_FUNC(sub_8319AAF0);
PPC_FUNC_IMPL(__imp__sub_8319AAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319AAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319AB08;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319ab20
	if (!cr6.eq) goto loc_8319AB20;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8319ab50
	goto loc_8319AB50;
loc_8319AB20:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8319ab3c
	if (cr6.lt) goto loc_8319AB3C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8319ab50
	goto loc_8319AB50;
loc_8319AB3C:
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319ab50
	if (cr6.gt) goto loc_8319AB50;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8319AB50:
	// addis r31,r9,222
	ctx.r31.s64 = ctx.r9.s64 + 14548992;
	// addi r31,r31,-8252
	ctx.r31.s64 = ctx.r31.s64 + -8252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2000);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82f62ea0
	ctx.lr = 0x8319AB70;
	sub_82F62EA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319ab94
	if (cr6.eq) goto loc_8319AB94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83198f68
	ctx.lr = 0x8319AB88;
	sub_83198F68(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8319AB94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319AB9C"))) PPC_WEAK_FUNC(sub_8319AB9C);
PPC_FUNC_IMPL(__imp__sub_8319AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319ABA0"))) PPC_WEAK_FUNC(sub_8319ABA0);
PPC_FUNC_IMPL(__imp__sub_8319ABA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319ABA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319ABB8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319abd0
	if (!cr6.eq) goto loc_8319ABD0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8319ac00
	goto loc_8319AC00;
loc_8319ABD0:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8319abec
	if (cr6.lt) goto loc_8319ABEC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8319ac00
	goto loc_8319AC00;
loc_8319ABEC:
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319ac00
	if (cr6.gt) goto loc_8319AC00;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8319AC00:
	// addis r31,r9,222
	ctx.r31.s64 = ctx.r9.s64 + 14548992;
	// addi r31,r31,-8252
	ctx.r31.s64 = ctx.r31.s64 + -8252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82f62ea0
	ctx.lr = 0x8319AC20;
	sub_82F62EA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319ac44
	if (cr6.eq) goto loc_8319AC44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83198f68
	ctx.lr = 0x8319AC38;
	sub_83198F68(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8319AC44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319AC4C"))) PPC_WEAK_FUNC(sub_8319AC4C);
PPC_FUNC_IMPL(__imp__sub_8319AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AC50"))) PPC_WEAK_FUNC(sub_8319AC50);
PPC_FUNC_IMPL(__imp__sub_8319AC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319AC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319AC68;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319ac80
	if (!cr6.eq) goto loc_8319AC80;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8319acb0
	goto loc_8319ACB0;
loc_8319AC80:
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8319ac9c
	if (cr6.lt) goto loc_8319AC9C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8319acb0
	goto loc_8319ACB0;
loc_8319AC9C:
	// lis r11,-1526
	ctx.r11.s64 = -100007936;
	// ori r11,r11,7937
	ctx.r11.u64 = ctx.r11.u64 | 7937;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8319acb0
	if (cr6.gt) goto loc_8319ACB0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8319ACB0:
	// addis r31,r9,222
	ctx.r31.s64 = ctx.r9.s64 + 14548992;
	// addi r31,r31,-8252
	ctx.r31.s64 = ctx.r31.s64 + -8252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2008);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82f62ea0
	ctx.lr = 0x8319ACD0;
	sub_82F62EA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319acf4
	if (cr6.eq) goto loc_8319ACF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83198f68
	ctx.lr = 0x8319ACE8;
	sub_83198F68(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_8319ACF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319ACFC"))) PPC_WEAK_FUNC(sub_8319ACFC);
PPC_FUNC_IMPL(__imp__sub_8319ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AD00"))) PPC_WEAK_FUNC(sub_8319AD00);
PPC_FUNC_IMPL(__imp__sub_8319AD00) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319AD18;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8319ad4c
	if (cr6.eq) goto loc_8319AD4C;
	// lis r10,1525
	ctx.r10.s64 = 99942400;
	// ori r10,r10,57599
	ctx.r10.u64 = ctx.r10.u64 | 57599;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319ad48
	if (!cr6.lt) goto loc_8319AD48;
	// lis r10,-1526
	ctx.r10.s64 = -100007936;
	// ori r10,r10,7937
	ctx.r10.u64 = ctx.r10.u64 | 7937;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8319ad4c
	if (cr6.gt) goto loc_8319AD4C;
loc_8319AD48:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8319AD4C:
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// ori r8,r10,57320
	ctx.r8.u64 = ctx.r10.u64 | 57320;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8319AD6C"))) PPC_WEAK_FUNC(sub_8319AD6C);
PPC_FUNC_IMPL(__imp__sub_8319AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AD70"))) PPC_WEAK_FUNC(sub_8319AD70);
PPC_FUNC_IMPL(__imp__sub_8319AD70) {
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
	// li r31,100
	ctx.r31.s64 = 100;
	// bl 0x831156e8
	ctx.lr = 0x8319AD90;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r8,r11,46616
	ctx.r8.u64 = ctx.r11.u64 | 46616;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8319adf4
	if (cr6.gt) goto loc_8319ADF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8319add4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8319ADD4;
	// bdzf 4*cr6+eq,0x8319add4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8319ADD4;
	// bdzf 4*cr6+eq,0x8319ade0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8319ADE0;
	// bne cr6,0x8319adec
	if (!cr6.eq) goto loc_8319ADEC;
	// mulli r3,r3,13000
	ctx.r3.s64 = ctx.r3.s64 * 13000;
	// li r31,13000
	ctx.r31.s64 = 13000;
	// b 0x8319adf4
	goto loc_8319ADF4;
loc_8319ADD4:
	// mulli r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 * 100;
	// li r31,100
	ctx.r31.s64 = 100;
	// b 0x8319adf4
	goto loc_8319ADF4;
loc_8319ADE0:
	// mulli r3,r3,70
	ctx.r3.s64 = ctx.r3.s64 * 70;
	// li r31,70
	ctx.r31.s64 = 70;
	// b 0x8319adf4
	goto loc_8319ADF4;
loc_8319ADEC:
	// mulli r3,r3,400
	ctx.r3.s64 = ctx.r3.s64 * 400;
	// li r31,400
	ctx.r31.s64 = 400;
loc_8319ADF4:
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq cr6,0x8319ae44
	if (cr6.eq) goto loc_8319AE44;
	// lis r11,-11101
	ctx.r11.s64 = -727515136;
	// li r10,232
	ctx.r10.s64 = 232;
	// ori r9,r11,35168
	ctx.r9.u64 = ctx.r11.u64 | 35168;
	// rldimi r9,r10,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// bge cr6,0x8319ae2c
	if (!cr6.lt) goto loc_8319AE2C;
	// cmpd cr6,r3,r9
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r9.s64, xer);
	// blt cr6,0x8319ae44
	if (cr6.lt) goto loc_8319AE44;
loc_8319AE18:
	// lis r11,-11101
	ctx.r11.s64 = -727515136;
	// li r10,232
	ctx.r10.s64 = 232;
	// ori r3,r11,35168
	ctx.r3.u64 = ctx.r11.u64 | 35168;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// b 0x8319ae44
	goto loc_8319AE44;
loc_8319AE2C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpd cr6,r3,r9
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r9.s64, xer);
	// bgt cr6,0x8319ae18
	if (cr6.gt) goto loc_8319AE18;
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// bge cr6,0x8319ae44
	if (!cr6.lt) goto loc_8319AE44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8319AE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319AE5C"))) PPC_WEAK_FUNC(sub_8319AE5C);
PPC_FUNC_IMPL(__imp__sub_8319AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AE60"))) PPC_WEAK_FUNC(sub_8319AE60);
PPC_FUNC_IMPL(__imp__sub_8319AE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8319AE68;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319AE78;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// addis r22,r27,192
	ctx.r22.s64 = ctx.r27.s64 + 12582912;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r22,r22,-10964
	ctx.r22.s64 = ctx.r22.s64 + -10964;
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r21,r22,3
	ctx.r21.s64 = ctx.r22.s64 + 196608;
	// addi r21,r21,-2424
	ctx.r21.s64 = ctx.r21.s64 + -2424;
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319af90
	if (cr6.eq) goto loc_8319AF90;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_8319AEA8:
	// cmplwi cr6,r26,365
	cr6.compare<uint32_t>(ctx.r26.u32, 365, xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bge cr6,0x8319aeb8
	if (!cr6.lt) goto loc_8319AEB8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8319AEB8:
	// lhz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 400);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319af74
	if (cr6.eq) goto loc_8319AF74;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8319AECC:
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// blt cr6,0x8319aedc
	if (cr6.lt) goto loc_8319AEDC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// b 0x8319aee0
	goto loc_8319AEE0;
loc_8319AEDC:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_8319AEE0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8319af60
	if (cr6.eq) goto loc_8319AF60;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8319AEFC;
	sub_8311C3D8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319af24
	if (!cr6.eq) goto loc_8319AF24;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319af28
	if (cr6.eq) goto loc_8319AF28;
loc_8319AF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319AF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319af60
	if (cr6.eq) goto loc_8319AF60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// bl 0x83194a40
	ctx.lr = 0x8319AF40;
	sub_83194A40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319af60
	if (cr6.eq) goto loc_8319AF60;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83199bb0
	ctx.lr = 0x8319AF58;
	sub_83199BB0(ctx, base);
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8319AF60:
	// lhz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 400);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319aecc
	if (cr6.lt) goto loc_8319AECC;
loc_8319AF74:
	// lhz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,532
	ctx.r23.s64 = ctx.r23.s64 + 532;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319aea8
	if (cr6.lt) goto loc_8319AEA8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8319af9c
	if (!cr6.eq) goto loc_8319AF9C;
loc_8319AF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8319AF9C:
	// divwu r3,r24,r25
	ctx.r3.u32 = PPCDivide(ctx.r24.u32, ctx.r25.u32);
	// twllei r25,0
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319AFAC"))) PPC_WEAK_FUNC(sub_8319AFAC);
PPC_FUNC_IMPL(__imp__sub_8319AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319AFB0"))) PPC_WEAK_FUNC(sub_8319AFB0);
PPC_FUNC_IMPL(__imp__sub_8319AFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8319AFB8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319afe4
	if (cr6.eq) goto loc_8319AFE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8319AFE4:
	// bl 0x831156e8
	ctx.lr = 0x8319AFE8;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319AFF8;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83199fe8
	ctx.lr = 0x8319B004;
	sub_83199FE8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314b1d0
	ctx.lr = 0x8319B020;
	sub_8314B1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x8319b048
	if (!cr6.gt) goto loc_8319B048;
	// addi r11,r11,-70
	ctx.r11.s64 = ctx.r11.s64 + -70;
	// mulli r27,r11,700
	ctx.r27.s64 = ctx.r11.s64 * 700;
loc_8319B048:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r11,r11,23,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// cmplwi cr6,r11,500
	cr6.compare<uint32_t>(ctx.r11.u32, 500, xer);
	// ble cr6,0x8319b064
	if (!cr6.gt) goto loc_8319B064;
	// addi r11,r11,-150
	ctx.r11.s64 = ctx.r11.s64 + -150;
	// mullw r28,r11,r24
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
loc_8319B064:
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x82ad13f0
	ctx.lr = 0x8319B074;
	sub_82AD13F0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r3,100
	cr6.compare<uint32_t>(ctx.r3.u32, 100, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// bgt cr6,0x8319b0ac
	if (cr6.gt) goto loc_8319B0AC;
	// subfic r11,r3,101
	xer.ca = ctx.r3.u32 <= 101;
	ctx.r11.s64 = 101 - ctx.r3.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
loc_8319B0AC:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8314b660
	ctx.lr = 0x8319B0E0;
	sub_8314B660(ctx, base);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r8,2000
	ctx.r8.s64 = 2000;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,3000
	ctx.r7.s64 = 3000;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r6,5000
	ctx.r6.s64 = 5000;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,10000
	ctx.r5.s64 = 10000;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,20000
	ctx.r4.s64 = 20000;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bge cr6,0x8319b12c
	if (!cr6.lt) goto loc_8319B12C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8319B12C:
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// clrldi r11,r24,32
	ctx.r11.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,21708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,1525
	ctx.r6.s64 = 99942400;
	// ori r11,r6,57500
	ctx.r11.u64 = ctx.r6.u64 | 57500;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-11340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11340);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f8,f13,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x8319b1a0
	if (!cr6.gt) goto loc_8319B1A0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8319B1A0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bge cr6,0x8319b1ac
	if (!cr6.lt) goto loc_8319B1AC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8319B1AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B1B8"))) PPC_WEAK_FUNC(sub_8319B1B8);
PPC_FUNC_IMPL(__imp__sub_8319B1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8319B1C0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319B1E0;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x8319B1EC;
	sub_8311BF98(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b22c
	if (!cr6.eq) goto loc_8319B22C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319b22c
	if (!cr6.eq) goto loc_8319B22C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83180558
	ctx.lr = 0x8319B210;
	sub_83180558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319b22c
	if (cr6.eq) goto loc_8319B22C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8319B22C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8319b240
	if (!cr6.eq) goto loc_8319B240;
	// lwz r30,204(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// b 0x8319b244
	goto loc_8319B244;
loc_8319B240:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8319B244:
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// rlwinm r6,r11,23,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r27,0
	ctx.r27.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,29912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6508);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// fmadds f31,f12,f0,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8314b1c8
	ctx.lr = 0x8319B290;
	sub_8314B1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// ble cr6,0x8319b2a4
	if (!cr6.gt) goto loc_8319B2A4;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mulli r31,r11,9000
	ctx.r31.s64 = ctx.r11.s64 * 9000;
loc_8319B2A4:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x8319b2ec
	if (cr6.eq) goto loc_8319B2EC;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319b2ec
	if (!cr6.eq) goto loc_8319B2EC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8319B2EC:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b338
	if (!cr6.eq) goto loc_8319B338;
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// ori r11,r11,57500
	ctx.r11.u64 = ctx.r11.u64 | 57500;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8319b31c
	if (!cr6.gt) goto loc_8319B31C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8319B31C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bge cr6,0x8319b328
	if (!cr6.lt) goto loc_8319B328;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8319B328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8319B338:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8319b3b4
	if (cr6.eq) goto loc_8319B3B4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x8319b398
	if (cr6.eq) goto loc_8319B398;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d550
	ctx.lr = 0x8319B360;
	sub_8314D550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,20
	ctx.r11.s64 = 20;
	// bne cr6,0x8319b384
	if (!cr6.eq) goto loc_8319B384;
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r27.u8);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8314d550
	ctx.lr = 0x8319B380;
	sub_8314D550(ctx, base);
	// b 0x8319b3d0
	goto loc_8319B3D0;
loc_8319B384:
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x8319b3c8
	goto loc_8319B3C8;
loc_8319B398:
	// li r11,50
	ctx.r11.s64 = 50;
	// stb r27,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r27.u8);
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8314d550
	ctx.lr = 0x8319B3B0;
	sub_8314D550(ctx, base);
	// b 0x8319b3d0
	goto loc_8319B3D0;
loc_8319B3B4:
	// li r11,50
	ctx.r11.s64 = 50;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_8319B3C8:
	// bl 0x8314d550
	ctx.lr = 0x8319B3CC;
	sub_8314D550(ctx, base);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_8319B3D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319b3dc
	if (!cr6.eq) goto loc_8319B3DC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8319B3DC:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,1525
	ctx.r8.s64 = 99942400;
	// ori r11,r8,57500
	ctx.r11.u64 = ctx.r8.u64 | 57500;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,8976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x8319b444
	if (!cr6.gt) goto loc_8319B444;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8319B444:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bge cr6,0x8319b450
	if (!cr6.lt) goto loc_8319B450;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8319B450:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B45C"))) PPC_WEAK_FUNC(sub_8319B45C);
PPC_FUNC_IMPL(__imp__sub_8319B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B460"))) PPC_WEAK_FUNC(sub_8319B460);
PPC_FUNC_IMPL(__imp__sub_8319B460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x8319B468;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x8319B470;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r8,r10,57308
	ctx.r8.u64 = ctx.r10.u64 | 57308;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,27560
	ctx.r5.s64 = ctx.r9.s64 + 27560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwzx r15,r22,r8
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
	// bl 0x831178a0
	ctx.lr = 0x8319B4A0;
	sub_831178A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x8319dc20
	ctx.lr = 0x8319B4AC;
	sub_8319DC20(ctx, base);
	// addis r7,r22,205
	ctx.r7.s64 = ctx.r22.s64 + 13434880;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r7,r7,-18420
	ctx.r7.s64 = ctx.r7.s64 + -18420;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addis r20,r7,4
	ctx.r20.s64 = ctx.r7.s64 + 262144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r20,r20,-21460
	ctx.r20.s64 = ctx.r20.s64 + -21460;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lis r25,512
	ctx.r25.s64 = 33554432;
	// li r18,25
	ctx.r18.s64 = 25;
	// li r16,23
	ctx.r16.s64 = 23;
	// li r24,5
	ctx.r24.s64 = 5;
	// lis r17,20480
	ctx.r17.s64 = 1342177280;
	// addi r23,r11,-4848
	ctx.r23.s64 = ctx.r11.s64 + -4848;
	// addi r21,r10,-2972
	ctx.r21.s64 = ctx.r10.s64 + -2972;
loc_8319B4EC:
	// cmplwi cr6,r28,70
	cr6.compare<uint32_t>(ctx.r28.u32, 70, xer);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// bge cr6,0x8319b4fc
	if (!cr6.lt) goto loc_8319B4FC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8319B4FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8319b704
	if (cr6.eq) goto loc_8319B704;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x8319b528
	if (!cr6.eq) goto loc_8319B528;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319b554
	goto loc_8319B554;
loc_8319B528:
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319b54c
	if (!cr6.eq) goto loc_8319B54C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq cr6,0x8319b550
	if (cr6.eq) goto loc_8319B550;
loc_8319B54C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319B550:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319B554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b704
	if (!cr6.eq) goto loc_8319B704;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319B56C;
	sub_8311BF98(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8314be30
	ctx.lr = 0x8319B584;
	sub_8314BE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319b698
	if (cr6.eq) goto loc_8319B698;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319b698
	if (!cr6.eq) goto loc_8319B698;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x8319b5c4
	if (cr6.eq) goto loc_8319B5C4;
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x8319b704
	if (cr6.eq) goto loc_8319B704;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x8319b704
	if (cr6.eq) goto loc_8319B704;
loc_8319B5C4:
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8319ee58
	ctx.lr = 0x8319B5D8;
	sub_8319EE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8319b604
	if (!cr6.eq) goto loc_8319B604;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319f070
	ctx.lr = 0x8319B5F4;
	sub_8319F070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b604
	if (!cr6.eq) goto loc_8319B604;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_8319B604:
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319ee58
	ctx.lr = 0x8319B614;
	sub_8319EE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8319b640
	if (!cr6.eq) goto loc_8319B640;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319f070
	ctx.lr = 0x8319B630;
	sub_8319F070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b640
	if (!cr6.eq) goto loc_8319B640;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_8319B640:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319b6a8
	if (cr6.eq) goto loc_8319B6A8;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, xer);
	// beq cr6,0x8319b704
	if (cr6.eq) goto loc_8319B704;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319B670;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x8319b6a8
	if (!cr6.lt) goto loc_8319B6A8;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x8319b690
	if (cr6.eq) goto loc_8319B690;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8319b6a8
	if (!cr6.eq) goto loc_8319B6A8;
loc_8319B690:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x8319b700
	goto loc_8319B700;
loc_8319B698:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x8319b6b0
	if (!cr6.eq) goto loc_8319B6B0;
loc_8319B6A8:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// b 0x8319b700
	goto loc_8319B700;
loc_8319B6B0:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x8319b6c0
	if (cr6.eq) goto loc_8319B6C0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x8319b704
	if (!cr6.eq) goto loc_8319B704;
loc_8319B6C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8319b6ec
	if (!cr6.eq) goto loc_8319B6EC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319b6f0
	if (cr6.eq) goto loc_8319B6F0;
loc_8319B6EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319B6F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319b704
	if (cr6.eq) goto loc_8319B704;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_8319B700:
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8319B704:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,476
	ctx.r27.s64 = ctx.r27.s64 + 476;
	// cmplwi cr6,r28,70
	cr6.compare<uint32_t>(ctx.r28.u32, 70, xer);
	// blt cr6,0x8319b4ec
	if (cr6.lt) goto loc_8319B4EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lis r27,14336
	ctx.r27.s64 = 939524096;
loc_8319B720:
	// cmplwi cr6,r29,70
	cr6.compare<uint32_t>(ctx.r29.u32, 70, xer);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// bge cr6,0x8319b730
	if (!cr6.lt) goto loc_8319B730;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8319B730:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319b868
	if (cr6.eq) goto loc_8319B868;
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne cr6,0x8319b75c
	if (!cr6.eq) goto loc_8319B75C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319b788
	goto loc_8319B788;
loc_8319B75C:
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319b780
	if (!cr6.eq) goto loc_8319B780;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq cr6,0x8319b784
	if (cr6.eq) goto loc_8319B784;
loc_8319B780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319B784:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319B788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b868
	if (!cr6.eq) goto loc_8319B868;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// bl 0x8311bf98
	ctx.lr = 0x8319B7A0;
	sub_8311BF98(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x8319b7bc
	if (cr6.eq) goto loc_8319B7BC;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x8319b868
	if (!cr6.eq) goto loc_8319B868;
loc_8319B7BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8314be30
	ctx.lr = 0x8319B7C8;
	sub_8314BE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319b860
	if (cr6.eq) goto loc_8319B860;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319ee58
	ctx.lr = 0x8319B7E4;
	sub_8319EE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8319b854
	if (!cr6.eq) goto loc_8319B854;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319f070
	ctx.lr = 0x8319B800;
	sub_8319F070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b854
	if (!cr6.eq) goto loc_8319B854;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, xer);
	// beq cr6,0x8319b868
	if (cr6.eq) goto loc_8319B868;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319B830;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x8319b854
	if (!cr6.lt) goto loc_8319B854;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x8319b854
	if (!cr6.eq) goto loc_8319B854;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// b 0x8319b868
	goto loc_8319B868;
loc_8319B854:
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// b 0x8319b868
	goto loc_8319B868;
loc_8319B860:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8319B868:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,476
	ctx.r28.s64 = ctx.r28.s64 + 476;
	// cmplwi cr6,r29,70
	cr6.compare<uint32_t>(ctx.r29.u32, 70, xer);
	// blt cr6,0x8319b720
	if (cr6.lt) goto loc_8319B720;
	// subf r3,r26,r15
	ctx.r3.s64 = ctx.r15.s64 - ctx.r26.s64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319B884"))) PPC_WEAK_FUNC(sub_8319B884);
PPC_FUNC_IMPL(__imp__sub_8319B884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319B888"))) PPC_WEAK_FUNC(sub_8319B888);
PPC_FUNC_IMPL(__imp__sub_8319B888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319B890;
	__savegprlr_25(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8319b8d0
	if (!cr6.eq) goto loc_8319B8D0;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b8d0
	if (!cr6.eq) goto loc_8319B8D0;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b8d0
	if (!cr6.eq) goto loc_8319B8D0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319B8D0:
	// bl 0x831156e8
	ctx.lr = 0x8319B8D4;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,27560
	ctx.r5.s64 = ctx.r9.s64 + 27560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,48(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831178a0
	ctx.lr = 0x8319B8FC;
	sub_831178A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319B908;
	sub_8311BF98(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x8319B914;
	sub_8319DC20(ctx, base);
	// bl 0x8319b460
	ctx.lr = 0x8319B918;
	sub_8319B460(ctx, base);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319b964
	if (cr6.eq) goto loc_8319B964;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319b964
	if (cr6.eq) goto loc_8319B964;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x8314be30
	ctx.lr = 0x8319B944;
	sub_8314BE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319bc04
	if (cr6.eq) goto loc_8319BC04;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319B964:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319b984
	if (cr6.eq) goto loc_8319B984;
loc_8319B970:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319B984:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319b970
	if (!cr6.eq) goto loc_8319B970;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319bc08
	if (cr6.eq) goto loc_8319BC08;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8319bbdc
	if (cr6.eq) goto loc_8319BBDC;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8319bbdc
	if (cr6.eq) goto loc_8319BBDC;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x8319bbdc
	if (cr6.eq) goto loc_8319BBDC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x8319bbdc
	if (cr6.eq) goto loc_8319BBDC;
	// lwz r10,184(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319babc
	if (cr6.eq) goto loc_8319BABC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x8319b9ec
	if (cr6.eq) goto loc_8319B9EC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x8319b9ec
	if (cr6.eq) goto loc_8319B9EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8319bab4
	if (!cr6.eq) goto loc_8319BAB4;
loc_8319B9EC:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-2972
	ctx.r4.s64 = ctx.r10.s64 + -2972;
	// subf r30,r9,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r9.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x825a2298
	ctx.lr = 0x8319BA08;
	sub_825A2298(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319bc08
	if (cr6.eq) goto loc_8319BC08;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r11,-4848
	ctx.r29.s64 = ctx.r11.s64 + -4848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8319ee58
	ctx.lr = 0x8319BA30;
	sub_8319EE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// li r11,23
	ctx.r11.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319f070
	ctx.lr = 0x8319BA50;
	sub_8319F070(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319BA70;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x8319baa0
	if (!cr6.lt) goto loc_8319BAA0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,14336
	ctx.r10.s64 = 939524096;
	// rlwinm r9,r11,0,0,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319BAA0:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
loc_8319BAA4:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319BAB4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319bc08
	if (!cr6.eq) goto loc_8319BC08;
loc_8319BABC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8314be30
	ctx.lr = 0x8319BAD0;
	sub_8314BE30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319bb28
	if (cr6.eq) goto loc_8319BB28;
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r9,-2972
	ctx.r4.s64 = ctx.r9.s64 + -2972;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x825a2298
	ctx.lr = 0x8319BAFC;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319bc08
	if (cr6.eq) goto loc_8319BC08;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// bl 0x8311bf98
	ctx.lr = 0x8319BB14;
	sub_8311BF98(ctx, base);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319BB28:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r10,-2972
	ctx.r4.s64 = ctx.r10.s64 + -2972;
	// subf r30,r9,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r9.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x825a2298
	ctx.lr = 0x8319BB44;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319bc08
	if (cr6.eq) goto loc_8319BC08;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r11,-4848
	ctx.r29.s64 = ctx.r11.s64 + -4848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8319ee58
	ctx.lr = 0x8319BB6C;
	sub_8319EE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// li r11,23
	ctx.r11.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319f070
	ctx.lr = 0x8319BB8C;
	sub_8319F070(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319BBAC;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x8319baa0
	if (!cr6.lt) goto loc_8319BAA0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,14336
	ctx.r10.s64 = 939524096;
	// rlwinm r9,r11,0,0,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8319baa0
	if (!cr6.eq) goto loc_8319BAA0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319BBDC:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8319bc08
	if (!cr6.gt) goto loc_8319BC08;
	// lwz r10,184(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319bc08
	if (cr6.eq) goto loc_8319BC08;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// beq cr6,0x8319baa4
	if (cr6.eq) goto loc_8319BAA4;
loc_8319BC04:
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8319BC08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319BC14"))) PPC_WEAK_FUNC(sub_8319BC14);
PPC_FUNC_IMPL(__imp__sub_8319BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319BC18"))) PPC_WEAK_FUNC(sub_8319BC18);
PPC_FUNC_IMPL(__imp__sub_8319BC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8319BC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319BC2C;
	sub_831156E8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-2972
	ctx.r11.s64 = ctx.r11.s64 + -2972;
	// addis r30,r28,205
	ctx.r30.s64 = ctx.r28.s64 + 13434880;
	// addi r30,r30,-18420
	ctx.r30.s64 = ctx.r30.s64 + -18420;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319bc5c
	if (!cr6.eq) goto loc_8319BC5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319bc84
	goto loc_8319BC84;
loc_8319BC5C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319bc7c
	if (!cr6.eq) goto loc_8319BC7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319bc80
	if (cr6.eq) goto loc_8319BC80;
loc_8319BC7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319BC80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319BC84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319bc9c
	if (cr6.eq) goto loc_8319BC9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8319BC9C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319dc20
	ctx.lr = 0x8319BCA4;
	sub_8319DC20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a67128
	ctx.lr = 0x8319BCB0;
	sub_82A67128(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319bd54
	if (cr6.eq) goto loc_8319BD54;
	// li r10,25
	ctx.r10.s64 = 25;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-4848
	ctx.r30.s64 = ctx.r11.s64 + -4848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8319ee58
	ctx.lr = 0x8319BCD8;
	sub_8319EE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8319bd54
	if (!cr6.eq) goto loc_8319BD54;
	// li r11,23
	ctx.r11.s64 = 23;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319f070
	ctx.lr = 0x8319BCF8;
	sub_8319F070(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319bd54
	if (!cr6.eq) goto loc_8319BD54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319BD10;
	sub_8311BF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319BD28;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// bge cr6,0x8319bd54
	if (!cr6.lt) goto loc_8319BD54;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x8319bd48
	if (cr6.eq) goto loc_8319BD48;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8319bd54
	if (!cr6.eq) goto loc_8319BD54;
loc_8319BD48:
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319bd64
	if (!cr6.eq) goto loc_8319BD64;
loc_8319BD54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319BD60;
	sub_8311BF98(ctx, base);
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
loc_8319BD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319BD6C"))) PPC_WEAK_FUNC(sub_8319BD6C);
PPC_FUNC_IMPL(__imp__sub_8319BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319BD70"))) PPC_WEAK_FUNC(sub_8319BD70);
PPC_FUNC_IMPL(__imp__sub_8319BD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8319BD78;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319BD84;
	sub_831156E8(ctx, base);
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c148
	ctx.lr = 0x8319BD94;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8319dc20
	ctx.lr = 0x8319BDA0;
	sub_8319DC20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,27560
	ctx.r5.s64 = ctx.r10.s64 + 27560;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x831178a0
	ctx.lr = 0x8319BDC4;
	sub_831178A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8319bdf0
	if (!cr6.eq) goto loc_8319BDF0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319bdf4
	if (cr6.eq) goto loc_8319BDF4;
loc_8319BDF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319BDF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319bfac
	if (cr6.eq) goto loc_8319BFAC;
	// addis r11,r20,205
	ctx.r11.s64 = ctx.r20.s64 + 13434880;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-18420
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	// lis r22,-8192
	ctx.r22.s64 = -536870912;
	// addis r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 262144;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r24,r24,-21460
	ctx.r24.s64 = ctx.r24.s64 + -21460;
	// lis r23,20480
	ctx.r23.s64 = 1342177280;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lis r25,-12288
	ctx.r25.s64 = -805306368;
	// addi r28,r11,-2972
	ctx.r28.s64 = ctx.r11.s64 + -2972;
loc_8319BE2C:
	// cmplwi cr6,r27,70
	cr6.compare<uint32_t>(ctx.r27.u32, 70, xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bge cr6,0x8319be3c
	if (!cr6.lt) goto loc_8319BE3C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8319BE3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x8319be68
	if (!cr6.eq) goto loc_8319BE68;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319be94
	goto loc_8319BE94;
loc_8319BE68:
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319be8c
	if (!cr6.eq) goto loc_8319BE8C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319be90
	if (cr6.eq) goto loc_8319BE90;
loc_8319BE8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319BE90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319BE94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319bf90
	if (!cr6.eq) goto loc_8319BF90;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319BEAC;
	sub_8311BF98(ctx, base);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319bf90
	if (!cr6.eq) goto loc_8319BF90;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314be30
	ctx.lr = 0x8319BEDC;
	sub_8314BE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319bf00
	if (cr6.eq) goto loc_8319BF00;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
loc_8319BF00:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwinm r10,r11,0,0,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8000000;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x8319bf3c
	if (cr6.eq) goto loc_8319BF3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314be30
	ctx.lr = 0x8319BF30;
	sub_8314BE30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319bf40
	if (cr6.eq) goto loc_8319BF40;
loc_8319BF3C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8319BF40:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319bf90
	if (cr6.eq) goto loc_8319BF90;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x8319bf64
	if (cr6.eq) goto loc_8319BF64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x8319bf88
	if (!cr6.eq) goto loc_8319BF88;
loc_8319BF64:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82acf018
	ctx.lr = 0x8319BF78;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,350
	cr6.compare<uint32_t>(ctx.r3.u32, 350, xer);
	// bge cr6,0x8319bf88
	if (!cr6.lt) goto loc_8319BF88;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x8319bf8c
	goto loc_8319BF8C;
loc_8319BF88:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
loc_8319BF8C:
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8319BF90:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,476
	ctx.r26.s64 = ctx.r26.s64 + 476;
	// cmplwi cr6,r27,70
	cr6.compare<uint32_t>(ctx.r27.u32, 70, xer);
	// blt cr6,0x8319be2c
	if (cr6.lt) goto loc_8319BE2C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8319BFAC:
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c070
	if (cr6.eq) goto loc_8319C070;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r30,r28,248
	ctx.r30.s64 = ctx.r28.s64 + 248;
	// addi r29,r10,-2972
	ctx.r29.s64 = ctx.r10.s64 + -2972;
loc_8319BFCC:
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x8319bfe4
	if (!cr6.lt) goto loc_8319BFE4;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_8319BFE4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c000
	if (!cr6.eq) goto loc_8319C000;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319c02c
	goto loc_8319C02C;
loc_8319C000:
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319c024
	if (!cr6.eq) goto loc_8319C024;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c028
	if (cr6.eq) goto loc_8319C028;
loc_8319C024:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319C028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C02C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c058
	if (!cr6.eq) goto loc_8319C058;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319C040;
	sub_8311BF98(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319c058
	if (!cr6.eq) goto loc_8319C058;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8319C058:
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319bfcc
	if (cr6.lt) goto loc_8319BFCC;
loc_8319C070:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319C07C"))) PPC_WEAK_FUNC(sub_8319C07C);
PPC_FUNC_IMPL(__imp__sub_8319C07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319C080"))) PPC_WEAK_FUNC(sub_8319C080);
PPC_FUNC_IMPL(__imp__sub_8319C080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8319C088;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,-2972
	ctx.r11.s64 = ctx.r11.s64 + -2972;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319c0c8
	if (!cr6.eq) goto loc_8319C0C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319c0f0
	goto loc_8319C0F0;
loc_8319C0C8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319c0e8
	if (!cr6.eq) goto loc_8319C0E8;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c0ec
	if (cr6.eq) goto loc_8319C0EC;
loc_8319C0E8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C0EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C0F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c108
	if (cr6.eq) goto loc_8319C108;
loc_8319C0FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8319C108:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c0fc
	if (!cr6.eq) goto loc_8319C0FC;
	// bl 0x831156e8
	ctx.lr = 0x8319C118;
	sub_831156E8(ctx, base);
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319C128;
	sub_8311BF98(ctx, base);
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-2924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2924);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8319c160
	if (!cr6.eq) goto loc_8319C160;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319c164
	if (cr6.eq) goto loc_8319C164;
loc_8319C160:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c1a4
	if (cr6.eq) goto loc_8319C1A4;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x8319C184;
	sub_831235B8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8319c1a8
	goto loc_8319C1A8;
loc_8319C1A4:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8319C1A8:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8316fb10
	ctx.lr = 0x8319C1B8;
	sub_8316FB10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r31,188(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 188);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x8319c8cc
	if (cr6.eq) goto loc_8319C8CC;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// beq cr6,0x8319c8cc
	if (cr6.eq) goto loc_8319C8CC;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x8319c8cc
	if (cr6.eq) goto loc_8319C8CC;
	// bl 0x830ff290
	ctx.lr = 0x8319C1DC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x8319c254
	if (!cr6.eq) goto loc_8319C254;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x8319c254
	if (cr6.eq) goto loc_8319C254;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8319c254
	if (cr6.eq) goto loc_8319C254;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x8311c628
	ctx.lr = 0x8319C208;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x8319C218;
	sub_831CE980(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8319c22c
	if (!cr6.eq) goto loc_8319C22C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8319C22C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8319c248
	if (!cr6.eq) goto loc_8319C248;
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x8319c248
	if (!cr6.eq) goto loc_8319C248;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8319C248:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c8cc
	if (!cr6.eq) goto loc_8319C8CC;
loc_8319C254:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c27c
	if (!cr6.eq) goto loc_8319C27C;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8314b1d0
	ctx.lr = 0x8319C278;
	sub_8314B1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_8319C27C:
	// mulli r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 * 30;
	// addi r27,r10,-500
	ctx.r27.s64 = ctx.r10.s64 + -500;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// blt cr6,0x8319c298
	if (cr6.lt) goto loc_8319C298;
	// addi r10,r11,-65
	ctx.r10.s64 = ctx.r11.s64 + -65;
	// mulli r28,r10,300
	ctx.r28.s64 = ctx.r10.s64 * 300;
loc_8319C298:
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// blt cr6,0x8319c2ac
	if (cr6.lt) goto loc_8319C2AC;
	// addi r10,r11,-75
	ctx.r10.s64 = ctx.r11.s64 + -75;
	// mulli r10,r10,500
	ctx.r10.s64 = ctx.r10.s64 * 500;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_8319C2AC:
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// blt cr6,0x8319c2c0
	if (cr6.lt) goto loc_8319C2C0;
	// addi r11,r11,-85
	ctx.r11.s64 = ctx.r11.s64 + -85;
	// mulli r11,r11,700
	ctx.r11.s64 = ctx.r11.s64 * 700;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8319C2C0:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r29,r11,23,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// cmplwi cr6,r29,801
	cr6.compare<uint32_t>(ctx.r29.u32, 801, xer);
	// blt cr6,0x8319c2ec
	if (cr6.lt) goto loc_8319C2EC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,23,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// addi r11,r11,-800
	ctx.r11.s64 = ctx.r11.s64 + -800;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8319C2EC:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r11,r11,23,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFFF;
	// cmplwi cr6,r11,1801
	cr6.compare<uint32_t>(ctx.r11.u32, 1801, xer);
	// blt cr6,0x8319c310
	if (cr6.lt) goto loc_8319C310;
	// addi r11,r11,-1800
	ctx.r11.s64 = ctx.r11.s64 + -1800;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8319C310:
	// lbz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 196);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x8319c3e4
	if (cr6.gt) goto loc_8319C3E4;
	// lis r12,-31974
	ctx.r12.s64 = -2095448064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15548
	ctx.r12.s64 = ctx.r12.s64 + -15548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8319C3B8;
	case 1:
		goto loc_8319C3B8;
	case 2:
		goto loc_8319C388;
	case 3:
		goto loc_8319C3B8;
	case 4:
		goto loc_8319C388;
	case 5:
		goto loc_8319C3E4;
	case 6:
		goto loc_8319C3E4;
	case 7:
		goto loc_8319C3E4;
	case 8:
		goto loc_8319C3E4;
	case 9:
		goto loc_8319C388;
	case 10:
		goto loc_8319C3E4;
	case 11:
		goto loc_8319C3E4;
	case 12:
		goto loc_8319C3E4;
	case 13:
		goto loc_8319C3E0;
	case 14:
		goto loc_8319C380;
	default:
		return;
	}
	// lwz r24,-15432(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15432);
	// lwz r24,-15432(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15432);
	// lwz r24,-15480(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15480);
	// lwz r24,-15432(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15432);
	// lwz r24,-15480(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15480);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15480(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15480);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15388(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15388);
	// lwz r24,-15392(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15392);
	// lwz r24,-15488(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -15488);
loc_8319C380:
	// li r31,15000
	ctx.r31.s64 = 15000;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C388:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8319c398
	if (!cr6.eq) goto loc_8319C398;
	// li r31,5000
	ctx.r31.s64 = 5000;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C398:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8319c3a8
	if (!cr6.eq) goto loc_8319C3A8;
	// li r31,7500
	ctx.r31.s64 = 7500;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C3A8:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8319c3e4
	if (!cr6.eq) goto loc_8319C3E4;
	// li r31,10000
	ctx.r31.s64 = 10000;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C3B8:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8319c3c8
	if (!cr6.eq) goto loc_8319C3C8;
	// li r31,1000
	ctx.r31.s64 = 1000;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C3C8:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8319c3d8
	if (!cr6.eq) goto loc_8319C3D8;
	// li r31,2000
	ctx.r31.s64 = 2000;
	// b 0x8319c3e4
	goto loc_8319C3E4;
loc_8319C3D8:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8319c3e4
	if (!cr6.eq) goto loc_8319C3E4;
loc_8319C3E0:
	// li r31,3000
	ctx.r31.s64 = 3000;
loc_8319C3E4:
	// lwz r11,-2924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -2924);
	// addis r3,r22,205
	ctx.r3.s64 = ctx.r22.s64 + 13434880;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,300
	ctx.r9.s64 = 300;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8319c41c
	if (!cr6.eq) goto loc_8319C41C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319c420
	if (cr6.eq) goto loc_8319C420;
loc_8319C41C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c438
	if (!cr6.eq) goto loc_8319C438;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ad13f0
	ctx.lr = 0x8319C434;
	sub_82AD13F0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8319C438:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r9,250
	cr6.compare<uint32_t>(ctx.r9.u32, 250, xer);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x8319c46c
	if (cr6.gt) goto loc_8319C46C;
	// subfic r11,r9,251
	xer.ca = ctx.r9.u32 <= 251;
	ctx.r11.s64 = 251 - ctx.r9.s64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,-17520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17520);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_8319C46C:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8314b660
	ctx.lr = 0x8319C4A8;
	sub_8314B660(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// li r8,3000
	ctx.r8.s64 = 3000;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r7,5000
	ctx.r7.s64 = 5000;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// li r6,10000
	ctx.r6.s64 = 10000;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r11,15000
	ctx.r11.s64 = 15000;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83120738
	ctx.lr = 0x8319C4F4;
	sub_83120738(ctx, base);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// bge cr6,0x8319c524
	if (!cr6.lt) goto loc_8319C524;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8319c524
	if (cr6.eq) goto loc_8319C524;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8319C524:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8319c888
	if (cr6.eq) goto loc_8319C888;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addis r28,r22,231
	ctx.r28.s64 = ctx.r22.s64 + 15138816;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r28,r28,28152
	ctx.r28.s64 = ctx.r28.s64 + 28152;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b1b488
	ctx.lr = 0x8319C554;
	sub_82B1B488(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82b1b488
	ctx.lr = 0x8319C56C;
	sub_82B1B488(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82b1b488
	ctx.lr = 0x8319C584;
	sub_82B1B488(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b1b488
	ctx.lr = 0x8319C59C;
	sub_82B1B488(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319c720
	if (cr6.eq) goto loc_8319C720;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8319c720
	if (cr6.eq) goto loc_8319C720;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8319c720
	if (cr6.eq) goto loc_8319C720;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319c720
	if (cr6.eq) goto loc_8319C720;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x8319c5e0
	if (!cr6.eq) goto loc_8319C5E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8319c608
	goto loc_8319C608;
loc_8319C5E0:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319c600
	if (!cr6.eq) goto loc_8319C600;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c604
	if (cr6.eq) goto loc_8319C604;
loc_8319C600:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c618
	if (cr6.eq) goto loc_8319C618;
	// li r26,10000
	ctx.r26.s64 = 10000;
loc_8319C618:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x8319c638
	if (!cr6.eq) goto loc_8319C638;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8319c660
	goto loc_8319C660;
loc_8319C638:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319c658
	if (!cr6.eq) goto loc_8319C658;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c65c
	if (cr6.eq) goto loc_8319C65C;
loc_8319C658:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c670
	if (cr6.eq) goto loc_8319C670;
	// addi r26,r26,5000
	ctx.r26.s64 = ctx.r26.s64 + 5000;
loc_8319C670:
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x8319c690
	if (!cr6.eq) goto loc_8319C690;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8319c6b8
	goto loc_8319C6B8;
loc_8319C690:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319c6b0
	if (!cr6.eq) goto loc_8319C6B0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c6b4
	if (cr6.eq) goto loc_8319C6B4;
loc_8319C6B0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C6B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C6B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c6c8
	if (cr6.eq) goto loc_8319C6C8;
	// addi r26,r26,5000
	ctx.r26.s64 = ctx.r26.s64 + 5000;
loc_8319C6C8:
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x8319c6e8
	if (!cr6.eq) goto loc_8319C6E8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319c710
	goto loc_8319C710;
loc_8319C6E8:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319c708
	if (!cr6.eq) goto loc_8319C708;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c70c
	if (cr6.eq) goto loc_8319C70C;
loc_8319C708:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C70C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C710:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c720
	if (cr6.eq) goto loc_8319C720;
	// addi r26,r26,5000
	ctx.r26.s64 = ctx.r26.s64 + 5000;
loc_8319C720:
	// addis r27,r22,96
	ctx.r27.s64 = ctx.r22.s64 + 6291456;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8319c888
	if (!cr6.gt) goto loc_8319C888;
	// addis r30,r22,85
	ctx.r30.s64 = ctx.r22.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r29,r11,59456
	ctx.r29.u64 = ctx.r11.u64 | 59456;
loc_8319C748:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 + ctx.r29.u64;
	// bge cr6,0x8319c758
	if (!cr6.lt) goto loc_8319C758;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8319C758:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8319c874
	if (cr6.eq) goto loc_8319C874;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8319c77c
	if (!cr6.eq) goto loc_8319C77C;
	// lhz r11,78(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8319c784
	if (cr6.eq) goto loc_8319C784;
loc_8319C77C:
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// bne cr6,0x8319c874
	if (!cr6.eq) goto loc_8319C874;
loc_8319C784:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8319C790:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319c818
	if (cr6.eq) goto loc_8319C818;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1856
	ctx.r10.s64 = ctx.r10.s64 + 1856;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// blt cr6,0x8319c790
	if (cr6.lt) goto loc_8319C790;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8319C7B0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319c874
	if (cr6.eq) goto loc_8319C874;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x82f14450
	ctx.lr = 0x8319C7D4;
	sub_82F14450(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319c86c
	if (cr6.eq) goto loc_8319C86C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x8319c8ac
	if (!cr6.gt) goto loc_8319C8AC;
loc_8319C7FC:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319c824
	if (!cr6.eq) goto loc_8319C824;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8319c84c
	goto loc_8319C84C;
loc_8319C818:
	// mulli r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 * 1856;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8319c7b0
	goto loc_8319C7B0;
loc_8319C824:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x8319c844
	if (!cr6.eq) goto loc_8319C844;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319c848
	if (cr6.eq) goto loc_8319C848;
loc_8319C844:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8319C848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319C84C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319c85c
	if (cr6.eq) goto loc_8319C85C;
	// addi r26,r26,2000
	ctx.r26.s64 = ctx.r26.s64 + 2000;
loc_8319C85C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8319c7fc
	if (cr6.gt) goto loc_8319C7FC;
loc_8319C86C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x8319C874;
	sub_82F73D60(ctx, base);
loc_8319C874:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319c748
	if (cr6.lt) goto loc_8319C748;
loc_8319C888:
	// add r10,r26,r24
	ctx.r10.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// ori r11,r11,57500
	ctx.r11.u64 = ctx.r11.u64 | 57500;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x8319c8b8
	if (!cr6.gt) goto loc_8319C8B8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8319C8AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8319C8B8;
	sub_831CC188(ctx, base);
loc_8319C8B8:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bge cr6,0x8319c8e0
	if (!cr6.lt) goto loc_8319C8E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8319C8CC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8319afb0
	ctx.lr = 0x8319C8E0;
	sub_8319AFB0(ctx, base);
loc_8319C8E0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319C8E8"))) PPC_WEAK_FUNC(sub_8319C8E8);
PPC_FUNC_IMPL(__imp__sub_8319C8E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319C900;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x8319C90C;
	sub_8311BF98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r4,r9,-2924
	ctx.r4.s64 = ctx.r9.s64 + -2924;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// rlwinm r31,r10,30,25,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// bl 0x8319c080
	ctx.lr = 0x8319C940;
	sub_8319C080(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// cmplwi cr6,r31,60
	cr6.compare<uint32_t>(ctx.r31.u32, 60, xer);
	// lfs f0,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8319c97c
	if (!cr6.lt) goto loc_8319C97C;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6472);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
loc_8319C97C:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
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

__attribute__((alias("__imp__sub_8319C9B4"))) PPC_WEAK_FUNC(sub_8319C9B4);
PPC_FUNC_IMPL(__imp__sub_8319C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319C9B8"))) PPC_WEAK_FUNC(sub_8319C9B8);
PPC_FUNC_IMPL(__imp__sub_8319C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319C9C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319C9D0;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c148
	ctx.lr = 0x8319C9E0;
	sub_8311C148(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319cafc
	if (cr6.eq) goto loc_8319CAFC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r27,r3,248
	ctx.r27.s64 = ctx.r3.s64 + 248;
	// addi r31,r11,-2972
	ctx.r31.s64 = ctx.r11.s64 + -2972;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8319CA20:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8319ca40
	if (!cr6.lt) goto loc_8319CA40;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
loc_8319CA40:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319ca58
	if (!cr6.eq) goto loc_8319CA58;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8319ca80
	goto loc_8319CA80;
loc_8319CA58:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319ca78
	if (!cr6.eq) goto loc_8319CA78;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319ca7c
	if (cr6.eq) goto loc_8319CA7C;
loc_8319CA78:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8319CA7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319CA80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319cadc
	if (!cr6.eq) goto loc_8319CADC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319CA94;
	sub_8311BF98(ctx, base);
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x8319b1b8
	ctx.lr = 0x8319CAC8;
	sub_8319B1B8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d54828
	ctx.lr = 0x8319CAD8;
	sub_82D54828(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8319CADC:
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319ca20
	if (cr6.lt) goto loc_8319CA20;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8319CAFC:
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// lis r9,-32008
	ctx.r9.s64 = -2097676288;
	// divw r30,r11,r10
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// addi r6,r9,-10992
	ctx.r6.s64 = ctx.r9.s64 + -10992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f58138
	ctx.lr = 0x8319CB1C;
	sub_82F58138(ctx, base);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319cb58
	if (cr6.eq) goto loc_8319CB58;
	// addi r7,r31,-4
	ctx.r7.s64 = ctx.r31.s64 + -4;
loc_8319CB38:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x8319cb58
	if (!cr6.lt) goto loc_8319CB58;
	// lwzu r9,12(r7)
	ea = 12 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8319cb38
	if (cr6.lt) goto loc_8319CB38;
loc_8319CB58:
	// divwu r30,r10,r6
	ctx.r30.u32 = PPCDivide(ctx.r10.u32, ctx.r6.u32);
	// twllei r6,0
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319cb7c
	if (cr6.eq) goto loc_8319CB7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8319CB7C;
	sub_825952B8(ctx, base);
loc_8319CB7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319CB88"))) PPC_WEAK_FUNC(sub_8319CB88);
PPC_FUNC_IMPL(__imp__sub_8319CB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8319CB90;
	__savegprlr_23(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319CBAC;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r9,r11,46616
	ctx.r9.u64 = ctx.r11.u64 | 46616;
	// li r29,15
	ctx.r29.s64 = 15;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r8,27568
	ctx.r30.s64 = ctx.r8.s64 + 27568;
	// lwzx r25,r10,r9
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r30,-5
	ctx.r4.s64 = ctx.r30.s64 + -5;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8319CBE8;
	sub_8259CC28(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r30,-2
	ctx.r4.s64 = ctx.r30.s64 + -2;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x8319CC04;
	sub_8259CC28(ctx, base);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cc28
	ctx.lr = 0x8319CC20;
	sub_8259CC28(ctx, base);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// lis r4,24
	ctx.r4.s64 = 1572864;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// ori r4,r4,281
	ctx.r4.u64 = ctx.r4.u64 | 281;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x8319CC54;
	sub_82D042A8(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d042a8
	ctx.lr = 0x8319CC64;
	sub_82D042A8(ctx, base);
	// clrlwi r7,r23,24
	ctx.r7.u64 = ctx.r23.u32 & 0xFF;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8319cd08
	if (cr6.eq) goto loc_8319CD08;
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bge cr6,0x8319ccc8
	if (!cr6.lt) goto loc_8319CCC8;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// bl 0x83161f10
	ctx.lr = 0x8319CC90;
	sub_83161F10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x8319CCA8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8319CCB0;
	sub_8387E8E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x8319CCC4;
	sub_825A1DA8(ctx, base);
	// b 0x8319cd74
	goto loc_8319CD74;
loc_8319CCC8:
	// ble cr6,0x8319cd50
	if (!cr6.gt) goto loc_8319CD50;
	// bl 0x83161f10
	ctx.lr = 0x8319CCD0;
	sub_83161F10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x8319CCE8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8319CCF0;
	sub_8387E8E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x8319CD04;
	sub_825A1DA8(ctx, base);
	// b 0x8319cd74
	goto loc_8319CD74;
loc_8319CD08:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bge cr6,0x8319cd44
	if (!cr6.lt) goto loc_8319CD44;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x8319CD28;
	sub_825A1DA8(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// neg r4,r11
	ctx.r4.s64 = -ctx.r11.s64;
	// bl 0x83161f10
	ctx.lr = 0x8319CD40;
	sub_83161F10(ctx, base);
	// b 0x8319cd58
	goto loc_8319CD58;
loc_8319CD44:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_8319CD50:
	// bl 0x83161f10
	ctx.lr = 0x8319CD54;
	sub_83161F10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8319CD58:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x8319CD6C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8319CD74;
	sub_8387E8E0(ctx, base);
loc_8319CD74:
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(ctx.r25.s32, 5, xer);
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// bne cr6,0x8319ceec
	if (!cr6.eq) goto loc_8319CEEC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319cdd0
	if (cr6.eq) goto loc_8319CDD0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r10,r11,-3028
	ctx.r10.s64 = ctx.r11.s64 + -3028;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82d042a8
	ctx.lr = 0x8319CDA8;
	sub_82D042A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8319CDBC;
	sub_825A1DA8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8319CDD0;
	sub_825A1DA8(ctx, base);
loc_8319CDD0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8319CDE4;
	sub_825A1DA8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8319CDF8;
	sub_825A1DA8(ctx, base);
loc_8319CDF8:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8319ce18
	if (cr6.lt) goto loc_8319CE18;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8319CE18;
	sub_825952B8(ctx, base);
loc_8319CE18:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x8319ce40
	if (cr6.lt) goto loc_8319CE40;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8319CE40;
	sub_825952B8(ctx, base);
loc_8319CE40:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8319ce68
	if (cr6.lt) goto loc_8319CE68;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8319CE68;
	sub_825952B8(ctx, base);
loc_8319CE68:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x8319ce90
	if (cr6.lt) goto loc_8319CE90;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x8319CE90;
	sub_825952B8(ctx, base);
loc_8319CE90:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x8319ceb8
	if (cr6.lt) goto loc_8319CEB8;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x8319CEB8;
	sub_825952B8(ctx, base);
loc_8319CEB8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x8319cee0
	if (cr6.lt) goto loc_8319CEE0;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8319CEE0;
	sub_825952B8(ctx, base);
loc_8319CEE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8319CEEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319cdd0
	if (cr6.eq) goto loc_8319CDD0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8319cf08
	if (!cr6.lt) goto loc_8319CF08;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_8319CF08:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8319cf1c
	if (!cr6.lt) goto loc_8319CF1C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8319CF1C:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// extsb r9,r25
	ctx.r9.s64 = ctx.r25.s8;
	// addi r8,r10,-3028
	ctx.r8.s64 = ctx.r10.s64 + -3028;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82d042a8
	ctx.lr = 0x8319CF38;
	sub_82D042A8(ctx, base);
	// b 0x8319cdf8
	goto loc_8319CDF8;
}

__attribute__((alias("__imp__sub_8319CF3C"))) PPC_WEAK_FUNC(sub_8319CF3C);
PPC_FUNC_IMPL(__imp__sub_8319CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319CF40"))) PPC_WEAK_FUNC(sub_8319CF40);
PPC_FUNC_IMPL(__imp__sub_8319CF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8319CF48;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319CF58;
	sub_831156E8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311c148
	ctx.lr = 0x8319CF68;
	sub_8311C148(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r11,27560
	ctx.r5.s64 = ctx.r11.s64 + 27560;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x831178a0
	ctx.lr = 0x8319CF90;
	sub_831178A0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8319cfbc
	if (!cr6.eq) goto loc_8319CFBC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319cfc0
	if (cr6.eq) goto loc_8319CFC0;
loc_8319CFBC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8319CFC0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r24,r11,-2972
	ctx.r24.s64 = ctx.r11.s64 + -2972;
	// beq cr6,0x8319d098
	if (cr6.eq) goto loc_8319D098;
	// addis r11,r25,205
	ctx.r11.s64 = ctx.r25.s64 + 13434880;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r11,r11,-18420
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	// lis r27,-12288
	ctx.r27.s64 = -805306368;
	// addis r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 262144;
	// addi r28,r28,-21460
	ctx.r28.s64 = ctx.r28.s64 + -21460;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8319CFF0:
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bge cr6,0x8319d000
	if (!cr6.lt) goto loc_8319D000;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8319D000:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319d088
	if (cr6.eq) goto loc_8319D088;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x8319d02c
	if (!cr6.eq) goto loc_8319D02C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319d058
	goto loc_8319D058;
loc_8319D02C:
	// lhz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319d050
	if (!cr6.eq) goto loc_8319D050;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319d054
	if (cr6.eq) goto loc_8319D054;
loc_8319D050:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8319D054:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319D058:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319d088
	if (!cr6.eq) goto loc_8319D088;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8319D070;
	sub_8311BF98(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x8319d088
	if (!cr6.eq) goto loc_8319D088;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8319D088:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,476
	ctx.r29.s64 = ctx.r29.s64 + 476;
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// blt cr6,0x8319cff0
	if (cr6.lt) goto loc_8319CFF0;
loc_8319D098:
	// lhz r11,808(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 808);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319d194
	if (cr6.eq) goto loc_8319D194;
	// addi r30,r22,248
	ctx.r30.s64 = ctx.r22.s64 + 248;
loc_8319D0B0:
	// ld r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lhz r11,808(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8319d0d0
	if (!cr6.lt) goto loc_8319D0D0;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
loc_8319D0D0:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319d0ec
	if (!cr6.eq) goto loc_8319D0EC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8319d118
	goto loc_8319D118;
loc_8319D0EC:
	// lhz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// lhz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8319d110
	if (!cr6.eq) goto loc_8319D110;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319d114
	if (cr6.eq) goto loc_8319D114;
loc_8319D110:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8319D114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319D118:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319d17c
	if (!cr6.eq) goto loc_8319D17C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319D12C;
	sub_8311BF98(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319d17c
	if (!cr6.eq) goto loc_8319D17C;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319d174
	if (cr6.eq) goto loc_8319D174;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r23,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319c080
	ctx.lr = 0x8319D16C;
	sub_8319C080(ctx, base);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// b 0x8319d17c
	goto loc_8319D17C;
loc_8319D174:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8319D17C:
	// lhz r11,808(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x8319d0b0
	if (cr6.lt) goto loc_8319D0B0;
loc_8319D194:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D1A0"))) PPC_WEAK_FUNC(sub_8319D1A0);
PPC_FUNC_IMPL(__imp__sub_8319D1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8319D1A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319D1B4;
	sub_831156E8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319cf40
	ctx.lr = 0x8319D1D0;
	sub_8319CF40(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x8319D1E0;
	sub_8311C148(ctx, base);
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319d32c
	if (cr6.eq) goto loc_8319D32C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r30,r3,248
	ctx.r30.s64 = ctx.r3.s64 + 248;
	// addi r31,r11,-2972
	ctx.r31.s64 = ctx.r11.s64 + -2972;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8319D230:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x8319d250
	if (!cr6.lt) goto loc_8319D250;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
loc_8319D250:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319d268
	if (!cr6.eq) goto loc_8319D268;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8319d290
	goto loc_8319D290;
loc_8319D268:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8319d288
	if (!cr6.eq) goto loc_8319D288;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8319d28c
	if (cr6.eq) goto loc_8319D28C;
loc_8319D288:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8319D28C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8319D290:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319d304
	if (!cr6.eq) goto loc_8319D304;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8319D2A4;
	sub_8311BF98(ctx, base);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8319b1b8
	ctx.lr = 0x8319D2DC;
	sub_8319B1B8(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d54828
	ctx.lr = 0x8319D2EC;
	sub_82D54828(ctx, base);
	// lwz r9,204(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82d54828
	ctx.lr = 0x8319D300;
	sub_82D54828(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8319D304:
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// blt cr6,0x8319d230
	if (cr6.lt) goto loc_8319D230;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_8319D32C:
	// subf r11,r25,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r25.s64;
	// li r29,12
	ctx.r29.s64 = 12;
	// lis r10,-32008
	ctx.r10.s64 = -2097676288;
	// divw r31,r11,r29
	ctx.r31.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// addi r6,r10,-10992
	ctx.r6.s64 = ctx.r10.s64 + -10992;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f58138
	ctx.lr = 0x8319D34C;
	sub_82F58138(ctx, base);
	// subf r9,r28,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lis r8,-32008
	ctx.r8.s64 = -2097676288;
	// divw r29,r9,r29
	ctx.r29.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// addi r6,r8,-10992
	ctx.r6.s64 = ctx.r8.s64 + -10992;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f58138
	ctx.lr = 0x8319D36C;
	sub_82F58138(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8319d3ac
	if (cr6.eq) goto loc_8319D3AC;
	// addi r8,r25,-4
	ctx.r8.s64 = ctx.r25.s64 + -4;
loc_8319D380:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x8319d3a4
	if (cr6.eq) goto loc_8319D3A4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8319d464
	if (!cr6.gt) goto loc_8319D464;
	// lwzu r9,12(r8)
	ea = 12 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x8319d380
	if (cr6.lt) goto loc_8319D380;
loc_8319D3A4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8319d3b0
	if (!cr6.eq) goto loc_8319D3B0;
loc_8319D3AC:
	// li r10,10000
	ctx.r10.s64 = 10000;
loc_8319D3B0:
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8319a288
	ctx.lr = 0x8319D3C8;
	sub_8319A288(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8319d408
	if (cr6.eq) goto loc_8319D408;
	// addi r8,r28,-4
	ctx.r8.s64 = ctx.r28.s64 + -4;
loc_8319D3DC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x8319d400
	if (cr6.eq) goto loc_8319D400;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x8319d470
	if (!cr6.gt) goto loc_8319D470;
	// lwzu r9,12(r8)
	ea = 12 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8319d3dc
	if (cr6.lt) goto loc_8319D3DC;
loc_8319D400:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8319d40c
	if (!cr6.eq) goto loc_8319D40C;
loc_8319D408:
	// li r10,10000
	ctx.r10.s64 = 10000;
loc_8319D40C:
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8319a340
	ctx.lr = 0x8319D428;
	sub_8319A340(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8319d444
	if (cr6.eq) goto loc_8319D444;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8319D444;
	sub_825952B8(ctx, base);
loc_8319D444:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8319d45c
	if (cr6.eq) goto loc_8319D45C;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8319D45C;
	sub_825952B8(ctx, base);
loc_8319D45C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8319D464:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8319D470;
	sub_831CC188(ctx, base);
loc_8319D470:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8319D47C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8319D47C"))) PPC_WEAK_FUNC(sub_8319D47C);
PPC_FUNC_IMPL(__imp__sub_8319D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D480"))) PPC_WEAK_FUNC(sub_8319D480);
PPC_FUNC_IMPL(__imp__sub_8319D480) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8319ad70
	ctx.lr = 0x8319D49C;
	sub_8319AD70(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8319cb88
	ctx.lr = 0x8319D4B8;
	sub_8319CB88(ctx, base);
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

__attribute__((alias("__imp__sub_8319D4D0"))) PPC_WEAK_FUNC(sub_8319D4D0);
PPC_FUNC_IMPL(__imp__sub_8319D4D0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8319ad70
	ctx.lr = 0x8319D4EC;
	sub_8319AD70(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8319cb88
	ctx.lr = 0x8319D508;
	sub_8319CB88(ctx, base);
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

__attribute__((alias("__imp__sub_8319D520"))) PPC_WEAK_FUNC(sub_8319D520);
PPC_FUNC_IMPL(__imp__sub_8319D520) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319D540;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r11,r30,222
	ctx.r11.s64 = ctx.r30.s64 + 14548992;
	// addic. r11,r11,-8252
	xer.ca = ctx.r11.u32 > 8251;
	ctx.r11.s64 = ctx.r11.s64 + -8252;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8319d558
	if (!cr0.eq) goto loc_8319D558;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8319d5c8
	goto loc_8319D5C8;
loc_8319D558:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8319cf40
	ctx.lr = 0x8319D56C;
	sub_8319CF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8316e6e0
	ctx.lr = 0x8319D574;
	sub_8316E6E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x82b3ccc8
	ctx.lr = 0x8319D588;
	sub_82B3CCC8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,400
	cr6.compare<uint32_t>(ctx.r11.u32, 400, xer);
	// ble cr6,0x8319d598
	if (!cr6.gt) goto loc_8319D598;
	// li r11,400
	ctx.r11.s64 = 400;
loc_8319D598:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,18928
	ctx.r10.u64 = ctx.r10.u64 | 18928;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bge cr6,0x8319d5ac
	if (!cr6.lt) goto loc_8319D5AC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8319D5AC:
	// mulli r11,r11,670
	ctx.r11.s64 = ctx.r11.s64 * 670;
	// mulli r10,r31,25
	ctx.r10.s64 = ctx.r31.s64 * 25;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r3,r9,-53
	ctx.r3.s64 = ctx.r9.s64 + -3473408;
	// addic. r3,r3,22078
	xer.ca = ctx.r3.u32 > 4294945217;
	ctx.r3.s64 = ctx.r3.s64 + 22078;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x8319d5c8
	if (cr0.gt) goto loc_8319D5C8;
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8319D5C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319D5E0"))) PPC_WEAK_FUNC(sub_8319D5E0);
PPC_FUNC_IMPL(__imp__sub_8319D5E0) {
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
	ctx.lr = 0x8319D5E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319D5F8;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r30,r26,222
	ctx.r30.s64 = ctx.r26.s64 + 14548992;
	// addi r30,r30,-8464
	ctx.r30.s64 = ctx.r30.s64 + -8464;
	// addic. r29,r30,212
	xer.ca = ctx.r30.u32 > 4294967083;
	ctx.r29.s64 = ctx.r30.s64 + 212;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8319d898
	if (cr0.eq) goto loc_8319D898;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8311bdf0
	ctx.lr = 0x8319D618;
	sub_8311BDF0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319d898
	if (cr6.eq) goto loc_8319D898;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r23,r29,316
	ctx.r23.s64 = ctx.r29.s64 + 316;
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// addi r11,r23,-16
	ctx.r11.s64 = ctx.r23.s64 + -16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r22,r10,-2972
	ctx.r22.s64 = ctx.r10.s64 + -2972;
loc_8319D644:
	// ld r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stwu r31,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8319d644
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319D644;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8319cf40
	ctx.lr = 0x8319D680;
	sub_8319CF40(ctx, base);
	// lwz r11,6236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6236);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r30,r11,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x830ff290
	ctx.lr = 0x8319D694;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bne cr6,0x8319d6ac
	if (!cr6.eq) goto loc_8319D6AC;
	// li r11,5
	ctx.r11.s64 = 5;
	// divw r10,r30,r11
	ctx.r10.s32 = PPCDivide(ctx.r30.s32, ctx.r11.s32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8319D6AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319a630
	ctx.lr = 0x8319D6B4;
	sub_8319A630(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8319d520
	ctx.lr = 0x8319D6BC;
	sub_8319D520(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8314d550
	ctx.lr = 0x8319D6DC;
	sub_8314D550(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r3,-10
	ctx.r25.s64 = ctx.r3.s64 + -10;
	// addis r3,r26,205
	ctx.r3.s64 = ctx.r26.s64 + 13434880;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82b3ccc8
	ctx.lr = 0x8319D6F8;
	sub_82B3CCC8(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// extsw r8,r25
	ctx.r8.s64 = ctx.r25.s32;
	// lbz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// ori r6,r9,33928
	ctx.r6.u64 = ctx.r9.u64 | 33928;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r11,r7,r6
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,8976(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319a468
	ctx.lr = 0x8319D760;
	sub_8319A468(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319aa80
	ctx.lr = 0x8319D768;
	sub_8319AA80(ctx, base);
	// srawi r10,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8319a468
	ctx.lr = 0x8319D780;
	sub_8319A468(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319a5c0
	ctx.lr = 0x8319D788;
	sub_8319A5C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319dc20
	ctx.lr = 0x8319D790;
	sub_8319DC20(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,6012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6012, ctx.r8.u32);
	// lbz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8319d7b4
	if (cr6.eq) goto loc_8319D7B4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// bl 0x8319d1a0
	ctx.lr = 0x8319D7B4;
	sub_8319D1A0(ctx, base);
loc_8319D7B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x8319D7C0;
	sub_8311C148(ctx, base);
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319d898
	if (cr6.eq) goto loc_8319D898;
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r7,r3,248
	ctx.r7.s64 = ctx.r3.s64 + 248;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8319D7E0:
	// ld r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// bge cr6,0x8319d7f8
	if (!cr6.lt) goto loc_8319D7F8;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
loc_8319D7F8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8319d810
	if (!cr6.eq) goto loc_8319D810;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x8319d838
	goto loc_8319D838;
loc_8319D810:
	// lhz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8319d830
	if (!cr6.eq) goto loc_8319D830;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8319d834
	if (cr6.eq) goto loc_8319D834;
loc_8319D830:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8319D834:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8319D838:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319d87c
	if (!cr6.eq) goto loc_8319D87C;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x8319d87c
	if (!cr6.lt) goto loc_8319D87C;
	// addic. r10,r11,-12
	xer.ca = ctx.r11.u32 > 11;
	ctx.r10.s64 = ctx.r11.s64 + -12;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8319d87c
	if (cr0.eq) goto loc_8319D87C;
	// std r8,-12(r11)
	PPC_STORE_U64(ctx.r11.u32 + -12, ctx.r8.u64);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
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
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
loc_8319D87C:
	// lhz r10,808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8319d7e0
	if (cr6.lt) goto loc_8319D7E0;
loc_8319D898:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D8A0"))) PPC_WEAK_FUNC(sub_8319D8A0);
PPC_FUNC_IMPL(__imp__sub_8319D8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319D8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319D8B8;
	sub_831156E8(ctx, base);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r29,r4,222
	ctx.r29.s64 = ctx.r4.s64 + 14548992;
	// addic. r29,r29,-8252
	xer.ca = ctx.r29.u32 > 8251;
	ctx.r29.s64 = ctx.r29.s64 + -8252;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x8319d8d4
	if (!cr0.eq) goto loc_8319D8D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319D8D4:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,27560
	ctx.r5.s64 = ctx.r11.s64 + 27560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x8319D8F0;
	sub_831178A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319d918
	if (!cr6.eq) goto loc_8319D918;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319d91c
	if (cr6.eq) goto loc_8319D91C;
loc_8319D918:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8319D91C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319d934
	if (cr6.eq) goto loc_8319D934;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319D934:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x8319cf40
	ctx.lr = 0x8319D944;
	sub_8319CF40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319d520
	ctx.lr = 0x8319D950;
	sub_8319D520(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319D964"))) PPC_WEAK_FUNC(sub_8319D964);
PPC_FUNC_IMPL(__imp__sub_8319D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319D968"))) PPC_WEAK_FUNC(sub_8319D968);
PPC_FUNC_IMPL(__imp__sub_8319D968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319D970;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319D980;
	sub_831156E8(ctx, base);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r29,r4,222
	ctx.r29.s64 = ctx.r4.s64 + 14548992;
	// addic. r29,r29,-8252
	xer.ca = ctx.r29.u32 > 8251;
	ctx.r29.s64 = ctx.r29.s64 + -8252;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x8319d99c
	if (!cr0.eq) goto loc_8319D99C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319D99C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,27560
	ctx.r5.s64 = ctx.r11.s64 + 27560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x8319D9B8;
	sub_831178A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319d9e0
	if (!cr6.eq) goto loc_8319D9E0;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319d9e4
	if (cr6.eq) goto loc_8319D9E4;
loc_8319D9E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8319D9E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319d9fc
	if (cr6.eq) goto loc_8319D9FC;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319D9FC:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x8319cf40
	ctx.lr = 0x8319DA0C;
	sub_8319CF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319d520
	ctx.lr = 0x8319DA14;
	sub_8319D520(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,16100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319DA48"))) PPC_WEAK_FUNC(sub_8319DA48);
PPC_FUNC_IMPL(__imp__sub_8319DA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8319daa8
	if (cr6.gt) goto loc_8319DAA8;
	// lis r12,-31974
	ctx.r12.s64 = -2095448064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9616
	ctx.r12.s64 = ctx.r12.s64 + -9616;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8319DAA0;
	case 1:
		goto loc_8319DAA8;
	case 2:
		goto loc_8319DA98;
	case 3:
		goto loc_8319DAA8;
	case 4:
		goto loc_8319DA98;
	case 5:
		goto loc_8319DAA8;
	case 6:
		goto loc_8319DAA8;
	case 7:
		goto loc_8319DA98;
	case 8:
		goto loc_8319DAA8;
	case 9:
		goto loc_8319DA98;
	default:
		return;
	}
	// lwz r24,-9568(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9568);
	// lwz r24,-9560(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9560);
	// lwz r24,-9576(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9576);
	// lwz r24,-9560(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9560);
	// lwz r24,-9576(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9576);
	// lwz r24,-9560(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9560);
	// lwz r24,-9560(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9560);
	// lwz r24,-9576(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9576);
	// lwz r24,-9560(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9560);
	// lwz r24,-9576(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + -9576);
loc_8319DA98:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_8319DAA0:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_8319DAA8:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319DAB0"))) PPC_WEAK_FUNC(sub_8319DAB0);
PPC_FUNC_IMPL(__imp__sub_8319DAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8319DAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319DAC8;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r31,r11,46736
	ctx.r31.u64 = ctx.r11.u64 | 46736;
	// lbzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319DADC;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lbzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x8319daf8
	if (!cr6.lt) goto loc_8319DAF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8319DAF8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r28,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r28.u8);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319DB14"))) PPC_WEAK_FUNC(sub_8319DB14);
PPC_FUNC_IMPL(__imp__sub_8319DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319DB18"))) PPC_WEAK_FUNC(sub_8319DB18);
PPC_FUNC_IMPL(__imp__sub_8319DB18) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319DB30;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,46732
	ctx.r9.u64 = ctx.r11.u64 | 46732;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8319db58
	if (cr6.lt) goto loc_8319DB58;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8319DB58:
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

__attribute__((alias("__imp__sub_8319DB6C"))) PPC_WEAK_FUNC(sub_8319DB6C);
PPC_FUNC_IMPL(__imp__sub_8319DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319DB70"))) PPC_WEAK_FUNC(sub_8319DB70);
PPC_FUNC_IMPL(__imp__sub_8319DB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319DB78;
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
	// bl 0x831156e8
	ctx.lr = 0x8319DB8C;
	sub_831156E8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r11,30056
	ctx.r9.s64 = ctx.r11.s64 + 30056;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8319DBAC:
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8319dbc4
	if (cr6.gt) goto loc_8319DBC4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bge cr6,0x8319dbdc
	if (!cr6.lt) goto loc_8319DBDC;
loc_8319DBC4:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r8,144
	cr6.compare<uint32_t>(ctx.r8.u32, 144, xer);
	// blt cr6,0x8319dbac
	if (cr6.lt) goto loc_8319DBAC;
	// b 0x8319dc00
	goto loc_8319DC00;
loc_8319DBDC:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
loc_8319DC00:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319DC1C"))) PPC_WEAK_FUNC(sub_8319DC1C);
PPC_FUNC_IMPL(__imp__sub_8319DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319DC20"))) PPC_WEAK_FUNC(sub_8319DC20);
PPC_FUNC_IMPL(__imp__sub_8319DC20) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319DC38;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// lis r9,194
	ctx.r9.s64 = 12713984;
	// ori r10,r10,52144
	ctx.r10.u64 = ctx.r10.u64 | 52144;
	// ori r9,r9,52146
	ctx.r9.u64 = ctx.r9.u64 | 52146;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// lhzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319DC70;
	sub_8319DB70(ctx, base);
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

__attribute__((alias("__imp__sub_8319DC88"))) PPC_WEAK_FUNC(sub_8319DC88);
PPC_FUNC_IMPL(__imp__sub_8319DC88) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319DCA0;
	sub_831156E8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,30056
	ctx.r8.s64 = ctx.r11.s64 + 30056;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8319DCBC:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x8319dcf0
	if (cr6.eq) goto loc_8319DCF0;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,144
	cr6.compare<uint32_t>(ctx.r9.u32, 144, xer);
	// blt cr6,0x8319dcbc
	if (cr6.lt) goto loc_8319DCBC;
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
loc_8319DCF0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_8319DD28"))) PPC_WEAK_FUNC(sub_8319DD28);
PPC_FUNC_IMPL(__imp__sub_8319DD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319DD30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319DD40;
	sub_831156E8(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r9,r11,30056
	ctx.r9.s64 = ctx.r11.s64 + 30056;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_8319DD68:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8319dd80
	if (cr6.gt) goto loc_8319DD80;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x8319dd98
	if (!cr6.lt) goto loc_8319DD98;
loc_8319DD80:
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r8,144
	cr6.compare<uint32_t>(ctx.r8.u32, 144, xer);
	// blt cr6,0x8319dd68
	if (cr6.lt) goto loc_8319DD68;
	// b 0x8319ddbc
	goto loc_8319DDBC;
loc_8319DD98:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r28,r5,r9
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
loc_8319DDBC:
	// bl 0x831156e8
	ctx.lr = 0x8319DDC0;
	sub_831156E8(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r30,r11,52144
	ctx.r30.u64 = ctx.r11.u64 | 52144;
	// ori r31,r10,52146
	ctx.r31.u64 = ctx.r10.u64 | 52146;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// lhzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319DDF4;
	sub_8319DB70(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r5,29968
	ctx.r5.s64 = ctx.r5.s64 + 29968;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// bl 0x831178a0
	ctx.lr = 0x8319DE18;
	sub_831178A0(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8316fb10
	ctx.lr = 0x8319DE28;
	sub_8316FB10(ctx, base);
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x83153330
	ctx.lr = 0x8319DE34;
	sub_83153330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319dea8
	if (!cr6.eq) goto loc_8319DEA8;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8319dea8
	if (cr6.lt) goto loc_8319DEA8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8319dea8
	if (cr6.gt) goto loc_8319DEA8;
	// bl 0x831156e8
	ctx.lr = 0x8319DE54;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319DE78;
	sub_8319DB70(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r7,7
	cr6.compare<uint32_t>(ctx.r7.u32, 7, xer);
	// blt cr6,0x8319dea8
	if (cr6.lt) goto loc_8319DEA8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc20
	ctx.lr = 0x8319DE90;
	sub_8319DC20(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8319dea8
	if (cr6.gt) goto loc_8319DEA8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_8319DEA8:
	// sth r29,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r29.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r28,2(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2, ctx.r28.u8);
	// stb r27,3(r26)
	PPC_STORE_U8(ctx.r26.u32 + 3, ctx.r27.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319DEC0"))) PPC_WEAK_FUNC(sub_8319DEC0);
PPC_FUNC_IMPL(__imp__sub_8319DEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319DED8"))) PPC_WEAK_FUNC(sub_8319DED8);
PPC_FUNC_IMPL(__imp__sub_8319DED8) {
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
	ctx.lr = 0x8319DEF0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8319DEF4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x8319df0c
	if (cr6.eq) goto loc_8319DF0C;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// ble cr6,0x8319df24
	if (!cr6.gt) goto loc_8319DF24;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x8319df24
	if (cr6.gt) goto loc_8319DF24;
loc_8319DF0C:
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
loc_8319DF24:
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

__attribute__((alias("__imp__sub_8319DF3C"))) PPC_WEAK_FUNC(sub_8319DF3C);
PPC_FUNC_IMPL(__imp__sub_8319DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319DF40"))) PPC_WEAK_FUNC(sub_8319DF40);
PPC_FUNC_IMPL(__imp__sub_8319DF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319DF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319DF58;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r10,192
	ctx.r31.s64 = ctx.r10.s64 + 12582912;
	// addi r31,r31,-10964
	ctx.r31.s64 = ctx.r31.s64 + -10964;
	// bl 0x8319dc88
	ctx.lr = 0x8319DF70;
	sub_8319DC88(ctx, base);
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// blt cr6,0x8319df80
	if (cr6.lt) goto loc_8319DF80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8319df88
	goto loc_8319DF88;
loc_8319DF80:
	// mulli r11,r3,532
	ctx.r11.s64 = ctx.r3.s64 * 532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8319DF88:
	// addi r8,r11,404
	ctx.r8.s64 = ctx.r11.s64 + 404;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8319dfa8
	if (cr6.lt) goto loc_8319DFA8;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// b 0x8319dfac
	goto loc_8319DFAC;
loc_8319DFA8:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
loc_8319DFAC:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x8319e028
	if (!cr6.eq) goto loc_8319E028;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8319dfcc
	if (cr6.lt) goto loc_8319DFCC;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// b 0x8319dfd0
	goto loc_8319DFD0;
loc_8319DFCC:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
loc_8319DFD0:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8319dff0
	if (cr6.eq) goto loc_8319DFF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e01c
	goto loc_8319E01C;
loc_8319DFF0:
	// lbz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8319e008
	if (cr6.eq) goto loc_8319E008;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e01c
	goto loc_8319E01C;
loc_8319E008:
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8319E01C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319e044
	if (!cr6.eq) goto loc_8319E044;
loc_8319E028:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8319dfa8
	if (cr6.lt) goto loc_8319DFA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319E044:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E050"))) PPC_WEAK_FUNC(sub_8319E050);
PPC_FUNC_IMPL(__imp__sub_8319E050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8319E058;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319E068;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r20,r11,192
	ctx.r20.s64 = ctx.r11.s64 + 12582912;
	// addi r20,r20,-10964
	ctx.r20.s64 = ctx.r20.s64 + -10964;
	// bl 0x831156e8
	ctx.lr = 0x8319E078;
	sub_831156E8(ctx, base);
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,194
	ctx.r8.s64 = 12713984;
	// ori r23,r10,52144
	ctx.r23.u64 = ctx.r10.u64 | 52144;
	// ori r24,r8,52146
	ctx.r24.u64 = ctx.r8.u64 | 52146;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhzx r7,r9,r23
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r23.u32);
	// lhzx r6,r9,r24
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r24.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319E0AC;
	sub_8319DB70(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc88
	ctx.lr = 0x8319E0B4;
	sub_8319DC88(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r27,r11,-4480
	ctx.r27.s64 = ctx.r11.s64 + -4480;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,365
	cr6.compare<uint32_t>(ctx.r3.u32, 365, xer);
	// lwz r11,-4480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4480);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8319e1d0
	if (!cr6.lt) goto loc_8319E1D0;
	// mulli r11,r3,532
	ctx.r11.s64 = ctx.r3.s64 * 532;
	// add r25,r11,r20
	ctx.r25.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_8319E0DC:
	// cmplwi cr6,r26,365
	cr6.compare<uint32_t>(ctx.r26.u32, 365, xer);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// bge cr6,0x8319e0ec
	if (!cr6.lt) goto loc_8319E0EC;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8319E0EC:
	// addi r29,r28,404
	ctx.r29.s64 = ctx.r28.s64 + 404;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e108
	if (cr6.lt) goto loc_8319E108;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x8319e10c
	goto loc_8319E10C;
loc_8319E108:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_8319E10C:
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8319e180
	if (!cr6.eq) goto loc_8319E180;
	// bl 0x831156e8
	ctx.lr = 0x8319E124;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// lhzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319E148;
	sub_8319DB70(ctx, base);
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e158
	if (cr6.lt) goto loc_8319E158;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x8319e15c
	goto loc_8319E15C;
loc_8319E158:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_8319E15C:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82bb07d8
	ctx.lr = 0x8319E174;
	sub_82BB07D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319e194
	if (!cr6.eq) goto loc_8319E194;
loc_8319E180:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e108
	if (cr6.lt) goto loc_8319E108;
	// b 0x8319e1c0
	goto loc_8319E1C0;
loc_8319E194:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e1a8
	if (cr6.lt) goto loc_8319E1A8;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x8319e1b8
	goto loc_8319E1B8;
loc_8319E1A8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 404);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_8319E1B8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_8319E1C0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,532
	ctx.r25.s64 = ctx.r25.s64 + 532;
	// cmplwi cr6,r26,365
	cr6.compare<uint32_t>(ctx.r26.u32, 365, xer);
	// blt cr6,0x8319e0dc
	if (cr6.lt) goto loc_8319E0DC;
loc_8319E1D0:
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319e1e8
	if (cr6.eq) goto loc_8319E1E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e214
	goto loc_8319E214;
loc_8319E1E8:
	// lbz r9,2(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// lbz r10,2(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319e200
	if (cr6.eq) goto loc_8319E200;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e214
	goto loc_8319E214;
loc_8319E200:
	// lbz r9,3(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// lbz r10,3(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319E214:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319e324
	if (cr6.eq) goto loc_8319E324;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8319e324
	if (cr6.eq) goto loc_8319E324;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_8319E230:
	// cmplwi cr6,r27,365
	cr6.compare<uint32_t>(ctx.r27.u32, 365, xer);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// bge cr6,0x8319e240
	if (!cr6.lt) goto loc_8319E240;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8319E240:
	// addi r29,r28,404
	ctx.r29.s64 = ctx.r28.s64 + 404;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e25c
	if (cr6.lt) goto loc_8319E25C;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x8319e260
	goto loc_8319E260;
loc_8319E25C:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_8319E260:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8319e2d4
	if (!cr6.eq) goto loc_8319E2D4;
	// bl 0x831156e8
	ctx.lr = 0x8319E278;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// lhzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319E29C;
	sub_8319DB70(ctx, base);
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e2ac
	if (cr6.lt) goto loc_8319E2AC;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// b 0x8319e2b0
	goto loc_8319E2B0;
loc_8319E2AC:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
loc_8319E2B0:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82bb07d8
	ctx.lr = 0x8319E2C8;
	sub_82BB07D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319e2e8
	if (!cr6.eq) goto loc_8319E2E8;
loc_8319E2D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e25c
	if (cr6.lt) goto loc_8319E25C;
	// b 0x8319e314
	goto loc_8319E314;
loc_8319E2E8:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8319e2fc
	if (cr6.lt) goto loc_8319E2FC;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x8319e30c
	goto loc_8319E30C;
loc_8319E2FC:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 404);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_8319E30C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_8319E314:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,532
	ctx.r26.s64 = ctx.r26.s64 + 532;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, xer);
	// blt cr6,0x8319e230
	if (cr6.lt) goto loc_8319E230;
loc_8319E324:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E330"))) PPC_WEAK_FUNC(sub_8319E330);
PPC_FUNC_IMPL(__imp__sub_8319E330) {
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
	ctx.lr = 0x8319E350;
	sub_831156E8(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// addis r5,r10,192
	ctx.r5.s64 = ctx.r10.s64 + 12582912;
	// addi r5,r5,-10964
	ctx.r5.s64 = ctx.r5.s64 + -10964;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8319e384
	if (cr6.eq) goto loc_8319E384;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e398
	goto loc_8319E398;
loc_8319E384:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319E398:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319e440
	if (cr6.eq) goto loc_8319E440;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8319E3B0:
	// cmplwi cr6,r7,365
	cr6.compare<uint32_t>(ctx.r7.u32, 365, xer);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// bge cr6,0x8319e3c0
	if (!cr6.lt) goto loc_8319E3C0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8319E3C0:
	// addi r9,r8,404
	ctx.r9.s64 = ctx.r8.s64 + 404;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8319e3dc
	if (cr6.lt) goto loc_8319E3DC;
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// b 0x8319e3e0
	goto loc_8319E3E0;
loc_8319E3DC:
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
loc_8319E3E0:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beq cr6,0x8319e404
	if (cr6.eq) goto loc_8319E404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8319e3dc
	if (cr6.lt) goto loc_8319E3DC;
	// b 0x8319e430
	goto loc_8319E430;
loc_8319E404:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8319e418
	if (cr6.lt) goto loc_8319E418;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x8319e428
	goto loc_8319E428;
loc_8319E418:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 404);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_8319E428:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8319E430:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,532
	ctx.r6.s64 = ctx.r6.s64 + 532;
	// cmplwi cr6,r7,365
	cr6.compare<uint32_t>(ctx.r7.u32, 365, xer);
	// blt cr6,0x8319e3b0
	if (cr6.lt) goto loc_8319E3B0;
loc_8319E440:
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

__attribute__((alias("__imp__sub_8319E45C"))) PPC_WEAK_FUNC(sub_8319E45C);
PPC_FUNC_IMPL(__imp__sub_8319E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E460"))) PPC_WEAK_FUNC(sub_8319E460);
PPC_FUNC_IMPL(__imp__sub_8319E460) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// rlwinm r9,r31,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319e498
	if (cr6.eq) goto loc_8319E498;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e4c4
	goto loc_8319E4C4;
loc_8319E498:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r31,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319e4b0
	if (cr6.eq) goto loc_8319E4B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319e4c4
	goto loc_8319E4C4;
loc_8319E4B0:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319E4C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319e4e0
	if (cr6.eq) goto loc_8319E4E0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319dc20
	ctx.lr = 0x8319E4D8;
	sub_8319DC20(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_8319E4E0:
	// bl 0x831156e8
	ctx.lr = 0x8319E4E4;
	sub_831156E8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319df40
	ctx.lr = 0x8319E4F8;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319e5cc
	if (cr6.eq) goto loc_8319E5CC;
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x8319e534
	if (!cr6.eq) goto loc_8319E534;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x8319e534
	if (!cr6.eq) goto loc_8319E534;
loc_8319E51C:
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
loc_8319E534:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8319e58c
	if (!cr6.eq) goto loc_8319E58C;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x8319e560
	if (!cr6.eq) goto loc_8319E560;
loc_8319E548:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8319E560:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8319e58c
	if (!cr6.eq) goto loc_8319E58C;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// bne cr6,0x8319e58c
	if (!cr6.eq) goto loc_8319E58C;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8319E58C:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x8319e5a0
	if (!cr6.eq) goto loc_8319E5A0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x8319e51c
	if (cr6.eq) goto loc_8319E51C;
loc_8319E5A0:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x8319e5cc
	if (!cr6.eq) goto loc_8319E5CC;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// beq cr6,0x8319e548
	if (cr6.eq) goto loc_8319E548;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x8319e5cc
	if (!cr6.eq) goto loc_8319E5CC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r3,3
	ctx.r3.s64 = 3;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// beq cr6,0x8319e5d0
	if (cr6.eq) goto loc_8319E5D0;
loc_8319E5CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8319E5D0:
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

__attribute__((alias("__imp__sub_8319E5E4"))) PPC_WEAK_FUNC(sub_8319E5E4);
PPC_FUNC_IMPL(__imp__sub_8319E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E5E8"))) PPC_WEAK_FUNC(sub_8319E5E8);
PPC_FUNC_IMPL(__imp__sub_8319E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8319E5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-2796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2796);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// xor r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8319e648
	if (!cr6.eq) goto loc_8319E648;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319e648
	if (!cr6.eq) goto loc_8319E648;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_8319E648:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319e718
	if (!cr6.eq) goto loc_8319E718;
	// bl 0x831156e8
	ctx.lr = 0x8319E658;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x8319E668;
	sub_8319DC20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x8319E674;
	sub_8311C148(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r9,r10,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x8319e698
	if (!cr6.eq) goto loc_8319E698;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// b 0x8319e6bc
	goto loc_8319E6BC;
loc_8319E698:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8314c958
	ctx.lr = 0x8319E6A0;
	sub_8314C958(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r29,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r29.u8);
	// bne cr6,0x8319e6b8
	if (!cr6.eq) goto loc_8319E6B8;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// b 0x8319e6bc
	goto loc_8319E6BC;
loc_8319E6B8:
	// stb r29,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r29.u8);
loc_8319E6BC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319e6ec
	if (cr6.eq) goto loc_8319E6EC;
	// subfc r11,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x8319e700
	goto loc_8319E700;
loc_8319E6EC:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_8319E700:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319e718
	if (cr6.eq) goto loc_8319E718;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8319E718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E724"))) PPC_WEAK_FUNC(sub_8319E724);
PPC_FUNC_IMPL(__imp__sub_8319E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E728"))) PPC_WEAK_FUNC(sub_8319E728);
PPC_FUNC_IMPL(__imp__sub_8319E728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x831156e8
	ctx.lr = 0x8319E738;
	sub_831156E8(ctx, base);
	// lis r11,2016
	ctx.r11.s64 = 132120576;
	// ori r11,r11,1793
	ctx.r11.u64 = ctx.r11.u64 | 1793;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319E748;
	sub_831156E8(ctx, base);
	// lis r9,194
	ctx.r9.s64 = 12713984;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,194
	ctx.r8.s64 = 12713984;
	// ori r9,r9,52144
	ctx.r9.u64 = ctx.r9.u64 | 52144;
	// ori r8,r8,52146
	ctx.r8.u64 = ctx.r8.u64 | 52146;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319E77C;
	sub_8319DB70(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82bb07d8
	ctx.lr = 0x8319E788;
	sub_82BB07D8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8319E7A4"))) PPC_WEAK_FUNC(sub_8319E7A4);
PPC_FUNC_IMPL(__imp__sub_8319E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319E7A8"))) PPC_WEAK_FUNC(sub_8319E7A8);
PPC_FUNC_IMPL(__imp__sub_8319E7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319E7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x8319E7B8;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8319E7BC;
	sub_831156E8(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r8,r11,52144
	ctx.r8.u64 = ctx.r11.u64 | 52144;
	// ori r7,r10,52146
	ctx.r7.u64 = ctx.r10.u64 | 52146;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8319db70
	ctx.lr = 0x8319E7F0;
	sub_8319DB70(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r10,30200
	ctx.r11.s64 = ctx.r10.s64 + 30200;
	// rlwinm r29,r9,24,8,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF00;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_8319E808:
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// or r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 | ctx.r29.u64;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwimi r10,r6,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// or r11,r5,r29
	ctx.r11.u64 = ctx.r5.u64 | ctx.r29.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwimi r7,r11,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82acebe8
	ctx.lr = 0x8319E83C;
	sub_82ACEBE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319e860
	if (cr6.eq) goto loc_8319E860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82acebe8
	ctx.lr = 0x8319E854;
	sub_82ACEBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319e87c
	if (!cr6.eq) goto loc_8319E87C;
loc_8319E860:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,48
	cr6.compare<uint32_t>(ctx.r30.u32, 48, xer);
	// blt cr6,0x8319e808
	if (cr6.lt) goto loc_8319E808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8319E87C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319E888"))) PPC_WEAK_FUNC(sub_8319E888);
PPC_FUNC_IMPL(__imp__sub_8319E888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319E890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x8319e93c
	if (!cr6.lt) goto loc_8319E93C;
loc_8319E8BC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// bctrl 
	ctx.lr = 0x8319E8D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319e8e8
	if (cr6.eq) goto loc_8319E8E8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8319E8E8:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8319E918:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319e918
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319E918;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x8319e8bc
	if (cr6.lt) goto loc_8319E8BC;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_8319E93C:
	// bne cr6,0x8319e980
	if (!cr6.eq) goto loc_8319E980;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8319E970:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8319e970
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319E970;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_8319E980:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r25,r30
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x8319ea08
	if (!cr6.lt) goto loc_8319EA08;
loc_8319E998:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319E9B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319ea08
	if (cr6.eq) goto loc_8319EA08;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8319E9E4:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8319e9e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319E9E4;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// blt cr6,0x8319e998
	if (cr6.lt) goto loc_8319E998;
loc_8319EA08:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r26,-4
	ctx.r9.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8319EA28:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8319ea28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EA28;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319EA3C"))) PPC_WEAK_FUNC(sub_8319EA3C);
PPC_FUNC_IMPL(__imp__sub_8319EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319EA40"))) PPC_WEAK_FUNC(sub_8319EA40);
PPC_FUNC_IMPL(__imp__sub_8319EA40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 4294901760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,-2796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2796);
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8319ea9c
	if (!cr6.eq) goto loc_8319EA9C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8319ea9c
	if (!cr6.eq) goto loc_8319EA9C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8319EA9C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319eadc
	if (!cr6.eq) goto loc_8319EADC;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319e5e8
	ctx.lr = 0x8319EAB0;
	sub_8319E5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82bb2908
	ctx.lr = 0x8319EAD0;
	sub_82BB2908(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_8319EADC:
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

__attribute__((alias("__imp__sub_8319EAF4"))) PPC_WEAK_FUNC(sub_8319EAF4);
PPC_FUNC_IMPL(__imp__sub_8319EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319EAF8"))) PPC_WEAK_FUNC(sub_8319EAF8);
PPC_FUNC_IMPL(__imp__sub_8319EAF8) {
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
	ctx.lr = 0x8319EB00;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x8319ec58
	if (!cr0.gt) goto loc_8319EC58;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8319EB3C:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r25,r25,-20
	ctx.r25.s64 = ctx.r25.s64 + -20;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
loc_8319EB58:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319eb58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EB58;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x8319ebf0
	if (!cr6.lt) goto loc_8319EBF0;
loc_8319EB74:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// bctrl 
	ctx.lr = 0x8319EB90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319eba0
	if (cr6.eq) goto loc_8319EBA0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8319EBA0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8319EBD0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ebd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EBD0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x8319eb74
	if (cr6.lt) goto loc_8319EB74;
loc_8319EBF0:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x8319ec38
	if (!cr6.eq) goto loc_8319EC38;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8319EC28:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8319ec28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EC28;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_8319EC38:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ca748
	ctx.lr = 0x8319EC50;
	sub_831CA748(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x8319eb3c
	if (cr6.gt) goto loc_8319EB3C;
loc_8319EC58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319EC60"))) PPC_WEAK_FUNC(sub_8319EC60);
PPC_FUNC_IMPL(__imp__sub_8319EC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8319EC68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8319EC8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319ecec
	if (cr6.eq) goto loc_8319ECEC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ECA8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319eca8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ECA8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ECC4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ecc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ECC4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ECE0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ece0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ECE0;
loc_8319ECEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319ECFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319ed5c
	if (cr6.eq) goto loc_8319ED5C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ED18:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ed18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ED18;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ED34:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ed34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ED34;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ED50:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ed50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ED50;
loc_8319ED5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8319ED6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319edcc
	if (cr6.eq) goto loc_8319EDCC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319ED88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319ed88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319ED88;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319EDA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319eda4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EDA4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319EDC0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319edc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319EDC0;
loc_8319EDCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319EDD4"))) PPC_WEAK_FUNC(sub_8319EDD4);
PPC_FUNC_IMPL(__imp__sub_8319EDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319EDD8"))) PPC_WEAK_FUNC(sub_8319EDD8);
PPC_FUNC_IMPL(__imp__sub_8319EDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8319EDE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319EDF0;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r31,r11,46736
	ctx.r31.u64 = ctx.r11.u64 | 46736;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// lbzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319EE0C;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lbzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x8319ee28
	if (cr6.lt) goto loc_8319EE28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8319EE28:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r27,r11,8,8,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r27.u64 & 0xFFFFFFFFFF0000FF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r10,r27,8
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFFFF;
	// rlwimi r28,r10,8,0,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r28.u64 & 0xFFFFFFFF000000FF);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x82bb2908
	ctx.lr = 0x8319EE48;
	sub_82BB2908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319EE54"))) PPC_WEAK_FUNC(sub_8319EE54);
PPC_FUNC_IMPL(__imp__sub_8319EE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319EE58"))) PPC_WEAK_FUNC(sub_8319EE58);
PPC_FUNC_IMPL(__imp__sub_8319EE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8319EE60;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319EE70;
	sub_831156E8(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// rlwinm r9,r27,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// addis r20,r10,192
	ctx.r20.s64 = ctx.r10.s64 + 12582912;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r20,r20,-10964
	ctx.r20.s64 = ctx.r20.s64 + -10964;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319eea8
	if (cr6.eq) goto loc_8319EEA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319eed4
	goto loc_8319EED4;
loc_8319EEA8:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r27,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319eec0
	if (cr6.eq) goto loc_8319EEC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319eed4
	goto loc_8319EED4;
loc_8319EEC0:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319EED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319eef0
	if (cr6.eq) goto loc_8319EEF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319dc20
	ctx.lr = 0x8319EEE8;
	sub_8319DC20(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_8319EEF0:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r29,r11,46736
	ctx.r29.u64 = ctx.r11.u64 | 46736;
loc_8319EF04:
	// cmplwi cr6,r22,365
	cr6.compare<uint32_t>(ctx.r22.u32, 365, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bge cr6,0x8319ef14
	if (!cr6.lt) goto loc_8319EF14;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8319EF14:
	// addi r24,r11,404
	ctx.r24.s64 = ctx.r11.s64 + 404;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x8319ef30
	if (cr6.lt) goto loc_8319EF30;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// b 0x8319ef34
	goto loc_8319EF34;
loc_8319EF30:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
loc_8319EF34:
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8319f03c
	if (!cr6.eq) goto loc_8319F03C;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x8319ef58
	if (cr6.lt) goto loc_8319EF58;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// b 0x8319ef5c
	goto loc_8319EF5C;
loc_8319EF58:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
loc_8319EF5C:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319EF6C;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// lbzx r28,r10,r29
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319EF7C;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r27,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// rlwinm r31,r27,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x8319ef9c
	if (!cr6.lt) goto loc_8319EF9C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8319EF9C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r28,r11,8,8,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r28.u64 & 0xFFFFFFFFFF0000FF);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82bb2908
	ctx.lr = 0x8319EFBC;
	sub_82BB2908(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bb07d8
	ctx.lr = 0x8319EFC8;
	sub_82BB07D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319f03c
	if (cr6.eq) goto loc_8319F03C;
	// bl 0x831156e8
	ctx.lr = 0x8319EFD8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319EFE4;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8319eff8
	if (!cr6.lt) goto loc_8319EFF8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8319EFF8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwimi r28,r11,8,8,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r28.u64 & 0xFFFFFFFFFF0000FF);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82acebe8
	ctx.lr = 0x8319F018;
	sub_82ACEBE8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319f03c
	if (cr6.eq) goto loc_8319F03C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bb07d8
	ctx.lr = 0x8319F030;
	sub_82BB07D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f050
	if (!cr6.eq) goto loc_8319F050;
loc_8319F03C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x8319ef30
	if (cr6.lt) goto loc_8319EF30;
	// b 0x8319f054
	goto loc_8319F054;
loc_8319F050:
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_8319F054:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,532
	ctx.r21.s64 = ctx.r21.s64 + 532;
	// cmplwi cr6,r22,365
	cr6.compare<uint32_t>(ctx.r22.u32, 365, xer);
	// blt cr6,0x8319ef04
	if (cr6.lt) goto loc_8319EF04;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319F070"))) PPC_WEAK_FUNC(sub_8319F070);
PPC_FUNC_IMPL(__imp__sub_8319F070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8319F078;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319F088;
	sub_831156E8(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// rlwinm r9,r26,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// addis r18,r10,192
	ctx.r18.s64 = ctx.r10.s64 + 12582912;
	// addi r18,r18,-10964
	ctx.r18.s64 = ctx.r18.s64 + -10964;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319f0b8
	if (cr6.eq) goto loc_8319F0B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f0e4
	goto loc_8319F0E4;
loc_8319F0B8:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r26,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8319f0d0
	if (cr6.eq) goto loc_8319F0D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f0e4
	goto loc_8319F0E4;
loc_8319F0D0:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319F0E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319f0fc
	if (cr6.eq) goto loc_8319F0FC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc20
	ctx.lr = 0x8319F0F8;
	sub_8319DC20(ctx, base);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8319F0FC:
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// ori r27,r11,46736
	ctx.r27.u64 = ctx.r11.u64 | 46736;
loc_8319F114:
	// cmplwi cr6,r21,365
	cr6.compare<uint32_t>(ctx.r21.u32, 365, xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bge cr6,0x8319f124
	if (!cr6.lt) goto loc_8319F124;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8319F124:
	// addi r23,r11,404
	ctx.r23.s64 = ctx.r11.s64 + 404;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r25,16
	cr6.compare<uint32_t>(ctx.r25.u32, 16, xer);
	// blt cr6,0x8319f140
	if (cr6.lt) goto loc_8319F140;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// b 0x8319f144
	goto loc_8319F144;
loc_8319F140:
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
loc_8319F144:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8319f290
	if (!cr6.eq) goto loc_8319F290;
	// cmplwi cr6,r25,16
	cr6.compare<uint32_t>(ctx.r25.u32, 16, xer);
	// blt cr6,0x8319f168
	if (cr6.lt) goto loc_8319F168;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// b 0x8319f16c
	goto loc_8319F16C;
loc_8319F168:
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
loc_8319F16C:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319F17C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r22,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// lbzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319F18C;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r26,24,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFF;
	// rlwinm r31,r26,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8319f1ac
	if (!cr6.lt) goto loc_8319F1AC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8319F1AC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r29,r11,8,8,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r29.u64 & 0xFFFFFFFFFF0000FF);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r29,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82bb2908
	ctx.lr = 0x8319F1CC;
	sub_82BB2908(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bb07d8
	ctx.lr = 0x8319F1D8;
	sub_82BB07D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319f290
	if (cr6.eq) goto loc_8319F290;
	// bl 0x831156e8
	ctx.lr = 0x8319F1E8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x831156e8
	ctx.lr = 0x8319F1F4;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bge cr6,0x8319f20c
	if (!cr6.lt) goto loc_8319F20C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_8319F20C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwimi r29,r11,8,8,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFF00) | (ctx.r29.u64 & 0xFFFFFFFFFF0000FF);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r29,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82acebe8
	ctx.lr = 0x8319F22C;
	sub_82ACEBE8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8319f290
	if (cr6.eq) goto loc_8319F290;
	// rlwinm r11,r28,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8319f254
	if (cr6.eq) goto loc_8319F254;
	// subfc r11,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x8319f284
	goto loc_8319F284;
loc_8319F254:
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8319f270
	if (cr6.eq) goto loc_8319F270;
	// subfc r11,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x8319f284
	goto loc_8319F284;
loc_8319F270:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_8319F284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f2a4
	if (!cr6.eq) goto loc_8319F2A4;
loc_8319F290:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmplwi cr6,r25,16
	cr6.compare<uint32_t>(ctx.r25.u32, 16, xer);
	// blt cr6,0x8319f140
	if (cr6.lt) goto loc_8319F140;
	// b 0x8319f2a8
	goto loc_8319F2A8;
loc_8319F2A4:
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_8319F2A8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r20,r20,532
	ctx.r20.s64 = ctx.r20.s64 + 532;
	// cmplwi cr6,r21,365
	cr6.compare<uint32_t>(ctx.r21.u32, 365, xer);
	// blt cr6,0x8319f114
	if (cr6.lt) goto loc_8319F114;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319F2C4"))) PPC_WEAK_FUNC(sub_8319F2C4);
PPC_FUNC_IMPL(__imp__sub_8319F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319F2C8"))) PPC_WEAK_FUNC(sub_8319F2C8);
PPC_FUNC_IMPL(__imp__sub_8319F2C8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-4480
	ctx.r6.s64 = ctx.r11.s64 + -4480;
	// lhz r10,-4480(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4480);
	// lbz r9,3(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// lbz r8,2(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// beq cr6,0x8319f304
	if (cr6.eq) goto loc_8319F304;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f330
	goto loc_8319F330;
loc_8319F304:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x8319f31c
	if (cr6.eq) goto loc_8319F31C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f330
	goto loc_8319F330;
loc_8319F31C:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_8319F330:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319f354
	if (cr6.eq) goto loc_8319F354;
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
loc_8319F354:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8319f368
	if (cr6.eq) goto loc_8319F368;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f394
	goto loc_8319F394;
loc_8319F368:
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8319f380
	if (cr6.eq) goto loc_8319F380;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8319f394
	goto loc_8319F394;
loc_8319F380:
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8319F394:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319f3ac
	if (cr6.eq) goto loc_8319F3AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x8319F3A8;
	sub_8319DC20(ctx, base);
	// b 0x8319f3b0
	goto loc_8319F3B0;
loc_8319F3AC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8319F3B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319dab0
	ctx.lr = 0x8319F3C4;
	sub_8319DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb07d8
	ctx.lr = 0x8319F3D0;
	sub_82BB07D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319f404
	if (cr6.eq) goto loc_8319F404;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319edd8
	ctx.lr = 0x8319F3E8;
	sub_8319EDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acebe8
	ctx.lr = 0x8319F3F4;
	sub_82ACEBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8319f408
	if (!cr6.eq) goto loc_8319F408;
loc_8319F404:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319F408:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8319F420"))) PPC_WEAK_FUNC(sub_8319F420);
PPC_FUNC_IMPL(__imp__sub_8319F420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8319F428;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x8319f4c8
	if (!cr6.gt) goto loc_8319F4C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r7,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8319ec60
	ctx.lr = 0x8319F480;
	sub_8319EC60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x8319ec60
	ctx.lr = 0x8319F494;
	sub_8319EC60(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x8319ec60
	ctx.lr = 0x8319F4AC;
	sub_8319EC60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8319ec60
	ctx.lr = 0x8319F4C0;
	sub_8319EC60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8319F4C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8319ec60
	ctx.lr = 0x8319F4D4;
	sub_8319EC60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319F4DC"))) PPC_WEAK_FUNC(sub_8319F4DC);
PPC_FUNC_IMPL(__imp__sub_8319F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319F4E0"))) PPC_WEAK_FUNC(sub_8319F4E0);
PPC_FUNC_IMPL(__imp__sub_8319F4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8319F4E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-20
	ctx.r5.s64 = ctx.r5.s64 + -20;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8319f420
	ctx.lr = 0x8319F530;
	sub_8319F420(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x8319f588
	if (!cr6.lt) goto loc_8319F588;
loc_8319F540:
	// addi r31,r30,-20
	ctx.r31.s64 = ctx.r30.s64 + -20;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8319F554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f588
	if (!cr6.eq) goto loc_8319F588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319F570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f588
	if (!cr6.eq) goto loc_8319F588;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// blt cr6,0x8319f540
	if (cr6.lt) goto loc_8319F540;
loc_8319F588:
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// bge cr6,0x8319f5d4
	if (!cr6.lt) goto loc_8319F5D4;
loc_8319F590:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8319F5A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f5d4
	if (!cr6.eq) goto loc_8319F5D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319F5BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f5d4
	if (!cr6.eq) goto loc_8319F5D4;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// blt cr6,0x8319f590
	if (cr6.lt) goto loc_8319F590;
loc_8319F5D4:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8319F5DC:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x8319f688
	if (!cr6.lt) goto loc_8319F688;
loc_8319F5E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319F5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f67c
	if (!cr6.eq) goto loc_8319F67C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8319F610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f688
	if (!cr6.eq) goto loc_8319F688;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8319F638:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8319f638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F638;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F654:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8319f654
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F654;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F670:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F670;
loc_8319F67C:
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x8319f5e4
	if (cr6.lt) goto loc_8319F5E4;
loc_8319F688:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// ble cr6,0x8319f73c
	if (!cr6.gt) goto loc_8319F73C;
	// addi r31,r27,-20
	ctx.r31.s64 = ctx.r27.s64 + -20;
loc_8319F694:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8319F6A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f724
	if (!cr6.eq) goto loc_8319F724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8319F6C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319f738
	if (!cr6.eq) goto loc_8319F738;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F6E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f6e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F6E0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F6FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f6fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F6FC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F718:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f718
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F718;
loc_8319F724:
	// addi r11,r27,-20
	ctx.r11.s64 = ctx.r27.s64 + -20;
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x8319f694
	if (cr6.lt) goto loc_8319F694;
loc_8319F738:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
loc_8319F73C:
	// bne cr6,0x8319f810
	if (!cr6.eq) goto loc_8319F810;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x8319f944
	if (cr6.eq) goto loc_8319F944;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x8319f7a4
	if (cr6.eq) goto loc_8319F7A4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F760:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f760
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F760;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F77C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f77c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F77C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F798:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f798
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F798;
loc_8319F7A4:
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_8319F7C8:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8319f7c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F7C8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F7E4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8319f7e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F7E4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F800:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f800
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F800;
	// b 0x8319f5dc
	goto loc_8319F5DC;
loc_8319F810:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x8319f8e0
	if (!cr6.eq) goto loc_8319F8E0;
	// addi r11,r27,-20
	ctx.r11.s64 = ctx.r27.s64 + -20;
	// addi r30,r30,-20
	ctx.r30.s64 = ctx.r30.s64 + -20;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x8319f880
	if (cr6.eq) goto loc_8319F880;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F83C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f83c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F83C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F858:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f858
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F858;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F874:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f874
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F874;
loc_8319F880:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r28,r28,-20
	ctx.r28.s64 = ctx.r28.s64 + -20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F898:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F898;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F8B4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f8b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F8B4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F8D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f8d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F8D0;
	// b 0x8319f5dc
	goto loc_8319F5DC;
loc_8319F8E0:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r27,r27,-20
	ctx.r27.s64 = ctx.r27.s64 + -20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F8F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f8f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F8F8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F914:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f914
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F914;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,268
	ctx.r11.s64 = ctx.r1.s64 + 268;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319F930:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8319f930
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319F930;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// b 0x8319f5dc
	goto loc_8319F5DC;
loc_8319F944:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319F958"))) PPC_WEAK_FUNC(sub_8319F958);
PPC_FUNC_IMPL(__imp__sub_8319F958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8319F960;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,20
	ctx.r25.s64 = 20;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x8319fa14
	if (!cr6.gt) goto loc_8319FA14;
loc_8319F988:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8319fa38
	if (!cr6.gt) goto loc_8319FA38;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319f4e0
	ctx.lr = 0x8319F9A4;
	sub_8319F4E0(ctx, base);
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
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x8319f9f4
	if (!cr6.lt) goto loc_8319F9F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319f958
	ctx.lr = 0x8319F9EC;
	sub_8319F958(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8319fa04
	goto loc_8319FA04;
loc_8319F9F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8319f958
	ctx.lr = 0x8319FA00;
	sub_8319F958(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8319FA04:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x8319f988
	if (cr6.gt) goto loc_8319F988;
loc_8319FA14:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8319fa30
	if (!cr6.gt) goto loc_8319FA30;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cace0
	ctx.lr = 0x8319FA30;
	sub_831CACE0(ctx, base);
loc_8319FA30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8319FA38:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x8319fa14
	if (!cr6.gt) goto loc_8319FA14;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8319fa60
	if (!cr6.gt) goto loc_8319FA60;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319eaf8
	ctx.lr = 0x8319FA60;
	sub_8319EAF8(ctx, base);
loc_8319FA60:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831caea0
	ctx.lr = 0x8319FA70;
	sub_831CAEA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319FA78"))) PPC_WEAK_FUNC(sub_8319FA78);
PPC_FUNC_IMPL(__imp__sub_8319FA78) {
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
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-4480
	ctx.r10.s64 = ctx.r10.s64 + -4480;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x8319fac4
	if (cr6.eq) goto loc_8319FAC4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8319faf0
	goto loc_8319FAF0;
loc_8319FAC4:
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x8319fadc
	if (cr6.eq) goto loc_8319FADC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8319faf0
	goto loc_8319FAF0;
loc_8319FADC:
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_8319FAF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319fb08
	if (cr6.eq) goto loc_8319FB08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x8319FB04;
	sub_8319DC20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8319FB08:
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r4,r4,192
	ctx.r4.u64 = ctx.r4.u64 | 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x8319FB24;
	sub_82D042A8(ctx, base);
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

__attribute__((alias("__imp__sub_8319FB3C"))) PPC_WEAK_FUNC(sub_8319FB3C);
PPC_FUNC_IMPL(__imp__sub_8319FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319FB40"))) PPC_WEAK_FUNC(sub_8319FB40);
PPC_FUNC_IMPL(__imp__sub_8319FB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8319FB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// rlwinm r8,r31,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8319fba8
	if (!cr6.eq) goto loc_8319FBA8;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r8,r31,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8319fba8
	if (!cr6.eq) goto loc_8319FBA8;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8319FBA8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319fbc0
	if (cr6.eq) goto loc_8319FBC0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319dc20
	ctx.lr = 0x8319FBBC;
	sub_8319DC20(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8319FBC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x8315fe20
	ctx.lr = 0x8319FBCC;
	sub_8315FE20(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8319fbe0
	if (!cr6.lt) goto loc_8319FBE0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8319FBE0:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// ori r4,r4,655
	ctx.r4.u64 = ctx.r4.u64 | 655;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x8319FBF4;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8319fc14
	if (cr6.lt) goto loc_8319FC14;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8319FC14;
	sub_825952B8(ctx, base);
loc_8319FC14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319FC20"))) PPC_WEAK_FUNC(sub_8319FC20);
PPC_FUNC_IMPL(__imp__sub_8319FC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8319FC28;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8319FC38;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x8319FC40;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8319FC44;
	sub_830FFAA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r11,29968
	ctx.r5.s64 = ctx.r11.s64 + 29968;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x8319FC68;
	sub_831178A0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8316fb10
	ctx.lr = 0x8319FC78;
	sub_8316FB10(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83153330
	ctx.lr = 0x8319FC84;
	sub_83153330(ctx, base);
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x8319fca4
	if (cr6.lt) goto loc_8319FCA4;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// bgt cr6,0x8319fca4
	if (cr6.gt) goto loc_8319FCA4;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8319fd34
	if (cr6.lt) goto loc_8319FD34;
	// beq cr6,0x8319fca4
	if (cr6.eq) goto loc_8319FCA4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
loc_8319FCA4:
	// li r21,1
	ctx.r21.s64 = 1;
loc_8319FCA8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// addi r11,r11,30248
	ctx.r11.s64 = ctx.r11.s64 + 30248;
	// lis r9,220
	ctx.r9.s64 = 14417920;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lis r8,221
	ctx.r8.s64 = 14483456;
	// li r26,169
	ctx.r26.s64 = 169;
	// ori r22,r11,46726
	ctx.r22.u64 = ctx.r11.u64 | 46726;
	// ori r23,r10,40312
	ctx.r23.u64 = ctx.r10.u64 | 40312;
	// ori r24,r9,40124
	ctx.r24.u64 = ctx.r9.u64 | 40124;
	// ori r25,r8,52849
	ctx.r25.u64 = ctx.r8.u64 | 52849;
loc_8319FCD8:
	// lbz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8319fe68
	if (!cr6.eq) goto loc_8319FE68;
	// lhz r6,-2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8319fe68
	if (!cr6.eq) goto loc_8319FE68;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x8319fd14
	if (cr6.eq) goto loc_8319FD14;
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bne cr6,0x8319fe68
	if (!cr6.eq) goto loc_8319FE68;
loc_8319FD14:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319fd3c
	if (cr6.eq) goto loc_8319FD3C;
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(ctx.r27.u32, 12, xer);
	// beq cr6,0x8319fd3c
	if (cr6.eq) goto loc_8319FD3C;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// bne cr6,0x8319fe68
	if (!cr6.eq) goto loc_8319FE68;
	// b 0x8319fd44
	goto loc_8319FD44;
loc_8319FD34:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// b 0x8319fca8
	goto loc_8319FCA8;
loc_8319FD3C:
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// bne cr6,0x8319fd50
	if (!cr6.eq) goto loc_8319FD50;
loc_8319FD44:
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8319fe68
	if (!cr6.eq) goto loc_8319FE68;
loc_8319FD50:
	// lbzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319fd68
	if (!cr6.eq) goto loc_8319FD68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(ctx.r11.s32, 29, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
loc_8319FD68:
	// lwzx r11,r30,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x8319fd90
	if (cr6.eq) goto loc_8319FD90;
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(ctx.r27.u32, 12, xer);
	// beq cr6,0x8319fdd4
	if (cr6.eq) goto loc_8319FDD4;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// beq cr6,0x8319fdd4
	if (cr6.eq) goto loc_8319FDD4;
	// lbzx r11,r30,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x8319fdd4
	if (!cr6.gt) goto loc_8319FDD4;
loc_8319FD90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
loc_8319FDD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(ctx.r11.s32, 20, xer);
	// beq cr6,0x8319fde8
	if (cr6.eq) goto loc_8319FDE8;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x8319fe14
	if (!cr6.eq) goto loc_8319FE14;
loc_8319FDE8:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// srawi r3,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8319fe14
	if (!cr6.eq) goto loc_8319FE14;
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
loc_8319FE14:
	// lbzx r4,r30,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8319fe38
	if (cr6.eq) goto loc_8319FE38;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x8319fe38
	if (!cr6.eq) goto loc_8319FE38;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// beq cr6,0x8319fe68
	if (cr6.eq) goto loc_8319FE68;
loc_8319FE38:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stb r5,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r5.u8);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x835bc6a8
	ctx.lr = 0x8319FE68;
	sub_835BC6A8(ctx, base);
loc_8319FE68:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x8319fcd8
	if (!cr0.eq) goto loc_8319FCD8;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r6,r11,-8512
	ctx.r6.s64 = ctx.r11.s64 + -8512;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// bl 0x8319f958
	ctx.lr = 0x8319FE94;
	sub_8319F958(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8319FE9C"))) PPC_WEAK_FUNC(sub_8319FE9C);
PPC_FUNC_IMPL(__imp__sub_8319FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8319FEA0"))) PPC_WEAK_FUNC(sub_8319FEA0);
PPC_FUNC_IMPL(__imp__sub_8319FEA0) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319FEB8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319ff48
	if (cr6.eq) goto loc_8319FF48;
	// bl 0x831156e8
	ctx.lr = 0x8319FEC4;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x8319FEC8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319ff48
	if (cr6.eq) goto loc_8319FF48;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-2668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2668);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319ff00
	if (!cr6.eq) goto loc_8319FF00;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319ff04
	if (cr6.eq) goto loc_8319FF04;
loc_8319FF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319FF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319ff48
	if (!cr6.eq) goto loc_8319FF48;
	// bl 0x831156e8
	ctx.lr = 0x8319FF14;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8319FF20;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r11,r11,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// addi r10,r11,-8192
	ctx.r10.s64 = ctx.r11.s64 + -8192;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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
loc_8319FF48:
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

__attribute__((alias("__imp__sub_8319FF60"))) PPC_WEAK_FUNC(sub_8319FF60);
PPC_FUNC_IMPL(__imp__sub_8319FF60) {
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
	// bl 0x831156e8
	ctx.lr = 0x8319FF78;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319fffc
	if (cr6.eq) goto loc_8319FFFC;
	// bl 0x831156e8
	ctx.lr = 0x8319FF84;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x8319FF88;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8319fffc
	if (cr6.eq) goto loc_8319FFFC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-2668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2668);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8319ffc0
	if (!cr6.eq) goto loc_8319FFC0;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8319ffc4
	if (cr6.eq) goto loc_8319FFC4;
loc_8319FFC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8319FFC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8319fffc
	if (!cr6.eq) goto loc_8319FFFC;
	// bl 0x831156e8
	ctx.lr = 0x8319FFD4;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8319FFE0;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
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
loc_8319FFFC:
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

__attribute__((alias("__imp__sub_831A0014"))) PPC_WEAK_FUNC(sub_831A0014);
PPC_FUNC_IMPL(__imp__sub_831A0014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A0018"))) PPC_WEAK_FUNC(sub_831A0018);
PPC_FUNC_IMPL(__imp__sub_831A0018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831A0020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831A0030;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831a011c
	if (cr6.eq) goto loc_831A011C;
	// bl 0x831156e8
	ctx.lr = 0x831A003C;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x831A0040;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a011c
	if (cr6.eq) goto loc_831A011C;
	// bl 0x831156e8
	ctx.lr = 0x831A0050;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// ori r9,r11,60640
	ctx.r9.u64 = ctx.r11.u64 | 60640;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,-2668(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2668);
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831a00fc
	if (cr6.eq) goto loc_831A00FC;
	// addis r8,r6,72
	ctx.r8.s64 = ctx.r6.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// rlwinm r31,r4,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// addi r8,r8,7136
	ctx.r8.s64 = ctx.r8.s64 + 7136;
	// ori r5,r11,58144
	ctx.r5.u64 = ctx.r11.u64 | 58144;
loc_831A0088:
	// cmplwi cr6,r7,653
	cr6.compare<uint32_t>(ctx.r7.u32, 653, xer);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// bge cr6,0x831a0098
	if (!cr6.lt) goto loc_831A0098;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831A0098:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x831a00bc
	if (!cr6.eq) goto loc_831A00BC;
	// xor r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a00c0
	if (cr6.eq) goto loc_831A00C0;
loc_831A00BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A00C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a00ec
	if (!cr6.eq) goto loc_831A00EC;
	// lhz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 784);
	// clrlwi r28,r29,16
	ctx.r28.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x831a00ec
	if (!cr6.eq) goto loc_831A00EC;
	// lwz r11,796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x831a010c
	if (cr6.eq) goto loc_831A010C;
loc_831A00EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1312
	ctx.r8.s64 = ctx.r8.s64 + 1312;
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// blt cr6,0x831a0088
	if (cr6.lt) goto loc_831A0088;
loc_831A00FC:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831A010C:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831A011C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-2668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2668);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831A0134"))) PPC_WEAK_FUNC(sub_831A0134);
PPC_FUNC_IMPL(__imp__sub_831A0134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A0138"))) PPC_WEAK_FUNC(sub_831A0138);
PPC_FUNC_IMPL(__imp__sub_831A0138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x831a03c0
	if (cr6.gt) goto loc_831A03C0;
	// lis r12,-31974
	ctx.r12.s64 = -2095448064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,348
	ctx.r12.s64 = ctx.r12.s64 + 348;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831A02F8;
	case 1:
		goto loc_831A02C8;
	case 2:
		goto loc_831A02C8;
	case 3:
		goto loc_831A02C8;
	case 4:
		goto loc_831A02D0;
	case 5:
		goto loc_831A02E0;
	case 6:
		goto loc_831A03C0;
	case 7:
		goto loc_831A02F0;
	case 8:
		goto loc_831A0300;
	case 9:
		goto loc_831A0308;
	case 10:
		goto loc_831A0310;
	case 11:
		goto loc_831A0330;
	case 12:
		goto loc_831A0338;
	case 13:
		goto loc_831A0340;
	case 14:
		goto loc_831A03C0;
	case 15:
		goto loc_831A03C0;
	case 16:
		goto loc_831A03C0;
	case 17:
		goto loc_831A03C0;
	case 18:
		goto loc_831A03C0;
	case 19:
		goto loc_831A03C0;
	case 20:
		goto loc_831A0348;
	case 21:
		goto loc_831A0350;
	case 22:
		goto loc_831A0358;
	case 23:
		goto loc_831A03C0;
	case 24:
		goto loc_831A03C0;
	case 25:
		goto loc_831A03C0;
	case 26:
		goto loc_831A0378;
	case 27:
		goto loc_831A03C0;
	case 28:
		goto loc_831A03C0;
	case 29:
		goto loc_831A03C0;
	case 30:
		goto loc_831A03C0;
	case 31:
		goto loc_831A03C0;
	case 32:
		goto loc_831A0380;
	case 33:
		goto loc_831A0388;
	case 34:
		goto loc_831A0398;
	case 35:
		goto loc_831A0390;
	case 36:
		goto loc_831A03C0;
	case 37:
		goto loc_831A03C0;
	case 38:
		goto loc_831A0318;
	case 39:
		goto loc_831A0320;
	case 40:
		goto loc_831A0328;
	case 41:
		goto loc_831A03C0;
	case 42:
		goto loc_831A03C0;
	case 43:
		goto loc_831A03C0;
	case 44:
		goto loc_831A03C0;
	case 45:
		goto loc_831A03C0;
	case 46:
		goto loc_831A03C0;
	case 47:
		goto loc_831A02D8;
	case 48:
		goto loc_831A03C0;
	case 49:
		goto loc_831A0360;
	case 50:
		goto loc_831A0368;
	case 51:
		goto loc_831A0370;
	case 52:
		goto loc_831A03C0;
	case 53:
		goto loc_831A03C0;
	case 54:
		goto loc_831A03C0;
	case 55:
		goto loc_831A03C0;
	case 56:
		goto loc_831A03C0;
	case 57:
		goto loc_831A03C0;
	case 58:
		goto loc_831A03C0;
	case 59:
		goto loc_831A03C0;
	case 60:
		goto loc_831A03C0;
	case 61:
		goto loc_831A03C0;
	case 62:
		goto loc_831A03C0;
	case 63:
		goto loc_831A03C0;
	case 64:
		goto loc_831A03C0;
	case 65:
		goto loc_831A03A0;
	case 66:
		goto loc_831A03B0;
	case 67:
		goto loc_831A03B8;
	case 68:
		goto loc_831A03A8;
	case 69:
		goto loc_831A03C0;
	case 70:
		goto loc_831A03C0;
	case 71:
		goto loc_831A03C0;
	case 72:
		goto loc_831A03C0;
	case 73:
		goto loc_831A03C0;
	case 74:
		goto loc_831A03C0;
	case 75:
		goto loc_831A03C0;
	case 76:
		goto loc_831A03C0;
	case 77:
		goto loc_831A03C0;
	case 78:
		goto loc_831A03C0;
	case 79:
		goto loc_831A03C0;
	case 80:
		goto loc_831A03C0;
	case 81:
		goto loc_831A03C0;
	case 82:
		goto loc_831A03C0;
	case 83:
		goto loc_831A03C0;
	case 84:
		goto loc_831A03C0;
	case 85:
		goto loc_831A03C0;
	case 86:
		goto loc_831A03C0;
	case 87:
		goto loc_831A03C0;
	case 88:
		goto loc_831A03C0;
	case 89:
		goto loc_831A03C0;
	case 90:
		goto loc_831A02E8;
	default:
		return;
	}
	// lwz r24,760(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 760);
	// lwz r24,712(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 712);
	// lwz r24,712(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 712);
	// lwz r24,712(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 712);
	// lwz r24,720(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 720);
	// lwz r24,736(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 736);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,752(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 752);
	// lwz r24,768(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 768);
	// lwz r24,776(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// lwz r24,784(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 784);
	// lwz r24,816(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 816);
	// lwz r24,824(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 824);
	// lwz r24,832(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 832);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,840(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 840);
	// lwz r24,848(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 848);
	// lwz r24,856(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 856);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,888(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 888);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,896(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 896);
	// lwz r24,904(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 904);
	// lwz r24,920(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 920);
	// lwz r24,912(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 912);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,792(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// lwz r24,800(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// lwz r24,808(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,728(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 728);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,864(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 864);
	// lwz r24,872(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 872);
	// lwz r24,880(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 880);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,928(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 928);
	// lwz r24,944(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 944);
	// lwz r24,952(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 952);
	// lwz r24,936(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 936);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,960(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// lwz r24,744(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 744);
loc_831A02C8:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_831A02D0:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_831A02D8:
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
loc_831A02E0:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_831A02E8:
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
loc_831A02F0:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_831A02F8:
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
loc_831A0300:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_831A0308:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_831A0310:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_831A0318:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_831A0320:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_831A0328:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_831A0330:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_831A0338:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_831A0340:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_831A0348:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_831A0350:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_831A0358:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_831A0360:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_831A0368:
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_831A0370:
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
loc_831A0378:
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
loc_831A0380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831A0388:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831A0390:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831A0398:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_831A03A0:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_831A03A8:
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
loc_831A03B0:
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_831A03B8:
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
loc_831A03C0:
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831A03C8"))) PPC_WEAK_FUNC(sub_831A03C8);
PPC_FUNC_IMPL(__imp__sub_831A03C8) {
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
	// bl 0x831156e8
	ctx.lr = 0x831A03E0;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,60640
	ctx.r9.u64 = ctx.r11.u64 | 60640;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831a044c
	if (cr6.eq) goto loc_831A044C;
	// addis r9,r8,72
	ctx.r9.s64 = ctx.r8.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r9,r9,7136
	ctx.r9.s64 = ctx.r9.s64 + 7136;
	// ori r7,r11,58144
	ctx.r7.u64 = ctx.r11.u64 | 58144;
loc_831A040C:
	// cmplwi cr6,r10,653
	cr6.compare<uint32_t>(ctx.r10.u32, 653, xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bge cr6,0x831a041c
	if (!cr6.lt) goto loc_831A041C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_831A041C:
	// lwz r5,796(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// rlwinm r4,r5,0,16,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r4,8192
	cr6.compare<uint32_t>(ctx.r4.u32, 8192, xer);
	// bne cr6,0x831a043c
	if (!cr6.eq) goto loc_831A043C;
	// lhz r5,784(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 784);
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x831a0464
	if (cr6.eq) goto loc_831A0464;
loc_831A043C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1312
	ctx.r9.s64 = ctx.r9.s64 + 1312;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x831a040c
	if (cr6.lt) goto loc_831A040C;
loc_831A044C:
	// li r3,82
	ctx.r3.s64 = 82;
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
loc_831A0464:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8314e0e0
	ctx.lr = 0x831A046C;
	sub_8314E0E0(ctx, base);
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

__attribute__((alias("__imp__sub_831A0480"))) PPC_WEAK_FUNC(sub_831A0480);
PPC_FUNC_IMPL(__imp__sub_831A0480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831A0488;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x831A0494;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r19,-31772
	ctx.r19.s64 = -2082209792;
	// li r24,0
	ctx.r24.s64 = 0;
	// addis r22,r28,96
	ctx.r22.s64 = ctx.r28.s64 + 6291456;
	// addi r22,r22,-4888
	ctx.r22.s64 = ctx.r22.s64 + -4888;
	// lwz r25,-2592(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + -2592);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x831a0640
	if (!cr6.gt) goto loc_831A0640;
	// addis r23,r28,85
	ctx.r23.s64 = ctx.r28.s64 + 5570560;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r23,r23,11904
	ctx.r23.s64 = ctx.r23.s64 + 11904;
	// ori r20,r10,59456
	ctx.r20.u64 = ctx.r10.u64 | 59456;
	// lis r21,-31772
	ctx.r21.s64 = -2082209792;
	// addi r27,r11,-2540
	ctx.r27.s64 = ctx.r11.s64 + -2540;
loc_831A04D4:
	// cmplwi cr6,r24,300
	cr6.compare<uint32_t>(ctx.r24.u32, 300, xer);
	// add r31,r28,r20
	ctx.r31.u64 = ctx.r28.u64 + ctx.r20.u64;
	// bge cr6,0x831a04e4
	if (!cr6.lt) goto loc_831A04E4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_831A04E4:
	// lhz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x831a0620
	if (!cr6.eq) goto loc_831A0620;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831a0504
	if (cr6.eq) goto loc_831A0504;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831a0620
	if (!cr6.eq) goto loc_831A0620;
loc_831A0504:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0620
	if (cr6.eq) goto loc_831A0620;
	// addi r29,r31,328
	ctx.r29.s64 = ctx.r31.s64 + 328;
loc_831A051C:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x831a052c
	if (cr6.lt) goto loc_831A052C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_831A052C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x831A0538;
	sub_8311C148(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831a0564
	if (!cr6.eq) goto loc_831A0564;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831a0568
	if (cr6.eq) goto loc_831A0568;
loc_831A0564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A0568:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a0608
	if (!cr6.eq) goto loc_831A0608;
	// lhz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831a0608
	if (cr6.eq) goto loc_831A0608;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r8,r3,248
	ctx.r8.s64 = ctx.r3.s64 + 248;
	// ld r7,-2588(r21)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r21.u32 + -2588);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831A0598:
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x831a05ac
	if (!cr6.lt) goto loc_831A05AC;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_831A05AC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831a05c4
	if (!cr6.eq) goto loc_831A05C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x831a05ec
	goto loc_831A05EC;
loc_831A05C4:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x831a05e4
	if (!cr6.eq) goto loc_831A05E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a05e8
	if (cr6.eq) goto loc_831A05E8;
loc_831A05E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A05E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A05EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a05fc
	if (cr6.eq) goto loc_831A05FC;
	// lwz r25,88(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_831A05FC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x831a0598
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A0598;
loc_831A0608:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831a051c
	if (cr6.lt) goto loc_831A051C;
loc_831A0620:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,548
	ctx.r23.s64 = ctx.r23.s64 + 548;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x831a04d4
	if (cr6.lt) goto loc_831A04D4;
	// lwz r11,-2592(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -2592);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x831a064c
	if (!cr6.eq) goto loc_831A064C;
loc_831A0640:
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_831A064C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831a0138
	ctx.lr = 0x831A0654;
	sub_831A0138(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831A065C"))) PPC_WEAK_FUNC(sub_831A065C);
PPC_FUNC_IMPL(__imp__sub_831A065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A0660"))) PPC_WEAK_FUNC(sub_831A0660);
PPC_FUNC_IMPL(__imp__sub_831A0660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831A0668;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831A0678;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-31718
	ctx.r4.s64 = ctx.r9.s64 + -31718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x831A06A4;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x831a0818
	if (cr6.gt) goto loc_831A0818;
	// lis r12,-31974
	ctx.r12.s64 = -2095448064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1736
	ctx.r12.s64 = ctx.r12.s64 + 1736;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831A0700;
	case 1:
		goto loc_831A078C;
	case 2:
		goto loc_831A0794;
	case 3:
		goto loc_831A079C;
	case 4:
		goto loc_831A07A4;
	case 5:
		goto loc_831A07B4;
	case 6:
		goto loc_831A07AC;
	case 7:
		goto loc_831A0738;
	case 8:
		goto loc_831A07BC;
	case 9:
		goto loc_831A07C4;
	case 10:
		goto loc_831A07CC;
	case 11:
		goto loc_831A0754;
	case 12:
		goto loc_831A0770;
	case 13:
		goto loc_831A071C;
	default:
		return;
	}
	// lwz r24,1792(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1792);
	// lwz r24,1932(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1932);
	// lwz r24,1940(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1940);
	// lwz r24,1948(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1948);
	// lwz r24,1956(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1956);
	// lwz r24,1972(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1972);
	// lwz r24,1964(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1964);
	// lwz r24,1848(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1848);
	// lwz r24,1980(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1980);
	// lwz r24,1988(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1988);
	// lwz r24,1996(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1996);
	// lwz r24,1876(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1876);
	// lwz r24,1904(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1904);
	// lwz r24,1820(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1820);
loc_831A0700:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,614
	ctx.r4.u64 = ctx.r4.u64 | 614;
	// bl 0x82d042a8
	ctx.lr = 0x831A0710;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A071C:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,615
	ctx.r4.u64 = ctx.r4.u64 | 615;
	// bl 0x82d042a8
	ctx.lr = 0x831A072C;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0738:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// bl 0x82d042a8
	ctx.lr = 0x831A0748;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0754:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,261
	ctx.r4.u64 = ctx.r4.u64 | 261;
	// bl 0x82d042a8
	ctx.lr = 0x831A0764;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0770:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// bl 0x82d042a8
	ctx.lr = 0x831A0780;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A078C:
	// li r4,204
	ctx.r4.s64 = 204;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A0794:
	// li r4,215
	ctx.r4.s64 = 215;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A079C:
	// li r4,236
	ctx.r4.s64 = 236;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07A4:
	// li r4,208
	ctx.r4.s64 = 208;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07AC:
	// li r4,228
	ctx.r4.s64 = 228;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07B4:
	// li r4,224
	ctx.r4.s64 = 224;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07BC:
	// li r4,146
	ctx.r4.s64 = 146;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07C4:
	// li r4,144
	ctx.r4.s64 = 144;
	// b 0x831a07d0
	goto loc_831A07D0;
loc_831A07CC:
	// li r4,147
	ctx.r4.s64 = 147;
loc_831A07D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c628
	ctx.lr = 0x831A07D8;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x831A07E8;
	sub_831CE980(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_831A07F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831a07f0
	if (!cr6.eq) goto loc_831A07F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x831A0818;
	sub_8259CC28(ctx, base);
loc_831A0818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831A0824"))) PPC_WEAK_FUNC(sub_831A0824);
PPC_FUNC_IMPL(__imp__sub_831A0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A0828"))) PPC_WEAK_FUNC(sub_831A0828);
PPC_FUNC_IMPL(__imp__sub_831A0828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831A0830;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831A0840;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-31717
	ctx.r4.s64 = ctx.r9.s64 + -31717;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x831A086C;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x831a09e0
	if (cr6.gt) goto loc_831A09E0;
	// lis r12,-31974
	ctx.r12.s64 = -2095448064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2192
	ctx.r12.s64 = ctx.r12.s64 + 2192;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831A0954;
	case 1:
		goto loc_831A096C;
	case 2:
		goto loc_831A095C;
	case 3:
		goto loc_831A097C;
	case 4:
		goto loc_831A0964;
	case 5:
		goto loc_831A0974;
	case 6:
		goto loc_831A0900;
	case 7:
		goto loc_831A0984;
	case 8:
		goto loc_831A098C;
	case 9:
		goto loc_831A0994;
	case 10:
		goto loc_831A091C;
	case 11:
		goto loc_831A0938;
	case 12:
		goto loc_831A08E4;
	case 13:
		goto loc_831A08C8;
	default:
		return;
	}
	// lwz r24,2388(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2388);
	// lwz r24,2412(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2412);
	// lwz r24,2396(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2396);
	// lwz r24,2428(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2428);
	// lwz r24,2404(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2404);
	// lwz r24,2420(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2420);
	// lwz r24,2304(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2304);
	// lwz r24,2436(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2436);
	// lwz r24,2444(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2444);
	// lwz r24,2452(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2452);
	// lwz r24,2332(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2332);
	// lwz r24,2360(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2360);
	// lwz r24,2276(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2276);
	// lwz r24,2248(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2248);
loc_831A08C8:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// bl 0x82d042a8
	ctx.lr = 0x831A08D8;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A08E4:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,615
	ctx.r4.u64 = ctx.r4.u64 | 615;
	// bl 0x82d042a8
	ctx.lr = 0x831A08F4;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0900:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// bl 0x82d042a8
	ctx.lr = 0x831A0910;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A091C:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,261
	ctx.r4.u64 = ctx.r4.u64 | 261;
	// bl 0x82d042a8
	ctx.lr = 0x831A092C;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0938:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// bl 0x82d042a8
	ctx.lr = 0x831A0948;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831A0954:
	// li r4,204
	ctx.r4.s64 = 204;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A095C:
	// li r4,215
	ctx.r4.s64 = 215;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A0964:
	// li r4,236
	ctx.r4.s64 = 236;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A096C:
	// li r4,208
	ctx.r4.s64 = 208;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A0974:
	// li r4,228
	ctx.r4.s64 = 228;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A097C:
	// li r4,224
	ctx.r4.s64 = 224;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A0984:
	// li r4,146
	ctx.r4.s64 = 146;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A098C:
	// li r4,144
	ctx.r4.s64 = 144;
	// b 0x831a0998
	goto loc_831A0998;
loc_831A0994:
	// li r4,147
	ctx.r4.s64 = 147;
loc_831A0998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c628
	ctx.lr = 0x831A09A0;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x831ce980
	ctx.lr = 0x831A09B0;
	sub_831CE980(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_831A09B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831a09b8
	if (!cr6.eq) goto loc_831A09B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x831A09E0;
	sub_8259CC28(ctx, base);
loc_831A09E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831A09EC"))) PPC_WEAK_FUNC(sub_831A09EC);
PPC_FUNC_IMPL(__imp__sub_831A09EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A09F0"))) PPC_WEAK_FUNC(sub_831A09F0);
PPC_FUNC_IMPL(__imp__sub_831A09F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x831A09F8;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831A0A08;
	sub_831156E8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r20,48(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,220
	ctx.r10.s64 = 14417920;
	// addi r31,r11,-31632
	ctx.r31.s64 = ctx.r11.s64 + -31632;
	// addis r17,r20,96
	ctx.r17.s64 = ctx.r20.s64 + 6291456;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// li r30,52
	ctx.r30.s64 = 52;
	// addi r17,r17,-4888
	ctx.r17.s64 = ctx.r17.s64 + -4888;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r18,r11,11904
	ctx.r18.u64 = ctx.r11.u64 | 11904;
	// li r16,1
	ctx.r16.s64 = 1;
	// ori r28,r10,46726
	ctx.r28.u64 = ctx.r10.u64 | 46726;
loc_831A0A38:
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831a0a6c
	if (cr6.eq) goto loc_831A0A6C;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r20,r18
	ctx.r11.u64 = ctx.r20.u64 + ctx.r18.u64;
loc_831A0A50:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x831a0b34
	if (cr6.eq) goto loc_831A0B34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831a0a50
	if (cr6.lt) goto loc_831A0A50;
loc_831A0A6C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831A0A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0abc
	if (cr6.eq) goto loc_831A0ABC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831a0abc
	if (!cr6.eq) goto loc_831A0ABC;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x831a0aa4
	if (cr6.eq) goto loc_831A0AA4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x831a0aa4
	if (cr6.eq) goto loc_831A0AA4;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x831a0ab0
	if (!cr6.eq) goto loc_831A0AB0;
loc_831A0AA4:
	// lbzx r11,r20,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0abc
	if (cr6.eq) goto loc_831A0ABC;
loc_831A0AB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82badd90
	ctx.lr = 0x831A0ABC;
	sub_82BADD90(ctx, base);
loc_831A0ABC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x831a0a38
	if (!cr0.eq) goto loc_831A0A38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x831a0e28
	if (!cr6.eq) goto loc_831A0E28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// bl 0x8319dc20
	ctx.lr = 0x831A0AFC;
	sub_8319DC20(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_831A0B04:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x831a0b1c
	if (!cr6.eq) goto loc_831A0B1C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x831a0b3c
	if (cr6.eq) goto loc_831A0B3C;
loc_831A0B1C:
	// sth r16,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r16.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bb2908
	ctx.lr = 0x831A0B2C;
	sub_82BB2908(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831a0b04
	goto loc_831A0B04;
loc_831A0B34:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x831a0a70
	goto loc_831A0A70;
loc_831A0B3C:
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addis r22,r20,192
	ctx.r22.s64 = ctx.r20.s64 + 12582912;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r22,r22,-10964
	ctx.r22.s64 = ctx.r22.s64 + -10964;
	// rlwimi r9,r11,0,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r25,-31772
	ctx.r25.s64 = -2082209792;
loc_831A0B60:
	// cmplwi cr6,r24,365
	cr6.compare<uint32_t>(ctx.r24.u32, 365, xer);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// bge cr6,0x831a0b70
	if (!cr6.lt) goto loc_831A0B70;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_831A0B70:
	// lhz r11,400(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 400);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0d20
	if (cr6.eq) goto loc_831A0D20;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_831A0B84:
	// cmplwi cr6,r28,200
	cr6.compare<uint32_t>(ctx.r28.u32, 200, xer);
	// blt cr6,0x831a0b94
	if (cr6.lt) goto loc_831A0B94;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// b 0x831a0b98
	goto loc_831A0B98;
loc_831A0B94:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_831A0B98:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x831a0d0c
	if (cr6.eq) goto loc_831A0D0C;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311bf90
	ctx.lr = 0x831A0BB0;
	sub_8311BF90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831a0d0c
	if (cr6.eq) goto loc_831A0D0C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82bb07d8
	ctx.lr = 0x831A0BD0;
	sub_82BB07D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0d0c
	if (cr6.eq) goto loc_831A0D0C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acebe8
	ctx.lr = 0x831A0BEC;
	sub_82ACEBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0d0c
	if (cr6.eq) goto loc_831A0D0C;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,-2540(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -2540);
	// rlwinm r11,r4,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831a0c24
	if (!cr6.eq) goto loc_831A0C24;
	// xor r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831a0c28
	if (cr6.eq) goto loc_831A0C28;
loc_831A0C24:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831A0C28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a0d0c
	if (!cr6.eq) goto loc_831A0D0C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x831a0c58
	if (!cr6.eq) goto loc_831A0C58;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831a0c5c
	if (cr6.eq) goto loc_831A0C5C;
loc_831A0C58:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831A0C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a0d0c
	if (!cr6.eq) goto loc_831A0D0C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8311c148
	ctx.lr = 0x831A0C70;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x831a0d0c
	if (!cr6.eq) goto loc_831A0D0C;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8314e340
	ctx.lr = 0x831A0C90;
	sub_8314E340(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmplwi cr6,r10,56
	cr6.compare<uint32_t>(ctx.r10.u32, 56, xer);
	// beq cr6,0x831a0d0c
	if (cr6.eq) goto loc_831A0D0C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplw cr6,r21,r29
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r29.u32, xer);
	// beq cr6,0x831a0cd0
	if (cr6.eq) goto loc_831A0CD0;
loc_831A0CAC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x831a0cc8
	if (cr6.eq) goto loc_831A0CC8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x831a0cac
	if (!cr6.eq) goto loc_831A0CAC;
	// b 0x831a0cd0
	goto loc_831A0CD0;
loc_831A0CC8:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x831a0d0c
	if (!cr6.eq) goto loc_831A0D0C;
loc_831A0CD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82badd90
	ctx.lr = 0x831A0CDC;
	sub_82BADD90(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x8311c338
	ctx.lr = 0x831A0CE8;
	sub_8311C338(ctx, base);
	// lhz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x831a0d04
	if (cr6.eq) goto loc_831A0D04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82badd90
	ctx.lr = 0x831A0D04;
	sub_82BADD90(ctx, base);
loc_831A0D04:
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_831A0D0C:
	// lhz r11,400(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 400);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x831a0b84
	if (cr6.lt) goto loc_831A0B84;
loc_831A0D20:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,532
	ctx.r23.s64 = ctx.r23.s64 + 532;
	// cmplwi cr6,r24,365
	cr6.compare<uint32_t>(ctx.r24.u32, 365, xer);
	// blt cr6,0x831a0b60
	if (cr6.lt) goto loc_831A0B60;
	// subf r11,r21,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r21.s64;
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// srawi r28,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831a0df4
	if (cr6.eq) goto loc_831A0DF4;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplw cr6,r28,r19
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, xer);
	// ble cr6,0x831a0e30
	if (!cr6.gt) goto loc_831A0E30;
loc_831A0D58:
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831a0d8c
	if (cr6.eq) goto loc_831A0D8C;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r20,r18
	ctx.r11.u64 = ctx.r20.u64 + ctx.r18.u64;
loc_831A0D70:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x831a0dc8
	if (cr6.eq) goto loc_831A0DC8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831a0d70
	if (cr6.lt) goto loc_831A0D70;
loc_831A0D8C:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_831A0D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831a0de4
	if (cr6.eq) goto loc_831A0DE4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, xer);
	// beq cr6,0x831a0dd8
	if (cr6.eq) goto loc_831A0DD8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_831A0DAC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x831a0dd0
	if (cr6.eq) goto loc_831A0DD0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x831a0dac
	if (!cr6.eq) goto loc_831A0DAC;
	// b 0x831a0dd8
	goto loc_831A0DD8;
loc_831A0DC8:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x831a0d90
	goto loc_831A0D90;
loc_831A0DD0:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x831a0de4
	if (!cr6.eq) goto loc_831A0DE4;
loc_831A0DD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82badd90
	ctx.lr = 0x831A0DE4;
	sub_82BADD90(ctx, base);
loc_831A0DE4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// bgt cr6,0x831a0d58
	if (cr6.gt) goto loc_831A0D58;
loc_831A0DF4:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831a0e10
	if (cr6.eq) goto loc_831A0E10;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x831A0E10;
	sub_825952B8(ctx, base);
loc_831A0E10:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x831a0e28
	if (cr6.eq) goto loc_831A0E28;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x831A0E28;
	sub_825952B8(ctx, base);
loc_831A0E28:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_831A0E30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x831A0E3C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_831A0E3C"))) PPC_WEAK_FUNC(sub_831A0E3C);
PPC_FUNC_IMPL(__imp__sub_831A0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A0E40"))) PPC_WEAK_FUNC(sub_831A0E40);
PPC_FUNC_IMPL(__imp__sub_831A0E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831A0E48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,132
	ctx.r10.s64 = 132;
	// li r5,220
	ctx.r5.s64 = 220;
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// lwz r5,196(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r7,50
	ctx.r7.s64 = 50;
	// lis r11,-11099
	ctx.r11.s64 = -727384064;
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
	// stb r30,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r30.u8);
	// li r9,232
	ctx.r9.s64 = 232;
	// stw r6,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r6.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// stw r7,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r7.u32);
	// li r9,109
	ctx.r9.s64 = 109;
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// stw r4,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lis r27,0
	ctx.r27.s64 = 0;
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// addi r4,r7,-22544
	ctx.r4.s64 = ctx.r7.s64 + -22544;
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// li r10,82
	ctx.r10.s64 = 82;
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// addi r29,r31,160
	ctx.r29.s64 = ctx.r31.s64 + 160;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// addi r28,r31,136
	ctx.r28.s64 = ctx.r31.s64 + 136;
	// ld r26,328(r31)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// std r26,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r26.u64);
	// stw r8,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r8.u32);
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r8,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r8.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stb r30,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r30.u8);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// std r30,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r30.u64);
	// std r11,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r11.u64);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// ori r11,r27,65535
	ctx.r11.u64 = ctx.r27.u64 | 65535;
	// ld r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// std r9,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r9.u64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// std r7,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r7.u64);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stb r30,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r30.u8);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// lwz r9,-2412(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2412);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r11,-2412(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2412);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lwz r11,-2412(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2412);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,-2412(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2412);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// sth r27,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r27.u16);
	// sth r27,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r27.u16);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// lwz r6,236(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// stw r7,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r7.u32);
	// stw r6,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// bl 0x8259cc28
	ctx.lr = 0x831A0FB4;
	sub_8259CC28(ctx, base);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lhz r4,182(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// sth r4,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r4.u16);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// lhz r6,158(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// sth r6,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r6.u16);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// stb r30,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_831A102C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831a102c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A102C;
	// li r10,98
	ctx.r10.s64 = 98;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// addi r11,r9,1172
	ctx.r11.s64 = ctx.r9.s64 + 1172;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_831A104C:
	// stw r30,-1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1172, ctx.r30.u32);
	// stw r10,-780(r11)
	PPC_STORE_U32(ctx.r11.u32 + -780, ctx.r10.u32);
	// stw r30,-388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -388, ctx.r30.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831a104c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A104C;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x831cdcf0
	ctx.lr = 0x831A1070;
	sub_831CDCF0(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,110
	ctx.r3.s64 = ctx.r31.s64 + 110;
	// bl 0x831cdcf0
	ctx.lr = 0x831A1080;
	sub_831CDCF0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,1911
	ctx.r11.s64 = ctx.r31.s64 + 1911;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831A1090:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831a1090
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A1090;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r30,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r30.u32);
	// addi r11,r31,1920
	ctx.r11.s64 = ctx.r31.s64 + 1920;
	// sth r30,1924(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1924, ctx.r30.u16);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stb r30,1926(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1926, ctx.r30.u8);
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831A10B8:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x831a10b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A10B8;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831A10DC"))) PPC_WEAK_FUNC(sub_831A10DC);
PPC_FUNC_IMPL(__imp__sub_831A10DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A10E0"))) PPC_WEAK_FUNC(sub_831A10E0);
PPC_FUNC_IMPL(__imp__sub_831A10E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,98
	cr6.compare<int32_t>(ctx.r4.s32, 98, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,25632(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25632);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r4,109
	ctx.r8.s64 = ctx.r4.s64 + 109;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// sthx r4,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831A113C"))) PPC_WEAK_FUNC(sub_831A113C);
PPC_FUNC_IMPL(__imp__sub_831A113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A1140"))) PPC_WEAK_FUNC(sub_831A1140);
PPC_FUNC_IMPL(__imp__sub_831A1140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,98
	cr6.compare<int32_t>(ctx.r4.s32, 98, xer);
	// blt cr6,0x831a1150
	if (cr6.lt) goto loc_831A1150;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831A1150:
	// addi r11,r4,109
	ctx.r11.s64 = ctx.r4.s64 + 109;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,1000
	cr6.compare<int32_t>(ctx.r11.s32, 1000, xer);
	// bge cr6,0x831a1174
	if (!cr6.lt) goto loc_831A1174;
	// cmpwi cr6,r11,-1000
	cr6.compare<int32_t>(ctx.r11.s32, -1000, xer);
	// bgt cr6,0x831a1190
	if (cr6.gt) goto loc_831A1190;
loc_831A1174:
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw r8,r11,r10
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// mulli r6,r10,1000
	ctx.r6.s64 = ctx.r10.s64 * 1000;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// sthx r5,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u16);
loc_831A1190:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831A1198"))) PPC_WEAK_FUNC(sub_831A1198);
PPC_FUNC_IMPL(__imp__sub_831A1198) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,-2332
	ctx.r10.s64 = ctx.r11.s64 + -2332;
	// lhz r6,-2332(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2332);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831a11dc
	if (!cr6.eq) goto loc_831A11DC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831a1204
	goto loc_831A1204;
loc_831A11DC:
	// lhz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x831a11fc
	if (!cr6.eq) goto loc_831A11FC;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a1200
	if (cr6.eq) goto loc_831A1200;
loc_831A11FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A1200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A1204:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a12a0
	if (!cr6.eq) goto loc_831A12A0;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,37868
	ctx.r8.u64 = ctx.r11.u64 | 37868;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_831A1220:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x831a1240
	if (!cr6.eq) goto loc_831A1240;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x831a1268
	goto loc_831A1268;
loc_831A1240:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x831a1260
	if (!cr6.eq) goto loc_831A1260;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a1264
	if (cr6.eq) goto loc_831A1264;
loc_831A1260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A1264:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A1268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a1288
	if (!cr6.eq) goto loc_831A1288;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,516
	ctx.r9.s64 = ctx.r9.s64 + 516;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x831a1220
	if (cr6.lt) goto loc_831A1220;
	// b 0x831a12a0
	goto loc_831A12A0;
loc_831A1288:
	// mulli r11,r10,516
	ctx.r11.s64 = ctx.r10.s64 * 516;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f62b40
	ctx.lr = 0x831A129C;
	sub_82F62B40(ctx, base);
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
loc_831A12A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831A12B8"))) PPC_WEAK_FUNC(sub_831A12B8);
PPC_FUNC_IMPL(__imp__sub_831A12B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-2332
	ctx.r7.s64 = ctx.r11.s64 + -2332;
	// lhz r31,-2332(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2332);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831a12f0
	if (!cr6.eq) goto loc_831A12F0;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831a1318
	goto loc_831A1318;
loc_831A12F0:
	// lhz r9,24(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x831a1310
	if (!cr6.eq) goto loc_831A1310;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a1314
	if (cr6.eq) goto loc_831A1314;
loc_831A1310:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831A1314:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A1318:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a13f0
	if (!cr6.eq) goto loc_831A13F0;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// ori r9,r11,940
	ctx.r9.u64 = ctx.r11.u64 | 940;
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
loc_831A1334:
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// bne cr6,0x831a1354
	if (!cr6.eq) goto loc_831A1354;
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x831a137c
	goto loc_831A137C;
loc_831A1354:
	// lhz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// clrlwi r30,r31,16
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x831a1374
	if (!cr6.eq) goto loc_831A1374;
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a1378
	if (cr6.eq) goto loc_831A1378;
loc_831A1374:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831A1378:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A137C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a13a4
	if (!cr6.eq) goto loc_831A13A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,192
	ctx.r8.s64 = ctx.r8.s64 + 192;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x831a1334
	if (cr6.lt) goto loc_831A1334;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831A13A4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,90
	ctx.r9.s64 = 90;
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// addi r7,r11,99
	ctx.r7.s64 = ctx.r11.s64 + 99;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
loc_831A13DC:
	// stbx r6,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r6,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x831a13dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831A13DC;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
loc_831A13F0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831A13FC"))) PPC_WEAK_FUNC(sub_831A13FC);
PPC_FUNC_IMPL(__imp__sub_831A13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831A1400"))) PPC_WEAK_FUNC(sub_831A1400);
PPC_FUNC_IMPL(__imp__sub_831A1400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831A1408;
	__savegprlr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r3,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r3.u64);
	// lhz r30,400(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2332
	ctx.r11.s64 = ctx.r11.s64 + -2332;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831a144c
	if (!cr6.eq) goto loc_831A144C;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831a1474
	goto loc_831A1474;
loc_831A144C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x831a146c
	if (!cr6.eq) goto loc_831A146C;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831a1470
	if (cr6.eq) goto loc_831A1470;
loc_831A146C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A1470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831A1474:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831a1530
	if (!cr6.eq) goto loc_831A1530;
	// bl 0x831156e8
	ctx.lr = 0x831A1484;
	sub_831156E8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311bf98
	ctx.lr = 0x831A1494;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x831A14A4;
	sub_831CE980(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addis r10,r25,209
	ctx.r10.s64 = ctx.r25.s64 + 13697024;
	// cmplwi cr6,r11,25001
	cr6.compare<uint32_t>(ctx.r11.u32, 25001, xer);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// bge cr6,0x831a14c0
	if (!cr6.lt) goto loc_831A14C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831A14C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r11,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r8,r9,28
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 28;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bge cr6,0x831a14e4
	if (!cr6.lt) goto loc_831A14E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x831a14f4
	goto loc_831A14F4;
loc_831A14E4:
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// li r31,25
	ctx.r31.s64 = 25;
	// bgt cr6,0x831a14f4
	if (cr6.gt) goto loc_831A14F4;
	// addi r31,r11,-15
	ctx.r31.s64 = ctx.r11.s64 + -15;
loc_831A14F4:
	// cmpwi cr6,r28,98
	cr6.compare<int32_t>(ctx.r28.s32, 98, xer);
	// beq cr6,0x831a1594
	if (cr6.eq) goto loc_831A1594;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-29424
	ctx.r8.s64 = ctx.r11.s64 + -29424;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831A1510:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r28
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, xer);
	// beq cr6,0x831a153c
	if (cr6.eq) goto loc_831A153C;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmplwi cr6,r10,2484
	cr6.compare<uint32_t>(ctx.r10.u32, 2484, xer);
	// blt cr6,0x831a1510
	if (cr6.lt) goto loc_831A1510;
loc_831A1530:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A153C:
	// mulli r11,r9,27
	ctx.r11.s64 = ctx.r9.s64 * 27;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831a1570
	if (!cr6.eq) goto loc_831A1570;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A1570:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfze r7,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r6,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A1594:
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83120738
	ctx.lr = 0x831A15AC;
	sub_83120738(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-30832
	ctx.r8.s64 = ctx.r11.s64 + -30832;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831A15C4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x831a15f0
	if (cr6.eq) goto loc_831A15F0;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmplwi cr6,r10,1404
	cr6.compare<uint32_t>(ctx.r10.u32, 1404, xer);
	// blt cr6,0x831a15c4
	if (cr6.lt) goto loc_831A15C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A15F0:
	// mulli r10,r9,27
	ctx.r10.s64 = ctx.r9.s64 * 27;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// bne cr6,0x831a1628
	if (!cr6.eq) goto loc_831A1628;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A1628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831A162C:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831a1660
	if (cr6.eq) goto loc_831A1660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// blt cr6,0x831a162c
	if (cr6.lt) goto loc_831A162C;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831A1660:
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

