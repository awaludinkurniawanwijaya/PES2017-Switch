#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EFE664"))) PPC_WEAK_FUNC(sub_82EFE664);
PPC_FUNC_IMPL(__imp__sub_82EFE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE668"))) PPC_WEAK_FUNC(sub_82EFE668);
PPC_FUNC_IMPL(__imp__sub_82EFE668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82efe678
	if (!cr6.eq) goto loc_82EFE678;
	// blr 
	return;
loc_82EFE678:
	// b 0x82ef4928
	sub_82EF4928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFE67C"))) PPC_WEAK_FUNC(sub_82EFE67C);
PPC_FUNC_IMPL(__imp__sub_82EFE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE680"))) PPC_WEAK_FUNC(sub_82EFE680);
PPC_FUNC_IMPL(__imp__sub_82EFE680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82efe694
	if (!cr6.eq) goto loc_82EFE694;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EFE694:
	// b 0x82ef4958
	sub_82EF4958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFE698"))) PPC_WEAK_FUNC(sub_82EFE698);
PPC_FUNC_IMPL(__imp__sub_82EFE698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFE6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x82EFE6BC;
	sub_8257FAD0(ctx, base);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b80748
	ctx.lr = 0x82EFE6CC;
	sub_82B80748(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efe71c
	if (!cr6.eq) goto loc_82EFE71C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee4f30
	ctx.lr = 0x82EFE6E8;
	sub_82EE4F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83884cc0
	ctx.lr = 0x82EFE6F4;
	sub_83884CC0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe704
	if (cr6.eq) goto loc_82EFE704;
	// bl 0x8259b510
	ctx.lr = 0x82EFE704;
	sub_8259B510(ctx, base);
loc_82EFE704:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efe71c
	if (cr6.eq) goto loc_82EFE71C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387bf40
	ctx.lr = 0x82EFE71C;
	sub_8387BF40(ctx, base);
loc_82EFE71C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82efe734
	if (cr6.lt) goto loc_82EFE734;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82EFE734;
	sub_8257FB60(ctx, base);
loc_82EFE734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFE740"))) PPC_WEAK_FUNC(sub_82EFE740);
PPC_FUNC_IMPL(__imp__sub_82EFE740) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e96c60
	ctx.lr = 0x82EFE760;
	sub_82E96C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82EFE76C;
	sub_82B80748(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efe7a0
	if (cr6.eq) goto loc_82EFE7A0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x82574a08
	ctx.lr = 0x82EFE784;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82efe7a0
	if (!cr6.eq) goto loc_82EFE7A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EFE7A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EFE7A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efe7b8
	if (!cr6.eq) goto loc_82EFE7B8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82efe7c4
	goto loc_82EFE7C4;
loc_82EFE7B8:
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efe698
	ctx.lr = 0x82EFE7C4;
	sub_82EFE698(ctx, base);
loc_82EFE7C4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe7d4
	if (cr6.eq) goto loc_82EFE7D4;
	// bl 0x8259b510
	ctx.lr = 0x82EFE7D4;
	sub_8259B510(ctx, base);
loc_82EFE7D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EFE7F0"))) PPC_WEAK_FUNC(sub_82EFE7F0);
PPC_FUNC_IMPL(__imp__sub_82EFE7F0) {
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
	// bl 0x82efe740
	ctx.lr = 0x82EFE808;
	sub_82EFE740(ctx, base);
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

__attribute__((alias("__imp__sub_82EFE820"))) PPC_WEAK_FUNC(sub_82EFE820);
PPC_FUNC_IMPL(__imp__sub_82EFE820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-26776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26776);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE82C"))) PPC_WEAK_FUNC(sub_82EFE82C);
PPC_FUNC_IMPL(__imp__sub_82EFE82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE830"))) PPC_WEAK_FUNC(sub_82EFE830);
PPC_FUNC_IMPL(__imp__sub_82EFE830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFE838;
	__savegprlr_29(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,139
	cr6.compare<uint32_t>(ctx.r4.u32, 139, xer);
	// bge cr6,0x82efe8d0
	if (!cr6.lt) goto loc_82EFE8D0;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efe8c8
	if (!cr6.eq) goto loc_82EFE8C8;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r9,r10,-9544
	ctx.r9.s64 = ctx.r10.s64 + -9544;
	// addi r30,r11,-16088
	ctx.r30.s64 = ctx.r11.s64 + -16088;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r6,r30,556
	ctx.r6.s64 = ctx.r30.s64 + 556;
	// addi r5,r30,584
	ctx.r5.s64 = ctx.r30.s64 + 584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x831d0b08
	ctx.lr = 0x82EFE880;
	sub_831D0B08(ctx, base);
	// li r8,10
	ctx.r8.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EFE898;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe8c0
	if (cr6.eq) goto loc_82EFE8C0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x82efedc8
	ctx.lr = 0x82EFE8AC;
	sub_82EFEDC8(ctx, base);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82efecb8
	ctx.lr = 0x82EFE8B8;
	sub_82EFECB8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EFE8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_82EFE8C8:
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82efecb8
	ctx.lr = 0x82EFE8D0;
	sub_82EFECB8(ctx, base);
loc_82EFE8D0:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFE8D8"))) PPC_WEAK_FUNC(sub_82EFE8D8);
PPC_FUNC_IMPL(__imp__sub_82EFE8D8) {
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
	// cmplwi cr6,r4,139
	cr6.compare<uint32_t>(ctx.r4.u32, 139, xer);
	// bge cr6,0x82efe910
	if (!cr6.lt) goto loc_82EFE910;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe910
	if (cr6.eq) goto loc_82EFE910;
	// bl 0x82efec00
	ctx.lr = 0x82EFE900;
	sub_82EFEC00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efe914
	if (!cr6.eq) goto loc_82EFE914;
loc_82EFE910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFE914:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE924"))) PPC_WEAK_FUNC(sub_82EFE924);
PPC_FUNC_IMPL(__imp__sub_82EFE924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE928"))) PPC_WEAK_FUNC(sub_82EFE928);
PPC_FUNC_IMPL(__imp__sub_82EFE928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,139
	cr6.compare<uint32_t>(ctx.r4.u32, 139, xer);
	// bge cr6,0x82efe94c
	if (!cr6.lt) goto loc_82EFE94C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe94c
	if (cr6.eq) goto loc_82EFE94C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82efebe8
	sub_82EFEBE8(ctx, base);
	return;
loc_82EFE94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE954"))) PPC_WEAK_FUNC(sub_82EFE954);
PPC_FUNC_IMPL(__imp__sub_82EFE954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE958"))) PPC_WEAK_FUNC(sub_82EFE958);
PPC_FUNC_IMPL(__imp__sub_82EFE958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,139
	cr6.compare<uint32_t>(ctx.r4.u32, 139, xer);
	// bge cr6,0x82efe974
	if (!cr6.lt) goto loc_82EFE974;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe974
	if (cr6.eq) goto loc_82EFE974;
	// b 0x83ac2480
	sub_83AC2480(ctx, base);
	return;
loc_82EFE974:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE97C"))) PPC_WEAK_FUNC(sub_82EFE97C);
PPC_FUNC_IMPL(__imp__sub_82EFE97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE980"))) PPC_WEAK_FUNC(sub_82EFE980);
PPC_FUNC_IMPL(__imp__sub_82EFE980) {
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
	// lwz r11,-26776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26776);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efea14
	if (!cr6.eq) goto loc_82EFEA14;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,560
	ctx.r4.s64 = 560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EFE9B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efe9f8
	if (cr6.eq) goto loc_82EFE9F8;
	// li r10,139
	ctx.r10.s64 = 139;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// stw r9,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82EFE9D8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82efe9d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EFE9D8;
	// stw r3,-26776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26776, ctx.r3.u32);
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
loc_82EFE9F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26776, ctx.r11.u32);
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
loc_82EFEA14:
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EFEA34"))) PPC_WEAK_FUNC(sub_82EFEA34);
PPC_FUNC_IMPL(__imp__sub_82EFEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFEA38"))) PPC_WEAK_FUNC(sub_82EFEA38);
PPC_FUNC_IMPL(__imp__sub_82EFEA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EFEA40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r27,10
	ctx.r27.s64 = 10;
	// cmplwi cr6,r28,139
	cr6.compare<uint32_t>(ctx.r28.u32, 139, xer);
	// bge cr6,0x82efeac0
	if (!cr6.lt) goto loc_82EFEAC0;
loc_82EFEA5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efeac0
	if (cr6.eq) goto loc_82EFEAC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82efebe8
	ctx.lr = 0x82EFEA70;
	sub_82EFEBE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efeac0
	if (cr6.eq) goto loc_82EFEAC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efeabc
	if (cr6.eq) goto loc_82EFEABC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EFEA94;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82efeab0
	if (cr6.eq) goto loc_82EFEAB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efed38
	ctx.lr = 0x82EFEAA8;
	sub_82EFED38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82EFEAB0;
	sub_82416268(ctx, base);
loc_82EFEAB0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EFEAB8;
	sub_82595170(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82EFEABC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82EFEAC0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,139
	cr6.compare<uint32_t>(ctx.r29.u32, 139, xer);
	// blt cr6,0x82efea5c
	if (cr6.lt) goto loc_82EFEA5C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFEAD8"))) PPC_WEAK_FUNC(sub_82EFEAD8);
PPC_FUNC_IMPL(__imp__sub_82EFEAD8) {
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
	// lis r30,-31756
	ctx.r30.s64 = -2081161216;
	// lwz r11,-26776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26776);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efeb64
	if (cr6.eq) goto loc_82EFEB64;
	// lwz r9,556(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// addi r10,r11,556
	ctx.r10.s64 = ctx.r11.s64 + 556;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x82efeb64
	if (cr6.gt) goto loc_82EFEB64;
	// lwz r11,-26776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26776);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efeb5c
	if (cr6.eq) goto loc_82EFEB5C;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EFEB38;
	sub_82595150(ctx, base);
	// lwz r31,-26776(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26776);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82efeb54
	if (cr6.eq) goto loc_82EFEB54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efea38
	ctx.lr = 0x82EFEB4C;
	sub_82EFEA38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EFEB54;
	sub_82416268(ctx, base);
loc_82EFEB54:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EFEB5C;
	sub_82595170(ctx, base);
loc_82EFEB5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26776(r30)
	PPC_STORE_U32(ctx.r30.u32 + -26776, ctx.r11.u32);
loc_82EFEB64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEB7C"))) PPC_WEAK_FUNC(sub_82EFEB7C);
PPC_FUNC_IMPL(__imp__sub_82EFEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFEB80"))) PPC_WEAK_FUNC(sub_82EFEB80);
PPC_FUNC_IMPL(__imp__sub_82EFEB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFEB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efebdc
	if (!cr6.eq) goto loc_82EFEBDC;
	// ld r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// li r10,10
	ctx.r10.s64 = 10;
	// rotlwi r29,r5,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// divdu r9,r5,r11
	ctx.r9.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// tdllei r11,0
	// bl 0x82595718
	ctx.lr = 0x82EFEBCC;
	sub_82595718(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EFEBDC;
	sub_831CE980(ctx, base);
loc_82EFEBDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFEBE4"))) PPC_WEAK_FUNC(sub_82EFEBE4);
PPC_FUNC_IMPL(__imp__sub_82EFEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFEBE8"))) PPC_WEAK_FUNC(sub_82EFEBE8);
PPC_FUNC_IMPL(__imp__sub_82EFEBE8) {
	PPC_FUNC_PROLOGUE();
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mullw r10,r9,r4
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEC00"))) PPC_WEAK_FUNC(sub_82EFEC00);
PPC_FUNC_IMPL(__imp__sub_82EFEC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFEC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82efec80
	if (cr6.eq) goto loc_82EFEC80;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82efec3c
	if (cr6.eq) goto loc_82EFEC3C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82efeca8
	if (!cr6.eq) goto loc_82EFECA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EFEC3C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83103d20
	ctx.lr = 0x82EFEC44;
	sub_83103D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83103d60
	ctx.lr = 0x82EFEC50;
	sub_83103D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82efeb80
	ctx.lr = 0x82EFEC60;
	sub_82EFEB80(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83103e98
	ctx.lr = 0x82EFEC68;
	sub_83103E98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EFEC80:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83103bb8
	ctx.lr = 0x82EFEC88;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82efecac
	if (!cr6.eq) goto loc_82EFECAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EFECA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EFECAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFECB4"))) PPC_WEAK_FUNC(sub_82EFECB4);
PPC_FUNC_IMPL(__imp__sub_82EFECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFECB8"))) PPC_WEAK_FUNC(sub_82EFECB8);
PPC_FUNC_IMPL(__imp__sub_82EFECB8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82efed20
	if (cr6.eq) goto loc_82EFED20;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82efed20
	if (cr6.eq) goto loc_82EFED20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82efed20
	if (cr6.eq) goto loc_82EFED20;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82efed08
	if (cr6.lt) goto loc_82EFED08;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EFED08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83104938
	ctx.lr = 0x82EFED14;
	sub_83104938(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x82EFED1C;
	sub_83103B18(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EFED20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFED38"))) PPC_WEAK_FUNC(sub_82EFED38);
PPC_FUNC_IMPL(__imp__sub_82EFED38) {
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
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82efed7c
	if (cr6.eq) goto loc_82EFED7C;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EFED70;
	sub_825952B8(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EFED7C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82efeda0
	if (cr6.lt) goto loc_82EFEDA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EFEDA0;
	sub_825952B8(ctx, base);
loc_82EFEDA0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEDC8"))) PPC_WEAK_FUNC(sub_82EFEDC8);
PPC_FUNC_IMPL(__imp__sub_82EFEDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFEDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
loc_82EFEDFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82efedfc
	if (!cr6.eq) goto loc_82EFEDFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82EFEE1C;
	sub_8259CC28(ctx, base);
	// std r29,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r29.u64);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFEE38"))) PPC_WEAK_FUNC(sub_82EFEE38);
PPC_FUNC_IMPL(__imp__sub_82EFEE38) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EFEE5C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82efee94
	if (cr6.eq) goto loc_82EFEE94;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r3,-26764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EFEE94:
	// stw r11,-26764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEEA8"))) PPC_WEAK_FUNC(sub_82EFEEA8);
PPC_FUNC_IMPL(__imp__sub_82EFEEA8) {
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
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r11,-26764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efeef4
	if (cr6.eq) goto loc_82EFEEF4;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EFEEDC;
	sub_82595150(ctx, base);
	// lwz r3,-26764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26764);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efeeec
	if (cr6.eq) goto loc_82EFEEEC;
	// bl 0x82416268
	ctx.lr = 0x82EFEEEC;
	sub_82416268(ctx, base);
loc_82EFEEEC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EFEEF4;
	sub_82595170(ctx, base);
loc_82EFEEF4:
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

__attribute__((alias("__imp__sub_82EFEF08"))) PPC_WEAK_FUNC(sub_82EFEF08);
PPC_FUNC_IMPL(__imp__sub_82EFEF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EFEF10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 3;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r30,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r30.u8);
	// stb r30,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r30.u8);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// stb r30,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r30.u8);
	// stb r29,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r29.u8);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x833d4ad0
	ctx.lr = 0x82EFEF80;
	sub_833D4AD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r27,1(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r26,1(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r25,0(r8)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r24,1(r8)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// stb r27,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r27.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r26,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r26.u8);
	// stb r25,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r25.u8);
	// stb r24,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r24.u8);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// stb r8,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r8.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82EFF030;
	sub_831CDCF0(ctx, base);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF040"))) PPC_WEAK_FUNC(sub_82EFF040);
PPC_FUNC_IMPL(__imp__sub_82EFF040) {
	PPC_FUNC_PROLOGUE();
	// li r9,29
	ctx.r9.s64 = 29;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,101
	ctx.r7.s64 = 101;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r10,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r10.u8);
	// stb r10,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r10.u8);
	// stb r11,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF0F0"))) PPC_WEAK_FUNC(sub_82EFF0F0);
PPC_FUNC_IMPL(__imp__sub_82EFF0F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EFF0F8;
	__savegprlr_28(ctx, base);
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// ld r9,-8644(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8644);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// li r31,255
	ctx.r31.s64 = 255;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r30,16
	ctx.r30.s64 = 16;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,-8596(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8596);
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r29,r10,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lwz r10,-8596(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8596);
	// rlwimi r28,r10,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// ld r10,-8644(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8644);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// lwz r10,-8596(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8596);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// lwz r10,-8596(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8596);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// sth r30,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r30.u16);
	// sth r9,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r9.u16);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF1A8"))) PPC_WEAK_FUNC(sub_82EFF1A8);
PPC_FUNC_IMPL(__imp__sub_82EFF1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-26752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF1B4"))) PPC_WEAK_FUNC(sub_82EFF1B4);
PPC_FUNC_IMPL(__imp__sub_82EFF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF1B8"))) PPC_WEAK_FUNC(sub_82EFF1B8);
PPC_FUNC_IMPL(__imp__sub_82EFF1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-26752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFF1D8"))) PPC_WEAK_FUNC(sub_82EFF1D8);
PPC_FUNC_IMPL(__imp__sub_82EFF1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF1DC"))) PPC_WEAK_FUNC(sub_82EFF1DC);
PPC_FUNC_IMPL(__imp__sub_82EFF1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF1E0"))) PPC_WEAK_FUNC(sub_82EFF1E0);
PPC_FUNC_IMPL(__imp__sub_82EFF1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837f9820
	sub_837F9820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF1F0"))) PPC_WEAK_FUNC(sub_82EFF1F0);
PPC_FUNC_IMPL(__imp__sub_82EFF1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF1F4"))) PPC_WEAK_FUNC(sub_82EFF1F4);
PPC_FUNC_IMPL(__imp__sub_82EFF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF1F8"))) PPC_WEAK_FUNC(sub_82EFF1F8);
PPC_FUNC_IMPL(__imp__sub_82EFF1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff218
	if (cr6.eq) goto loc_82EFF218;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// stb r10,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r10.u8);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// b 0x82eff224
	goto loc_82EFF224;
loc_82EFF218:
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82eff22c
	if (cr6.eq) goto loc_82EFF22C;
loc_82EFF224:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EFF22C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF238"))) PPC_WEAK_FUNC(sub_82EFF238);
PPC_FUNC_IMPL(__imp__sub_82EFF238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82eff278
	if (cr6.eq) goto loc_82EFF278;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff264
	if (cr6.eq) goto loc_82EFF264;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r10.u8);
	// stb r10,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r10.u8);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// b 0x82eff270
	goto loc_82EFF270;
loc_82EFF264:
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82eff278
	if (cr6.eq) goto loc_82EFF278;
loc_82EFF270:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EFF278:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF284"))) PPC_WEAK_FUNC(sub_82EFF284);
PPC_FUNC_IMPL(__imp__sub_82EFF284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF288"))) PPC_WEAK_FUNC(sub_82EFF288);
PPC_FUNC_IMPL(__imp__sub_82EFF288) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x837da198
	ctx.lr = 0x82EFF2A8;
	sub_837DA198(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eff2b8
	if (cr6.eq) goto loc_82EFF2B8;
	// lwz r31,11380(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11380);
loc_82EFF2B8:
	// li r3,4
	ctx.r3.s64 = 4;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82eff308
	if (cr6.lt) goto loc_82EFF308;
	// beq cr6,0x82eff300
	if (cr6.eq) goto loc_82EFF300;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82eff30c
	if (!cr6.lt) goto loc_82EFF30C;
	// lwz r10,11384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11384);
	// lwz r9,11388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11388);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eff2f8
	if (!cr6.eq) goto loc_82EFF2F8;
	// lfs f0,11404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eff2f8
	if (!cr6.lt) goto loc_82EFF2F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82eff30c
	goto loc_82EFF30C;
loc_82EFF2F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82eff30c
	goto loc_82EFF30C;
loc_82EFF300:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eff30c
	goto loc_82EFF30C;
loc_82EFF308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFF30C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF324"))) PPC_WEAK_FUNC(sub_82EFF324);
PPC_FUNC_IMPL(__imp__sub_82EFF324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF328"))) PPC_WEAK_FUNC(sub_82EFF328);
PPC_FUNC_IMPL(__imp__sub_82EFF328) {
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
	// bl 0x82efef08
	ctx.lr = 0x82EFF340;
	sub_82EFEF08(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82efef08
	ctx.lr = 0x82EFF348;
	sub_82EFEF08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EFF370"))) PPC_WEAK_FUNC(sub_82EFF370);
PPC_FUNC_IMPL(__imp__sub_82EFF370) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lis r6,-31774
	ctx.r6.s64 = -2082340864;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,-8644(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8644);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,-8596(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8596);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r3,r11,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,-8596(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8596);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// sth r30,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r30.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// ld r11,-8644(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8644);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// lwz r11,-8596(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8596);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r11,-8596(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8596);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x82eff0f0
	ctx.lr = 0x82EFF43C;
	sub_82EFF0F0(ctx, base);
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

__attribute__((alias("__imp__sub_82EFF458"))) PPC_WEAK_FUNC(sub_82EFF458);
PPC_FUNC_IMPL(__imp__sub_82EFF458) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82eff4b0
	if (cr0.eq) goto loc_82EFF4B0;
	// bl 0x837da198
	ctx.lr = 0x82EFF47C;
	sub_837DA198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eff49c
	if (!cr6.eq) goto loc_82EFF49C;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// ori r3,r3,43
	ctx.r3.u64 = ctx.r3.u64 | 43;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EFF49C:
	// lwz r3,11392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11392);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EFF4B0:
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF4C4"))) PPC_WEAK_FUNC(sub_82EFF4C4);
PPC_FUNC_IMPL(__imp__sub_82EFF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF4C8"))) PPC_WEAK_FUNC(sub_82EFF4C8);
PPC_FUNC_IMPL(__imp__sub_82EFF4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EFF4D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,279(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 279);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff590
	if (cr6.eq) goto loc_82EFF590;
	// lis r27,-31774
	ctx.r27.s64 = -2082340864;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r28,r3,280
	ctx.r28.s64 = ctx.r3.s64 + 280;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r9,-8596(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8596);
	// li r29,2
	ctx.r29.s64 = 2;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_82EFF500:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// rlwinm r8,r10,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eff528
	if (!cr6.eq) goto loc_82EFF528;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eff52c
	if (cr6.eq) goto loc_82EFF52C;
loc_82EFF528:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82EFF52C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eff580
	if (!cr6.eq) goto loc_82EFF580;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82EFF568;
	sub_82B34AC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d41ac0
	ctx.lr = 0x82EFF570;
	sub_82D41AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff59c
	if (cr6.eq) goto loc_82EFF59C;
	// lwz r9,-8596(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8596);
loc_82EFF580:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// blt cr6,0x82eff500
	if (cr6.lt) goto loc_82EFF500;
loc_82EFF590:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EFF59C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF5A8"))) PPC_WEAK_FUNC(sub_82EFF5A8);
PPC_FUNC_IMPL(__imp__sub_82EFF5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EFF5B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,279(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 279);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff64c
	if (cr6.eq) goto loc_82EFF64C;
	// bl 0x831156e8
	ctx.lr = 0x82EFF5C8;
	sub_831156E8(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r25,276
	ctx.r30.s64 = ctx.r25.s64 + 276;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// lis r28,-31774
	ctx.r28.s64 = -2082340864;
loc_82EFF5E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82EFF618;
	sub_82B34AC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d418e0
	ctx.lr = 0x82EFF620;
	sub_82D418E0(ctx, base);
	// lwz r11,-8596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8596);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,-8596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8596);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// bne 0x82eff5e4
	if (!cr0.eq) goto loc_82EFF5E4;
	// stb r31,279(r25)
	PPC_STORE_U8(ctx.r25.u32 + 279, ctx.r31.u8);
loc_82EFF64C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF654"))) PPC_WEAK_FUNC(sub_82EFF654);
PPC_FUNC_IMPL(__imp__sub_82EFF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF658"))) PPC_WEAK_FUNC(sub_82EFF658);
PPC_FUNC_IMPL(__imp__sub_82EFF658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82EFF660;
	__savegprlr_23(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82efef08
	ctx.lr = 0x82EFF670;
	sub_82EFEF08(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x82efef08
	ctx.lr = 0x82EFF678;
	sub_82EFEF08(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// addi r9,r1,268
	ctx.r9.s64 = ctx.r1.s64 + 268;
	// stw r31,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r31.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r28,r1,104
	ctx.r28.s64 = ctx.r1.s64 + 104;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r29,r30,280
	ctx.r29.s64 = ctx.r30.s64 + 280;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// lis r24,-31774
	ctx.r24.s64 = -2082340864;
loc_82EFF6BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,-8596(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8596);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eff6ec
	if (!cr6.eq) goto loc_82EFF6EC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eff6f0
	if (cr6.eq) goto loc_82EFF6F0;
loc_82EFF6EC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82EFF6F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eff768
	if (!cr6.eq) goto loc_82EFF768;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82EFF72C;
	sub_82B34AC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d41c98
	ctx.lr = 0x82EFF738;
	sub_82D41C98(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x82EFF740;
	sub_831156E8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82EFF74C;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x82eff764
	if (!cr6.eq) goto loc_82EFF764;
	// stb r23,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r23.u8);
	// b 0x82eff768
	goto loc_82EFF768;
loc_82EFF764:
	// stb r31,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r31.u8);
loc_82EFF768:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82eff6bc
	if (!cr0.eq) goto loc_82EFF6BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833c8e10
	ctx.lr = 0x82EFF780;
	sub_833C8E10(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x833cd338
	ctx.lr = 0x82EFF788;
	sub_833CD338(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x833cd338
	ctx.lr = 0x82EFF790;
	sub_833CD338(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF798"))) PPC_WEAK_FUNC(sub_82EFF798);
PPC_FUNC_IMPL(__imp__sub_82EFF798) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eff7fc
	if (cr6.eq) goto loc_82EFF7FC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EFF7D0;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eff7f0
	if (cr6.eq) goto loc_82EFF7F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EFF7F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EFF7F0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EFF7F8;
	sub_82595170(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82EFF7FC:
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// bl 0x8378cba8
	ctx.lr = 0x82EFF804;
	sub_8378CBA8(ctx, base);
	// bl 0x8378d310
	ctx.lr = 0x82EFF808;
	sub_8378D310(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stb r30,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r30.u8);
	// bl 0x82eff5a8
	ctx.lr = 0x82EFF820;
	sub_82EFF5A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFF838"))) PPC_WEAK_FUNC(sub_82EFF838);
PPC_FUNC_IMPL(__imp__sub_82EFF838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EFF840;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,279(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 279);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eff930
	if (!cr6.eq) goto loc_82EFF930;
	// lis r30,-31774
	ctx.r30.s64 = -2082340864;
	// li r27,2
	ctx.r27.s64 = 2;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r28,r3,280
	ctx.r28.s64 = ctx.r3.s64 + 280;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r10,-8596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8596);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// li r26,15
	ctx.r26.s64 = 15;
loc_82EFF878:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eff8a0
	if (!cr6.eq) goto loc_82EFF8A0;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eff8a4
	if (cr6.eq) goto loc_82EFF8A4;
loc_82EFF8A0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82EFF8A4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eff91c
	if (!cr6.eq) goto loc_82EFF91C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stb r31,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r31.u8);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// sth r29,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r29.u16);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82EFF8E0;
	sub_82B34AC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d41e60
	ctx.lr = 0x82EFF8F0;
	sub_82D41E60(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eff90c
	if (cr6.lt) goto loc_82EFF90C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82EFF90C;
	sub_825952B8(ctx, base);
loc_82EFF90C:
	// lwz r10,-8596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8596);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82EFF91C:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82eff878
	if (!cr0.eq) goto loc_82EFF878;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,279(r24)
	PPC_STORE_U8(ctx.r24.u32 + 279, ctx.r11.u8);
loc_82EFF930:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF938"))) PPC_WEAK_FUNC(sub_82EFF938);
PPC_FUNC_IMPL(__imp__sub_82EFF938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EFF940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,29
	ctx.r6.s64 = 29;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// ld r11,-8644(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8644);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// sth r5,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r5.u16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eff9c0
	if (cr6.eq) goto loc_82EFF9C0;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82EFF9B8;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82EFF9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFF9C8"))) PPC_WEAK_FUNC(sub_82EFF9C8);
PPC_FUNC_IMPL(__imp__sub_82EFF9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82effa24
	if (cr6.eq) goto loc_82EFFA24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eff9f0
	if (cr6.eq) goto loc_82EFF9F0;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82EFF9F0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82effa0c
	if (cr6.gt) goto loc_82EFFA0C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82EFFA0C:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// blr 
	return;
loc_82EFFA24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFFA2C"))) PPC_WEAK_FUNC(sub_82EFFA2C);
PPC_FUNC_IMPL(__imp__sub_82EFFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFFA30"))) PPC_WEAK_FUNC(sub_82EFFA30);
PPC_FUNC_IMPL(__imp__sub_82EFFA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EFFA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// ld r10,-8644(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8644);
	// li r6,29
	ctx.r6.s64 = 29;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lwz r10,-8596(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8596);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// sth r5,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r5.u16);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82effabc
	if (cr6.eq) goto loc_82EFFABC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x82EFFAB4;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82EFFABC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EFFAC8"))) PPC_WEAK_FUNC(sub_82EFFAC8);
PPC_FUNC_IMPL(__imp__sub_82EFFAC8) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82effafc
	if (cr6.eq) goto loc_82EFFAFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x837f86b8
	ctx.lr = 0x82EFFAF8;
	sub_837F86B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82EFFAFC:
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

__attribute__((alias("__imp__sub_82EFFB10"))) PPC_WEAK_FUNC(sub_82EFFB10);
PPC_FUNC_IMPL(__imp__sub_82EFFB10) {
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
	ctx.lr = 0x82EFFB18;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82effb4c
	if (cr6.eq) goto loc_82EFFB4C;
	// stw r25,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r25.u32);
	// stb r26,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r26.u8);
	// stw r26,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r26.u32);
	// b 0x82effb5c
	goto loc_82EFFB5C;
loc_82EFFB4C:
	// lbz r11,273(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 273);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82effb60
	if (cr6.eq) goto loc_82EFFB60;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_82EFFB5C:
	// stb r26,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r26.u8);
loc_82EFFB60:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82f00378
	if (cr6.gt) goto loc_82F00378;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82f0037c
	if (cr6.eq) goto loc_82F0037C;
	// bdz 0x82effb8c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82EFFB8C;
	// bdz 0x82efff6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82EFFF6C;
	// bdz 0x82f001c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F001C0;
	// bdz 0x82f0024c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82F0024C;
	// b 0x82f002c4
	goto loc_82F002C4;
loc_82EFFB8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff4c8
	ctx.lr = 0x82EFFB94;
	sub_82EFF4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// lbz r11,279(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 279);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82effbb4
	if (cr6.eq) goto loc_82EFFBB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff658
	ctx.lr = 0x82EFFBB4;
	sub_82EFF658(ctx, base);
loc_82EFFBB4:
	// bl 0x82eff9c8
	ctx.lr = 0x82EFFBB8;
	sub_82EFF9C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82efff4c
	if (!cr6.eq) goto loc_82EFFF4C;
	// bl 0x830ff290
	ctx.lr = 0x82EFFBC4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82EFFBC8;
	sub_830FFAA8(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82effc4c
	if (!cr6.eq) goto loc_82EFFC4C;
	// bl 0x831156e8
	ctx.lr = 0x82EFFBE4;
	sub_831156E8(ctx, base);
	// lis r11,222
	ctx.r11.s64 = 14548992;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r8,r11,30348
	ctx.r8.u64 = ctx.r11.u64 | 30348;
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// ldx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// ld r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 156);
	// lwz r24,164(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// bl 0x837da198
	ctx.lr = 0x82EFFC34;
	sub_837DA198(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x837d9c68
	ctx.lr = 0x82EFFC48;
	sub_837D9C68(ctx, base);
	// b 0x82effc7c
	goto loc_82EFFC7C;
loc_82EFFC4C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x82EFFC6C;
	sub_837DA198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x837da080
	ctx.lr = 0x82EFFC7C;
	sub_837DA080(ctx, base);
loc_82EFFC7C:
	// lhz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 196);
	// bl 0x837da198
	ctx.lr = 0x82EFFC84;
	sub_837DA198(ctx, base);
	// sth r30,194(r3)
	PPC_STORE_U16(ctx.r3.u32 + 194, ctx.r30.u16);
	// bl 0x831156e8
	ctx.lr = 0x82EFFC8C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r30,r11,14904
	ctx.r30.u64 = ctx.r11.u64 | 14904;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x83123768
	ctx.lr = 0x82EFFCA0;
	sub_83123768(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bl 0x831bbfd0
	ctx.lr = 0x82EFFCB0;
	sub_831BBFD0(ctx, base);
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r27,192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x837da198
	ctx.lr = 0x82EFFCC0;
	sub_837DA198(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x837d8900
	ctx.lr = 0x82EFFCDC;
	sub_837D8900(ctx, base);
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// beq cr6,0x82effcfc
	if (cr6.eq) goto loc_82EFFCFC;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(ctx.r29.u32, 13, xer);
	// beq cr6,0x82effcfc
	if (cr6.eq) goto loc_82EFFCFC;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// beq cr6,0x82effcfc
	if (cr6.eq) goto loc_82EFFCFC;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bne cr6,0x82effd28
	if (!cr6.eq) goto loc_82EFFD28;
loc_82EFFCFC:
	// bl 0x831156e8
	ctx.lr = 0x82EFFD00;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83123778
	ctx.lr = 0x82EFFD0C;
	sub_83123778(ctx, base);
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314e340
	ctx.lr = 0x82EFFD18;
	sub_8314E340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x837da198
	ctx.lr = 0x82EFFD20;
	sub_837DA198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837d8f58
	ctx.lr = 0x82EFFD28;
	sub_837D8F58(ctx, base);
loc_82EFFD28:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82effe90
	if (!cr6.eq) goto loc_82EFFE90;
	// bl 0x831156e8
	ctx.lr = 0x82EFFD40;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82EFFD48;
	sub_831156E8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// oris r10,r11,65532
	ctx.r10.u64 = ctx.r11.u64 | 4294705152;
	// oris r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 196608;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x82eff040
	ctx.lr = 0x82EFFD64;
	sub_82EFF040(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-15088
	ctx.r5.s64 = ctx.r8.s64 + -15088;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x831178a0
	ctx.lr = 0x82EFFD80;
	sub_831178A0(ctx, base);
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x8311c448
	ctx.lr = 0x82EFFD90;
	sub_8311C448(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82effda8
	if (cr6.eq) goto loc_82EFFDA8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83124aa8
	ctx.lr = 0x82EFFDA8;
	sub_83124AA8(ctx, base);
loc_82EFFDA8:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,-8596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8596);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82effdd8
	if (!cr6.eq) goto loc_82EFFDD8;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82effddc
	if (cr6.eq) goto loc_82EFFDDC;
loc_82EFFDD8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82EFFDDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82effe90
	if (!cr6.eq) goto loc_82EFFE90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82effe90
	if (!cr6.eq) goto loc_82EFFE90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c148
	ctx.lr = 0x82EFFDFC;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82EFFE0C;
	sub_831CE980(ctx, base);
	// lwz r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	// lwz r9,1100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// lwz r8,192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r7,r11,8,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF;
	// rlwinm r10,r9,6,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// rlwinm r4,r11,16,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// rlwinm r3,r9,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r5,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// bne cr6,0x82effe5c
	if (!cr6.eq) goto loc_82EFFE5C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82effe60
	goto loc_82EFFE60;
loc_82EFFE5C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82EFFE60:
	// rlwinm r11,r9,9,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x7;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82effe78
	if (!cr6.eq) goto loc_82EFFE78;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82effe7c
	goto loc_82EFFE7C;
loc_82EFFE78:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82EFFE7C:
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x82EFFE84;
	sub_837DA198(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x837d8930
	ctx.lr = 0x82EFFE90;
	sub_837D8930(ctx, base);
loc_82EFFE90:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r28,r31,176
	ctx.r28.s64 = ctx.r31.s64 + 176;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82efff40
	if (cr0.eq) goto loc_82EFFF40;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// bl 0x82effac8
	ctx.lr = 0x82EFFEBC;
	sub_82EFFAC8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r30,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82efff1c
	if (cr0.eq) goto loc_82EFFF1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r27,27
	ctx.r27.s64 = 27;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82EFFEE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8261ff20
	ctx.lr = 0x82EFFF10;
	sub_8261FF20(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82effee0
	if (!cr0.eq) goto loc_82EFFEE0;
loc_82EFFF1C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x838020c8
	ctx.lr = 0x82EFFF24;
	sub_838020C8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82efff34
	if (cr6.eq) goto loc_82EFFF34;
	// stb r25,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r25.u8);
loc_82EFFF34:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f73d60
	ctx.lr = 0x82EFFF3C;
	sub_82F73D60(ctx, base);
	// b 0x82efff4c
	goto loc_82EFFF4C;
loc_82EFFF40:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83801d28
	ctx.lr = 0x82EFFF48;
	sub_83801D28(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_82EFFF4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r25,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r25.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EFFF6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff4c8
	ctx.lr = 0x82EFFF74;
	sub_82EFF4C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// lbz r11,279(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 279);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82efff94
	if (cr6.eq) goto loc_82EFFF94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff658
	ctx.lr = 0x82EFFF94;
	sub_82EFF658(ctx, base);
loc_82EFFF94:
	// bl 0x82eff9c8
	ctx.lr = 0x82EFFF98;
	sub_82EFF9C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f001a0
	if (!cr6.eq) goto loc_82F001A0;
	// lbz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f00038
	if (cr6.eq) goto loc_82F00038;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r29,232(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// lwz r27,208(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r26,r6,24
	ctx.r26.u64 = ctx.r6.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x837da198
	ctx.lr = 0x82EFFFE8;
	sub_837DA198(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x837da0b8
	ctx.lr = 0x82F00004;
	sub_837DA0B8(ctx, base);
	// lwz r29,216(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x837da198
	ctx.lr = 0x82F0000C;
	sub_837DA198(ctx, base);
	// stb r29,5712(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5712, ctx.r29.u8);
	// lwz r29,220(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x837da198
	ctx.lr = 0x82F00018;
	sub_837DA198(ctx, base);
	// stb r29,5713(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5713, ctx.r29.u8);
	// lwz r29,240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x837da198
	ctx.lr = 0x82F00024;
	sub_837DA198(ctx, base);
	// stb r29,11244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11244, ctx.r29.u8);
	// lwz r29,244(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// bl 0x837da198
	ctx.lr = 0x82F00030;
	sub_837DA198(ctx, base);
	// stb r29,11245(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11245, ctx.r29.u8);
	// b 0x82f00120
	goto loc_82F00120;
loc_82F00038:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r11,r11,-8644
	ctx.r11.s64 = ctx.r11.s64 + -8644;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f0005c
	if (!cr6.eq) goto loc_82F0005C;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f00084
	goto loc_82F00084;
loc_82F0005C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 224);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f0007c
	if (!cr6.eq) goto loc_82F0007C;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82f00080
	if (cr6.eq) goto loc_82F00080;
loc_82F0007C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F00080:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F00084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f000c4
	if (cr6.eq) goto loc_82F000C4;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r29,208(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x837da198
	ctx.lr = 0x82F000B0;
	sub_837DA198(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x837da080
	ctx.lr = 0x82F000C0;
	sub_837DA080(ctx, base);
	// b 0x82f00108
	goto loc_82F00108;
loc_82F000C4:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// ld r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 200);
	// ld r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// lwz r27,208(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// bl 0x837da198
	ctx.lr = 0x82F000F4;
	sub_837DA198(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x837d9c68
	ctx.lr = 0x82F00108;
	sub_837D9C68(ctx, base);
loc_82F00108:
	// lwz r29,216(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x837da198
	ctx.lr = 0x82F00110;
	sub_837DA198(ctx, base);
	// stb r29,5712(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5712, ctx.r29.u8);
	// lwz r29,220(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x837da198
	ctx.lr = 0x82F0011C;
	sub_837DA198(ctx, base);
	// stb r29,5713(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5713, ctx.r29.u8);
loc_82F00120:
	// lhz r29,260(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// bl 0x837da198
	ctx.lr = 0x82F00128;
	sub_837DA198(ctx, base);
	// sth r29,194(r3)
	PPC_STORE_U16(ctx.r3.u32 + 194, ctx.r29.u16);
	// bl 0x831156e8
	ctx.lr = 0x82F00130;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123768
	ctx.lr = 0x82F00140;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x831bbfd0
	ctx.lr = 0x82F00150;
	sub_831BBFD0(ctx, base);
	// lwz r29,208(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r28,256(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x837da198
	ctx.lr = 0x82F00160;
	sub_837DA198(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x837d8900
	ctx.lr = 0x82F0017C;
	sub_837D8900(ctx, base);
	// addi r3,r31,262
	ctx.r3.s64 = ctx.r31.s64 + 262;
	// bl 0x8314e340
	ctx.lr = 0x82F00184;
	sub_8314E340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837da198
	ctx.lr = 0x82F0018C;
	sub_837DA198(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x837d8f58
	ctx.lr = 0x82F00194;
	sub_837D8F58(ctx, base);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x83801d28
	ctx.lr = 0x82F0019C;
	sub_83801D28(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_82F001A0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82F001C0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82f00204
	if (!cr6.eq) goto loc_82F00204;
	// lbz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f001e0
	if (!cr6.eq) goto loc_82F001E0;
	// stb r25,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r25.u8);
loc_82F001E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x82d16ed0
	ctx.lr = 0x82F001EC;
	sub_82D16ED0(ctx, base);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82f00228
	if (cr6.eq) goto loc_82F00228;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d17060
	ctx.lr = 0x82F00200;
	sub_82D17060(ctx, base);
	// b 0x82f00228
	goto loc_82F00228;
loc_82F00204:
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82f00218
	if (!cr6.eq) goto loc_82F00218;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82f00224
	goto loc_82F00224;
loc_82F00218:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x82f00228
	if (!cr6.gt) goto loc_82F00228;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82F00224:
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
loc_82F00228:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82F0024C:
	// lbz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f0027c
	if (cr6.eq) goto loc_82F0027C;
	// lbz r11,277(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 277);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// lbz r11,278(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 278);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0027c
	if (!cr6.eq) goto loc_82F0027C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stb r25,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r25.u8);
	// stb r25,278(r31)
	PPC_STORE_U8(ctx.r31.u32 + 278, ctx.r25.u8);
loc_82F0027C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82f003a4
	if (!cr6.eq) goto loc_82F003A4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
loc_82F002C4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f0030c
	if (cr6.eq) goto loc_82F0030C;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x82F002E0;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f00300
	if (cr6.eq) goto loc_82F00300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F00300:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x82F00308;
	sub_82595170(ctx, base);
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
loc_82F0030C:
	// lbz r11,274(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 274);
	// stw r26,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f0032c
	if (cr6.eq) goto loc_82F0032C;
	// bl 0x8378cba8
	ctx.lr = 0x82F00320;
	sub_8378CBA8(ctx, base);
	// bl 0x8378d310
	ctx.lr = 0x82F00324;
	sub_8378D310(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
loc_82F0032C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// stb r26,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r26.u8);
	// stb r26,277(r31)
	PPC_STORE_U8(ctx.r31.u32 + 277, ctx.r26.u8);
	// stb r26,278(r31)
	PPC_STORE_U8(ctx.r31.u32 + 278, ctx.r26.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// bl 0x82eff5a8
	ctx.lr = 0x82F00354;
	sub_82EFF5A8(ctx, base);
	// bl 0x82d16ed0
	ctx.lr = 0x82F00358;
	sub_82D16ED0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// bl 0x82d16ed0
	ctx.lr = 0x82F00364;
	sub_82D16ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d17060
	ctx.lr = 0x82F0036C;
	sub_82D17060(ctx, base);
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82F00378:
	// stw r26,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r26.u32);
loc_82F0037C:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f003a4
	if (cr6.eq) goto loc_82F003A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x82F00394;
	sub_83102DB0(ctx, base);
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// ble cr6,0x82f003a4
	if (!cr6.gt) goto loc_82F003A4;
	// stw r26,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r26.u32);
loc_82F003A4:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F003B0"))) PPC_WEAK_FUNC(sub_82F003B0);
PPC_FUNC_IMPL(__imp__sub_82F003B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r11,-26752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26752);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82effb10
	sub_82EFFB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F003C4"))) PPC_WEAK_FUNC(sub_82F003C4);
PPC_FUNC_IMPL(__imp__sub_82F003C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F003C8"))) PPC_WEAK_FUNC(sub_82F003C8);
PPC_FUNC_IMPL(__imp__sub_82F003C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F003D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-14748
	ctx.r9.s64 = ctx.r11.s64 + -14748;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82f00430
	if (cr6.eq) goto loc_82F00430;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82F00404;
	sub_82595150(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f00424
	if (cr6.eq) goto loc_82F00424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F00424:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82F0042C;
	sub_82595170(ctx, base);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
loc_82F00430:
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r29,-26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26752, ctx.r29.u32);
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f00458
	if (cr6.eq) goto loc_82F00458;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82F00458;
	sub_825952B8(ctx, base);
loc_82F00458:
	// stw r29,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r29.u32);
	// addi r31,r30,140
	ctx.r31.s64 = ctx.r30.s64 + 140;
	// stw r29,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r29.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f00494
	if (cr6.eq) goto loc_82F00494;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b1c488
	ctx.lr = 0x82F00484;
	sub_82B1C488(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F00494;
	sub_825952B8(ctx, base);
loc_82F00494:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r28,r30,84
	ctx.r28.s64 = ctx.r30.s64 + 84;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f004c0
	if (cr6.lt) goto loc_82F004C0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F004C0;
	sub_825952B8(ctx, base);
loc_82F004C0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
	// bl 0x831032a0
	ctx.lr = 0x82F004D8;
	sub_831032A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F004E0"))) PPC_WEAK_FUNC(sub_82F004E0);
PPC_FUNC_IMPL(__imp__sub_82F004E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F004E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-14856
	ctx.r4.s64 = ctx.r11.s64 + -14856;
	// bl 0x83103328
	ctx.lr = 0x82F004FC;
	sub_83103328(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-14748
	ctx.r9.s64 = ctx.r10.s64 + -14748;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// ori r4,r6,8
	ctx.r4.u64 = ctx.r6.u64 | 8;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r27,r31,156
	ctx.r27.s64 = ctx.r31.s64 + 156;
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r5,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r5.u16);
	// ld r11,-8644(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8644);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// bl 0x82effa30
	ctx.lr = 0x82F00570;
	sub_82EFFA30(ctx, base);
	// addi r26,r31,200
	ctx.r26.s64 = ctx.r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82eff370
	ctx.lr = 0x82F0057C;
	sub_82EFF370(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// addi r28,r31,280
	ctx.r28.s64 = ctx.r31.s64 + 280;
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// stb r30,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r30.u8);
	// stb r30,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r30.u8);
	// lfs f0,9008(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r30.u8);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stb r30,277(r31)
	PPC_STORE_U8(ctx.r31.u32 + 277, ctx.r30.u8);
	// stb r30,278(r31)
	PPC_STORE_U8(ctx.r31.u32 + 278, ctx.r30.u8);
	// stb r30,279(r31)
	PPC_STORE_U8(ctx.r31.u32 + 279, ctx.r30.u8);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f005f8
	if (cr6.eq) goto loc_82F005F8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b1c7b8
	ctx.lr = 0x82F005E0;
	sub_82B1C7B8(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82b1c488
	ctx.lr = 0x82F005F4;
	sub_82B1C488(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82F005F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eff938
	ctx.lr = 0x82F00600;
	sub_82EFF938(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82eff0f0
	ctx.lr = 0x82F00608;
	sub_82EFF0F0(ctx, base);
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// lwz r11,-8596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00658"))) PPC_WEAK_FUNC(sub_82F00658);
PPC_FUNC_IMPL(__imp__sub_82F00658) {
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
	// bl 0x82f003c8
	ctx.lr = 0x82F00678;
	sub_82F003C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f00690
	if (cr6.eq) goto loc_82F00690;
	// bl 0x82416268
	ctx.lr = 0x82F0068C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F00690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F006A8"))) PPC_WEAK_FUNC(sub_82F006A8);
PPC_FUNC_IMPL(__imp__sub_82F006A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,296
	ctx.r4.s64 = 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F006D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f006ec
	if (cr6.eq) goto loc_82F006EC;
	// bl 0x82f004e0
	ctx.lr = 0x82F006DC;
	sub_82F004E0(ctx, base);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r31,r11,-26752
	ctx.r31.s64 = ctx.r11.s64 + -26752;
	// stw r3,-26752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26752, ctx.r3.u32);
	// b 0x82f006fc
	goto loc_82F006FC;
loc_82F006EC:
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-26752
	ctx.r31.s64 = ctx.r10.s64 + -26752;
	// stw r11,-26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26752, ctx.r11.u32);
loc_82F006FC:
	// bl 0x831021a0
	ctx.lr = 0x82F00700;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82F00708;
	sub_82DA45F8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103100
	ctx.lr = 0x82F00710;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82F00724"))) PPC_WEAK_FUNC(sub_82F00724);
PPC_FUNC_IMPL(__imp__sub_82F00724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00728"))) PPC_WEAK_FUNC(sub_82F00728);
PPC_FUNC_IMPL(__imp__sub_82F00728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F00734"))) PPC_WEAK_FUNC(sub_82F00734);
PPC_FUNC_IMPL(__imp__sub_82F00734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00738"))) PPC_WEAK_FUNC(sub_82F00738);
PPC_FUNC_IMPL(__imp__sub_82F00738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F00758"))) PPC_WEAK_FUNC(sub_82F00758);
PPC_FUNC_IMPL(__imp__sub_82F00758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F0075C"))) PPC_WEAK_FUNC(sub_82F0075C);
PPC_FUNC_IMPL(__imp__sub_82F0075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00760"))) PPC_WEAK_FUNC(sub_82F00760);
PPC_FUNC_IMPL(__imp__sub_82F00760) {
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
	// bl 0x82f01698
	ctx.lr = 0x82F00770;
	sub_82F01698(ctx, base);
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

__attribute__((alias("__imp__sub_82F00784"))) PPC_WEAK_FUNC(sub_82F00784);
PPC_FUNC_IMPL(__imp__sub_82F00784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00788"))) PPC_WEAK_FUNC(sub_82F00788);
PPC_FUNC_IMPL(__imp__sub_82F00788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F00790;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,22974
	ctx.r30.s64 = ctx.r30.s64 + 22974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f007dc
	if (cr6.eq) goto loc_82F007DC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// bl 0x839e4dc8
	ctx.lr = 0x82F007CC;
	sub_839E4DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82F007D8;
	sub_83103100(ctx, base);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
loc_82F007DC:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,22975
	ctx.r30.s64 = ctx.r30.s64 + 22975;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f00824
	if (cr6.eq) goto loc_82F00824;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,20481
	ctx.r9.u64 = ctx.r10.u64 | 20481;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x82F0081C;
	sub_831036C0(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
loc_82F00824:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,19000
	ctx.r30.s64 = ctx.r30.s64 + 19000;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82f008f8
	if (cr6.gt) goto loc_82F008F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f00858
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F00858;
	// bdzf 4*cr6+eq,0x82f008fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F008FC;
	// bne cr6,0x82f00888
	if (!cr6.eq) goto loc_82F00888;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F00858:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4f040
	ctx.lr = 0x82F00868;
	sub_82D4F040(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b18
	ctx.lr = 0x82F00870;
	sub_82D17B18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x82F00878;
	sub_82D17B90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F00888:
	// bl 0x82d4e1f0
	ctx.lr = 0x82F0088C;
	sub_82D4E1F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f008b4
	if (cr6.eq) goto loc_82F008B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b18
	ctx.lr = 0x82F008A0;
	sub_82D17B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82F008A8;
	sub_82D17B90(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F008B4:
	// bl 0x82d4de10
	ctx.lr = 0x82F008B8;
	sub_82D4DE10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f008fc
	if (cr6.eq) goto loc_82F008FC;
	// bl 0x82d4de68
	ctx.lr = 0x82F008C8;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f008f8
	if (cr6.eq) goto loc_82F008F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d4de98
	ctx.lr = 0x82F008E0;
	sub_82D4DE98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b18
	ctx.lr = 0x82F008E8;
	sub_82D17B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x82F008F0;
	sub_82D17B90(ctx, base);
	// bl 0x837d59a0
	ctx.lr = 0x82F008F4;
	sub_837D59A0(ctx, base);
	// bl 0x837d61d0
	ctx.lr = 0x82F008F8;
	sub_837D61D0(ctx, base);
loc_82F008F8:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82F008FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00904"))) PPC_WEAK_FUNC(sub_82F00904);
PPC_FUNC_IMPL(__imp__sub_82F00904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00908"))) PPC_WEAK_FUNC(sub_82F00908);
PPC_FUNC_IMPL(__imp__sub_82F00908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,20482
	ctx.r8.u64 = ctx.r10.u64 | 20482;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,22976
	ctx.r8.u64 = ctx.r10.u64 | 22976;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F00938"))) PPC_WEAK_FUNC(sub_82F00938);
PPC_FUNC_IMPL(__imp__sub_82F00938) {
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
	// bl 0x82f00788
	ctx.lr = 0x82F00950;
	sub_82F00788(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04608
	ctx.lr = 0x82F0095C;
	sub_82F04608(ctx, base);
	// bl 0x8379f630
	ctx.lr = 0x82F00960;
	sub_8379F630(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f009a0
	if (!cr6.eq) goto loc_82F009A0;
	// bl 0x8379f698
	ctx.lr = 0x82F00970;
	sub_8379F698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f009a0
	if (cr6.eq) goto loc_82F009A0;
	// bl 0x8379f6b8
	ctx.lr = 0x82F00980;
	sub_8379F6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f009a0
	if (!cr6.eq) goto loc_82F009A0;
	// bl 0x8379f5d8
	ctx.lr = 0x82F00990;
	sub_8379F5D8(ctx, base);
	// bl 0x8379fdc8
	ctx.lr = 0x82F00994;
	sub_8379FDC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8379f688
	ctx.lr = 0x82F0099C;
	sub_8379F688(ctx, base);
	// b 0x82f009b8
	goto loc_82F009B8;
loc_82F009A0:
	// bl 0x8379f630
	ctx.lr = 0x82F009A4;
	sub_8379F630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f009b8
	if (!cr6.eq) goto loc_82F009B8;
	// bl 0x8379f5d8
	ctx.lr = 0x82F009B4;
	sub_8379F5D8(ctx, base);
	// bl 0x8379fdc8
	ctx.lr = 0x82F009B8;
	sub_8379FDC8(ctx, base);
loc_82F009B8:
	// bl 0x8379f640
	ctx.lr = 0x82F009BC;
	sub_8379F640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f009d4
	if (cr6.eq) goto loc_82F009D4;
	// bl 0x8379f678
	ctx.lr = 0x82F009CC;
	sub_8379F678(ctx, base);
	// bl 0x8379f620
	ctx.lr = 0x82F009D0;
	sub_8379F620(ctx, base);
	// bl 0x8379f650
	ctx.lr = 0x82F009D4;
	sub_8379F650(ctx, base);
loc_82F009D4:
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

__attribute__((alias("__imp__sub_82F009E8"))) PPC_WEAK_FUNC(sub_82F009E8);
PPC_FUNC_IMPL(__imp__sub_82F009E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F009F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// addi r9,r11,-14324
	ctx.r9.s64 = ctx.r11.s64 + -14324;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// stw r29,-26376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26376, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f039f0
	ctx.lr = 0x82F00A20;
	sub_82F039F0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,18980
	ctx.r30.s64 = ctx.r30.s64 + 18980;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f00a44
	if (cr6.eq) goto loc_82F00A44;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F00A44;
	sub_825952B8(ctx, base);
loc_82F00A44:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x831032a0
	ctx.lr = 0x82F00A58;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00A60"))) PPC_WEAK_FUNC(sub_82F00A60);
PPC_FUNC_IMPL(__imp__sub_82F00A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F00A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-14440
	ctx.r4.s64 = ctx.r11.s64 + -14440;
	// bl 0x83103328
	ctx.lr = 0x82F00A7C;
	sub_83103328(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r10,-14324
	ctx.r7.s64 = ctx.r10.s64 + -14324;
	// ori r8,r8,18976
	ctx.r8.u64 = ctx.r8.u64 | 18976;
	// std r31,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r31.u64);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// std r31,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r31.u64);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r7,r7,18980
	ctx.r7.s64 = ctx.r7.s64 + 18980;
	// ori r6,r6,18996
	ctx.r6.u64 = ctx.r6.u64 | 18996;
	// ori r5,r5,19000
	ctx.r5.u64 = ctx.r5.u64 | 19000;
	// ori r4,r4,19004
	ctx.r4.u64 = ctx.r4.u64 | 19004;
	// lis r29,-31774
	ctx.r29.s64 = -2082340864;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ld r10,-8504(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8504);
	// std r10,92(r30)
	PPC_STORE_U64(ctx.r30.u32 + 92, ctx.r10.u64);
	// ld r10,-8504(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8504);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// std r10,100(r30)
	PPC_STORE_U64(ctx.r30.u32 + 100, ctx.r10.u64);
	// ori r10,r3,19008
	ctx.r10.u64 = ctx.r3.u64 | 19008;
	// stwx r31,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u32);
	// ori r8,r11,19012
	ctx.r8.u64 = ctx.r11.u64 | 19012;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r31,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r31.u8);
	// ori r9,r9,19016
	ctx.r9.u64 = ctx.r9.u64 | 19016;
	// stb r31,120(r30)
	PPC_STORE_U8(ctx.r30.u32 + 120, ctx.r31.u8);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// stwx r31,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// stwx r31,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u32);
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// sthx r28,r30,r8
	PPC_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r28.u16);
	// lwz r11,-8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8456);
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x82f04238
	ctx.lr = 0x82F00B40;
	sub_82F04238(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r11,r8,22968
	ctx.r11.u64 = ctx.r8.u64 | 22968;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r8,r5,22974
	ctx.r8.u64 = ctx.r5.u64 | 22974;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r10,r7,22972
	ctx.r10.u64 = ctx.r7.u64 | 22972;
	// ori r9,r6,22973
	ctx.r9.u64 = ctx.r6.u64 | 22973;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// ori r7,r4,22975
	ctx.r7.u64 = ctx.r4.u64 | 22975;
	// ori r6,r3,22976
	ctx.r6.u64 = ctx.r3.u64 | 22976;
	// addi r5,r5,22980
	ctx.r5.s64 = ctx.r5.s64 + 22980;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stbx r31,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u8);
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// stbx r31,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u8);
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// addi r4,r4,22996
	ctx.r4.s64 = ctx.r4.s64 + 22996;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// bl 0x82f01620
	ctx.lr = 0x82F00BB8;
	sub_82F01620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00BC4"))) PPC_WEAK_FUNC(sub_82F00BC4);
PPC_FUNC_IMPL(__imp__sub_82F00BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00BC8"))) PPC_WEAK_FUNC(sub_82F00BC8);
PPC_FUNC_IMPL(__imp__sub_82F00BC8) {
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
	// bl 0x82f009e8
	ctx.lr = 0x82F00BE8;
	sub_82F009E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f00c00
	if (cr6.eq) goto loc_82F00C00;
	// bl 0x82416268
	ctx.lr = 0x82F00BFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F00C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F00C18"))) PPC_WEAK_FUNC(sub_82F00C18);
PPC_FUNC_IMPL(__imp__sub_82F00C18) {
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
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,23008
	ctx.r4.u64 = ctx.r4.u64 | 23008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F00C48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f00c64
	if (cr6.eq) goto loc_82F00C64;
	// bl 0x82f00a60
	ctx.lr = 0x82F00C54;
	sub_82F00A60(ctx, base);
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r31,r11,-26376
	ctx.r31.s64 = ctx.r11.s64 + -26376;
	// stw r3,-26376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26376, ctx.r3.u32);
	// b 0x82f00c74
	goto loc_82F00C74;
loc_82F00C64:
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-26376
	ctx.r31.s64 = ctx.r10.s64 + -26376;
	// stw r11,-26376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26376, ctx.r11.u32);
loc_82F00C74:
	// bl 0x831021a0
	ctx.lr = 0x82F00C78;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82F00C80;
	sub_82DA45F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04390
	ctx.lr = 0x82F00C94;
	sub_82F04390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103100
	ctx.lr = 0x82F00CA0;
	sub_83103100(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F00CB8"))) PPC_WEAK_FUNC(sub_82F00CB8);
PPC_FUNC_IMPL(__imp__sub_82F00CB8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82f40ae8
	ctx.lr = 0x82F00CD4;
	sub_82F40AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F00CE4"))) PPC_WEAK_FUNC(sub_82F00CE4);
PPC_FUNC_IMPL(__imp__sub_82F00CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00CE8"))) PPC_WEAK_FUNC(sub_82F00CE8);
PPC_FUNC_IMPL(__imp__sub_82F00CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82F00CF0;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r23,r11,2096
	ctx.r23.s64 = ctx.r11.s64 + 2096;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r23,-2484
	ctx.r6.s64 = ctx.r23.s64 + -2484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82F00D24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82f00d50
	if (!cr6.eq) goto loc_82F00D50;
	// bl 0x830ff290
	ctx.lr = 0x82F00D30;
	sub_830FF290(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
loc_82F00D3C:
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r24,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r24.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82F00D50:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq cr6,0x82f00d3c
	if (cr6.eq) goto loc_82F00D3C;
	// addi r4,r23,-60
	ctx.r4.s64 = ctx.r23.s64 + -60;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82F00D6C;
	sub_837B0C10(ctx, base);
	// addi r4,r23,-52
	ctx.r4.s64 = ctx.r23.s64 + -52;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x837b0c10
	ctx.lr = 0x82F00D78;
	sub_837B0C10(ctx, base);
	// addi r4,r23,-28
	ctx.r4.s64 = ctx.r23.s64 + -28;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x837b0c10
	ctx.lr = 0x82F00D84;
	sub_837B0C10(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82F00D90:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f00da8
	if (cr6.lt) goto loc_82F00DA8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82f00dac
	goto loc_82F00DAC;
loc_82F00DA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F00DAC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7eb0
	ctx.lr = 0x82F00DB8;
	sub_827A7EB0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82f00dd4
	if (!cr6.eq) goto loc_82F00DD4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82f00d90
	if (cr6.lt) goto loc_82F00D90;
	// b 0x82f00de0
	goto loc_82F00DE0;
loc_82F00DD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f41a30
	ctx.lr = 0x82F00DDC;
	sub_82F41A30(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82F00DE0:
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r31,r1,212
	ctx.r31.s64 = ctx.r1.s64 + 212;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82F00DF0:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f00e10
	if (cr6.lt) goto loc_82F00E10;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F00E10;
	sub_825952B8(ctx, base);
loc_82F00E10:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// bge 0x82f00df0
	if (!cr0.lt) goto loc_82F00DF0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82f00f48
	if (!cr6.eq) goto loc_82F00F48;
	// addi r4,r23,-8
	ctx.r4.s64 = ctx.r23.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82F00E38;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82f00e4c
	if (!cr6.lt) goto loc_82F00E4C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82F00E4C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a7eb0
	ctx.lr = 0x82F00E5C;
	sub_827A7EB0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82f00e70
	if (cr6.eq) goto loc_82F00E70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f40b68
	ctx.lr = 0x82F00E6C;
	sub_82F40B68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82F00E70:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f00e8c
	if (cr6.lt) goto loc_82F00E8C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82F00E8C;
	sub_825952B8(ctx, base);
loc_82F00E8C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// bne cr6,0x82f00f48
	if (!cr6.eq) goto loc_82F00F48;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r31,r11,-376
	ctx.r31.s64 = ctx.r11.s64 + -376;
loc_82F00EAC:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82F00EB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f00eb4
	if (!cr6.eq) goto loc_82F00EB4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82F00EE0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82f00f30
	if (!cr6.eq) goto loc_82F00F30;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82F00F00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82f00f1c
	if (cr6.eq) goto loc_82F00F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82f00f24
	goto loc_82F00F24;
loc_82F00F1C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82f40ae8
	ctx.lr = 0x82F00F24;
	sub_82F40AE8(ctx, base);
loc_82F00F24:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f00f48
	if (!cr6.eq) goto loc_82F00F48;
loc_82F00F30:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r30,2412
	cr6.compare<uint32_t>(ctx.r30.u32, 2412, xer);
	// blt cr6,0x82f00eac
	if (cr6.lt) goto loc_82F00EAC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82f00d3c
	if (cr6.eq) goto loc_82F00D3C;
loc_82F00F48:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83103100
	ctx.lr = 0x82F00F54;
	sub_83103100(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82f00d3c
	if (cr6.eq) goto loc_82F00D3C;
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// addi r4,r25,72
	ctx.r4.s64 = ctx.r25.s64 + 72;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00F80"))) PPC_WEAK_FUNC(sub_82F00F80);
PPC_FUNC_IMPL(__imp__sub_82F00F80) {
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82d740b0
	ctx.lr = 0x82F00F9C;
	sub_82D740B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d74810
	ctx.lr = 0x82F00FA4;
	sub_82D74810(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x82F00FC8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d73dd8
	ctx.lr = 0x82F00FD0;
	sub_82D73DD8(ctx, base);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82f00ff0
	if (cr6.lt) goto loc_82F00FF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F00FF0;
	sub_825952B8(ctx, base);
loc_82F00FF0:
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

__attribute__((alias("__imp__sub_82F01004"))) PPC_WEAK_FUNC(sub_82F01004);
PPC_FUNC_IMPL(__imp__sub_82F01004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01008"))) PPC_WEAK_FUNC(sub_82F01008);
PPC_FUNC_IMPL(__imp__sub_82F01008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F01010;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01220
	if (cr6.eq) goto loc_82F01220;
	// bl 0x82e6f960
	ctx.lr = 0x82F01020;
	sub_82E6F960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01220
	if (cr6.eq) goto loc_82F01220;
	// bl 0x835d3140
	ctx.lr = 0x82F01030;
	sub_835D3140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82F01038;
	sub_830FF290(ctx, base);
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x82f01218
	if (cr6.eq) goto loc_82F01218;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x82f01218
	if (cr6.eq) goto loc_82F01218;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// beq cr6,0x82f01220
	if (cr6.eq) goto loc_82F01220;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// beq cr6,0x82f01220
	if (cr6.eq) goto loc_82F01220;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82f010bc
	if (cr6.eq) goto loc_82F010BC;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82f010bc
	if (cr6.eq) goto loc_82F010BC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f010ac
	if (!cr6.eq) goto loc_82F010AC;
	// bl 0x82e6e978
	ctx.lr = 0x82F0108C;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f010ac
	if (cr6.eq) goto loc_82F010AC;
	// bl 0x82e6e978
	ctx.lr = 0x82F01098;
	sub_82E6E978(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,241(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 241);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
loc_82F010AC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f010bc
	if (cr6.eq) goto loc_82F010BC;
	// bl 0x82f41f48
	ctx.lr = 0x82F010BC;
	sub_82F41F48(ctx, base);
loc_82F010BC:
	// bl 0x82e6e978
	ctx.lr = 0x82F010C0;
	sub_82E6E978(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f010d8
	if (cr6.eq) goto loc_82F010D8;
	// bl 0x82e6e978
	ctx.lr = 0x82F010D0;
	sub_82E6E978(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r30,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r30.u8);
loc_82F010D8:
	// bl 0x82e6f960
	ctx.lr = 0x82F010DC;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f010ec
	if (cr6.eq) goto loc_82F010EC;
	// bl 0x82e6f960
	ctx.lr = 0x82F010E8;
	sub_82E6F960(ctx, base);
	// bl 0x82e6fac8
	ctx.lr = 0x82F010EC;
	sub_82E6FAC8(ctx, base);
loc_82F010EC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d898e0
	ctx.lr = 0x82F010FC;
	sub_82D898E0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82F01100;
	sub_83102DB0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82F01104;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82F01108;
	sub_830FFAA8(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// blt cr6,0x82f01178
	if (cr6.lt) goto loc_82F01178;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// ble cr6,0x82f0113c
	if (!cr6.gt) goto loc_82F0113C;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82f01178
	if (!cr6.eq) goto loc_82F01178;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82f011d0
	if (cr6.eq) goto loc_82F011D0;
loc_82F0113C:
	// bl 0x82dad2e0
	ctx.lr = 0x82F01140;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01158
	if (cr6.eq) goto loc_82F01158;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,2576
	ctx.r11.s64 = ctx.r11.s64 + 2576;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// b 0x82f011a4
	goto loc_82F011A4;
loc_82F01158:
	// bl 0x830ff290
	ctx.lr = 0x82F0115C;
	sub_830FF290(ctx, base);
	// lbz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f011ac
	if (cr6.eq) goto loc_82F011AC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,2576
	ctx.r11.s64 = ctx.r11.s64 + 2576;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82f011a4
	goto loc_82F011A4;
loc_82F01178:
	// bl 0x830ff290
	ctx.lr = 0x82F0117C;
	sub_830FF290(ctx, base);
	// lbz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 62);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f011ac
	if (cr6.eq) goto loc_82F011AC;
	// bl 0x830ff290
	ctx.lr = 0x82F0118C;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82F01190;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f011ac
	if (cr6.eq) goto loc_82F011AC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,2576
	ctx.r4.s64 = ctx.r11.s64 + 2576;
loc_82F011A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82F011AC;
	sub_8259D6C0(ctx, base);
loc_82F011AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f011d0
	if (cr6.eq) goto loc_82F011D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f00f80
	ctx.lr = 0x82F011C0;
	sub_82F00F80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F011C8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F011D0:
	// bl 0x82e6f960
	ctx.lr = 0x82F011D4;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f011e0
	if (cr6.eq) goto loc_82F011E0;
	// bl 0x82e6fae0
	ctx.lr = 0x82F011E0;
	sub_82E6FAE0(ctx, base);
loc_82F011E0:
	// bl 0x830ff290
	ctx.lr = 0x82F011E4;
	sub_830FF290(ctx, base);
	// bl 0x82df1558
	ctx.lr = 0x82F011E8;
	sub_82DF1558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f01208
	if (!cr6.eq) goto loc_82F01208;
	// bl 0x831021a0
	ctx.lr = 0x82F011F8;
	sub_831021A0(ctx, base);
	// lis r4,263
	ctx.r4.s64 = 17235968;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x83102a08
	ctx.lr = 0x82F01208;
	sub_83102A08(ctx, base);
loc_82F01208:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82F01210;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F01218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e6fae0
	ctx.lr = 0x82F01220;
	sub_82E6FAE0(ctx, base);
loc_82F01220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F01228"))) PPC_WEAK_FUNC(sub_82F01228);
PPC_FUNC_IMPL(__imp__sub_82F01228) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,2880
	ctx.r10.s64 = ctx.r11.s64 + 2880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x82F01254;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f0126c
	if (cr6.eq) goto loc_82F0126C;
	// bl 0x82416268
	ctx.lr = 0x82F01268;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F0126C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01284"))) PPC_WEAK_FUNC(sub_82F01284);
PPC_FUNC_IMPL(__imp__sub_82F01284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01288"))) PPC_WEAK_FUNC(sub_82F01288);
PPC_FUNC_IMPL(__imp__sub_82F01288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F01290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,2904
	ctx.r10.s64 = ctx.r11.s64 + 2904;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f012c0
	if (cr6.eq) goto loc_82F012C0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82F012C0;
	sub_825952B8(ctx, base);
loc_82F012C0:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f012f0
	if (cr6.lt) goto loc_82F012F0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F012F0;
	sub_825952B8(ctx, base);
loc_82F012F0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x831032a0
	ctx.lr = 0x82F01308;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F01310"))) PPC_WEAK_FUNC(sub_82F01310);
PPC_FUNC_IMPL(__imp__sub_82F01310) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82f01390
	if (cr6.eq) goto loc_82F01390;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f01390
	if (cr6.eq) goto loc_82F01390;
loc_82F01340:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f0136c
	if (cr6.eq) goto loc_82F0136C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01340
	if (!cr6.eq) goto loc_82F01340;
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
loc_82F0136C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82F01384;
	sub_831CE420(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
loc_82F01390:
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

__attribute__((alias("__imp__sub_82F013A4"))) PPC_WEAK_FUNC(sub_82F013A4);
PPC_FUNC_IMPL(__imp__sub_82F013A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F013A8"))) PPC_WEAK_FUNC(sub_82F013A8);
PPC_FUNC_IMPL(__imp__sub_82F013A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F013B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f013e4
	if (!cr6.eq) goto loc_82F013E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F013DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82F013E4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f01444
	if (cr6.eq) goto loc_82F01444;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82F013F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f01430
	if (!cr6.eq) goto loc_82F01430;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82F01420;
	sub_831CE420(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82f01438
	goto loc_82F01438;
loc_82F01430:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82F01438:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f013f8
	if (!cr6.eq) goto loc_82F013F8;
loc_82F01444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0144C"))) PPC_WEAK_FUNC(sub_82F0144C);
PPC_FUNC_IMPL(__imp__sub_82F0144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01450"))) PPC_WEAK_FUNC(sub_82F01450);
PPC_FUNC_IMPL(__imp__sub_82F01450) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01470
	if (cr6.eq) goto loc_82F01470;
	// bl 0x82f01310
	ctx.lr = 0x82F01470;
	sub_82F01310(ctx, base);
loc_82F01470:
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

__attribute__((alias("__imp__sub_82F01484"))) PPC_WEAK_FUNC(sub_82F01484);
PPC_FUNC_IMPL(__imp__sub_82F01484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01488"))) PPC_WEAK_FUNC(sub_82F01488);
PPC_FUNC_IMPL(__imp__sub_82F01488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F01490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f014fc
	if (cr6.eq) goto loc_82F014FC;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82F014B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f014e8
	if (!cr6.eq) goto loc_82F014E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82F014D8;
	sub_831CE420(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82f014f0
	goto loc_82F014F0;
loc_82F014E8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82F014F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f014b0
	if (!cr6.eq) goto loc_82F014B0;
loc_82F014FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F01504"))) PPC_WEAK_FUNC(sub_82F01504);
PPC_FUNC_IMPL(__imp__sub_82F01504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01508"))) PPC_WEAK_FUNC(sub_82F01508);
PPC_FUNC_IMPL(__imp__sub_82F01508) {
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
	// bl 0x82f01288
	ctx.lr = 0x82F01528;
	sub_82F01288(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01540
	if (cr6.eq) goto loc_82F01540;
	// bl 0x82416268
	ctx.lr = 0x82F0153C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F01540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01558"))) PPC_WEAK_FUNC(sub_82F01558);
PPC_FUNC_IMPL(__imp__sub_82F01558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F01560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82f01588
	if (cr6.eq) goto loc_82F01588;
	// bl 0x833bbd78
	ctx.lr = 0x82F01580;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
loc_82F01588:
	// lwz r31,104(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// addi r29,r28,104
	ctx.r29.s64 = ctx.r28.s64 + 104;
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f015c8
	if (cr6.eq) goto loc_82F015C8;
loc_82F0159C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f015b8
	if (cr6.eq) goto loc_82F015B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F015B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82F015B8:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f0159c
	if (!cr6.eq) goto loc_82F0159C;
loc_82F015C8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f015f8
	if (cr6.eq) goto loc_82F015F8;
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
	ctx.lr = 0x82F015F0;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82F015F8:
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r3,-25264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01610
	if (cr6.eq) goto loc_82F01610;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f01488
	ctx.lr = 0x82F01610;
	sub_82F01488(ctx, base);
loc_82F01610:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0161C"))) PPC_WEAK_FUNC(sub_82F0161C);
PPC_FUNC_IMPL(__imp__sub_82F0161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01620"))) PPC_WEAK_FUNC(sub_82F01620);
PPC_FUNC_IMPL(__imp__sub_82F01620) {
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
	// lis r30,-31756
	ctx.r30.s64 = -2081161216;
	// lwz r3,-25264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f0167c
	if (!cr6.eq) goto loc_82F0167C;
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
	ctx.lr = 0x82F0165C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01674
	if (cr6.eq) goto loc_82F01674;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x82f01678
	goto loc_82F01678;
loc_82F01674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F01678:
	// stw r3,-25264(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25264, ctx.r3.u32);
loc_82F0167C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01694"))) PPC_WEAK_FUNC(sub_82F01694);
PPC_FUNC_IMPL(__imp__sub_82F01694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01698"))) PPC_WEAK_FUNC(sub_82F01698);
PPC_FUNC_IMPL(__imp__sub_82F01698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F016A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31756
	ctx.r29.s64 = -2081161216;
	// lwz r11,-25264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01714
	if (cr6.eq) goto loc_82F01714;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82F016C8;
	sub_82595150(ctx, base);
	// lwz r31,-25264(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25264);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f01704
	if (cr6.eq) goto loc_82F01704;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f016f0
	if (cr6.eq) goto loc_82F016F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F016F0;
	sub_825952B8(ctx, base);
loc_82F016F0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82416268
	ctx.lr = 0x82F01704;
	sub_82416268(ctx, base);
loc_82F01704:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82F0170C;
	sub_82595170(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-25264(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25264, ctx.r30.u32);
loc_82F01714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0171C"))) PPC_WEAK_FUNC(sub_82F0171C);
PPC_FUNC_IMPL(__imp__sub_82F0171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01720"))) PPC_WEAK_FUNC(sub_82F01720);
PPC_FUNC_IMPL(__imp__sub_82F01720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F01728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,2732
	ctx.r4.s64 = ctx.r11.s64 + 2732;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82F01740;
	sub_83103328(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,2904
	ctx.r9.s64 = ctx.r10.s64 + 2904;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
loc_82F0176C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f0176c
	if (!cr6.eq) goto loc_82F0176C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F01790;
	sub_8259CC28(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833bca80
	ctx.lr = 0x82F017B4;
	sub_833BCA80(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82f017cc
	if (cr6.eq) goto loc_82F017CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82F017CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F017D4"))) PPC_WEAK_FUNC(sub_82F017D4);
PPC_FUNC_IMPL(__imp__sub_82F017D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F017D8"))) PPC_WEAK_FUNC(sub_82F017D8);
PPC_FUNC_IMPL(__imp__sub_82F017D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x82F01804;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01828
	if (cr6.eq) goto loc_82F01828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f01720
	ctx.lr = 0x82F01814;
	sub_82F01720(ctx, base);
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
loc_82F01828:
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

__attribute__((alias("__imp__sub_82F01840"))) PPC_WEAK_FUNC(sub_82F01840);
PPC_FUNC_IMPL(__imp__sub_82F01840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F01848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi. r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82f018a4
	if (cr0.eq) goto loc_82F018A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01874:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f01894
	if (cr6.eq) goto loc_82F01894;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x82f018a4
	if (cr6.eq) goto loc_82F018A4;
loc_82F01894:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82f01874
	if (cr6.lt) goto loc_82F01874;
loc_82F018A4:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f0190c
	if (!cr6.eq) goto loc_82F0190C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F018C4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f0190c
	if (cr6.eq) goto loc_82F0190C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,2764
	ctx.r4.s64 = ctx.r11.s64 + 2764;
	// bl 0x83103328
	ctx.lr = 0x82F018DC;
	sub_83103328(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r10,2880
	ctx.r9.s64 = ctx.r10.s64 + 2880;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x83103100
	ctx.lr = 0x82F01900;
	sub_83103100(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82F0190C;
	sub_835977D8(ctx, base);
loc_82F0190C:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F01918"))) PPC_WEAK_FUNC(sub_82F01918);
PPC_FUNC_IMPL(__imp__sub_82F01918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82F01920;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f01a6c
	if (cr6.eq) goto loc_82F01A6C;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82F01954:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0198c
	if (!cr6.eq) goto loc_82F0198C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82F0197C;
	sub_831CE420(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82f01a60
	goto loc_82F01A60;
loc_82F0198C:
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82f019c4
	if (!cr6.eq) goto loc_82F019C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82F019B4;
	sub_831CE420(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82f01a60
	goto loc_82F01A60;
loc_82F019C4:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82F019E4;
	sub_8259CB28(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x82f019fc
	if (!cr6.lt) goto loc_82F019FC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82F019FC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82F01A00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82f01a24
	if (cr6.eq) goto loc_82F01A24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f01a00
	if (cr6.eq) goto loc_82F01A00;
loc_82F01A24:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blt cr6,0x82f01a40
	if (cr6.lt) goto loc_82F01A40;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82F01A40;
	sub_825952B8(ctx, base);
loc_82F01A40:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bne cr6,0x82f01ab8
	if (!cr6.eq) goto loc_82F01AB8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82F01A60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01954
	if (!cr6.eq) goto loc_82F01954;
loc_82F01A6C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f017d8
	ctx.lr = 0x82F01A74;
	sub_82F017D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f01acc
	if (cr6.eq) goto loc_82F01ACC;
	// bl 0x831021a0
	ctx.lr = 0x82F01A88;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82F01A90;
	sub_82DA45F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82F01A98;
	sub_83103100(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82F01AA4;
	sub_835977D8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f01840
	ctx.lr = 0x82F01AB0;
	sub_82F01840(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82F01AB8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82f01840
	ctx.lr = 0x82F01AC4;
	sub_82F01840(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82F01ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F01AD8"))) PPC_WEAK_FUNC(sub_82F01AD8);
PPC_FUNC_IMPL(__imp__sub_82F01AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01b2c
	if (!cr6.eq) goto loc_82F01B2C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f01b2c
	if (!cr6.eq) goto loc_82F01B2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f01b2c
	if (!cr6.eq) goto loc_82F01B2C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f01b2c
	if (!cr6.eq) goto loc_82F01B2C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f01b30
	if (cr6.eq) goto loc_82F01B30;
loc_82F01B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01B30:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01B38"))) PPC_WEAK_FUNC(sub_82F01B38);
PPC_FUNC_IMPL(__imp__sub_82F01B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01b8c
	if (!cr6.eq) goto loc_82F01B8C;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bne cr6,0x82f01b8c
	if (!cr6.eq) goto loc_82F01B8C;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bne cr6,0x82f01b8c
	if (!cr6.eq) goto loc_82F01B8C;
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bne cr6,0x82f01b8c
	if (!cr6.eq) goto loc_82F01B8C;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f01b90
	if (cr6.eq) goto loc_82F01B90;
loc_82F01B8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01B90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01B98"))) PPC_WEAK_FUNC(sub_82F01B98);
PPC_FUNC_IMPL(__imp__sub_82F01B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82F01BA4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f01bdc
	if (!cr6.eq) goto loc_82F01BDC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x82f01ba4
	if (cr6.lt) goto loc_82F01BA4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F01BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01BE4"))) PPC_WEAK_FUNC(sub_82F01BE4);
PPC_FUNC_IMPL(__imp__sub_82F01BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01BE8"))) PPC_WEAK_FUNC(sub_82F01BE8);
PPC_FUNC_IMPL(__imp__sub_82F01BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82F01BF4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f01c2c
	if (!cr6.eq) goto loc_82F01C2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// blt cr6,0x82f01bf4
	if (cr6.lt) goto loc_82F01BF4;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F01C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01C34"))) PPC_WEAK_FUNC(sub_82F01C34);
PPC_FUNC_IMPL(__imp__sub_82F01C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01C38"))) PPC_WEAK_FUNC(sub_82F01C38);
PPC_FUNC_IMPL(__imp__sub_82F01C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82F01C44:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f01ca4
	if (!cr6.eq) goto loc_82F01CA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x82f01c44
	if (cr6.lt) goto loc_82F01C44;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F01C6C:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f01ca4
	if (!cr6.eq) goto loc_82F01CA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x82f01c6c
	if (cr6.lt) goto loc_82F01C6C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F01CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01CAC"))) PPC_WEAK_FUNC(sub_82F01CAC);
PPC_FUNC_IMPL(__imp__sub_82F01CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01CB0"))) PPC_WEAK_FUNC(sub_82F01CB0);
PPC_FUNC_IMPL(__imp__sub_82F01CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r9,r4,392
	ctx.r9.s64 = ctx.r4.s64 + 392;
	// subf r6,r4,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82F01CC0:
	// cmplwi cr6,r8,98
	cr6.compare<uint32_t>(ctx.r8.u32, 98, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f01cd4
	if (!cr6.lt) goto loc_82F01CD4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// blt cr6,0x82f01cdc
	if (cr6.lt) goto loc_82F01CDC;
loc_82F01CD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f01ce0
	goto loc_82F01CE0;
loc_82F01CDC:
	// lwz r11,-392(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -392);
loc_82F01CE0:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82f01d2c
	if (!cr6.eq) goto loc_82F01D2C;
	// cmplwi cr6,r8,98
	cr6.compare<uint32_t>(ctx.r8.u32, 98, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f01cfc
	if (!cr6.lt) goto loc_82F01CFC;
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// blt cr6,0x82f01d04
	if (cr6.lt) goto loc_82F01D04;
loc_82F01CFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f01d08
	goto loc_82F01D08;
loc_82F01D04:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F01D08:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82f01d2c
	if (!cr6.eq) goto loc_82F01D2C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r8,98
	cr6.compare<uint32_t>(ctx.r8.u32, 98, xer);
	// blt cr6,0x82f01cc0
	if (cr6.lt) goto loc_82F01CC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F01D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01D34"))) PPC_WEAK_FUNC(sub_82F01D34);
PPC_FUNC_IMPL(__imp__sub_82F01D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01D38"))) PPC_WEAK_FUNC(sub_82F01D38);
PPC_FUNC_IMPL(__imp__sub_82F01D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01e04
	if (!cr6.eq) goto loc_82F01E04;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f01d74
	if (!cr6.eq) goto loc_82F01D74;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f01d78
	if (cr6.eq) goto loc_82F01D78;
loc_82F01D74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01D78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01e04
	if (cr6.eq) goto loc_82F01E04;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82f01db0
	if (!cr6.eq) goto loc_82F01DB0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f01db4
	if (cr6.eq) goto loc_82F01DB4;
loc_82F01DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01DB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01e04
	if (cr6.eq) goto loc_82F01E04;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f01e04
	if (!cr6.eq) goto loc_82F01E04;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f01e04
	if (!cr6.eq) goto loc_82F01E04;
	// lhz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f01e04
	if (!cr6.eq) goto loc_82F01E04;
	// lhz r11,22(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// lhz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f01e08
	if (cr6.eq) goto loc_82F01E08;
loc_82F01E04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F01E08:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01E10"))) PPC_WEAK_FUNC(sub_82F01E10);
PPC_FUNC_IMPL(__imp__sub_82F01E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82F01E1C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f01e7c
	if (!cr6.eq) goto loc_82F01E7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x82f01e1c
	if (cr6.lt) goto loc_82F01E1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// addi r9,r3,7
	ctx.r9.s64 = ctx.r3.s64 + 7;
loc_82F01E48:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82f01e7c
	if (!cr6.eq) goto loc_82F01E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82f01e48
	if (cr6.lt) goto loc_82F01E48;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82F01E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F01E84"))) PPC_WEAK_FUNC(sub_82F01E84);
PPC_FUNC_IMPL(__imp__sub_82F01E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01E88"))) PPC_WEAK_FUNC(sub_82F01E88);
PPC_FUNC_IMPL(__imp__sub_82F01E88) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f01ec4
	if (!cr6.eq) goto loc_82F01EC4;
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
loc_82F01EC4:
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x83120738
	ctx.lr = 0x82F01ED8;
	sub_83120738(ctx, base);
	// lwz r8,2160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2160);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// subfe r4,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 & ctx.r8.u64;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// blt cr6,0x82f01f10
	if (cr6.lt) goto loc_82F01F10;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82F01F10:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82f01f24
	if (cr6.lt) goto loc_82F01F24;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82f01f28
	if (!cr6.gt) goto loc_82F01F28;
loc_82F01F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F01F28:
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

__attribute__((alias("__imp__sub_82F01F3C"))) PPC_WEAK_FUNC(sub_82F01F3C);
PPC_FUNC_IMPL(__imp__sub_82F01F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01F40"))) PPC_WEAK_FUNC(sub_82F01F40);
PPC_FUNC_IMPL(__imp__sub_82F01F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F01F48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82F01F60:
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(ctx.r30.s32, 13, xer);
	// blt cr6,0x82f01f70
	if (cr6.lt) goto loc_82F01F70;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82f01f78
	goto loc_82F01F78;
loc_82F01F70:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r11,1980(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1980);
loc_82F01F78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01fd0
	if (cr6.eq) goto loc_82F01FD0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x83123620
	ctx.lr = 0x82F01F94;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82F01FA4;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f01fb8
	if (cr6.eq) goto loc_82F01FB8;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F01FB8:
	// lwz r11,1996(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1996);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82f01fd0
	if (!cr6.eq) goto loc_82F01FD0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02034
	if (cr6.eq) goto loc_82F02034;
loc_82F01FD0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// blt cr6,0x82f01f60
	if (cr6.lt) goto loc_82F01F60;
	// lwz r11,1996(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1996);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f02028
	if (!cr6.eq) goto loc_82F02028;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02028
	if (!cr6.eq) goto loc_82F02028;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r29,1980
	ctx.r10.s64 = ctx.r29.s64 + 1980;
loc_82F01FFC:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f02040
	if (!cr6.eq) goto loc_82F02040;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// blt cr6,0x82f01ffc
	if (cr6.lt) goto loc_82F01FFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F02018:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0202c
	if (!cr6.eq) goto loc_82F0202C;
loc_82F02028:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F0202C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02034:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02040:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02018
	goto loc_82F02018;
}

__attribute__((alias("__imp__sub_82F02048"))) PPC_WEAK_FUNC(sub_82F02048);
PPC_FUNC_IMPL(__imp__sub_82F02048) {
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
	// lbz r11,2136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02078
	if (!cr6.eq) goto loc_82F02078;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f020e8
	goto loc_82F020E8;
loc_82F02078:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831236a0
	ctx.lr = 0x82F02088;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82F02098;
	sub_83120738(ctx, base);
	// lwz r8,2140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// li r11,132
	ctx.r11.s64 = 132;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r8,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// subfe r4,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 & ctx.r8.u64;
	// lwz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2144);
	// cmpwi cr6,r11,220
	cr6.compare<int32_t>(ctx.r11.s32, 220, xer);
	// blt cr6,0x82f020d0
	if (cr6.lt) goto loc_82F020D0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82F020D0:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82f020e4
	if (cr6.lt) goto loc_82F020E4;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82f020e8
	if (!cr6.gt) goto loc_82F020E8;
loc_82F020E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F020E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F02100"))) PPC_WEAK_FUNC(sub_82F02100);
PPC_FUNC_IMPL(__imp__sub_82F02100) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,2176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0213c
	if (!cr6.eq) goto loc_82F0213C;
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
loc_82F0213C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x82F02150;
	sub_83120738(ctx, base);
	// lwz r10,2180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82F02178"))) PPC_WEAK_FUNC(sub_82F02178);
PPC_FUNC_IMPL(__imp__sub_82F02178) {
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
	// lbz r11,2196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f021b0
	if (!cr6.eq) goto loc_82F021B0;
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
loc_82F021B0:
	// li r10,13
	ctx.r10.s64 = 13;
	// ld r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8314b1d0
	ctx.lr = 0x82F021D0;
	sub_8314B1D0(ctx, base);
	// lwz r9,2200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82f021f0
	if (cr6.lt) goto loc_82F021F0;
	// lwz r10,2204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82f021f4
	if (!cr6.gt) goto loc_82F021F4;
loc_82F021F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F021F4:
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

__attribute__((alias("__imp__sub_82F02208"))) PPC_WEAK_FUNC(sub_82F02208);
PPC_FUNC_IMPL(__imp__sub_82F02208) {
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
	// lbz r11,2216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02240
	if (!cr6.eq) goto loc_82F02240;
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
loc_82F02240:
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8319ad70
	ctx.lr = 0x82F02250;
	sub_8319AD70(ctx, base);
	// ld r10,2224(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2224);
	// cmpd cr6,r3,r10
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r10.s64, xer);
	// blt cr6,0x82f0226c
	if (cr6.lt) goto loc_82F0226C;
	// ld r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2232);
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82f02270
	if (!cr6.gt) goto loc_82F02270;
loc_82F0226C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F02270:
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

__attribute__((alias("__imp__sub_82F02284"))) PPC_WEAK_FUNC(sub_82F02284);
PPC_FUNC_IMPL(__imp__sub_82F02284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02288"))) PPC_WEAK_FUNC(sub_82F02288);
PPC_FUNC_IMPL(__imp__sub_82F02288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F02290;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2256);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f022b4
	if (!cr6.eq) goto loc_82F022B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F022B4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82F022CC;
	sub_831235B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ld r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 44);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x8319b1b8
	ctx.lr = 0x82F02300;
	sub_8319B1B8(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8319ad70
	ctx.lr = 0x82F0230C;
	sub_8319AD70(ctx, base);
	// ld r9,2264(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 2264);
	// cmpd cr6,r3,r9
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r9.s64, xer);
	// blt cr6,0x82f02328
	if (cr6.lt) goto loc_82F02328;
	// ld r11,2272(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 2272);
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82f0232c
	if (!cr6.gt) goto loc_82F0232C;
loc_82F02328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F0232C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F02334"))) PPC_WEAK_FUNC(sub_82F02334);
PPC_FUNC_IMPL(__imp__sub_82F02334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02338"))) PPC_WEAK_FUNC(sub_82F02338);
PPC_FUNC_IMPL(__imp__sub_82F02338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82F02340;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r3,3864
	ctx.r28.s64 = ctx.r3.s64 + 3864;
loc_82F02354:
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02388
	if (!cr6.eq) goto loc_82F02388;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82f02354
	if (cr6.lt) goto loc_82F02354;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02390
	if (!cr6.eq) goto loc_82F02390;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82F02388:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02370
	goto loc_82F02370;
loc_82F02390:
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r24,24576
	ctx.r24.s64 = 1610612736;
	// lis r25,4096
	ctx.r25.s64 = 268435456;
	// lis r26,8192
	ctx.r26.s64 = 536870912;
	// lis r27,12288
	ctx.r27.s64 = 805306368;
loc_82F023A4:
	// li r11,6
	ctx.r11.s64 = 6;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// lbzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f02490
	if (cr6.eq) goto loc_82F02490;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82f02490
	if (cr6.gt) goto loc_82F02490;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f02404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F02404;
	// bdzf 4*cr6+eq,0x82f02438
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F02438;
	// bdzf 4*cr6+eq,0x82f02428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F02428;
	// bne cr6,0x82f02418
	if (!cr6.eq) goto loc_82F02418;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02490
	if (cr6.eq) goto loc_82F02490;
	// b 0x82f0248c
	goto loc_82F0248C;
loc_82F02404:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02490
	if (cr6.eq) goto loc_82F02490;
	// b 0x82f0248c
	goto loc_82F0248C;
loc_82F02418:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// b 0x82f02488
	goto loc_82F02488;
loc_82F02428:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// b 0x82f02488
	goto loc_82F02488;
loc_82F02438:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// beq cr6,0x82f02464
	if (cr6.eq) goto loc_82F02464;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83180558
	ctx.lr = 0x82F02458;
	sub_83180558(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82f02490
	if (!cr6.eq) goto loc_82F02490;
loc_82F02464:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// beq cr6,0x82f02490
	if (cr6.eq) goto loc_82F02490;
	// rlwinm r10,r11,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02490
	if (!cr6.eq) goto loc_82F02490;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_82F02488:
	// bne cr6,0x82f02490
	if (!cr6.eq) goto loc_82F02490;
loc_82F0248C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F02490:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82f023a4
	if (cr6.lt) goto loc_82F023A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F024A8"))) PPC_WEAK_FUNC(sub_82F024A8);
PPC_FUNC_IMPL(__imp__sub_82F024A8) {
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
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r11,2092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lhz r3,188(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 188);
	// lwz r9,-7912(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7912);
	// rlwinm r8,r9,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f024f4
	if (!cr6.eq) goto loc_82F024F4;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r6,r10,14
	ctx.r6.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82f024f8
	if (cr6.eq) goto loc_82F024F8;
loc_82F024F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F024F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02520
	if (cr6.eq) goto loc_82F02520;
	// lhz r10,2108(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2108);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82f02520
	if (!cr6.eq) goto loc_82F02520;
	// lwz r10,2100(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2100);
	// cmpwi cr6,r10,82
	cr6.compare<int32_t>(ctx.r10.s32, 82, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82f02524
	if (!cr6.eq) goto loc_82F02524;
loc_82F02520:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F02524:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02558
	if (cr6.eq) goto loc_82F02558;
	// lwz r31,2100(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2100);
	// bl 0x831a03c8
	ctx.lr = 0x82F02538;
	sub_831A03C8(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
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
loc_82F02558:
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f02578
	if (!cr6.eq) goto loc_82F02578;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f0257c
	if (cr6.eq) goto loc_82F0257C;
loc_82F02578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0257C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f025a4
	if (cr6.eq) goto loc_82F025A4;
	// lwz r11,2100(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2100);
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// bne cr6,0x82f025a4
	if (!cr6.eq) goto loc_82F025A4;
	// lhz r11,2108(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2108);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f025a8
	if (!cr6.eq) goto loc_82F025A8;
loc_82F025A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F025A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f025dc
	if (cr6.eq) goto loc_82F025DC;
	// lhz r11,2108(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2108);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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
loc_82F025DC:
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

__attribute__((alias("__imp__sub_82F025F4"))) PPC_WEAK_FUNC(sub_82F025F4);
PPC_FUNC_IMPL(__imp__sub_82F025F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F025F8"))) PPC_WEAK_FUNC(sub_82F025F8);
PPC_FUNC_IMPL(__imp__sub_82F025F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831235b8
	ctx.lr = 0x82F02628;
	sub_831235B8(ctx, base);
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lwz r8,2116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2116);
	// rlwinm r7,r8,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-7912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7912);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f02658
	if (!cr6.eq) goto loc_82F02658;
	// xor r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f0265c
	if (cr6.eq) goto loc_82F0265C;
loc_82F02658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0265C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02678
	if (cr6.eq) goto loc_82F02678;
	// lwz r11,2124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f0267c
	if (!cr6.eq) goto loc_82F0267C;
loc_82F02678:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0267C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f026ac
	if (cr6.eq) goto loc_82F026AC;
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,2124(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x831a0480
	ctx.lr = 0x82F0269C;
	sub_831A0480(ctx, base);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82f0273c
	goto loc_82F0273C;
loc_82F026AC:
	// rlwinm r11,r8,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f026cc
	if (!cr6.eq) goto loc_82F026CC;
	// xor r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f026d0
	if (cr6.eq) goto loc_82F026D0;
loc_82F026CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F026D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f026ec
	if (!cr6.eq) goto loc_82F026EC;
	// lwz r11,2124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f026f0
	if (cr6.eq) goto loc_82F026F0;
loc_82F026EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F026F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02738
	if (cr6.eq) goto loc_82F02738;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f02724
	if (!cr6.eq) goto loc_82F02724;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02728
	if (cr6.eq) goto loc_82F02728;
loc_82F02724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82f0273c
	goto loc_82F0273C;
loc_82F02738:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F0273C:
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

__attribute__((alias("__imp__sub_82F02754"))) PPC_WEAK_FUNC(sub_82F02754);
PPC_FUNC_IMPL(__imp__sub_82F02754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02758"))) PPC_WEAK_FUNC(sub_82F02758);
PPC_FUNC_IMPL(__imp__sub_82F02758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82F02760;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x83763ef8
	ctx.lr = 0x82F02774;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f02784
	if (!cr6.eq) goto loc_82F02784;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82F02784:
	// lis r30,-31774
	ctx.r30.s64 = -2082340864;
	// lwz r11,2116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2116);
	// ld r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// li r27,-1
	ctx.r27.s64 = -1;
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-7912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7912);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f027c0
	if (!cr6.eq) goto loc_82F027C0;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r7,r9,14
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82f027c4
	if (cr6.eq) goto loc_82F027C4;
loc_82F027C0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F027C4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f027e0
	if (cr6.eq) goto loc_82F027E0;
	// lwz r9,2124(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// cmpwi cr6,r9,82
	cr6.compare<int32_t>(ctx.r9.s32, 82, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x82f027e4
	if (!cr6.eq) goto loc_82F027E4;
loc_82F027E0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F027E4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f02818
	if (cr6.eq) goto loc_82F02818;
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,2124(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x831a0480
	ctx.lr = 0x82F02804;
	sub_831A0480(ctx, base);
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82F02818:
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f02838
	if (!cr6.eq) goto loc_82F02838;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f0283c
	if (cr6.eq) goto loc_82F0283C;
loc_82F02838:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0283C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02858
	if (!cr6.eq) goto loc_82F02858;
	// lwz r11,2124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2124);
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f0285c
	if (cr6.eq) goto loc_82F0285C;
loc_82F02858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0285C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f029ac
	if (cr6.eq) goto loc_82F029AC;
	// bl 0x831156e8
	ctx.lr = 0x82F0286C;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// lwzx r29,r3,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82f0296c
	if (cr6.eq) goto loc_82F0296C;
	// lwz r11,-7912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7912);
	// addis r6,r3,72
	ctx.r6.s64 = ctx.r3.s64 + 4718592;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// addi r6,r6,7136
	ctx.r6.s64 = ctx.r6.s64 + 7136;
	// ori r30,r10,58144
	ctx.r30.u64 = ctx.r10.u64 | 58144;
	// ld r5,-7960(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -7960);
loc_82F028AC:
	// cmplwi cr6,r4,653
	cr6.compare<uint32_t>(ctx.r4.u32, 653, xer);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bge cr6,0x82f028bc
	if (!cr6.lt) goto loc_82F028BC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82F028BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82f0295c
	if (cr6.eq) goto loc_82F0295C;
	// lwz r11,796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 796);
	// rlwinm r9,r11,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// beq cr6,0x82f0295c
	if (cr6.eq) goto loc_82F0295C;
	// lhz r9,808(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 808);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f0292c
	if (cr6.eq) goto loc_82F0292C;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
loc_82F028F4:
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82f02908
	if (!cr6.lt) goto loc_82F02908;
	// ld r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
loc_82F02908:
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// beq cr6,0x82f02928
	if (cr6.eq) goto loc_82F02928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82f028f4
	if (cr6.lt) goto loc_82F028F4;
	// b 0x82f0292c
	goto loc_82F0292C;
loc_82F02928:
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
loc_82F0292C:
	// xor r11,r8,r27
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// rlwinm r10,r11,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f0294c
	if (!cr6.eq) goto loc_82F0294C;
	// clrlwi r11,r27,14
	ctx.r11.u64 = ctx.r27.u32 & 0x3FFFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f02950
	if (cr6.eq) goto loc_82F02950;
loc_82F0294C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0296c
	if (!cr6.eq) goto loc_82F0296C;
loc_82F0295C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,1312
	ctx.r6.s64 = ctx.r6.s64 + 1312;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x82f028ac
	if (cr6.lt) goto loc_82F028AC;
loc_82F0296C:
	// lwz r11,2116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2116);
	// xor r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f02994
	if (!cr6.eq) goto loc_82F02994;
	// xor r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f02998
	if (cr6.eq) goto loc_82F02998;
loc_82F02994:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02998:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82F029AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F029B8"))) PPC_WEAK_FUNC(sub_82F029B8);
PPC_FUNC_IMPL(__imp__sub_82F029B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F029C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,2000
	ctx.r29.s64 = ctx.r3.s64 + 2000;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F029DC:
	// li r11,7
	ctx.r11.s64 = 7;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// lbzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f02a4c
	if (cr6.eq) goto loc_82F02A4C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831236d0
	ctx.lr = 0x82F02A0C;
	sub_831236D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82F02A1C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02a38
	if (cr6.eq) goto loc_82F02A38;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82F02A38:
	// lwz r10,2008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2008);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f02a4c
	if (!cr6.eq) goto loc_82F02A4C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02aac
	if (cr6.eq) goto loc_82F02AAC;
loc_82F02A4C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82f029dc
	if (cr6.lt) goto loc_82F029DC;
	// lwz r11,2008(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2008);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f02aa0
	if (!cr6.eq) goto loc_82F02AA0;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02aa0
	if (!cr6.eq) goto loc_82F02AA0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F02A74:
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02ab8
	if (!cr6.eq) goto loc_82F02AB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82f02a74
	if (cr6.lt) goto loc_82F02A74;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F02A90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02aa4
	if (!cr6.eq) goto loc_82F02AA4;
loc_82F02AA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F02AA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02AAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02AB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02a90
	goto loc_82F02A90;
}

__attribute__((alias("__imp__sub_82F02AC0"))) PPC_WEAK_FUNC(sub_82F02AC0);
PPC_FUNC_IMPL(__imp__sub_82F02AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F02AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r26,r3,2012
	ctx.r26.s64 = ctx.r3.s64 + 2012;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F02AE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(ctx.r31.s32, 28, xer);
	// blt cr6,0x82f02af4
	if (cr6.lt) goto loc_82F02AF4;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82F02AF4:
	// lbzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02b4c
	if (cr6.eq) goto loc_82F02B4C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123700
	ctx.lr = 0x82F02B0C;
	sub_83123700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82F02B1C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02b38
	if (cr6.eq) goto loc_82F02B38;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F02B38:
	// lwz r10,2040(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2040);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f02b4c
	if (!cr6.eq) goto loc_82F02B4C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02bac
	if (cr6.eq) goto loc_82F02BAC;
loc_82F02B4C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,28
	cr6.compare<uint32_t>(ctx.r31.u32, 28, xer);
	// blt cr6,0x82f02ae4
	if (cr6.lt) goto loc_82F02AE4;
	// lwz r11,2040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2040);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f02ba0
	if (!cr6.eq) goto loc_82F02BA0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02ba0
	if (!cr6.eq) goto loc_82F02BA0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F02B74:
	// lbzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02bb8
	if (!cr6.eq) goto loc_82F02BB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// blt cr6,0x82f02b74
	if (cr6.lt) goto loc_82F02B74;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F02B90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02ba4
	if (!cr6.eq) goto loc_82F02BA4;
loc_82F02BA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F02BA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02BB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02b90
	goto loc_82F02B90;
}

__attribute__((alias("__imp__sub_82F02BC0"))) PPC_WEAK_FUNC(sub_82F02BC0);
PPC_FUNC_IMPL(__imp__sub_82F02BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F02BC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,2044
	ctx.r30.s64 = ctx.r3.s64 + 2044;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F02BE0:
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02c14
	if (!cr6.eq) goto loc_82F02C14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82f02be0
	if (cr6.lt) goto loc_82F02BE0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F02BFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02c1c
	if (!cr6.eq) goto loc_82F02C1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82F02C14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02bfc
	goto loc_82F02BFC;
loc_82F02C1C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F02C20:
	// li r11,18
	ctx.r11.s64 = 18;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82f02c68
	if (cr6.eq) goto loc_82F02C68;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x82F02C58;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x82f02c68
	if (!cr6.eq) goto loc_82F02C68;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82F02C68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82f02c20
	if (cr6.lt) goto loc_82F02C20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F02C80"))) PPC_WEAK_FUNC(sub_82F02C80);
PPC_FUNC_IMPL(__imp__sub_82F02C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2062
	ctx.r9.s64 = ctx.r10.s64 + 2062;
loc_82F02C90:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02cc0
	if (!cr6.eq) goto loc_82F02CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// blt cr6,0x82f02c90
	if (cr6.lt) goto loc_82F02C90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02CAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02cc8
	if (!cr6.eq) goto loc_82F02CC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F02CC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02cac
	goto loc_82F02CAC;
loc_82F02CC8:
	// li r10,23
	ctx.r10.s64 = 23;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82F02CD4:
	// li r10,23
	ctx.r10.s64 = 23;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f02d08
	if (cr6.eq) goto loc_82F02D08;
	// lbz r10,196(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 196);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82f02d08
	if (!cr6.eq) goto loc_82F02D08;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F02D08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82f02cd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F02CD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F02D14"))) PPC_WEAK_FUNC(sub_82F02D14);
PPC_FUNC_IMPL(__imp__sub_82F02D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02D18"))) PPC_WEAK_FUNC(sub_82F02D18);
PPC_FUNC_IMPL(__imp__sub_82F02D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F02D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r26,r3,2296
	ctx.r26.s64 = ctx.r3.s64 + 2296;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,98
	cr6.compare<uint32_t>(ctx.r28.u32, 98, xer);
	// blt cr6,0x82f02d48
	if (cr6.lt) goto loc_82F02D48;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82f02d74
	goto loc_82F02D74;
loc_82F02D48:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02d70
	if (!cr6.eq) goto loc_82F02D70;
	// addi r11,r31,98
	ctx.r11.s64 = ctx.r31.s64 + 98;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82f02d74
	if (cr6.eq) goto loc_82F02D74;
loc_82F02D70:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F02D74:
	// cmpwi cr6,r31,39
	cr6.compare<int32_t>(ctx.r31.s32, 39, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x82f02d88
	if (!cr6.eq) goto loc_82F02D88;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02d94
	goto loc_82F02D94;
loc_82F02D88:
	// addi r11,r31,-40
	ctx.r11.s64 = ctx.r31.s64 + -40;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82F02D94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02df0
	if (cr6.eq) goto loc_82F02DF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82F02DB0;
	sub_83120738(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02e58
	if (cr6.eq) goto loc_82F02E58;
	// cmplwi cr6,r31,98
	cr6.compare<uint32_t>(ctx.r31.u32, 98, xer);
	// blt cr6,0x82f02dcc
	if (cr6.lt) goto loc_82F02DCC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f02dd8
	goto loc_82F02DD8;
loc_82F02DCC:
	// addi r11,r31,574
	ctx.r11.s64 = ctx.r31.s64 + 574;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_82F02DD8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82f02e58
	if (cr6.eq) goto loc_82F02E58;
loc_82F02DE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82F02DF0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f02e58
	if (cr6.eq) goto loc_82F02E58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83120738
	ctx.lr = 0x82F02E0C;
	sub_83120738(ctx, base);
	// cmplwi cr6,r31,98
	cr6.compare<uint32_t>(ctx.r31.u32, 98, xer);
	// blt cr6,0x82f02e1c
	if (cr6.lt) goto loc_82F02E1C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f02e28
	goto loc_82F02E28;
loc_82F02E1C:
	// addi r11,r31,574
	ctx.r11.s64 = ctx.r31.s64 + 574;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_82F02E28:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x82f02de4
	if (cr6.lt) goto loc_82F02DE4;
	// cmplwi cr6,r31,98
	cr6.compare<uint32_t>(ctx.r31.u32, 98, xer);
	// blt cr6,0x82f02e44
	if (cr6.lt) goto loc_82F02E44;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82f02e50
	goto loc_82F02E50;
loc_82F02E44:
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
loc_82F02E50:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82f02de4
	if (cr6.gt) goto loc_82F02DE4;
loc_82F02E58:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,98
	cr6.compare<uint32_t>(ctx.r31.u32, 98, xer);
	// blt cr6,0x82f02d48
	if (cr6.lt) goto loc_82F02D48;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F02E70"))) PPC_WEAK_FUNC(sub_82F02E70);
PPC_FUNC_IMPL(__imp__sub_82F02E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F02E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,3872
	ctx.r31.s64 = ctx.r3.s64 + 3872;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02E8C:
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f02ee0
	if (!cr6.eq) goto loc_82F02EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82f02e8c
	if (cr6.lt) goto loc_82F02E8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
loc_82F02EAC:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f02ee0
	if (!cr6.eq) goto loc_82F02EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82f02eac
	if (cr6.lt) goto loc_82F02EAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F02EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02ee8
	if (!cr6.eq) goto loc_82F02EE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F02EE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f02ec8
	goto loc_82F02EC8;
loc_82F02EE8:
	// ld r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831a3870
	ctx.lr = 0x82F02EFC;
	sub_831A3870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
loc_82F02F04:
	// li r10,7
	ctx.r10.s64 = 7;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f02f58
	if (cr6.eq) goto loc_82F02F58;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f02f38
	if (!cr6.lt) goto loc_82F02F38;
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
loc_82F02F38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,66
	cr6.compare<uint32_t>(ctx.r10.u32, 66, xer);
	// blt cr6,0x82f02f4c
	if (cr6.lt) goto loc_82F02F4C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f02f58
	goto loc_82F02F58;
loc_82F02F4C:
	// lwz r10,3888(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f02ffc
	if (cr6.eq) goto loc_82F02FFC;
loc_82F02F58:
	// li r10,7
	ctx.r10.s64 = 7;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r5,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r3,7(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f02fb0
	if (cr6.eq) goto loc_82F02FB0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x82f02f90
	if (!cr6.lt) goto loc_82F02F90;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
loc_82F02F90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,66
	cr6.compare<uint32_t>(ctx.r10.u32, 66, xer);
	// blt cr6,0x82f02fa4
	if (cr6.lt) goto loc_82F02FA4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82f02fb0
	goto loc_82F02FB0;
loc_82F02FA4:
	// lwz r10,3888(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f02ffc
	if (cr6.eq) goto loc_82F02FFC;
loc_82F02FB0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x82f02f04
	if (cr6.lt) goto loc_82F02F04;
	// lwz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3888);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82f02ff0
	if (!cr6.eq) goto loc_82F02FF0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02ff0
	if (!cr6.eq) goto loc_82F02FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b28e40
	ctx.lr = 0x82F02FE0;
	sub_82B28E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f02ff4
	if (!cr6.eq) goto loc_82F02FF4;
loc_82F02FF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F02FF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F02FFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03008"))) PPC_WEAK_FUNC(sub_82F03008);
PPC_FUNC_IMPL(__imp__sub_82F03008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82F03010;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F0301C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f0301c
	if (!cr6.eq) goto loc_82F0301C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rotlwi r25,r8,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// beq cr6,0x82f031ac
	if (cr6.eq) goto loc_82F031AC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r26,192
	ctx.r26.s64 = 192;
	// ori r27,r11,65504
	ctx.r27.u64 = ctx.r11.u64 | 65504;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
loc_82F0305C:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,224
	cr6.compare<uint32_t>(ctx.r3.u32, 224, xer);
	// blt cr6,0x82f03070
	if (cr6.lt) goto loc_82F03070;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82f0307c
	goto loc_82F0307C;
loc_82F03070:
	// subfc r11,r26,r3
	xer.ca = ctx.r3.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82F0307C:
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bgt cr6,0x82f031ac
	if (cr6.gt) goto loc_82F031AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82f03188
	if (!cr6.eq) goto loc_82F03188;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,50080
	cr6.compare<uint32_t>(ctx.r11.u32, 50080, xer);
	// blt cr6,0x82f03160
	if (cr6.lt) goto loc_82F03160;
	// cmplwi cr6,r11,50622
	cr6.compare<uint32_t>(ctx.r11.u32, 50622, xer);
	// bgt cr6,0x82f03160
	if (cr6.gt) goto loc_82F03160;
	// cmplwi cr6,r11,50110
	cr6.compare<uint32_t>(ctx.r11.u32, 50110, xer);
	// bgt cr6,0x82f030cc
	if (cr6.gt) goto loc_82F030CC;
	// cmplwi cr6,r11,50103
	cr6.compare<uint32_t>(ctx.r11.u32, 50103, xer);
	// beq cr6,0x82f03160
	if (cr6.eq) goto loc_82F03160;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82f0315c
	goto loc_82F0315C;
loc_82F030CC:
	// cmplwi cr6,r11,50111
	cr6.compare<uint32_t>(ctx.r11.u32, 50111, xer);
	// bne cr6,0x82f030dc
	if (!cr6.eq) goto loc_82F030DC;
	// li r11,-14920
	ctx.r11.s64 = -14920;
	// b 0x82f03160
	goto loc_82F03160;
loc_82F030DC:
	// cmplwi cr6,r11,50305
	cr6.compare<uint32_t>(ctx.r11.u32, 50305, xer);
	// blt cr6,0x82f03160
	if (cr6.lt) goto loc_82F03160;
	// cmplwi cr6,r11,50359
	cr6.compare<uint32_t>(ctx.r11.u32, 50359, xer);
	// bgt cr6,0x82f03104
	if (cr6.gt) goto loc_82F03104;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82f03160
	if (cr0.eq) goto loc_82F03160;
	// b 0x82f03158
	goto loc_82F03158;
loc_82F03104:
	// cmplwi cr6,r11,50362
	cr6.compare<uint32_t>(ctx.r11.u32, 50362, xer);
	// blt cr6,0x82f03160
	if (cr6.lt) goto loc_82F03160;
	// cmplwi cr6,r11,50568
	cr6.compare<uint32_t>(ctx.r11.u32, 50568, xer);
	// ble cr6,0x82f03144
	if (!cr6.gt) goto loc_82F03144;
	// cmplwi cr6,r11,50571
	cr6.compare<uint32_t>(ctx.r11.u32, 50571, xer);
	// blt cr6,0x82f03160
	if (cr6.lt) goto loc_82F03160;
	// cmplwi cr6,r11,50615
	cr6.compare<uint32_t>(ctx.r11.u32, 50615, xer);
	// bgt cr6,0x82f0313c
	if (cr6.gt) goto loc_82F0313C;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82f03160
	if (cr0.eq) goto loc_82F03160;
	// b 0x82f03158
	goto loc_82F03158;
loc_82F0313C:
	// cmplwi cr6,r11,50618
	cr6.compare<uint32_t>(ctx.r11.u32, 50618, xer);
	// blt cr6,0x82f03160
	if (cr6.lt) goto loc_82F03160;
loc_82F03144:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82f03160
	if (!cr0.eq) goto loc_82F03160;
loc_82F03158:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82F0315C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82F03160:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// srawi r7,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// stb r8,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// b 0x82f03198
	goto loc_82F03198;
loc_82F03188:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82f03198
	if (!cr6.eq) goto loc_82F03198;
	// bl 0x831d47d0
	ctx.lr = 0x82F03194;
	sub_831D47D0(ctx, base);
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
loc_82F03198:
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// add r28,r30,r29
	ctx.r28.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0305c
	if (!cr6.eq) goto loc_82F0305C;
loc_82F031AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F031B4"))) PPC_WEAK_FUNC(sub_82F031B4);
PPC_FUNC_IMPL(__imp__sub_82F031B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F031B8"))) PPC_WEAK_FUNC(sub_82F031B8);
PPC_FUNC_IMPL(__imp__sub_82F031B8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f031ec
	if (cr6.lt) goto loc_82F031EC;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82f031f0
	goto loc_82F031F0;
loc_82F031EC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82F031F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82F03200;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82f033ec
	if (!cr6.eq) goto loc_82F033EC;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82f01b98
	ctx.lr = 0x82F03214;
	sub_82F01B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82f01c38
	ctx.lr = 0x82F0322C;
	sub_82F01C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82f01be8
	ctx.lr = 0x82F03244;
	sub_82F01BE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,92
	ctx.r10.s64 = ctx.r30.s64 + 92;
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
loc_82F0325C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f0340c
	if (!cr6.eq) goto loc_82F0340C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82f0325c
	if (cr6.lt) goto loc_82F0325C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F0327C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,110
	ctx.r10.s64 = ctx.r30.s64 + 110;
	// addi r9,r31,110
	ctx.r9.s64 = ctx.r31.s64 + 110;
loc_82F03294:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f03414
	if (!cr6.eq) goto loc_82F03414;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// blt cr6,0x82f03294
	if (cr6.lt) goto loc_82F03294;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F032B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x82f01ad8
	ctx.lr = 0x82F032CC;
	sub_82F01AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// bl 0x82f01ad8
	ctx.lr = 0x82F032E4;
	sub_82F01AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x82f01ad8
	ctx.lr = 0x82F032FC;
	sub_82F01AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x82f01ad8
	ctx.lr = 0x82F03314;
	sub_82F01AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// bl 0x82f01b38
	ctx.lr = 0x82F0332C;
	sub_82F01B38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,304
	ctx.r4.s64 = ctx.r31.s64 + 304;
	// addi r3,r30,304
	ctx.r3.s64 = ctx.r30.s64 + 304;
	// bl 0x82f01b38
	ctx.lr = 0x82F03344;
	sub_82F01B38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x82f01d38
	ctx.lr = 0x82F0335C;
	sub_82F01D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x82f01d38
	ctx.lr = 0x82F03374;
	sub_82F01D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,1912
	ctx.r10.s64 = ctx.r30.s64 + 1912;
	// addi r9,r31,1912
	ctx.r9.s64 = ctx.r31.s64 + 1912;
loc_82F0338C:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82f0341c
	if (!cr6.eq) goto loc_82F0341C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82f0338c
	if (cr6.lt) goto loc_82F0338C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F033AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// addi r3,r30,344
	ctx.r3.s64 = ctx.r30.s64 + 344;
	// bl 0x82f01cb0
	ctx.lr = 0x82F033C4;
	sub_82F01CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f033ec
	if (cr6.eq) goto loc_82F033EC;
	// addi r4,r31,1920
	ctx.r4.s64 = ctx.r31.s64 + 1920;
	// addi r3,r30,1920
	ctx.r3.s64 = ctx.r30.s64 + 1920;
	// bl 0x82f01e10
	ctx.lr = 0x82F033DC;
	sub_82F01E10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f033f0
	if (!cr6.eq) goto loc_82F033F0;
loc_82F033EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F033F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82F0340C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f0327c
	goto loc_82F0327C;
loc_82F03414:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f032b4
	goto loc_82F032B4;
loc_82F0341C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f033ac
	goto loc_82F033AC;
}

__attribute__((alias("__imp__sub_82F03424"))) PPC_WEAK_FUNC(sub_82F03424);
PPC_FUNC_IMPL(__imp__sub_82F03424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03428"))) PPC_WEAK_FUNC(sub_82F03428);
PPC_FUNC_IMPL(__imp__sub_82F03428) {
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
	// lwz r11,3932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3932);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,3928
	ctx.r3.s64 = ctx.r3.s64 + 3928;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82F0344C;
	sub_82CD17D8(ctx, base);
	// lwz r9,3932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,3932(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,3932(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F03480"))) PPC_WEAK_FUNC(sub_82F03480);
PPC_FUNC_IMPL(__imp__sub_82F03480) {
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
	// bl 0x83818130
	ctx.lr = 0x82F034A8;
	sub_83818130(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x82F034BC;
	sub_837BA1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82F034D8"))) PPC_WEAK_FUNC(sub_82F034D8);
PPC_FUNC_IMPL(__imp__sub_82F034D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F034E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// sth r30,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r30.u16);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stb r30,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r30.u8);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
loc_82F0353C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f0353c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F0353C;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x831cdcf0
	ctx.lr = 0x82F03558;
	sub_831CDCF0(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,110
	ctx.r3.s64 = ctx.r31.s64 + 110;
	// bl 0x831cdcf0
	ctx.lr = 0x82F03568;
	sub_831CDCF0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r8,r31,160
	ctx.r8.s64 = ctx.r31.s64 + 160;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r9,82
	ctx.r9.s64 = 82;
	// lwz r10,-7912(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7912);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r10,-7912(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7912);
	// rlwimi r29,r10,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// sth r3,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r3.u16);
	// sth r3,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r3.u16);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r10,-7912(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7912);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r10,-7912(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7912);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r10,98
	ctx.r10.s64 = 98;
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// addi r9,r31,344
	ctx.r9.s64 = ctx.r31.s64 + 344;
	// sth r3,182(r31)
	PPC_STORE_U16(ctx.r31.u32 + 182, ctx.r3.u16);
	// sth r3,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r3.u16);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// addi r10,r9,1172
	ctx.r10.s64 = ctx.r9.s64 + 1172;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stb r30,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r30.u8);
	// std r30,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r30.u64);
	// std r30,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r30.u64);
	// std r30,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r30.u64);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// stb r30,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r30.u8);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
loc_82F036D4:
	// stw r30,-1172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1172, ctx.r30.u32);
	// stw r11,-780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -780, ctx.r11.u32);
	// stw r30,-388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -388, ctx.r30.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f036d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F036D4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,1911
	ctx.r11.s64 = ctx.r31.s64 + 1911;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82F036F8:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82f036f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F036F8;
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
loc_82F03720:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82f03720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F03720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03738"))) PPC_WEAK_FUNC(sub_82F03738);
PPC_FUNC_IMPL(__imp__sub_82F03738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82F03740;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,3928
	ctx.r30.s64 = ctx.r3.s64 + 3928;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82F0375C;
	sub_82CD17D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F03780;
	sub_831156E8(ctx, base);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,4(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// beq cr6,0x82f03854
	if (cr6.eq) goto loc_82F03854;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82F0379C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82F037A8;
	sub_8311BF98(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831235b8
	ctx.lr = 0x82F037BC;
	sub_831235B8(ctx, base);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8319b1b8
	ctx.lr = 0x82F037E4;
	sub_8319B1B8(ctx, base);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82F03800;
	sub_82595718(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// stb r31,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r31.u8);
	// beq 0x82f03834
	if (cr0.eq) goto loc_82F03834;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82F03834:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x837ba1c0
	ctx.lr = 0x82F03844;
	sub_837BA1C0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f0379c
	if (!cr6.eq) goto loc_82F0379C;
loc_82F03854:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F0385C"))) PPC_WEAK_FUNC(sub_82F0385C);
PPC_FUNC_IMPL(__imp__sub_82F0385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03860"))) PPC_WEAK_FUNC(sub_82F03860);
PPC_FUNC_IMPL(__imp__sub_82F03860) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f039b0
	if (cr6.eq) goto loc_82F039B0;
	// addi r4,r4,56
	ctx.r4.s64 = ctx.r4.s64 + 56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82F0388C;
	sub_837B0C10(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82f038a0
	if (!cr6.lt) goto loc_82F038A0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82F038A0:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ce7d8
	ctx.lr = 0x82F038AC;
	sub_831CE7D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f03008
	ctx.lr = 0x82F038B8;
	sub_82F03008(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F038C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f038c0
	if (!cr6.eq) goto loc_82F038C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F038E8;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r31,1952
	ctx.r4.s64 = ctx.r31.s64 + 1952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82F03910;
	sub_8259CB28(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82f03924
	if (!cr6.lt) goto loc_82F03924;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82F03924:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ce7d8
	ctx.lr = 0x82F03930;
	sub_831CE7D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f03008
	ctx.lr = 0x82F0393C;
	sub_82F03008(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F03944:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82f03944
	if (!cr6.eq) goto loc_82F03944;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82F0396C;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82f03980
	if (!cr6.lt) goto loc_82F03980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82F03980:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82f03994
	if (!cr6.lt) goto loc_82F03994;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82F03994:
	// bl 0x831d3450
	ctx.lr = 0x82F03998;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82f039c8
	if (cr6.eq) goto loc_82F039C8;
	// bl 0x8387e8e0
	ctx.lr = 0x82F039A8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F039B0;
	sub_8387E8E0(ctx, base);
loc_82F039B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82F039C8:
	// bl 0x8387e8e0
	ctx.lr = 0x82F039CC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82F039D4;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F039EC"))) PPC_WEAK_FUNC(sub_82F039EC);
PPC_FUNC_IMPL(__imp__sub_82F039EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F039F0"))) PPC_WEAK_FUNC(sub_82F039F0);
PPC_FUNC_IMPL(__imp__sub_82F039F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F039F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3284
	ctx.r10.s64 = ctx.r11.s64 + 3284;
	// addi r4,r3,3928
	ctx.r4.s64 = ctx.r3.s64 + 3928;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r6,3932(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82F03A20;
	sub_82D0E798(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,3932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// bl 0x825952b8
	ctx.lr = 0x82F03A34;
	sub_825952B8(ctx, base);
	// lwz r4,3912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3912);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f03a4c
	if (cr6.eq) goto loc_82F03A4C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82F03A4C;
	sub_825952B8(ctx, base);
loc_82F03A4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r30.u32);
	// stw r30,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r30.u32);
	// stw r30,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r30.u32);
	// lwz r4,3896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3896);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f03a74
	if (cr6.eq) goto loc_82F03A74;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82F03A74;
	sub_825952B8(ctx, base);
loc_82F03A74:
	// stw r30,3896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3896, ctx.r30.u32);
	// addi r29,r31,1952
	ctx.r29.s64 = ctx.r31.s64 + 1952;
	// stw r30,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r30.u32);
	// stw r30,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r30.u32);
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f03aa0
	if (cr6.lt) goto loc_82F03AA0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F03AA0;
	sub_825952B8(ctx, base);
loc_82F03AA0:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f03ad0
	if (cr6.lt) goto loc_82F03AD0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F03AD0;
	sub_825952B8(ctx, base);
loc_82F03AD0:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03AE4"))) PPC_WEAK_FUNC(sub_82F03AE4);
PPC_FUNC_IMPL(__imp__sub_82F03AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03AE8"))) PPC_WEAK_FUNC(sub_82F03AE8);
PPC_FUNC_IMPL(__imp__sub_82F03AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82F03AF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F03AFC;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r25,r30,96
	ctx.r25.s64 = ctx.r30.s64 + 6291456;
	// addi r25,r25,-4900
	ctx.r25.s64 = ctx.r25.s64 + -4900;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82f03c14
	if (!cr6.gt) goto loc_82F03C14;
	// addis r24,r30,237
	ctx.r24.s64 = ctx.r30.s64 + 15532032;
	// lis r10,237
	ctx.r10.s64 = 15532032;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r24,r24,19684
	ctx.r24.s64 = ctx.r24.s64 + 19684;
	// ori r26,r10,13856
	ctx.r26.u64 = ctx.r10.u64 | 13856;
	// addi r27,r11,-7960
	ctx.r27.s64 = ctx.r11.s64 + -7960;
loc_82F03B34:
	// cmplwi cr6,r29,21097
	cr6.compare<uint32_t>(ctx.r29.u32, 21097, xer);
	// add r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bge cr6,0x82f03b44
	if (!cr6.lt) goto loc_82F03B44;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82F03B44:
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82f03b68
	if (!cr6.eq) goto loc_82F03B68;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82f03b94
	goto loc_82F03B94;
loc_82F03B68:
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f03b8c
	if (!cr6.eq) goto loc_82F03B8C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82f03b90
	if (cr6.eq) goto loc_82F03B90;
loc_82F03B8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F03B90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82F03B94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f03c00
	if (!cr6.eq) goto loc_82F03C00;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82f03c00
	if (cr6.eq) goto loc_82F03C00;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82f03c00
	if (cr6.eq) goto loc_82F03C00;
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83124f38
	ctx.lr = 0x82F03BD0;
	sub_83124F38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82f03c00
	if (!cr6.eq) goto loc_82F03C00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// bl 0x8311bd68
	ctx.lr = 0x82F03BE8;
	sub_8311BD68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f03c00
	if (cr6.eq) goto loc_82F03C00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r23,3896
	ctx.r3.s64 = ctx.r23.s64 + 3896;
	// bl 0x835977d8
	ctx.lr = 0x82F03C00;
	sub_835977D8(ctx, base);
loc_82F03C00:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,224
	ctx.r28.s64 = ctx.r28.s64 + 224;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82f03b34
	if (cr6.lt) goto loc_82F03B34;
loc_82F03C14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03C1C"))) PPC_WEAK_FUNC(sub_82F03C1C);
PPC_FUNC_IMPL(__imp__sub_82F03C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03C20"))) PPC_WEAK_FUNC(sub_82F03C20);
PPC_FUNC_IMPL(__imp__sub_82F03C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F03C28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F03C34;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83763ef8
	ctx.lr = 0x82F03C3C;
	sub_83763EF8(ctx, base);
	// bl 0x837656c8
	ctx.lr = 0x82F03C40;
	sub_837656C8(ctx, base);
	// addi r30,r31,3896
	ctx.r30.s64 = ctx.r31.s64 + 3896;
	// lwz r31,3896(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3896);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f03c78
	if (cr6.eq) goto loc_82F03C78;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F03C70;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82F03C78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82F03C84;
	sub_82AD5E38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82f03cd8
	if (cr6.eq) goto loc_82F03CD8;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// ori r29,r11,13856
	ctx.r29.u64 = ctx.r11.u64 | 13856;
loc_82F03C98:
	// bl 0x83763ef8
	ctx.lr = 0x82F03C9C;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83765730
	ctx.lr = 0x82F03CA4;
	sub_83765730(ctx, base);
	// cmplwi cr6,r3,21097
	cr6.compare<uint32_t>(ctx.r3.u32, 21097, xer);
	// blt cr6,0x82f03cb4
	if (cr6.lt) goto loc_82F03CB4;
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// b 0x82f03cbc
	goto loc_82F03CBC;
loc_82F03CB4:
	// mulli r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 * 224;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82F03CBC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82F03CCC;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82f03c98
	if (cr6.lt) goto loc_82F03C98;
loc_82F03CD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03CE0"))) PPC_WEAK_FUNC(sub_82F03CE0);
PPC_FUNC_IMPL(__imp__sub_82F03CE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f03860
	ctx.lr = 0x82F03D00;
	sub_82F03860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f03d14
	if (!cr6.eq) goto loc_82F03D14;
loc_82F03D0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f03e90
	goto loc_82F03E90;
loc_82F03D14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f01f40
	ctx.lr = 0x82F03D20;
	sub_82F01F40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02048
	ctx.lr = 0x82F03D38;
	sub_82F02048(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f01e88
	ctx.lr = 0x82F03D50;
	sub_82F01E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02100
	ctx.lr = 0x82F03D68;
	sub_82F02100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02178
	ctx.lr = 0x82F03D80;
	sub_82F02178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02288
	ctx.lr = 0x82F03D98;
	sub_82F02288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02208
	ctx.lr = 0x82F03DB0;
	sub_82F02208(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02338
	ctx.lr = 0x82F03DC8;
	sub_82F02338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f024a8
	ctx.lr = 0x82F03DE0;
	sub_82F024A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f025f8
	ctx.lr = 0x82F03DF8;
	sub_82F025F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f029b8
	ctx.lr = 0x82F03E10;
	sub_82F029B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02ac0
	ctx.lr = 0x82F03E28;
	sub_82F02AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02bc0
	ctx.lr = 0x82F03E40;
	sub_82F02BC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02d18
	ctx.lr = 0x82F03E58;
	sub_82F02D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02c80
	ctx.lr = 0x82F03E70;
	sub_82F02C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03d0c
	if (cr6.eq) goto loc_82F03D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02e70
	ctx.lr = 0x82F03E84;
	sub_82F02E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82F03E90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F03EA8"))) PPC_WEAK_FUNC(sub_82F03EA8);
PPC_FUNC_IMPL(__imp__sub_82F03EA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f03860
	ctx.lr = 0x82F03EC8;
	sub_82F03860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f03edc
	if (!cr6.eq) goto loc_82F03EDC;
loc_82F03ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f03f9c
	goto loc_82F03F9C;
loc_82F03EDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f024a8
	ctx.lr = 0x82F03EE8;
	sub_82F024A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f01f40
	ctx.lr = 0x82F03F00;
	sub_82F01F40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02178
	ctx.lr = 0x82F03F18;
	sub_82F02178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f029b8
	ctx.lr = 0x82F03F30;
	sub_82F029B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02ac0
	ctx.lr = 0x82F03F48;
	sub_82F02AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02d18
	ctx.lr = 0x82F03F60;
	sub_82F02D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02bc0
	ctx.lr = 0x82F03F78;
	sub_82F02BC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f03ed4
	if (cr6.eq) goto loc_82F03ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02758
	ctx.lr = 0x82F03F90;
	sub_82F02758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82F03F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F03FB4"))) PPC_WEAK_FUNC(sub_82F03FB4);
PPC_FUNC_IMPL(__imp__sub_82F03FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03FB8"))) PPC_WEAK_FUNC(sub_82F03FB8);
PPC_FUNC_IMPL(__imp__sub_82F03FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F03FE0;
	sub_8259CB28(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F03FF0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f03ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F03FF0;
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_82F04024:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f04024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F04024;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x831ce980
	ctx.lr = 0x82F04040;
	sub_831CE980(ctx, base);
	// addi r4,r30,110
	ctx.r4.s64 = ctx.r30.s64 + 110;
	// addi r3,r31,110
	ctx.r3.s64 = ctx.r31.s64 + 110;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x831ce980
	ctx.lr = 0x82F04050;
	sub_831CE980(ctx, base);
	// lbz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 + 136;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// stb r9,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r9.u8);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwz r7,140(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// addi r10,r31,180
	ctx.r10.s64 = ctx.r31.s64 + 180;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// lhz r6,156(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 156);
	// sth r6,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r6.u16);
	// lhz r5,158(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 158);
	// sth r5,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r5.u16);
	// lbz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r4,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r4.u8);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lwz r8,164(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r4.u32);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lhz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 180);
	// sth r7,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r7.u16);
	// lhz r6,182(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 182);
	// sth r6,182(r31)
	PPC_STORE_U16(ctx.r31.u32 + 182, ctx.r6.u16);
loc_82F0413C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f0413c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F0413C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F04158:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f04158
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F04158;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// addi r10,r31,220
	ctx.r10.s64 = ctx.r31.s64 + 220;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F04174:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f04174
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F04174;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,240
	ctx.r11.s64 = ctx.r30.s64 + 240;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F04190:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f04190
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F04190;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F041AC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82f041ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F041AC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,296
	ctx.r11.s64 = ctx.r30.s64 + 296;
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F041C8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82f041c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F041C8;
	// addi r4,r30,344
	ctx.r4.s64 = ctx.r30.s64 + 344;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// li r5,1568
	ctx.r5.s64 = 1568;
	// bl 0x831ce980
	ctx.lr = 0x82F041E4;
	sub_831CE980(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,1911
	ctx.r11.s64 = ctx.r30.s64 + 1911;
	// addi r10,r31,1911
	ctx.r10.s64 = ctx.r31.s64 + 1911;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F041F4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82f041f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F041F4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,1916
	ctx.r11.s64 = ctx.r30.s64 + 1916;
	// addi r10,r31,1916
	ctx.r10.s64 = ctx.r31.s64 + 1916;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82F04210:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f04210
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F04210;
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

__attribute__((alias("__imp__sub_82F04238"))) PPC_WEAK_FUNC(sub_82F04238);
PPC_FUNC_IMPL(__imp__sub_82F04238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82F04240;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,3284
	ctx.r10.s64 = ctx.r11.s64 + 3284;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82f034d8
	ctx.lr = 0x82F04260;
	sub_82F034D8(ctx, base);
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// bl 0x82f034d8
	ctx.lr = 0x82F04268;
	sub_82F034D8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r31,3928
	ctx.r26.s64 = ctx.r31.s64 + 3928;
	// stw r29,3896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3896, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r29.u32);
	// addi r28,r31,3896
	ctx.r28.s64 = ctx.r31.s64 + 3896;
	// stw r29,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r29.u32);
	// addi r30,r31,3912
	ctx.r30.s64 = ctx.r31.s64 + 3912;
	// stw r29,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r29.u32);
	// bl 0x8381b9d0
	ctx.lr = 0x82F042A0;
	sub_8381B9D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831a0e40
	ctx.lr = 0x82F042A8;
	sub_831A0E40(ctx, base);
	// lwz r4,3900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3900);
	// lwz r27,3896(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3896);
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f042d8
	if (cr6.eq) goto loc_82F042D8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F042D0;
	sub_831CE420(ctx, base);
	// add r10,r25,r27
	ctx.r10.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82F042D8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f04308
	if (cr6.eq) goto loc_82F04308;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F04300;
	sub_831CE420(ctx, base);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82F04308:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82F04318;
	sub_82CD17D8(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r29,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04340"))) PPC_WEAK_FUNC(sub_82F04340);
PPC_FUNC_IMPL(__imp__sub_82F04340) {
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
	// bl 0x82f039f0
	ctx.lr = 0x82F04360;
	sub_82F039F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f04378
	if (cr6.eq) goto loc_82F04378;
	// bl 0x82416268
	ctx.lr = 0x82F04374;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F04378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F04390"))) PPC_WEAK_FUNC(sub_82F04390);
PPC_FUNC_IMPL(__imp__sub_82F04390) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831a0e40
	ctx.lr = 0x82F043B4;
	sub_831A0E40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b29ec0
	ctx.lr = 0x82F043C0;
	sub_82B29EC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,1952
	ctx.r3.s64 = ctx.r30.s64 + 1952;
	// bl 0x82f03fb8
	ctx.lr = 0x82F043CC;
	sub_82F03FB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f043ec
	if (cr6.lt) goto loc_82F043EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F043EC;
	sub_825952B8(ctx, base);
loc_82F043EC:
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

__attribute__((alias("__imp__sub_82F04404"))) PPC_WEAK_FUNC(sub_82F04404);
PPC_FUNC_IMPL(__imp__sub_82F04404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04408"))) PPC_WEAK_FUNC(sub_82F04408);
PPC_FUNC_IMPL(__imp__sub_82F04408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F04410;
	__savegprlr_28(ctx, base);
	// stwu r1,-2080(r1)
	ea = -2080 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b29ec0
	ctx.lr = 0x82F04424;
	sub_82B29EC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,1952
	ctx.r3.s64 = ctx.r29.s64 + 1952;
	// bl 0x82f03fb8
	ctx.lr = 0x82F04430;
	sub_82F03FB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f04450
	if (cr6.lt) goto loc_82F04450;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F04450;
	sub_825952B8(ctx, base);
loc_82F04450:
	// lwz r31,3912(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3912);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,3916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3916);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r28,r29,3912
	ctx.r28.s64 = ctx.r29.s64 + 3912;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// beq cr6,0x82f04498
	if (cr6.eq) goto loc_82F04498;
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
	ctx.lr = 0x82F04490;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82F04498:
	// lwz r11,3896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3896);
	// lwz r10,3900(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f044b0
	if (!cr6.eq) goto loc_82F044B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f03ae8
	ctx.lr = 0x82F044B0;
	sub_82F03AE8(ctx, base);
loc_82F044B0:
	// lwz r31,3896(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3896);
	// lwz r11,3900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3900);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f044f4
	if (cr6.eq) goto loc_82F044F4;
loc_82F044C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f03ce0
	ctx.lr = 0x82F044CC;
	sub_82F03CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f044e4
	if (cr6.eq) goto loc_82F044E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82F044E4;
	sub_835977D8(ctx, base);
loc_82F044E4:
	// lwz r11,3900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3900);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f044c0
	if (!cr6.eq) goto loc_82F044C0;
loc_82F044F4:
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F044FC"))) PPC_WEAK_FUNC(sub_82F044FC);
PPC_FUNC_IMPL(__imp__sub_82F044FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04500"))) PPC_WEAK_FUNC(sub_82F04500);
PPC_FUNC_IMPL(__imp__sub_82F04500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F04508;
	__savegprlr_27(ctx, base);
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b29ec0
	ctx.lr = 0x82F04520;
	sub_82B29EC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,1952
	ctx.r3.s64 = ctx.r30.s64 + 1952;
	// bl 0x82f03fb8
	ctx.lr = 0x82F0452C;
	sub_82F03FB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f0454c
	if (cr6.lt) goto loc_82F0454C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F0454C;
	sub_825952B8(ctx, base);
loc_82F0454C:
	// lwz r31,3912(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,3916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r28,r30,3912
	ctx.r28.s64 = ctx.r30.s64 + 3912;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// beq cr6,0x82f04594
	if (cr6.eq) goto loc_82F04594;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82F0458C;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82F04594:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f045b0
	if (!cr6.eq) goto loc_82F045B0;
	// lwz r11,3896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3896);
	// lwz r10,3900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f045b8
	if (!cr6.eq) goto loc_82F045B8;
loc_82F045B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f03c20
	ctx.lr = 0x82F045B8;
	sub_82F03C20(ctx, base);
loc_82F045B8:
	// lwz r31,3896(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3896);
	// lwz r11,3900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82f045fc
	if (cr6.eq) goto loc_82F045FC;
loc_82F045C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f03ea8
	ctx.lr = 0x82F045D4;
	sub_82F03EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f045ec
	if (cr6.eq) goto loc_82F045EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82F045EC;
	sub_835977D8(ctx, base);
loc_82F045EC:
	// lwz r11,3900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3900);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82f045c8
	if (!cr6.eq) goto loc_82F045C8;
loc_82F045FC:
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04604"))) PPC_WEAK_FUNC(sub_82F04604);
PPC_FUNC_IMPL(__imp__sub_82F04604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04608"))) PPC_WEAK_FUNC(sub_82F04608);
PPC_FUNC_IMPL(__imp__sub_82F04608) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82F04624;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,1952
	ctx.r4.s64 = ctx.r31.s64 + 1952;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f031b8
	ctx.lr = 0x82F04634;
	sub_82F031B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f0467c
	if (!cr6.eq) goto loc_82F0467C;
	// bl 0x830ff290
	ctx.lr = 0x82F04644;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x82f04674
	if (!cr6.eq) goto loc_82F04674;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82f04674
	if (cr6.eq) goto loc_82F04674;
	// lbz r11,209(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f04674
	if (cr6.eq) goto loc_82F04674;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04500
	ctx.lr = 0x82F04670;
	sub_82F04500(ctx, base);
	// b 0x82f0467c
	goto loc_82F0467C;
loc_82F04674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04408
	ctx.lr = 0x82F0467C;
	sub_82F04408(ctx, base);
loc_82F0467C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F04694"))) PPC_WEAK_FUNC(sub_82F04694);
PPC_FUNC_IMPL(__imp__sub_82F04694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04698"))) PPC_WEAK_FUNC(sub_82F04698);
PPC_FUNC_IMPL(__imp__sub_82F04698) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,3552
	ctx.r4.s64 = ctx.r11.s64 + 3552;
	// bl 0x83103328
	ctx.lr = 0x82F046B8;
	sub_83103328(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// addi r8,r10,3660
	ctx.r8.s64 = ctx.r10.s64 + 3660;
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-7776(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7776);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// ld r11,-7824(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -7824);
	// std r11,76(r31)
	PPC_STORE_U64(ctx.r31.u32 + 76, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82F046F4"))) PPC_WEAK_FUNC(sub_82F046F4);
PPC_FUNC_IMPL(__imp__sub_82F046F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F046F8"))) PPC_WEAK_FUNC(sub_82F046F8);
PPC_FUNC_IMPL(__imp__sub_82F046F8) {
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
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82f04764
	if (!cr6.eq) goto loc_82F04764;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82F04730;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04744
	if (cr6.eq) goto loc_82F04744;
	// bl 0x82f04698
	ctx.lr = 0x82F0473C;
	sub_82F04698(ctx, base);
	// stw r3,-24520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24520, ctx.r3.u32);
	// b 0x82f0474c
	goto loc_82F0474C;
loc_82F04744:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24520, ctx.r11.u32);
loc_82F0474C:
	// bl 0x831021a0
	ctx.lr = 0x82F04750;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82F04758;
	sub_82DA45F8(ctx, base);
	// lwz r4,-24520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
	// bl 0x83103100
	ctx.lr = 0x82F04760;
	sub_83103100(ctx, base);
	// lwz r3,-24520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24520);
loc_82F04764:
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

__attribute__((alias("__imp__sub_82F04778"))) PPC_WEAK_FUNC(sub_82F04778);
PPC_FUNC_IMPL(__imp__sub_82F04778) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// addi r9,r11,3660
	ctx.r9.s64 = ctx.r11.s64 + 3660;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-24520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24520, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x82F047B0;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82f047c8
	if (cr6.eq) goto loc_82F047C8;
	// bl 0x82416268
	ctx.lr = 0x82F047C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F047C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F047E0"))) PPC_WEAK_FUNC(sub_82F047E0);
PPC_FUNC_IMPL(__imp__sub_82F047E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82f04850
	if (cr6.gt) goto loc_82F04850;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f04818
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04818;
	// bdzf 4*cr6+eq,0x82f04820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04820;
	// bdzf 4*cr6+eq,0x82f04828
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04828;
	// bdzf 4*cr6+eq,0x82f04830
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04830;
	// bdzf 4*cr6+eq,0x82f04838
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04838;
	// bdzf 4*cr6+eq,0x82f04840
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04840;
	// bne cr6,0x82f04848
	if (!cr6.eq) goto loc_82F04848;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82F04818:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82F04820:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82F04828:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82F04830:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82F04838:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82F04840:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82F04848:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_82F04850:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F04858"))) PPC_WEAK_FUNC(sub_82F04858);
PPC_FUNC_IMPL(__imp__sub_82F04858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82f048a0
	if (cr6.gt) goto loc_82F048A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f04888
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04888;
	// bdzf 4*cr6+eq,0x82f04890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04890;
	// bdzf 4*cr6+eq,0x82f04890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04890;
	// bdzf 4*cr6+eq,0x82f04890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04890;
	// bdzf 4*cr6+eq,0x82f04890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04890;
	// bdzf 4*cr6+eq,0x82f04898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04898;
	// bne cr6,0x82f048a0
	if (!cr6.eq) goto loc_82F048A0;
loc_82F04888:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82F04890:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82F04898:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82F048A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F048A8"))) PPC_WEAK_FUNC(sub_82F048A8);
PPC_FUNC_IMPL(__imp__sub_82F048A8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f048e0
	if (cr6.lt) goto loc_82F048E0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82f048e4
	goto loc_82F048E4;
loc_82F048E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F048E4:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// bne cr6,0x82f04908
	if (!cr6.eq) goto loc_82F04908;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d04220
	ctx.lr = 0x82F04904;
	sub_82D04220(ctx, base);
	// b 0x82f04924
	goto loc_82F04924;
loc_82F04908:
	// bl 0x831156e8
	ctx.lr = 0x82F0490C;
	sub_831156E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x82F04918;
	sub_8311C4E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83125390
	ctx.lr = 0x82F04924;
	sub_83125390(ctx, base);
loc_82F04924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F0493C"))) PPC_WEAK_FUNC(sub_82F0493C);
PPC_FUNC_IMPL(__imp__sub_82F0493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04940"))) PPC_WEAK_FUNC(sub_82F04940);
PPC_FUNC_IMPL(__imp__sub_82F04940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F04948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f04970
	if (cr6.lt) goto loc_82F04970;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82f04974
	goto loc_82F04974;
loc_82F04970:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F04974:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r4,254
	cr6.compare<uint32_t>(ctx.r4.u32, 254, xer);
	// bne cr6,0x82f0499c
	if (!cr6.eq) goto loc_82F0499C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,180
	ctx.r4.u64 = ctx.r4.u64 | 180;
	// bl 0x82d04220
	ctx.lr = 0x82F04994;
	sub_82D04220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F0499C:
	// cmplwi cr6,r4,253
	cr6.compare<uint32_t>(ctx.r4.u32, 253, xer);
	// bne cr6,0x82f04a28
	if (!cr6.eq) goto loc_82F04A28;
	// bl 0x831156e8
	ctx.lr = 0x82F049A8;
	sub_831156E8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82F049B4;
	sub_8311C148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,790(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 790);
	// bl 0x83162690
	ctx.lr = 0x82F049CC;
	sub_83162690(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r10,-22544
	ctx.r10.s64 = ctx.r10.s64 + -22544;
loc_82F049D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82f049fc
	if (cr6.eq) goto loc_82F049FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f049d8
	if (cr6.eq) goto loc_82F049D8;
loc_82F049FC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82f04a10
	if (cr6.eq) goto loc_82F04A10;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82f04a34
	if (!cr6.eq) goto loc_82F04A34;
loc_82F04A10:
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d04220
	ctx.lr = 0x82F04A20;
	sub_82D04220(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82F04A28:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83162690
	ctx.lr = 0x82F04A34;
	sub_83162690(ctx, base);
loc_82F04A34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04A3C"))) PPC_WEAK_FUNC(sub_82F04A3C);
PPC_FUNC_IMPL(__imp__sub_82F04A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04A40"))) PPC_WEAK_FUNC(sub_82F04A40);
PPC_FUNC_IMPL(__imp__sub_82F04A40) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,29
	cr6.compare<uint32_t>(ctx.r3.u32, 29, xer);
	// blt cr6,0x82f04a74
	if (cr6.lt) goto loc_82F04A74;
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
loc_82F04A74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F04A88;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 15466496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// bl 0x8312a278
	ctx.lr = 0x82F04AA0;
	sub_8312A278(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi. r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82f04b20
	if (cr0.eq) goto loc_82F04B20;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-9040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82F04AC4;
	sub_82D34B00(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x82f04b1c
	if (!cr6.lt) goto loc_82F04B1C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82f04af0
	if (cr6.gt) goto loc_82F04AF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F04AF0;
	sub_831CC188(ctx, base);
loc_82F04AF0:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x82d9af88
	ctx.lr = 0x82F04B04;
	sub_82D9AF88(ctx, base);
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
loc_82F04B1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F04B20:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04b2c
	if (cr6.eq) goto loc_82F04B2C;
	// bl 0x82416268
	ctx.lr = 0x82F04B2C;
	sub_82416268(ctx, base);
loc_82F04B2C:
	// li r3,18
	ctx.r3.s64 = 18;
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

__attribute__((alias("__imp__sub_82F04B44"))) PPC_WEAK_FUNC(sub_82F04B44);
PPC_FUNC_IMPL(__imp__sub_82F04B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04B48"))) PPC_WEAK_FUNC(sub_82F04B48);
PPC_FUNC_IMPL(__imp__sub_82F04B48) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x82f04b7c
	if (cr6.lt) goto loc_82F04B7C;
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
loc_82F04B7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82F04B90;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 15466496;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// bl 0x83125ba0
	ctx.lr = 0x82F04BA8;
	sub_83125BA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi. r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x82f04c28
	if (cr0.eq) goto loc_82F04C28;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-9040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82F04BCC;
	sub_82D34B00(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x82f04c24
	if (!cr6.lt) goto loc_82F04C24;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82f04bf8
	if (cr6.gt) goto loc_82F04BF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F04BF8;
	sub_831CC188(ctx, base);
loc_82F04BF8:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x82d9af88
	ctx.lr = 0x82F04C0C;
	sub_82D9AF88(ctx, base);
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
loc_82F04C24:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F04C28:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04c34
	if (cr6.eq) goto loc_82F04C34;
	// bl 0x82416268
	ctx.lr = 0x82F04C34;
	sub_82416268(ctx, base);
loc_82F04C34:
	// li r3,29
	ctx.r3.s64 = 29;
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

__attribute__((alias("__imp__sub_82F04C4C"))) PPC_WEAK_FUNC(sub_82F04C4C);
PPC_FUNC_IMPL(__imp__sub_82F04C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04C50"))) PPC_WEAK_FUNC(sub_82F04C50);
PPC_FUNC_IMPL(__imp__sub_82F04C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F04C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F04C6C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 15466496;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// bl 0x8312a278
	ctx.lr = 0x82F04C84;
	sub_8312A278(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f04ca8
	if (!cr6.eq) goto loc_82F04CA8;
	// li r11,18
	ctx.r11.s64 = 18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82F04CA8;
	sub_82AB5F20(ctx, base);
loc_82F04CA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f04ccc
	if (cr6.eq) goto loc_82F04CCC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,65534
	ctx.r10.u64 = ctx.r11.u64 | 65534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x82F04CCC;
	sub_82AB5F20(ctx, base);
loc_82F04CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04CD4"))) PPC_WEAK_FUNC(sub_82F04CD4);
PPC_FUNC_IMPL(__imp__sub_82F04CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04CD8"))) PPC_WEAK_FUNC(sub_82F04CD8);
PPC_FUNC_IMPL(__imp__sub_82F04CD8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82f04c50
	ctx.lr = 0x82F04D0C;
	sub_82F04C50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f04d50
	if (cr6.eq) goto loc_82F04D50;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82f04d78
	if (!cr6.gt) goto loc_82F04D78;
loc_82F04D34:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82f04d84
	if (cr6.eq) goto loc_82F04D84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82f04d34
	if (cr6.gt) goto loc_82F04D34;
loc_82F04D50:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04d5c
	if (cr6.eq) goto loc_82F04D5C;
	// bl 0x82416268
	ctx.lr = 0x82F04D5C;
	sub_82416268(ctx, base);
loc_82F04D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F04D60:
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
loc_82F04D78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F04D84;
	sub_831CC188(ctx, base);
loc_82F04D84:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04d90
	if (cr6.eq) goto loc_82F04D90;
	// bl 0x82416268
	ctx.lr = 0x82F04D90;
	sub_82416268(ctx, base);
loc_82F04D90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f04d60
	goto loc_82F04D60;
}

__attribute__((alias("__imp__sub_82F04D98"))) PPC_WEAK_FUNC(sub_82F04D98);
PPC_FUNC_IMPL(__imp__sub_82F04D98) {
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
	// bl 0x82f047e0
	ctx.lr = 0x82F04DA8;
	sub_82F047E0(ctx, base);
	// bl 0x82f04cd8
	ctx.lr = 0x82F04DAC;
	sub_82F04CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F04DBC"))) PPC_WEAK_FUNC(sub_82F04DBC);
PPC_FUNC_IMPL(__imp__sub_82F04DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04DC0"))) PPC_WEAK_FUNC(sub_82F04DC0);
PPC_FUNC_IMPL(__imp__sub_82F04DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82F04DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82F04DDC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 15466496;
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// bl 0x83125ba0
	ctx.lr = 0x82F04DF4;
	sub_83125BA0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82f04e18
	if (!cr6.eq) goto loc_82F04E18;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82F04E18;
	sub_82AB5F20(ctx, base);
loc_82F04E18:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f04e38
	if (cr6.eq) goto loc_82F04E38;
	// li r11,254
	ctx.r11.s64 = 254;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82F04E38;
	sub_82AB5F20(ctx, base);
loc_82F04E38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04E40"))) PPC_WEAK_FUNC(sub_82F04E40);
PPC_FUNC_IMPL(__imp__sub_82F04E40) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82f04dc0
	ctx.lr = 0x82F04E74;
	sub_82F04DC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82f04eb8
	if (cr6.eq) goto loc_82F04EB8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// ble cr6,0x82f04ee0
	if (!cr6.gt) goto loc_82F04EE0;
loc_82F04E9C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82f04eec
	if (cr6.eq) goto loc_82F04EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82f04e9c
	if (cr6.gt) goto loc_82F04E9C;
loc_82F04EB8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04ec4
	if (cr6.eq) goto loc_82F04EC4;
	// bl 0x82416268
	ctx.lr = 0x82F04EC4;
	sub_82416268(ctx, base);
loc_82F04EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F04EC8:
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
loc_82F04EE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82F04EEC;
	sub_831CC188(ctx, base);
loc_82F04EEC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f04ef8
	if (cr6.eq) goto loc_82F04EF8;
	// bl 0x82416268
	ctx.lr = 0x82F04EF8;
	sub_82416268(ctx, base);
loc_82F04EF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f04ec8
	goto loc_82F04EC8;
}

__attribute__((alias("__imp__sub_82F04F00"))) PPC_WEAK_FUNC(sub_82F04F00);
PPC_FUNC_IMPL(__imp__sub_82F04F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82f04f48
	if (cr6.gt) goto loc_82F04F48;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82f04f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F30;
	// bdzf 4*cr6+eq,0x82f04f38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F38;
	// bdzf 4*cr6+eq,0x82f04f38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F38;
	// bdzf 4*cr6+eq,0x82f04f38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F38;
	// bdzf 4*cr6+eq,0x82f04f38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F38;
	// bdzf 4*cr6+eq,0x82f04f40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82F04F40;
	// bne cr6,0x82f04f48
	if (!cr6.eq) goto loc_82F04F48;
loc_82F04F30:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82f04f4c
	goto loc_82F04F4C;
loc_82F04F38:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82f04f4c
	goto loc_82F04F4C;
loc_82F04F40:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82f04f4c
	goto loc_82F04F4C;
loc_82F04F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F04F4C:
	// b 0x82f04e40
	sub_82F04E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F04F50"))) PPC_WEAK_FUNC(sub_82F04F50);
PPC_FUNC_IMPL(__imp__sub_82F04F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,476
	ctx.r5.s64 = 476;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82F04F74;
	sub_831CDCF0(ctx, base);
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// lis r8,-31774
	ctx.r8.s64 = -2082340864;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r31,400
	ctx.r6.s64 = ctx.r31.s64 + 400;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rotlwi r7,r31,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// ld r10,-7592(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7592);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r5,r10,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// clrlwi r10,r3,9
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFFFF;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// ld r10,-7592(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7592);
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// ld r10,-7592(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7592);
	// std r10,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r10.u64);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stb r11,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r11.u8);
	// stb r11,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r11.u8);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwimi r10,r5,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// lwz r10,-7544(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r4.u32);
	// li r10,44
	ctx.r10.s64 = 44;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r11,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r11.u8);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// lwz r11,-7544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwimi r11,r3,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,304(r7)
	PPC_STORE_U32(ctx.r7.u32 + 304, ctx.r11.u32);
	// lwz r11,-7544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r9.u32);
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// stb r10,324(r11)
	PPC_STORE_U8(ctx.r11.u32 + 324, ctx.r10.u8);
	// stb r10,325(r11)
	PPC_STORE_U8(ctx.r11.u32 + 325, ctx.r10.u8);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// lwz r7,336(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r9,-7544(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r9,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r9.u32);
	// lwz r9,-7544(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r6.u32);
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// stw r10,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// stb r10,356(r11)
	PPC_STORE_U8(ctx.r11.u32 + 356, ctx.r10.u8);
	// stb r10,357(r11)
	PPC_STORE_U8(ctx.r11.u32 + 357, ctx.r10.u8);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// stw r10,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r9,-7544(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r9.u32);
	// lwz r9,-7544(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7544);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r4.u32);
	// stw r10,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
	// stw r10,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// stb r10,388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 388, ctx.r10.u8);
	// stb r10,389(r11)
	PPC_STORE_U8(ctx.r11.u32 + 389, ctx.r10.u8);
	// stw r10,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_82F05150:
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82f05150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F05150;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r11,444
	ctx.r8.s64 = ctx.r11.s64 + 444;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82F0516C:
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82f0516c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82F0516C;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lis r9,-31756
	ctx.r9.s64 = -2081161216;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// addi r10,r11,156
	ctx.r10.s64 = ctx.r11.s64 + 156;
	// lwz r10,-24128(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24128);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r10,-24128(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24128);
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F051B0"))) PPC_WEAK_FUNC(sub_82F051B0);
PPC_FUNC_IMPL(__imp__sub_82F051B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r11,-24136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24136);
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

__attribute__((alias("__imp__sub_82F051C4"))) PPC_WEAK_FUNC(sub_82F051C4);
PPC_FUNC_IMPL(__imp__sub_82F051C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F051C8"))) PPC_WEAK_FUNC(sub_82F051C8);
PPC_FUNC_IMPL(__imp__sub_82F051C8) {
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
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r3,-24136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f05204
	if (cr6.eq) goto loc_82F05204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F051FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24136, ctx.r11.u32);
loc_82F05204:
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

__attribute__((alias("__imp__sub_82F05218"))) PPC_WEAK_FUNC(sub_82F05218);
PPC_FUNC_IMPL(__imp__sub_82F05218) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r9,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r9.u16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// oris r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 4294901760;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r11,102(r3)
	PPC_STORE_U8(ctx.r3.u32 + 102, ctx.r11.u8);
	// stb r11,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r11.u8);
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// oris r5,r8,65535
	ctx.r5.u64 = ctx.r8.u64 | 4294901760;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// stb r11,219(r3)
	PPC_STORE_U8(ctx.r3.u32 + 219, ctx.r11.u8);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// lwz r8,-7544(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r6.u32);
	// lwz r8,-7544(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r5,r8,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// addi r8,r3,240
	ctx.r8.s64 = ctx.r3.s64 + 240;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// stb r11,261(r3)
	PPC_STORE_U8(ctx.r3.u32 + 261, ctx.r11.u8);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// lwz r8,-7544(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// lwz r9,-7544(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r6,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r6.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// stb r11,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r11.u8);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// lwz r11,-7544(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// lwz r11,-7544(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r6,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r4.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stb r11,324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 324, ctx.r11.u8);
	// stb r11,325(r3)
	PPC_STORE_U8(ctx.r3.u32 + 325, ctx.r11.u8);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// lwz r10,-7544(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r5,r10,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r5.u32);
	// lwz r10,-7544(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// stb r11,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r11.u8);
	// stb r11,357(r3)
	PPC_STORE_U8(ctx.r3.u32 + 357, ctx.r11.u8);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// stw r8,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r8.u32);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// stw r5,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r5.u32);
	// lwz r10,-7544(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r6,r10,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r6.u32);
	// lwz r10,-7544(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7544);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// stw r5,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r5.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stb r11,388(r3)
	PPC_STORE_U8(ctx.r3.u32 + 388, ctx.r11.u8);
	// stb r11,389(r3)
	PPC_STORE_U8(ctx.r3.u32 + 389, ctx.r11.u8);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F053F0"))) PPC_WEAK_FUNC(sub_82F053F0);
PPC_FUNC_IMPL(__imp__sub_82F053F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,52
	ctx.r10.s64 = 52;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05408"))) PPC_WEAK_FUNC(sub_82F05408);
PPC_FUNC_IMPL(__imp__sub_82F05408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,52
	ctx.r9.s64 = 52;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82f05430
	if (cr6.lt) goto loc_82F05430;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F05430:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05440"))) PPC_WEAK_FUNC(sub_82F05440);
PPC_FUNC_IMPL(__imp__sub_82F05440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05458"))) PPC_WEAK_FUNC(sub_82F05458);
PPC_FUNC_IMPL(__imp__sub_82F05458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,60
	ctx.r9.s64 = 60;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82f05480
	if (cr6.lt) goto loc_82F05480;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F05480:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05490"))) PPC_WEAK_FUNC(sub_82F05490);
PPC_FUNC_IMPL(__imp__sub_82F05490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F054A8"))) PPC_WEAK_FUNC(sub_82F054A8);
PPC_FUNC_IMPL(__imp__sub_82F054A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,144
	ctx.r9.s64 = 144;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82f054d0
	if (cr6.lt) goto loc_82F054D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F054D0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F054E8"))) PPC_WEAK_FUNC(sub_82F054E8);
PPC_FUNC_IMPL(__imp__sub_82F054E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F054FC"))) PPC_WEAK_FUNC(sub_82F054FC);
PPC_FUNC_IMPL(__imp__sub_82F054FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05500"))) PPC_WEAK_FUNC(sub_82F05500);
PPC_FUNC_IMPL(__imp__sub_82F05500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82f05524
	if (cr6.lt) goto loc_82F05524;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F05524:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05534"))) PPC_WEAK_FUNC(sub_82F05534);
PPC_FUNC_IMPL(__imp__sub_82F05534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05538"))) PPC_WEAK_FUNC(sub_82F05538);
PPC_FUNC_IMPL(__imp__sub_82F05538) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r10,r11,4388
	ctx.r10.s64 = ctx.r11.s64 + 4388;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x82F05560;
	sub_82596F90(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82f05584
	if (cr6.lt) goto loc_82F05584;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82F05584;
	sub_825952B8(ctx, base);
loc_82F05584:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F055AC"))) PPC_WEAK_FUNC(sub_82F055AC);
PPC_FUNC_IMPL(__imp__sub_82F055AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F055B0"))) PPC_WEAK_FUNC(sub_82F055B0);
PPC_FUNC_IMPL(__imp__sub_82F055B0) {
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
	// bl 0x82f05538
	ctx.lr = 0x82F055D0;
	sub_82F05538(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f055e8
	if (cr6.eq) goto loc_82F055E8;
	// bl 0x82416268
	ctx.lr = 0x82F055E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F055E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05600"))) PPC_WEAK_FUNC(sub_82F05600);
PPC_FUNC_IMPL(__imp__sub_82F05600) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F0563C;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05688"))) PPC_WEAK_FUNC(sub_82F05688);
PPC_FUNC_IMPL(__imp__sub_82F05688) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// ble cr6,0x82f056d0
	if (!cr6.gt) goto loc_82F056D0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82f056d0
	if (cr6.eq) goto loc_82F056D0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82F056D0:
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a81748
	ctx.lr = 0x82F056E4;
	sub_82A81748(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F056F4"))) PPC_WEAK_FUNC(sub_82F056F4);
PPC_FUNC_IMPL(__imp__sub_82F056F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F056F8"))) PPC_WEAK_FUNC(sub_82F056F8);
PPC_FUNC_IMPL(__imp__sub_82F056F8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f05768
	if (cr6.eq) goto loc_82F05768;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f05768
	if (cr6.eq) goto loc_82F05768;
	// bl 0x831021a0
	ctx.lr = 0x82F0572C;
	sub_831021A0(ctx, base);
	// bl 0x83102528
	ctx.lr = 0x82F05730;
	sub_83102528(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82f05748
	if (cr6.lt) goto loc_82F05748;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f0574c
	goto loc_82F0574C;
loc_82F05748:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F0574C:
	// bl 0x83816968
	ctx.lr = 0x82F05750;
	sub_83816968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83816378
	ctx.lr = 0x82F05758;
	sub_83816378(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x833bbd78
	ctx.lr = 0x82F05760;
	sub_833BBD78(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x82F05764;
	sub_831021A0(ctx, base);
	// bl 0x83102530
	ctx.lr = 0x82F05768;
	sub_83102530(ctx, base);
loc_82F05768:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4086
	ctx.r4.s64 = ctx.r11.s64 + 4086;
	// bl 0x8259cc28
	ctx.lr = 0x82F0577C;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F057A8"))) PPC_WEAK_FUNC(sub_82F057A8);
PPC_FUNC_IMPL(__imp__sub_82F057A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82f056f8
	sub_82F056F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F057B0"))) PPC_WEAK_FUNC(sub_82F057B0);
PPC_FUNC_IMPL(__imp__sub_82F057B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F057B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f0582c
	if (cr6.eq) goto loc_82F0582C;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82F057D4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F057E8;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// stw r6,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r6.u32);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// addi r5,r31,-32
	ctx.r5.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bne cr6,0x82f057d4
	if (!cr6.eq) goto loc_82F057D4;
loc_82F0582C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05838"))) PPC_WEAK_FUNC(sub_82F05838);
PPC_FUNC_IMPL(__imp__sub_82F05838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F05840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f058a0
	if (cr6.eq) goto loc_82F058A0;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82F0585C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F05870;
	sub_8259CB28(ctx, base);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82F05888;
	sub_8259CB28(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// bne cr6,0x82f0585c
	if (!cr6.eq) goto loc_82F0585C;
loc_82F058A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F058AC"))) PPC_WEAK_FUNC(sub_82F058AC);
PPC_FUNC_IMPL(__imp__sub_82F058AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F058B0"))) PPC_WEAK_FUNC(sub_82F058B0);
PPC_FUNC_IMPL(__imp__sub_82F058B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F058B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f0590c
	if (cr6.eq) goto loc_82F0590C;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F058D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f058f4
	if (cr6.lt) goto loc_82F058F4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F058F4;
	sub_825952B8(ctx, base);
loc_82F058F4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82f058d8
	if (!cr6.eq) goto loc_82F058D8;
loc_82F0590C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05914"))) PPC_WEAK_FUNC(sub_82F05914);
PPC_FUNC_IMPL(__imp__sub_82F05914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05918"))) PPC_WEAK_FUNC(sub_82F05918);
PPC_FUNC_IMPL(__imp__sub_82F05918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F05920;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f059a0
	if (cr6.eq) goto loc_82F059A0;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F05940:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f0595c
	if (cr6.lt) goto loc_82F0595C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F0595C;
	sub_825952B8(ctx, base);
loc_82F0595C:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f05984
	if (cr6.lt) goto loc_82F05984;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x825952b8
	ctx.lr = 0x82F05984;
	sub_825952B8(ctx, base);
loc_82F05984:
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stb r30,-28(r31)
	PPC_STORE_U8(ctx.r31.u32 + -28, ctx.r30.u8);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82f05940
	if (!cr6.eq) goto loc_82F05940;
loc_82F059A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F059A8"))) PPC_WEAK_FUNC(sub_82F059A8);
PPC_FUNC_IMPL(__imp__sub_82F059A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F059B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f05a40
	if (cr6.eq) goto loc_82F05A40;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82F059D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82f05a2c
	if (cr6.eq) goto loc_82F05A2C;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82F059FC;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
loc_82F05A2C:
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82f059d4
	if (!cr6.eq) goto loc_82F059D4;
loc_82F05A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05A4C"))) PPC_WEAK_FUNC(sub_82F05A4C);
PPC_FUNC_IMPL(__imp__sub_82F05A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05A50"))) PPC_WEAK_FUNC(sub_82F05A50);
PPC_FUNC_IMPL(__imp__sub_82F05A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82F05A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f05a84
	if (cr6.eq) goto loc_82F05A84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f056f8
	ctx.lr = 0x82F05A84;
	sub_82F056F8(ctx, base);
loc_82F05A84:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82F05A98;
	sub_8259CB28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05AB4"))) PPC_WEAK_FUNC(sub_82F05AB4);
PPC_FUNC_IMPL(__imp__sub_82F05AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05AB8"))) PPC_WEAK_FUNC(sub_82F05AB8);
PPC_FUNC_IMPL(__imp__sub_82F05AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05AE0"))) PPC_WEAK_FUNC(sub_82F05AE0);
PPC_FUNC_IMPL(__imp__sub_82F05AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05AE4"))) PPC_WEAK_FUNC(sub_82F05AE4);
PPC_FUNC_IMPL(__imp__sub_82F05AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05AE8"))) PPC_WEAK_FUNC(sub_82F05AE8);
PPC_FUNC_IMPL(__imp__sub_82F05AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F05AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1260
	ctx.r11.s64 = 82575360;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,20164
	ctx.r10.u64 = ctx.r11.u64 | 20164;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82f05b14
	if (!cr6.gt) goto loc_82F05B14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82F05B14;
	sub_831CC150(ctx, base);
loc_82F05B14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,52
	ctx.r26.s64 = 52;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82f05bbc
	if (!cr6.lt) goto loc_82F05BBC;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,52
	ctx.r28.s64 = ctx.r4.s64 * 52;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82F05B4C;
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
	// bl 0x82f059a8
	ctx.lr = 0x82F05B70;
	sub_82F059A8(ctx, base);
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
	// beq cr6,0x82f05ba4
	if (cr6.eq) goto loc_82F05BA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f058b0
	ctx.lr = 0x82F05B94;
	sub_82F058B0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05BA4;
	sub_825952B8(ctx, base);
loc_82F05BA4:
	// mulli r11,r26,52
	ctx.r11.s64 = ctx.r26.s64 * 52;
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
loc_82F05BBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05BC4"))) PPC_WEAK_FUNC(sub_82F05BC4);
PPC_FUNC_IMPL(__imp__sub_82F05BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05BC8"))) PPC_WEAK_FUNC(sub_82F05BC8);
PPC_FUNC_IMPL(__imp__sub_82F05BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1260
	ctx.r10.s64 = 82575360;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,52
	ctx.r9.s64 = 52;
	// ori r8,r10,20164
	ctx.r8.u64 = ctx.r10.u64 | 20164;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f05bfc
	if (!cr6.lt) goto loc_82F05BFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82F05BFC:
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
	// blt cr6,0x82f05c2c
	if (cr6.lt) goto loc_82F05C2C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82F05C2C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82f05c38
	if (!cr6.lt) goto loc_82F05C38;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82F05C38:
	// b 0x82f05ae8
	sub_82F05AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05C3C"))) PPC_WEAK_FUNC(sub_82F05C3C);
PPC_FUNC_IMPL(__imp__sub_82F05C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05C40"))) PPC_WEAK_FUNC(sub_82F05C40);
PPC_FUNC_IMPL(__imp__sub_82F05C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82F05C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// addi r10,r11,4392
	ctx.r10.s64 = ctx.r11.s64 + 4392;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82f056f8
	ctx.lr = 0x82F05C68;
	sub_82F056F8(ctx, base);
	// lis r9,-31756
	ctx.r9.s64 = -2081161216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-24136(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24136, ctx.r30.u32);
	// lwz r4,408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05c94
	if (cr6.eq) goto loc_82F05C94;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82F05C94;
	sub_825952B8(ctx, base);
loc_82F05C94:
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05cb8
	if (cr6.eq) goto loc_82F05CB8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82F05CB8;
	sub_825952B8(ctx, base);
loc_82F05CB8:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r29,r31,328
	ctx.r29.s64 = ctx.r31.s64 + 328;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f05ce4
	if (cr6.lt) goto loc_82F05CE4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05CE4;
	sub_825952B8(ctx, base);
loc_82F05CE4:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05d0c
	if (cr6.eq) goto loc_82F05D0C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82F05D0C;
	sub_825952B8(ctx, base);
loc_82F05D0C:
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05d30
	if (cr6.eq) goto loc_82F05D30;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82F05D30;
	sub_825952B8(ctx, base);
loc_82F05D30:
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// addi r29,r31,264
	ctx.r29.s64 = ctx.r31.s64 + 264;
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82f05d5c
	if (cr6.lt) goto loc_82F05D5C;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05D5C;
	sub_825952B8(ctx, base);
loc_82F05D5C:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05d80
	if (cr6.eq) goto loc_82F05D80;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82F05D80;
	sub_825952B8(ctx, base);
loc_82F05D80:
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// bl 0x82f05538
	ctx.lr = 0x82F05D94;
	sub_82F05538(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05dac
	if (cr6.eq) goto loc_82F05DAC;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82F05DAC;
	sub_825952B8(ctx, base);
loc_82F05DAC:
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f05de8
	if (cr6.eq) goto loc_82F05DE8;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a6a4a0
	ctx.lr = 0x82F05DD8;
	sub_82A6A4A0(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05DE8;
	sub_825952B8(ctx, base);
loc_82F05DE8:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82f05e0c
	if (cr6.eq) goto loc_82F05E0C;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82F05E0C;
	sub_825952B8(ctx, base);
loc_82F05E0C:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f05e44
	if (cr6.eq) goto loc_82F05E44;
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82c16f80
	ctx.lr = 0x82F05E34;
	sub_82C16F80(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05E44;
	sub_825952B8(ctx, base);
loc_82F05E44:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f05e80
	if (cr6.eq) goto loc_82F05E80;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82f05918
	ctx.lr = 0x82F05E70;
	sub_82F05918(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05E80;
	sub_825952B8(ctx, base);
loc_82F05E80:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f05ebc
	if (cr6.eq) goto loc_82F05EBC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f058b0
	ctx.lr = 0x82F05EAC;
	sub_82F058B0(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82F05EBC;
	sub_825952B8(ctx, base);
loc_82F05EBC:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F05ED0"))) PPC_WEAK_FUNC(sub_82F05ED0);
PPC_FUNC_IMPL(__imp__sub_82F05ED0) {
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
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f05f1c
	if (cr6.eq) goto loc_82F05F1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f057b0
	ctx.lr = 0x82F05F04;
	sub_82F057B0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f058b0
	ctx.lr = 0x82F05F18;
	sub_82F058B0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F05F1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05F34"))) PPC_WEAK_FUNC(sub_82F05F34);
PPC_FUNC_IMPL(__imp__sub_82F05F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05F38"))) PPC_WEAK_FUNC(sub_82F05F38);
PPC_FUNC_IMPL(__imp__sub_82F05F38) {
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
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f05f84
	if (cr6.eq) goto loc_82F05F84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f05838
	ctx.lr = 0x82F05F6C;
	sub_82F05838(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f05918
	ctx.lr = 0x82F05F80;
	sub_82F05918(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F05F84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F05F9C"))) PPC_WEAK_FUNC(sub_82F05F9C);
PPC_FUNC_IMPL(__imp__sub_82F05F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F05FA0"))) PPC_WEAK_FUNC(sub_82F05FA0);
PPC_FUNC_IMPL(__imp__sub_82F05FA0) {
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
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f05fe8
	if (cr6.eq) goto loc_82F05FE8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c19180
	ctx.lr = 0x82F05FD4;
	sub_82C19180(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c16f80
	ctx.lr = 0x82F05FE4;
	sub_82C16F80(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F05FE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F06000"))) PPC_WEAK_FUNC(sub_82F06000);
PPC_FUNC_IMPL(__imp__sub_82F06000) {
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
	// bge cr6,0x82f06038
	if (!cr6.lt) goto loc_82F06038;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82f0603c
	if (!cr6.gt) goto loc_82F0603C;
loc_82F06038:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F0603C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82f0608c
	if (cr6.eq) goto loc_82F0608C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,52
	ctx.r9.s64 = 52;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82f06070
	if (!cr6.eq) goto loc_82F06070;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f05bc8
	ctx.lr = 0x82F06070;
	sub_82F05BC8(ctx, base);
loc_82F06070:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f060b8
	if (cr6.eq) goto loc_82F060B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 * 52;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82f060b4
	goto loc_82F060B4;
loc_82F0608C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82f060a4
	if (!cr6.eq) goto loc_82F060A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f05bc8
	ctx.lr = 0x82F060A4;
	sub_82F05BC8(ctx, base);
loc_82F060A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82f060b8
	if (cr6.eq) goto loc_82F060B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82F060B4:
	// bl 0x82f05600
	ctx.lr = 0x82F060B8;
	sub_82F05600(ctx, base);
loc_82F060B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
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

__attribute__((alias("__imp__sub_82F060DC"))) PPC_WEAK_FUNC(sub_82F060DC);
PPC_FUNC_IMPL(__imp__sub_82F060DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F060E0"))) PPC_WEAK_FUNC(sub_82F060E0);
PPC_FUNC_IMPL(__imp__sub_82F060E0) {
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
	// bl 0x82f05c40
	ctx.lr = 0x82F06100;
	sub_82F05C40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82f06118
	if (cr6.eq) goto loc_82F06118;
	// bl 0x82416268
	ctx.lr = 0x82F06114;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F06118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F06130"))) PPC_WEAK_FUNC(sub_82F06130);
PPC_FUNC_IMPL(__imp__sub_82F06130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82F06138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f06178
	if (cr6.eq) goto loc_82F06178;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f057b0
	ctx.lr = 0x82F06160;
	sub_82F057B0(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f058b0
	ctx.lr = 0x82F06174;
	sub_82F058B0(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82F06178:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f061b0
	if (cr6.eq) goto loc_82F061B0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82f05838
	ctx.lr = 0x82F06198;
	sub_82F05838(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f05918
	ctx.lr = 0x82F061AC;
	sub_82F05918(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82F061B0:
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82f061e4
	if (cr6.eq) goto loc_82F061E4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82c19180
	ctx.lr = 0x82F061D0;
	sub_82C19180(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82c16f80
	ctx.lr = 0x82F061E0;
	sub_82C16F80(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82F061E4:
	// lis r29,-31774
	ctx.r29.s64 = -2082340864;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31774
	ctx.r28.s64 = -2082340864;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// ld r11,-7592(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -7592);
	// stb r30,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r30.u8);
	// stb r30,441(r31)
	PPC_STORE_U8(ctx.r31.u32 + 441, ctx.r30.u8);
	// stb r30,442(r31)
	PPC_STORE_U8(ctx.r31.u32 + 442, ctx.r30.u8);
	// stb r30,443(r31)
	PPC_STORE_U8(ctx.r31.u32 + 443, ctx.r30.u8);
	// std r11,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r11.u64);
	// addi r11,r31,432
	ctx.r11.s64 = ctx.r31.s64 + 432;
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stb r30,445(r31)
	PPC_STORE_U8(ctx.r31.u32 + 445, ctx.r30.u8);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// ld r10,-7592(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + -7592);
	// std r10,460(r31)
	PPC_STORE_U64(ctx.r31.u32 + 460, ctx.r10.u64);
	// lwz r11,-7544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7544);
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// lwz r11,-7544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7544);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r9.u32);
	// stb r30,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r30.u8);
	// stb r30,473(r31)
	PPC_STORE_U8(ctx.r31.u32 + 473, ctx.r30.u8);
	// stb r30,446(r31)
	PPC_STORE_U8(ctx.r31.u32 + 446, ctx.r30.u8);
	// stb r30,447(r31)
	PPC_STORE_U8(ctx.r31.u32 + 447, ctx.r30.u8);
	// bl 0x82f04f50
	ctx.lr = 0x82F06260;
	sub_82F04F50(ctx, base);
	// ld r11,-7592(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -7592);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// std r11,84(r31)
	PPC_STORE_U64(ctx.r31.u32 + 84, ctx.r11.u64);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,-7544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7544);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r11,-7544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7544);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// ld r11,-7592(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -7592);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x82f056f8
	ctx.lr = 0x82F06298;
	sub_82F056F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aecb50
	ctx.lr = 0x82F062A0;
	sub_82AECB50(ctx, base);
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stb r30,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r30.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// ld r11,-7592(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -7592);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stb r30,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r30.u8);
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r5,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F062EC"))) PPC_WEAK_FUNC(sub_82F062EC);
PPC_FUNC_IMPL(__imp__sub_82F062EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F062F0"))) PPC_WEAK_FUNC(sub_82F062F0);
PPC_FUNC_IMPL(__imp__sub_82F062F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82f06000
	sub_82F06000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F062F8"))) PPC_WEAK_FUNC(sub_82F062F8);
PPC_FUNC_IMPL(__imp__sub_82F062F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r7,50
	cr6.compare<uint32_t>(ctx.r7.u32, 50, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// b 0x82c38cb8
	sub_82C38CB8(ctx, base);
	return;
}

