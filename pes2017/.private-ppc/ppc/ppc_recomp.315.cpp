#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8328EB00"))) PPC_WEAK_FUNC(sub_8328EB00);
PPC_FUNC_IMPL(__imp__sub_8328EB00) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328eb30
	if (cr6.eq) goto loc_8328EB30;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328EB30;
	sub_8320D088(ctx, base);
loc_8328EB30:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8328eb88
	if (cr6.lt) goto loc_8328EB88;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// srw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328eb88
	if (cr6.eq) goto loc_8328EB88;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
loc_8328EB88:
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

__attribute__((alias("__imp__sub_8328EBA0"))) PPC_WEAK_FUNC(sub_8328EBA0);
PPC_FUNC_IMPL(__imp__sub_8328EBA0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328ebd0
	if (cr6.eq) goto loc_8328EBD0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328EBD0;
	sub_8320D088(ctx, base);
loc_8328EBD0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8328ec24
	if (cr6.lt) goto loc_8328EC24;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// srw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328ec24
	if (cr6.eq) goto loc_8328EC24;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328ec24
	if (cr6.eq) goto loc_8328EC24;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8328EC24:
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

__attribute__((alias("__imp__sub_8328EC38"))) PPC_WEAK_FUNC(sub_8328EC38);
PPC_FUNC_IMPL(__imp__sub_8328EC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328EC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8328ec64
	if (!cr6.eq) goto loc_8328EC64;
loc_8328EC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EC64:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328ec58
	if (cr6.eq) goto loc_8328EC58;
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328ecac
	if (cr6.eq) goto loc_8328ECAC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328ecac
	if (cr6.eq) goto loc_8328ECAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83295570
	ctx.lr = 0x8328EC90;
	sub_83295570(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328ecac
	if (cr6.eq) goto loc_8328ECAC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328ecac
	if (cr6.eq) goto loc_8328ECAC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328ECAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328ECB8"))) PPC_WEAK_FUNC(sub_8328ECB8);
PPC_FUNC_IMPL(__imp__sub_8328ECB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328ECC0;
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
	// bl 0x8328eba0
	ctx.lr = 0x8328ECD4;
	sub_8328EBA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328ece8
	if (cr6.eq) goto loc_8328ECE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83295e38
	ctx.lr = 0x8328ECE4;
	sub_83295E38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328ECE8:
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
	// beq cr6,0x8328ed14
	if (cr6.eq) goto loc_8328ED14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328ED14;
	sub_83222030(ctx, base);
loc_8328ED14:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328ED2C"))) PPC_WEAK_FUNC(sub_8328ED2C);
PPC_FUNC_IMPL(__imp__sub_8328ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328ED30"))) PPC_WEAK_FUNC(sub_8328ED30);
PPC_FUNC_IMPL(__imp__sub_8328ED30) {
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
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// ori r7,r10,8400
	ctx.r7.u64 = ctx.r10.u64 | 8400;
	// rotlwi r6,r11,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// or r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sraw r11,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r11.s64 = ctx.r7.s32 >> temp.u32;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// or r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 | ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8328ed8c
	if (cr6.eq) goto loc_8328ED8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328ED8C;
	sub_83222030(ctx, base);
loc_8328ED8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8328EDB0"))) PPC_WEAK_FUNC(sub_8328EDB0);
PPC_FUNC_IMPL(__imp__sub_8328EDB0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,24948
	ctx.r5.s64 = ctx.r11.s64 + 24948;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8328EDE4;
	sub_83297A40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223a60
	ctx.lr = 0x8328EDF0;
	sub_83223A60(ctx, base);
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

__attribute__((alias("__imp__sub_8328EE04"))) PPC_WEAK_FUNC(sub_8328EE04);
PPC_FUNC_IMPL(__imp__sub_8328EE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328EE08"))) PPC_WEAK_FUNC(sub_8328EE08);
PPC_FUNC_IMPL(__imp__sub_8328EE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328EE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r30,18(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lhz r28,14(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r5,r10,24960
	ctx.r5.s64 = ctx.r10.s64 + 24960;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x83297a40
	ctx.lr = 0x8328EE64;
	sub_83297A40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223a60
	ctx.lr = 0x8328EE70;
	sub_83223A60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328EE78"))) PPC_WEAK_FUNC(sub_8328EE78);
PPC_FUNC_IMPL(__imp__sub_8328EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328EE80;
	__savegprlr_29(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1024
	ctx.r10.s64 = ctx.r11.s64 + -1024;
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// bgt cr6,0x8328f51c
	if (cr6.gt) goto loc_8328F51C;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4432
	ctx.r12.s64 = ctx.r12.s64 + -4432;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8328EF30;
	case 1:
		goto loc_8328EF44;
	case 2:
		goto loc_8328F51C;
	case 3:
		goto loc_8328F51C;
	case 4:
		goto loc_8328F51C;
	case 5:
		goto loc_8328EF58;
	case 6:
		goto loc_8328EF70;
	case 7:
		goto loc_8328EF88;
	case 8:
		goto loc_8328F51C;
	case 9:
		goto loc_8328F51C;
	case 10:
		goto loc_8328F51C;
	case 11:
		goto loc_8328F51C;
	case 12:
		goto loc_8328F51C;
	case 13:
		goto loc_8328F084;
	case 14:
		goto loc_8328EFEC;
	case 15:
		goto loc_8328F51C;
	case 16:
		goto loc_8328F51C;
	case 17:
		goto loc_8328F098;
	case 18:
		goto loc_8328F0F0;
	case 19:
		goto loc_8328F138;
	case 20:
		goto loc_8328F190;
	case 21:
		goto loc_8328F240;
	case 22:
		goto loc_8328F1E8;
	case 23:
		goto loc_8328F298;
	case 24:
		goto loc_8328F2F0;
	case 25:
		goto loc_8328F348;
	case 26:
		goto loc_8328F394;
	case 27:
		goto loc_8328F450;
	case 28:
		goto loc_8328F4BC;
	case 29:
		goto loc_8328F4D4;
	case 30:
		goto loc_8328F4EC;
	case 31:
		goto loc_8328F504;
	default:
		return;
	}
	// lwz r25,-4304(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4304);
	// lwz r25,-4284(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4284);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-4264(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4264);
	// lwz r25,-4240(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4240);
	// lwz r25,-4216(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4216);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-3964(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3964);
	// lwz r25,-4116(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4116);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-2788(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2788);
	// lwz r25,-3944(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3944);
	// lwz r25,-3856(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3856);
	// lwz r25,-3784(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3784);
	// lwz r25,-3696(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3696);
	// lwz r25,-3520(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3520);
	// lwz r25,-3608(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3608);
	// lwz r25,-3432(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3432);
	// lwz r25,-3344(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3344);
	// lwz r25,-3256(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3256);
	// lwz r25,-3180(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3180);
	// lwz r25,-2992(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2992);
	// lwz r25,-2884(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2884);
	// lwz r25,-2860(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2860);
	// lwz r25,-2836(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2836);
	// lwz r25,-2812(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2812);
loc_8328EF30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ded0
	ctx.lr = 0x8328EF38;
	sub_8328DED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EF44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328dfd0
	ctx.lr = 0x8328EF4C;
	sub_8328DFD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EF58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e798
	ctx.lr = 0x8328EF64;
	sub_8328E798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EF70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e8a0
	ctx.lr = 0x8328EF7C;
	sub_8328E8A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EF88:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328efac
	if (cr6.eq) goto loc_8328EFAC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8328efac
	if (cr6.eq) goto loc_8328EFAC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328EFAC;
	sub_8320D088(ctx, base);
loc_8328EFAC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x8328EFB4;
	sub_83222030(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// blt cr6,0x8328f6b8
	if (cr6.lt) goto loc_8328F6B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e440
	ctx.lr = 0x8328EFCC;
	sub_8328E440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f6b8
	if (cr6.eq) goto loc_8328F6B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8328c2e8
	ctx.lr = 0x8328EFE0;
	sub_8328C2E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328EFEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e8a0
	ctx.lr = 0x8328EFF8;
	sub_8328E8A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x8328f014
	if (cr6.eq) goto loc_8328F014;
	// bl 0x83222030
	ctx.lr = 0x8328F008;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F014:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328f6b8
	if (cr6.eq) goto loc_8328F6B8;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,136
	ctx.r11.u64 = ctx.r8.u64 ^ 136;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328f6b8
	if (!cr6.eq) goto loc_8328F6B8;
	// bl 0x83222578
	ctx.lr = 0x8328F054;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832439d0
	ctx.lr = 0x8328F05C;
	sub_832439D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83245968
	ctx.lr = 0x8328F068;
	sub_83245968(ctx, base);
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x8328F078;
	sub_83266DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e9d0
	ctx.lr = 0x8328F08C;
	sub_8328E9D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F0A8;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f0d0
	if (cr6.eq) goto loc_8328F0D0;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f0d0
	if (cr6.eq) goto loc_8328F0D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83295570
	ctx.lr = 0x8328F0CC;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F0D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F0E4;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F0F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F100;
	sub_8328EB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f118
	if (cr6.eq) goto loc_8328F118;
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x8328ec38
	ctx.lr = 0x8328F114;
	sub_8328EC38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F118:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F12C;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F148;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f170
	if (cr6.eq) goto loc_8328F170;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f170
	if (cr6.eq) goto loc_8328F170;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83295570
	ctx.lr = 0x8328F16C;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F170:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F184;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F1A0;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f1c8
	if (cr6.eq) goto loc_8328F1C8;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f1c8
	if (cr6.eq) goto loc_8328F1C8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83295570
	ctx.lr = 0x8328F1C4;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F1C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F1DC;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F1F8;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f220
	if (cr6.eq) goto loc_8328F220;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f220
	if (cr6.eq) goto loc_8328F220;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83295570
	ctx.lr = 0x8328F21C;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F220:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F234;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F250;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f278
	if (cr6.eq) goto loc_8328F278;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f278
	if (cr6.eq) goto loc_8328F278;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83295570
	ctx.lr = 0x8328F274;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F278:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F28C;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F2A8;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f2d0
	if (cr6.eq) goto loc_8328F2D0;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f2d0
	if (cr6.eq) goto loc_8328F2D0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83295570
	ctx.lr = 0x8328F2CC;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F2D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F2E4;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F2F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F300;
	sub_8328EB00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f328
	if (cr6.eq) goto loc_8328F328;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f328
	if (cr6.eq) goto loc_8328F328;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83295570
	ctx.lr = 0x8328F324;
	sub_83295570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F328:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328F33C;
	sub_8328BA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F348:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eba0
	ctx.lr = 0x8328F35C;
	sub_8328EBA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f37c
	if (cr6.eq) goto loc_8328F37C;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83295b88
	ctx.lr = 0x8328F370;
	sub_83295B88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83255a88
	ctx.lr = 0x8328F378;
	sub_83255A88(ctx, base);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_8328F37C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x8328F388;
	sub_83223AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F394:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F3A8;
	sub_8328EB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f438
	if (cr6.eq) goto loc_8328F438;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f438
	if (cr6.eq) goto loc_8328F438;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x832965f8
	ctx.lr = 0x8328F3D0;
	sub_832965F8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328f434
	if (cr6.eq) goto loc_8328F434;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x832965f8
	ctx.lr = 0x8328F3F8;
	sub_832965F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83255988
	ctx.lr = 0x8328F400;
	sub_83255988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83296de8
	ctx.lr = 0x8328F414;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328f434
	if (!cr6.eq) goto loc_8328F434;
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83254f98
	ctx.lr = 0x8328F434;
	sub_83254F98(ctx, base);
loc_8328F434:
	// addi r29,r1,304
	ctx.r29.s64 = ctx.r1.s64 + 304;
loc_8328F438:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x8328F444;
	sub_83223AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8328eb00
	ctx.lr = 0x8328F45C;
	sub_8328EB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f478
	if (cr6.eq) goto loc_8328F478;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x8328ec38
	ctx.lr = 0x8328F46C;
	sub_8328EC38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f478
	if (cr6.eq) goto loc_8328F478;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8328F478:
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
	// beq cr6,0x8328f4a4
	if (cr6.eq) goto loc_8328F4A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328F4A4;
	sub_83222030(ctx, base);
loc_8328F4A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F4BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ecb8
	ctx.lr = 0x8328F4C8;
	sub_8328ECB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F4D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ecb8
	ctx.lr = 0x8328F4E0;
	sub_8328ECB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F4EC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ecb8
	ctx.lr = 0x8328F4F8;
	sub_8328ECB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F504:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328ecb8
	ctx.lr = 0x8328F510;
	sub_8328ECB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F51C:
	// addi r11,r11,-2074
	ctx.r11.s64 = ctx.r11.s64 + -2074;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x8328f6c4
	if (cr6.gt) goto loc_8328F6C4;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2752
	ctx.r12.s64 = ctx.r12.s64 + -2752;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8328F580;
	case 1:
		goto loc_8328F5B8;
	case 2:
		goto loc_8328F6C4;
	case 3:
		goto loc_8328F6C4;
	case 4:
		goto loc_8328F6C4;
	case 5:
		goto loc_8328F6C4;
	case 6:
		goto loc_8328F6C4;
	case 7:
		goto loc_8328F6C4;
	case 8:
		goto loc_8328F6C4;
	case 9:
		goto loc_8328F6C4;
	case 10:
		goto loc_8328F6C4;
	case 11:
		goto loc_8328F6C4;
	case 12:
		goto loc_8328F6C4;
	case 13:
		goto loc_8328F694;
	case 14:
		goto loc_8328F6AC;
	case 15:
		goto loc_8328F610;
	default:
		return;
	}
	// lwz r25,-2688(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2688);
	// lwz r25,-2632(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2632);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2364(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2364);
	// lwz r25,-2412(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2412);
	// lwz r25,-2388(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2388);
	// lwz r25,-2544(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2544);
loc_8328F580:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328f59c
	if (cr6.eq) goto loc_8328F59C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328F59C;
	sub_8320D088(ctx, base);
loc_8328F59C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,24136
	ctx.r3.s64 = ctx.r11.s64 + 24136;
	// bl 0x8328ed30
	ctx.lr = 0x8328F5AC;
	sub_8328ED30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F5B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328f5d4
	if (cr6.eq) goto loc_8328F5D4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328F5D4;
	sub_8320D088(ctx, base);
loc_8328F5D4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r11,24948
	ctx.r5.s64 = ctx.r11.s64 + 24948;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83297a40
	ctx.lr = 0x8328F5F8;
	sub_83297A40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223a60
	ctx.lr = 0x8328F604;
	sub_83223A60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F610:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328f62c
	if (cr6.eq) goto loc_8328F62C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24780
	ctx.r3.s64 = ctx.r11.s64 + 24780;
	// bl 0x8320d088
	ctx.lr = 0x8328F62C;
	sub_8320D088(ctx, base);
loc_8328F62C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,17
	ctx.r8.s64 = 17;
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r5,r10,24960
	ctx.r5.s64 = ctx.r10.s64 + 24960;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,2011
	ctx.r10.s64 = 2011;
	// li r9,11
	ctx.r9.s64 = 11;
	// lwz r6,24136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24136);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83297a40
	ctx.lr = 0x8328F67C;
	sub_83297A40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223a60
	ctx.lr = 0x8328F688;
	sub_83223A60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F694:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e8a0
	ctx.lr = 0x8328F6A0;
	sub_8328E8A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F6AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328e798
	ctx.lr = 0x8328F6B8;
	sub_8328E798(ctx, base);
loc_8328F6B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8328F6C4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F6D0"))) PPC_WEAK_FUNC(sub_8328F6D0);
PPC_FUNC_IMPL(__imp__sub_8328F6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8328F6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8320d1e0
	ctx.lr = 0x8328F6E8;
	sub_8320D1E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328f704
	if (cr6.eq) goto loc_8328F704;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328f704
	if (cr6.eq) goto loc_8328F704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8328F704;
	sub_8320E738(ctx, base);
loc_8328F704:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8328f7ac
	if (cr6.lt) goto loc_8328F7AC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8328f7ac
	if (cr6.eq) goto loc_8328F7AC;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328f7ac
	if (!cr6.eq) goto loc_8328F7AC;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328f798
	if (cr6.eq) goto loc_8328F798;
	// cmpwi cr6,r10,67
	cr6.compare<int32_t>(ctx.r10.s32, 67, xer);
	// bne cr6,0x8328f798
	if (!cr6.eq) goto loc_8328F798;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8328f7ac
	goto loc_8328F7AC;
loc_8328F798:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83222be8
	ctx.lr = 0x8328F7A8;
	sub_83222BE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328F7AC:
	// bl 0x8328b310
	ctx.lr = 0x8328F7B0;
	sub_8328B310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8328b418
	ctx.lr = 0x8328F7BC;
	sub_8328B418(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x8328f7e8
	if (cr6.eq) goto loc_8328F7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328F7E8;
	sub_83222030(ctx, base);
loc_8328F7E8:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// beq cr6,0x8328f818
	if (cr6.eq) goto loc_8328F818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x8328F818;
	sub_83209D68(ctx, base);
loc_8328F818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F820"))) PPC_WEAK_FUNC(sub_8328F820);
PPC_FUNC_IMPL(__imp__sub_8328F820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328F828;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328f900
	if (cr6.eq) goto loc_8328F900;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8328f900
	if (cr6.eq) goto loc_8328F900;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328f900
	if (cr6.eq) goto loc_8328F900;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bne cr6,0x8328f870
	if (!cr6.eq) goto loc_8328F870;
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8328F870:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328f884
	if (!cr6.eq) goto loc_8328F884;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8328F884:
	// bl 0x83295570
	ctx.lr = 0x8328F888;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f900
	if (cr6.eq) goto loc_8328F900;
loc_8328F894:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328F8A4;
	sub_83295B88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x8328F8AC;
	sub_83255A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83296d78
	ctx.lr = 0x8328F8B8;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328f8e8
	if (!cr6.eq) goto loc_8328F8E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328F8D0;
	sub_8328B960(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8328b398
	ctx.lr = 0x8328F8E0;
	sub_8328B398(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832356e0
	ctx.lr = 0x8328F8E8;
	sub_832356E0(ctx, base);
loc_8328F8E8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295570
	ctx.lr = 0x8328F8F4;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328f894
	if (!cr6.eq) goto loc_8328F894;
loc_8328F900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328F90C"))) PPC_WEAK_FUNC(sub_8328F90C);
PPC_FUNC_IMPL(__imp__sub_8328F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328F910"))) PPC_WEAK_FUNC(sub_8328F910);
PPC_FUNC_IMPL(__imp__sub_8328F910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8328F918;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328f9d4
	if (cr6.eq) goto loc_8328F9D4;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328f954
	if (!cr6.eq) goto loc_8328F954;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328f958
	if (cr6.eq) goto loc_8328F958;
loc_8328F954:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8328F958:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r27,r11,28,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// bl 0x83208aa0
	ctx.lr = 0x8328F968;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328f9e0
	if (cr6.eq) goto loc_8328F9E0;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832984d0
	ctx.lr = 0x8328F980;
	sub_832984D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328f9b4
	if (!cr6.eq) goto loc_8328F9B4;
	// li r5,33
	ctx.r5.s64 = 33;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8328F99C;
	sub_83266DD0(ctx, base);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8328F9B4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328f9d4
	if (!cr6.eq) goto loc_8328F9D4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25004
	ctx.r4.s64 = ctx.r11.s64 + 25004;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x832085e8
	ctx.lr = 0x8328F9D4;
	sub_832085E8(ctx, base);
loc_8328F9D4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8328F9E0:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8328F9E8;
	sub_83209AA8(ctx, base);
	// sth r28,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r28.u16);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r28,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r28.u16);
	// li r5,141
	ctx.r5.s64 = 141;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x8328FA08;
	sub_83266DD0(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328fa20
	if (!cr6.eq) goto loc_8328FA20;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328FA1C;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8328FA20:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328f820
	ctx.lr = 0x8328FA34;
	sub_8328F820(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328fa50
	if (cr6.eq) goto loc_8328FA50;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r3,-4
	ctx.r3.s64 = -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328fa54
	if (cr6.eq) goto loc_8328FA54;
loc_8328FA50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8328FA54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FA5C"))) PPC_WEAK_FUNC(sub_8328FA5C);
PPC_FUNC_IMPL(__imp__sub_8328FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FA60"))) PPC_WEAK_FUNC(sub_8328FA60);
PPC_FUNC_IMPL(__imp__sub_8328FA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8328FA68;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8328fa88
	if (!cr6.eq) goto loc_8328FA88;
	// lwz r27,44(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
loc_8328FA88:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328fa98
	if (!cr6.eq) goto loc_8328FA98;
	// lwz r31,40(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// b 0x8328fa9c
	goto loc_8328FA9C;
loc_8328FA98:
	// lwz r31,36(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
loc_8328FA9C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8328fc48
	if (cr6.eq) goto loc_8328FC48;
	// lhz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,2369
	cr6.compare<uint32_t>(ctx.r11.u32, 2369, xer);
	// beq cr6,0x8328fb14
	if (cr6.eq) goto loc_8328FB14;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8328fb14
	if (!cr6.eq) goto loc_8328FB14;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328fad0
	if (cr6.eq) goto loc_8328FAD0;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328fb14
	if (!cr6.eq) goto loc_8328FB14;
loc_8328FAD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295c40
	ctx.lr = 0x8328FAD8;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328fb14
	if (cr6.eq) goto loc_8328FB14;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x8328fb14
	if (cr6.eq) goto loc_8328FB14;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328FAFC;
	sub_8328B960(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8328b398
	ctx.lr = 0x8328FB0C;
	sub_8328B398(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832356e0
	ctx.lr = 0x8328FB14;
	sub_832356E0(ctx, base);
loc_8328FB14:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x8328fb2c
	if (!cr6.eq) goto loc_8328FB2C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8328FB2C:
	// bl 0x83295570
	ctx.lr = 0x8328FB30;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328fc48
	if (cr6.eq) goto loc_8328FC48;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8328FB40:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8328fbc4
	if (cr6.eq) goto loc_8328FBC4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295b88
	ctx.lr = 0x8328FB60;
	sub_83295B88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x8328FB68;
	sub_83255A88(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8328fba8
	if (!cr0.eq) goto loc_8328FBA8;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
loc_8328FB8C:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8328fbb0
	if (cr6.eq) goto loc_8328FBB0;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subf. r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x8328fb8c
	if (cr0.eq) goto loc_8328FB8C;
loc_8328FBA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8328fbb4
	goto loc_8328FBB4;
loc_8328FBB0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8328FBB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_8328FBC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328fc30
	if (cr6.eq) goto loc_8328FC30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8328b960
	ctx.lr = 0x8328FBE0;
	sub_8328B960(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8328FBFC;
	sub_83209DF8(ctx, base);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r6.u16);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x832356e0
	ctx.lr = 0x8328FC30;
	sub_832356E0(ctx, base);
loc_8328FC30:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295570
	ctx.lr = 0x8328FC3C;
	sub_83295570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328fb40
	if (!cr6.eq) goto loc_8328FB40;
loc_8328FC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FC54"))) PPC_WEAK_FUNC(sub_8328FC54);
PPC_FUNC_IMPL(__imp__sub_8328FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8328FC58"))) PPC_WEAK_FUNC(sub_8328FC58);
PPC_FUNC_IMPL(__imp__sub_8328FC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328FC60;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8328b650
	ctx.lr = 0x8328FC90;
	sub_8328B650(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328b6e8
	ctx.lr = 0x8328FCA8;
	sub_8328B6E8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8328FCB0;
	sub_83209AA8(ctx, base);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8328fcec
	if (cr6.eq) goto loc_8328FCEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8328FCEC;
	sub_83222030(ctx, base);
loc_8328FCEC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328fa60
	ctx.lr = 0x8328FD1C;
	sub_8328FA60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FD28"))) PPC_WEAK_FUNC(sub_8328FD28);
PPC_FUNC_IMPL(__imp__sub_8328FD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8328fd94
	if (cr6.eq) goto loc_8328FD94;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328fd74
	if (cr6.eq) goto loc_8328FD74;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_8328FD60:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328ba08
	ctx.lr = 0x8328FD70;
	sub_8328BA08(ctx, base);
	// b 0x8328fd9c
	goto loc_8328FD9C;
loc_8328FD74:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x8328fd94
	if (cr6.eq) goto loc_8328FD94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83295570
	ctx.lr = 0x8328FD88;
	sub_83295570(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8328fd60
	if (!cr6.eq) goto loc_8328FD60;
loc_8328FD94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8328FD9C;
	sub_83222030(ctx, base);
loc_8328FD9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328FDB8"))) PPC_WEAK_FUNC(sub_8328FDB8);
PPC_FUNC_IMPL(__imp__sub_8328FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8328FDC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328fe7c
	if (cr6.eq) goto loc_8328FE7C;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8328fdfc
	if (!cr6.eq) goto loc_8328FDFC;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328fe00
	if (cr6.eq) goto loc_8328FE00;
loc_8328FDFC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8328FE00:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r27,r11,28,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// bl 0x83208aa0
	ctx.lr = 0x8328FE10;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328fe88
	if (cr6.eq) goto loc_8328FE88;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832984d0
	ctx.lr = 0x8328FE28;
	sub_832984D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328fe5c
	if (!cr6.eq) goto loc_8328FE5C;
	// li r5,34
	ctx.r5.s64 = 34;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8328FE44;
	sub_83266DD0(ctx, base);
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r11.u16);
loc_8328FE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8328FE5C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328fe7c
	if (!cr6.eq) goto loc_8328FE7C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25004
	ctx.r4.s64 = ctx.r11.s64 + 25004;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x832085e8
	ctx.lr = 0x8328FE7C;
	sub_832085E8(ctx, base);
loc_8328FE7C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8328FE88:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8328FE90;
	sub_83209AA8(ctx, base);
	// sth r29,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r29.u16);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r29,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r29.u16);
	// li r5,141
	ctx.r5.s64 = 141;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x8328FEB0;
	sub_83266DD0(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8328fec8
	if (!cr6.eq) goto loc_8328FEC8;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8328FEC4;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8328FEC8:
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8328fee4
	if (cr6.eq) goto loc_8328FEE4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8328f820
	ctx.lr = 0x8328FEE4;
	sub_8328F820(ctx, base);
loc_8328FEE4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328fe50
	if (cr6.eq) goto loc_8328FE50;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8328fe50
	if (!cr6.eq) goto loc_8328FE50;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328fe7c
	if (cr6.eq) goto loc_8328FE7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322e2b8
	ctx.lr = 0x8328FF18;
	sub_8322E2B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FF20"))) PPC_WEAK_FUNC(sub_8328FF20);
PPC_FUNC_IMPL(__imp__sub_8328FF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328FF28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328FF44;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8328ff78
	if (cr6.eq) goto loc_8328FF78;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328cfe0
	ctx.lr = 0x8328FF78;
	sub_8328CFE0(ctx, base);
loc_8328FF78:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
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
	// beq cr6,0x8328ffa0
	if (cr6.eq) goto loc_8328FFA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x8328FFA0;
	sub_83222030(ctx, base);
loc_8328FFA0:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328FFC0"))) PPC_WEAK_FUNC(sub_8328FFC0);
PPC_FUNC_IMPL(__imp__sub_8328FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8328FFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8328FFE4;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83290020
	if (cr6.eq) goto loc_83290020;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83290020
	if (cr6.eq) goto loc_83290020;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8328cfe0
	ctx.lr = 0x83290020;
	sub_8328CFE0(ctx, base);
loc_83290020:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
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
	// beq cr6,0x83290048
	if (cr6.eq) goto loc_83290048;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222030
	ctx.lr = 0x83290048;
	sub_83222030(ctx, base);
loc_83290048:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290068"))) PPC_WEAK_FUNC(sub_83290068);
PPC_FUNC_IMPL(__imp__sub_83290068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83290070;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r24,r11,31
	ctx.r24.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r25,r11,28,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// bl 0x83208aa0
	ctx.lr = 0x83290090;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83290130
	if (cr6.eq) goto loc_83290130;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832984d0
	ctx.lr = 0x832900A8;
	sub_832984D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832900fc
	if (cr6.lt) goto loc_832900FC;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bge cr6,0x832900fc
	if (!cr6.lt) goto loc_832900FC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,34
	ctx.r5.s64 = 34;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83266dd0
	ctx.lr = 0x832900DC;
	sub_83266DD0(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lhz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832900FC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83290124
	if (!cr6.eq) goto loc_83290124;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r10,25052
	ctx.r4.s64 = ctx.r10.s64 + 25052;
	// addi r3,r9,24256
	ctx.r3.s64 = ctx.r9.s64 + 24256;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x832085e8
	ctx.lr = 0x83290124;
	sub_832085E8(ctx, base);
loc_83290124:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83290130:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x83290138;
	sub_83209AA8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// sth r28,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r28.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// sth r28,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r28.u16);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
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
	// beq cr6,0x83290178
	if (cr6.eq) goto loc_83290178;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83290178;
	sub_83222030(ctx, base);
loc_83290178:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x832901a4
	if (!cr6.eq) goto loc_832901A4;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x832901A0;
	sub_832277F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_832901A4:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83290204
	if (!cr6.gt) goto loc_83290204;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_832901BC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832901ec
	if (cr6.eq) goto loc_832901EC;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832901ec
	if (cr6.eq) goto loc_832901EC;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8328f820
	ctx.lr = 0x832901EC;
	sub_8328F820(ctx, base);
loc_832901EC:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x832901bc
	if (cr6.lt) goto loc_832901BC;
loc_83290204:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83290220
	if (cr6.eq) goto loc_83290220;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// li r3,-4
	ctx.r3.s64 = -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83290224
	if (cr6.eq) goto loc_83290224;
loc_83290220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83290224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329022C"))) PPC_WEAK_FUNC(sub_8329022C);
PPC_FUNC_IMPL(__imp__sub_8329022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290230"))) PPC_WEAK_FUNC(sub_83290230);
PPC_FUNC_IMPL(__imp__sub_83290230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83290238;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x8328b650
	ctx.lr = 0x83290260;
	sub_8328B650(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328b6e8
	ctx.lr = 0x83290278;
	sub_8328B6E8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x83290280;
	sub_83209AA8(ctx, base);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832902bc
	if (cr6.eq) goto loc_832902BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x832902BC;
	sub_83222030(ctx, base);
loc_832902BC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r10,141
	ctx.r10.s64 = 141;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// lhz r9,2(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8329032c
	if (!cr6.gt) goto loc_8329032C;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_832902EC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83290314
	if (cr6.eq) goto loc_83290314;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328fa60
	ctx.lr = 0x83290314;
	sub_8328FA60(ctx, base);
loc_83290314:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x832902ec
	if (cr6.lt) goto loc_832902EC;
loc_8329032C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290338"))) PPC_WEAK_FUNC(sub_83290338);
PPC_FUNC_IMPL(__imp__sub_83290338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83290340;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8329036c
	if (cr6.eq) goto loc_8329036C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x8320d088
	ctx.lr = 0x8329036C;
	sub_8320D088(ctx, base);
loc_8329036C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832903f4
	if (cr6.lt) goto loc_832903F4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832264e0
	ctx.lr = 0x832903C0;
	sub_832264E0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x83290068
	ctx.lr = 0x832903E4;
	sub_83290068(ctx, base);
	// cntlzw r4,r3
	ctx.r4.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r4,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// bl 0x83222030
	ctx.lr = 0x832903F4;
	sub_83222030(ctx, base);
loc_832903F4:
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
	// beq cr6,0x83290420
	if (cr6.eq) goto loc_83290420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83290420;
	sub_83222030(ctx, base);
loc_83290420:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290438"))) PPC_WEAK_FUNC(sub_83290438);
PPC_FUNC_IMPL(__imp__sub_83290438) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1906
	cr6.compare<uint32_t>(ctx.r4.u32, 1906, xer);
	// bgt cr6,0x8329054c
	if (cr6.gt) goto loc_8329054C;
	// beq cr6,0x8329053c
	if (cr6.eq) goto loc_8329053C;
	// cmplwi cr6,r4,354
	cr6.compare<uint32_t>(ctx.r4.u32, 354, xer);
	// beq cr6,0x832904ec
	if (cr6.eq) goto loc_832904EC;
	// cmplwi cr6,r4,476
	cr6.compare<uint32_t>(ctx.r4.u32, 476, xer);
	// beq cr6,0x8329048c
	if (cr6.eq) goto loc_8329048C;
	// cmplwi cr6,r4,1250
	cr6.compare<uint32_t>(ctx.r4.u32, 1250, xer);
	// bne cr6,0x8329055c
	if (!cr6.eq) goto loc_8329055C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83290338
	ctx.lr = 0x83290488;
	sub_83290338(ctx, base);
	// b 0x83290520
	goto loc_83290520;
loc_8329048C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832904a8
	if (cr6.eq) goto loc_832904A8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x8320d088
	ctx.lr = 0x832904A8;
	sub_8320D088(ctx, base);
loc_832904A8:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// ori r9,r11,8400
	ctx.r9.u64 = ctx.r11.u64 | 8400;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832904dc
	if (cr6.eq) goto loc_832904DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832904DC;
	sub_83222030(ctx, base);
loc_832904DC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83290520
	goto loc_83290520;
loc_832904EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83290508
	if (cr6.eq) goto loc_83290508;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x8320d088
	ctx.lr = 0x83290508;
	sub_8320D088(ctx, base);
loc_83290508:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
loc_8329050C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328d490
	ctx.lr = 0x83290514;
	sub_8328D490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83290520;
	sub_83223BD0(ctx, base);
loc_83290520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83290524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8329053C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83290230
	ctx.lr = 0x83290548;
	sub_83290230(ctx, base);
	// b 0x83290520
	goto loc_83290520;
loc_8329054C:
	// cmplwi cr6,r11,2370
	cr6.compare<uint32_t>(ctx.r11.u32, 2370, xer);
	// beq cr6,0x8329050c
	if (cr6.eq) goto loc_8329050C;
	// cmplwi cr6,r11,2373
	cr6.compare<uint32_t>(ctx.r11.u32, 2373, xer);
	// beq cr6,0x83290564
	if (cr6.eq) goto loc_83290564;
loc_8329055C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83290524
	goto loc_83290524;
loc_83290564:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83290580
	if (cr6.eq) goto loc_83290580;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x8320d088
	ctx.lr = 0x83290580;
	sub_8320D088(ctx, base);
loc_83290580:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x832905b4
	if (!cr6.eq) goto loc_832905B4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832905b4
	if (cr6.eq) goto loc_832905B4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8328b8d0
	ctx.lr = 0x832905B0;
	sub_8328B8D0(ctx, base);
	// b 0x83290520
	goto loc_83290520;
loc_832905B4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,24680
	ctx.r4.s64 = ctx.r11.s64 + 24680;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x832085e8
	ctx.lr = 0x832905C8;
	sub_832085E8(ctx, base);
	// b 0x83290520
	goto loc_83290520;
}

__attribute__((alias("__imp__sub_832905CC"))) PPC_WEAK_FUNC(sub_832905CC);
PPC_FUNC_IMPL(__imp__sub_832905CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832905D0"))) PPC_WEAK_FUNC(sub_832905D0);
PPC_FUNC_IMPL(__imp__sub_832905D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832905D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r9,42
	ctx.r9.s64 = 42;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83290620
	if (cr6.eq) goto loc_83290620;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83290620
	if (cr6.eq) goto loc_83290620;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// bl 0x8320d088
	ctx.lr = 0x83290620;
	sub_8320D088(ctx, base);
loc_83290620:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83290688
	if (cr6.lt) goto loc_83290688;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,159
	ctx.r4.s64 = 159;
	// li r30,0
	ctx.r30.s64 = 0;
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
	// bl 0x83221378
	ctx.lr = 0x83290658;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83290670
	if (cr6.eq) goto loc_83290670;
	// bl 0x83239ec0
	ctx.lr = 0x83290664;
	sub_83239EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83290688
	if (!cr6.eq) goto loc_83290688;
loc_83290670:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11612
	ctx.r5.s64 = ctx.r11.s64 + 11612;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8320d548
	ctx.lr = 0x83290688;
	sub_8320D548(ctx, base);
loc_83290688:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x832906b0
	if (cr6.eq) goto loc_832906B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8328ff20
	ctx.lr = 0x832906A4;
	sub_8328FF20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832906B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8328ffc0
	ctx.lr = 0x832906B8;
	sub_8328FFC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832906C4"))) PPC_WEAK_FUNC(sub_832906C4);
PPC_FUNC_IMPL(__imp__sub_832906C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832906C8"))) PPC_WEAK_FUNC(sub_832906C8);
PPC_FUNC_IMPL(__imp__sub_832906C8) {
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
	// lhz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1907
	cr6.compare<uint32_t>(ctx.r4.u32, 1907, xer);
	// bgt cr6,0x832907d0
	if (cr6.gt) goto loc_832907D0;
	// beq cr6,0x8329070c
	if (cr6.eq) goto loc_8329070C;
	// cmplwi cr6,r4,1484
	cr6.compare<uint32_t>(ctx.r4.u32, 1484, xer);
	// bgt cr6,0x83290778
	if (cr6.gt) goto loc_83290778;
	// beq cr6,0x83290750
	if (cr6.eq) goto loc_83290750;
	// cmplwi cr6,r4,476
	cr6.compare<uint32_t>(ctx.r4.u32, 476, xer);
	// beq cr6,0x83290730
	if (cr6.eq) goto loc_83290730;
	// cmplwi cr6,r4,485
	cr6.compare<uint32_t>(ctx.r4.u32, 485, xer);
	// bne cr6,0x8329086c
	if (!cr6.eq) goto loc_8329086C;
loc_8329070C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8328fc58
	ctx.lr = 0x83290718;
	sub_8328FC58(ctx, base);
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
loc_83290730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b5c8
	ctx.lr = 0x83290738;
	sub_8328B5C8(ctx, base);
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
loc_83290750:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8328fd28
	ctx.lr = 0x83290760;
	sub_8328FD28(ctx, base);
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
loc_83290778:
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// beq cr6,0x832907ac
	if (cr6.eq) goto loc_832907AC;
	// cmplwi cr6,r11,1906
	cr6.compare<uint32_t>(ctx.r11.u32, 1906, xer);
	// bne cr6,0x8329086c
	if (!cr6.eq) goto loc_8329086C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8328fc58
	ctx.lr = 0x83290794;
	sub_8328FC58(ctx, base);
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
loc_832907AC:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8328b838
	ctx.lr = 0x832907B8;
	sub_8328B838(ctx, base);
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
loc_832907D0:
	// addi r11,r11,-2369
	ctx.r11.s64 = ctx.r11.s64 + -2369;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x8329086c
	if (cr6.gt) goto loc_8329086C;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2036
	ctx.r12.s64 = ctx.r12.s64 + 2036;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8329070C;
	case 1:
		goto loc_83290820;
	case 2:
		goto loc_8329070C;
	case 3:
		goto loc_832907AC;
	case 4:
		goto loc_8329086C;
	case 5:
		goto loc_8329086C;
	case 6:
		goto loc_8329086C;
	case 7:
		goto loc_8329086C;
	case 8:
		goto loc_8329086C;
	case 9:
		goto loc_8329086C;
	case 10:
		goto loc_83290848;
	default:
		return;
	}
	// lwz r25,1804(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1804);
	// lwz r25,2080(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2080);
	// lwz r25,1804(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1804);
	// lwz r25,1964(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1964);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2156(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2156);
	// lwz r25,2120(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2120);
loc_83290820:
	// bl 0x8328cdc0
	ctx.lr = 0x83290824;
	sub_8328CDC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83290830;
	sub_83223BD0(ctx, base);
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
loc_83290848:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832905d0
	ctx.lr = 0x83290854;
	sub_832905D0(ctx, base);
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
loc_8329086C:
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
}

__attribute__((alias("__imp__sub_83290884"))) PPC_WEAK_FUNC(sub_83290884);
PPC_FUNC_IMPL(__imp__sub_83290884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290888"))) PPC_WEAK_FUNC(sub_83290888);
PPC_FUNC_IMPL(__imp__sub_83290888) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329090c
	if (!cr6.eq) goto loc_8329090C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832908d4
	if (cr6.eq) goto loc_832908D4;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832908dc
	if (!cr6.eq) goto loc_832908DC;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x832908C8;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832908dc
	if (!cr6.eq) goto loc_832908DC;
loc_832908D4:
	// bl 0x83227908
	ctx.lr = 0x832908D8;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_832908DC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,21392
	ctx.r4.s64 = ctx.r11.s64 + 21392;
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// bl 0x832085e8
	ctx.lr = 0x832908F0;
	sub_832085E8(ctx, base);
loc_832908F0:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_832908F4:
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
loc_8329090C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e518
	ctx.lr = 0x83290918;
	sub_8322E518(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83290b40
	if (cr6.eq) goto loc_83290B40;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2369
	cr6.compare<uint32_t>(ctx.r4.u32, 2369, xer);
	// bgt cr6,0x83290a4c
	if (cr6.gt) goto loc_83290A4C;
	// beq cr6,0x83290a34
	if (cr6.eq) goto loc_83290A34;
	// cmplwi cr6,r4,1809
	cr6.compare<uint32_t>(ctx.r4.u32, 1809, xer);
	// bgt cr6,0x83290a24
	if (cr6.gt) goto loc_83290A24;
	// beq cr6,0x832909c4
	if (cr6.eq) goto loc_832909C4;
	// cmplwi cr6,r4,354
	cr6.compare<uint32_t>(ctx.r4.u32, 354, xer);
	// beq cr6,0x83290988
	if (cr6.eq) goto loc_83290988;
	// cmplwi cr6,r4,476
	cr6.compare<uint32_t>(ctx.r4.u32, 476, xer);
	// beq cr6,0x83290978
	if (cr6.eq) goto loc_83290978;
	// cmplwi cr6,r4,1484
	cr6.compare<uint32_t>(ctx.r4.u32, 1484, xer);
	// bne cr6,0x832908f0
	if (!cr6.eq) goto loc_832908F0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8328fd28
	ctx.lr = 0x83290970;
	sub_8328FD28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8328b5c8
	ctx.lr = 0x83290980;
	sub_8328B5C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290988:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832909a4
	if (cr6.eq) goto loc_832909A4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// bl 0x8320d088
	ctx.lr = 0x832909A4;
	sub_8320D088(ctx, base);
loc_832909A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8328ceb8
	ctx.lr = 0x832909B0;
	sub_8328CEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x832909BC;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_832909C4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832909e0
	if (cr6.eq) goto loc_832909E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// bl 0x8320d088
	ctx.lr = 0x832909E0;
	sub_8320D088(ctx, base);
loc_832909E0:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,25100
	ctx.r5.s64 = ctx.r8.s64 + 25100;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8328cc08
	ctx.lr = 0x83290A1C;
	sub_8328CC08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290A24:
	// cmplwi cr6,r11,1906
	cr6.compare<uint32_t>(ctx.r11.u32, 1906, xer);
	// beq cr6,0x83290a34
	if (cr6.eq) goto loc_83290A34;
	// cmplwi cr6,r11,1907
	cr6.compare<uint32_t>(ctx.r11.u32, 1907, xer);
	// bne cr6,0x832908f0
	if (!cr6.eq) goto loc_832908F0;
loc_83290A34:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8328fc58
	ctx.lr = 0x83290A44;
	sub_8328FC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290A4C:
	// addi r11,r11,-2370
	ctx.r11.s64 = ctx.r11.s64 + -2370;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x832908f0
	if (cr6.gt) goto loc_832908F0;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2672
	ctx.r12.s64 = ctx.r12.s64 + 2672;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83290A98;
	case 1:
		goto loc_83290A34;
	case 2:
		goto loc_83290AB4;
	case 3:
		goto loc_83290B14;
	case 4:
		goto loc_832908F0;
	case 5:
		goto loc_832908F0;
	case 6:
		goto loc_832908F0;
	case 7:
		goto loc_832908F0;
	case 8:
		goto loc_832908F0;
	case 9:
		goto loc_83290B30;
	default:
		return;
	}
	// lwz r25,2712(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2712);
	// lwz r25,2612(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2612);
	// lwz r25,2740(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2740);
	// lwz r25,2836(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2836);
	// lwz r25,2288(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2288);
	// lwz r25,2288(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2288);
	// lwz r25,2288(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2288);
	// lwz r25,2288(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2288);
	// lwz r25,2288(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2288);
	// lwz r25,2864(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
loc_83290A98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328ceb8
	ctx.lr = 0x83290AA0;
	sub_8328CEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83290AAC;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290AB4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83290ad0
	if (cr6.eq) goto loc_83290AD0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// bl 0x8320d088
	ctx.lr = 0x83290AD0;
	sub_8320D088(ctx, base);
loc_83290AD0:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,25100
	ctx.r5.s64 = ctx.r8.s64 + 25100;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8328cc08
	ctx.lr = 0x83290B0C;
	sub_8328CC08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290B14:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8328b8d0
	ctx.lr = 0x83290B28;
	sub_8328B8D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
loc_83290B30:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832905d0
	ctx.lr = 0x83290B40;
	sub_832905D0(ctx, base);
loc_83290B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832908f4
	goto loc_832908F4;
}

__attribute__((alias("__imp__sub_83290B48"))) PPC_WEAK_FUNC(sub_83290B48);
PPC_FUNC_IMPL(__imp__sub_83290B48) {
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
	// bl 0x83235198
	ctx.lr = 0x83290B58;
	sub_83235198(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,75
	ctx.r11.s64 = 75;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r10,209
	ctx.r10.s64 = 209;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83290B88"))) PPC_WEAK_FUNC(sub_83290B88);
PPC_FUNC_IMPL(__imp__sub_83290B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83290B90;
	__savegprlr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322e2b8
	ctx.lr = 0x83290BA0;
	sub_8322E2B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83290d1c
	if (cr6.eq) goto loc_83290D1C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83290bc4
	if (cr6.eq) goto loc_83290BC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83290BC4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2383
	ctx.r11.s64 = 2383;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// stb r31,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83290BE8;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83290c2c
	if (!cr6.eq) goto loc_83290C2C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r6,2088
	ctx.r6.s64 = 2088;
	// addi r5,r11,25112
	ctx.r5.s64 = ctx.r11.s64 + 25112;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83297a40
	ctx.lr = 0x83290C08;
	sub_83297A40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83255a88
	ctx.lr = 0x83290C10;
	sub_83255A88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83201af8
	ctx.lr = 0x83290C18;
	sub_83201AF8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x83290C20;
	sub_83222030(ctx, base);
	// li r3,-2088
	ctx.r3.s64 = -2088;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83290C2C:
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83290d1c
	if (cr6.eq) goto loc_83290D1C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,3
	ctx.r29.s64 = 3;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x8320db50
	ctx.lr = 0x83290C98;
	sub_8320DB50(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// sth r7,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r7.u16);
	// stb r6,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r6.u8);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83223d00
	ctx.lr = 0x83290D00;
	sub_83223D00(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322d248
	ctx.lr = 0x83290D14;
	sub_8322D248(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320d9e8
	ctx.lr = 0x83290D1C;
	sub_8320D9E8(ctx, base);
loc_83290D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290D28"))) PPC_WEAK_FUNC(sub_83290D28);
PPC_FUNC_IMPL(__imp__sub_83290D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83290D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83290D40;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x83290d5c
	if (cr6.eq) goto loc_83290D5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322e3e0
	ctx.lr = 0x83290D54;
	sub_8322E3E0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83290D5C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2384
	ctx.r11.s64 = 2384;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83290D7C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83290db8
	if (!cr6.eq) goto loc_83290DB8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r6,2089
	ctx.r6.s64 = 2089;
	// addi r5,r11,25208
	ctx.r5.s64 = ctx.r11.s64 + 25208;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83297a40
	ctx.lr = 0x83290D9C;
	sub_83297A40(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83255a88
	ctx.lr = 0x83290DA4;
	sub_83255A88(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83201af8
	ctx.lr = 0x83290DAC;
	sub_83201AF8(ctx, base);
	// li r3,-2089
	ctx.r3.s64 = -2089;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83290DB8:
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83290ed0
	if (cr6.eq) goto loc_83290ED0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,3
	ctx.r29.s64 = 3;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r29,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r29.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x8320db50
	ctx.lr = 0x83290E24;
	sub_8320DB50(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stb r7,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r7.u8);
	// sth r3,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r3.u16);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stb r9,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r9.u8);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223d00
	ctx.lr = 0x83290E9C;
	sub_83223D00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x83290EAC;
	sub_832240B8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322d248
	ctx.lr = 0x83290EC0;
	sub_8322D248(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83290EC8;
	sub_83222030(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x83290ED0;
	sub_8320D9E8(ctx, base);
loc_83290ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83290EDC"))) PPC_WEAK_FUNC(sub_83290EDC);
PPC_FUNC_IMPL(__imp__sub_83290EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83290EE0"))) PPC_WEAK_FUNC(sub_83290EE0);
PPC_FUNC_IMPL(__imp__sub_83290EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83290EE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8322e518
	ctx.lr = 0x83290F00;
	sub_8322E518(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832910dc
	if (cr6.eq) goto loc_832910DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2382
	ctx.r11.s64 = 2382;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// stb r30,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r30.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83290F2C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83290f70
	if (!cr6.eq) goto loc_83290F70;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r6,2090
	ctx.r6.s64 = 2090;
	// addi r5,r11,25304
	ctx.r5.s64 = ctx.r11.s64 + 25304;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83297a40
	ctx.lr = 0x83290F4C;
	sub_83297A40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83255a88
	ctx.lr = 0x83290F54;
	sub_83255A88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83201af8
	ctx.lr = 0x83290F5C;
	sub_83201AF8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x83290F64;
	sub_83222030(ctx, base);
	// li r3,-2090
	ctx.r3.s64 = -2090;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83290F70:
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832910dc
	if (cr6.eq) goto loc_832910DC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8320db50
	ctx.lr = 0x83290FE0;
	sub_8320DB50(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// sth r6,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r6.u16);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stb r5,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r5.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r25,36(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stb r25,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r25.u8);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83223d00
	ctx.lr = 0x83291060;
	sub_83223D00(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832910c0
	if (!cr6.gt) goto loc_832910C0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
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
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x832910c0
	if (!cr6.gt) goto loc_832910C0;
loc_83291090:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8329109c
	if (cr6.eq) goto loc_8329109C;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_8329109C:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x832910B0;
	sub_832240B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83291090
	if (cr6.lt) goto loc_83291090;
loc_832910C0:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322d248
	ctx.lr = 0x832910D4;
	sub_8322D248(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8320d9e8
	ctx.lr = 0x832910DC;
	sub_8320D9E8(ctx, base);
loc_832910DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832910E8"))) PPC_WEAK_FUNC(sub_832910E8);
PPC_FUNC_IMPL(__imp__sub_832910E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832910F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83209b18
	ctx.lr = 0x83291108;
	sub_83209B18(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x8329111C;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329113c
	if (!cr6.eq) goto loc_8329113C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83261730
	ctx.lr = 0x83291130;
	sub_83261730(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329113C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25424
	ctx.r4.s64 = ctx.r11.s64 + 25424;
	// addi r3,r10,25416
	ctx.r3.s64 = ctx.r10.s64 + 25416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83208330
	ctx.lr = 0x83291154;
	sub_83208330(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291160"))) PPC_WEAK_FUNC(sub_83291160);
PPC_FUNC_IMPL(__imp__sub_83291160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83291168;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,131
	ctx.r10.s64 = 131;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwimi r11,r10,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832912b0
	if (cr6.eq) goto loc_832912B0;
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwimi r6,r8,16,14,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x30000) | (ctx.r6.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r5,r7,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r6,0,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3FFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x832911e0
	if (cr6.eq) goto loc_832911E0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83261aa8
	ctx.lr = 0x832911DC;
	sub_83261AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832911E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291214
	if (cr6.eq) goto loc_83291214;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r6,r11,18784
	ctx.r6.s64 = ctx.r11.s64 + 18784;
	// addi r5,r10,-28864
	ctx.r5.s64 = ctx.r10.s64 + -28864;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x83291210;
	sub_83297A40(ctx, base);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_83291214:
	// lhz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x8320ce58
	ctx.lr = 0x8329121C;
	sub_8320CE58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832910e8
	ctx.lr = 0x8329122C;
	sub_832910E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832912a8
	if (!cr6.eq) goto loc_832912A8;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291254
	if (cr6.eq) goto loc_83291254;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_83291254:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8329129c
	if (cr6.eq) goto loc_8329129C;
	// bl 0x8320ce58
	ctx.lr = 0x83291260;
	sub_8320CE58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832910e8
	ctx.lr = 0x83291270;
	sub_832910E8(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x8320ce70
	ctx.lr = 0x83291294;
	sub_8320CE70(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329129C:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832912A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce70
	ctx.lr = 0x832912B0;
	sub_8320CE70(ctx, base);
loc_832912B0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832912B8"))) PPC_WEAK_FUNC(sub_832912B8);
PPC_FUNC_IMPL(__imp__sub_832912B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832912C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,33
	ctx.r30.s64 = 33;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwimi r11,r30,3,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 3) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x8320cd50
	ctx.lr = 0x832912E4;
	sub_8320CD50(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r9,25404
	ctx.r5.s64 = ctx.r9.s64 + 25404;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwimi r8,r30,3,21,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r30.u32, 3) & 0x7FE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF801);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r9,r8,0,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x83291338;
	sub_83297A40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206ed0
	ctx.lr = 0x83291344;
	sub_83206ED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83291364
	if (!cr6.eq) goto loc_83291364;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bl 0x83206f30
	ctx.lr = 0x8329135C;
	sub_83206F30(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83291364:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25452
	ctx.r4.s64 = ctx.r11.s64 + 25452;
	// addi r3,r10,25416
	ctx.r3.s64 = ctx.r10.s64 + 25416;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x83208330
	ctx.lr = 0x8329137C;
	sub_83208330(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329138C"))) PPC_WEAK_FUNC(sub_8329138C);
PPC_FUNC_IMPL(__imp__sub_8329138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291390"))) PPC_WEAK_FUNC(sub_83291390);
PPC_FUNC_IMPL(__imp__sub_83291390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x832913AC;
	sub_83296BA8(ctx, base);
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// blt cr6,0x832913cc
	if (cr6.lt) goto loc_832913CC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25508
	ctx.r4.s64 = ctx.r11.s64 + 25508;
	// addi r3,r10,25416
	ctx.r3.s64 = ctx.r10.s64 + 25416;
	// bl 0x83208568
	ctx.lr = 0x832913CC;
	sub_83208568(ctx, base);
loc_832913CC:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255b10
	ctx.lr = 0x832913D8;
	sub_83255B10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83207058
	ctx.lr = 0x832913E0;
	sub_83207058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832001a0
	ctx.lr = 0x832913EC;
	sub_832001A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83291404
	if (cr6.eq) goto loc_83291404;
	// bl 0x83200388
	ctx.lr = 0x832913FC;
	sub_83200388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83291454
	goto loc_83291454;
loc_83291404:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83291448
	if (!cr6.eq) goto loc_83291448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83255a88
	ctx.lr = 0x83291414;
	sub_83255A88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832278d0
	ctx.lr = 0x8329141C;
	sub_832278D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83291440
	if (!cr6.eq) goto loc_83291440;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,25480
	ctx.r4.s64 = ctx.r11.s64 + 25480;
	// addi r3,r10,25416
	ctx.r3.s64 = ctx.r10.s64 + 25416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83208330
	ctx.lr = 0x83291440;
	sub_83208330(ctx, base);
loc_83291440:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83291454
	goto loc_83291454;
loc_83291448:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83205a90
	ctx.lr = 0x83291454;
	sub_83205A90(ctx, base);
loc_83291454:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329146C"))) PPC_WEAK_FUNC(sub_8329146C);
PPC_FUNC_IMPL(__imp__sub_8329146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291470"))) PPC_WEAK_FUNC(sub_83291470);
PPC_FUNC_IMPL(__imp__sub_83291470) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// bl 0x8325b4d8
	ctx.lr = 0x8329148C;
	sub_8325B4D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,55
	ctx.r9.s64 = 55;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// li r7,189
	ctx.r7.s64 = 189;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// sth r9,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r9.u16);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832914DC"))) PPC_WEAK_FUNC(sub_832914DC);
PPC_FUNC_IMPL(__imp__sub_832914DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832914E0"))) PPC_WEAK_FUNC(sub_832914E0);
PPC_FUNC_IMPL(__imp__sub_832914E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,308
	ctx.r10.s64 = 308;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// dcbt r11,r10
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// b 0x8325b658
	sub_8325B658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832914FC"))) PPC_WEAK_FUNC(sub_832914FC);
PPC_FUNC_IMPL(__imp__sub_832914FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291500"))) PPC_WEAK_FUNC(sub_83291500);
PPC_FUNC_IMPL(__imp__sub_83291500) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329152c
	if (cr6.eq) goto loc_8329152C;
	// bl 0x83209d68
	ctx.lr = 0x83291524;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8329152C:
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

__attribute__((alias("__imp__sub_83291540"))) PPC_WEAK_FUNC(sub_83291540);
PPC_FUNC_IMPL(__imp__sub_83291540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,128
	cr6.compare<uint32_t>(ctx.r3.u32, 128, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r3,2048
	cr6.compare<uint32_t>(ctx.r3.u32, 2048, xer);
	// bge cr6,0x83291564
	if (!cr6.lt) goto loc_83291564;
	// rlwinm r11,r3,2,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1F00;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// ori r9,r11,49280
	ctx.r9.u64 = ctx.r11.u64 | 49280;
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// blr 
	return;
loc_83291564:
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// rlwinm r10,r3,0,20,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFC0;
	// ori r9,r11,8224
	ctx.r9.u64 = ctx.r11.u64 | 8224;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwimi r9,r3,2,14,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 2) & 0x3C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFC3FFF);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 | ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291588"))) PPC_WEAK_FUNC(sub_83291588);
PPC_FUNC_IMPL(__imp__sub_83291588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x832915ac
	if (cr6.lt) goto loc_832915AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r11,r3,30,14,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC3FFF);
	// rlwimi r10,r11,30,16,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0xFFC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFF003F);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
loc_832915AC:
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rlwimi r3,r3,30,21,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x7C0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r3,r3,21
	ctx.r3.u64 = ctx.r3.u32 & 0x7FF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832915C0"))) PPC_WEAK_FUNC(sub_832915C0);
PPC_FUNC_IMPL(__imp__sub_832915C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x832915d0
	if (cr6.gt) goto loc_832915D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832915D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// bge cr6,0x832915f4
	if (!cr6.lt) goto loc_832915F4;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x832915ec
	if (cr6.lt) goto loc_832915EC;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
loc_832915EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832915F4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x8329161c
	if (!cr6.lt) goto loc_8329161C;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// blt cr6,0x83291614
	if (cr6.lt) goto loc_83291614;
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r3,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_83291614:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8329161C:
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x83291638
	if (cr6.lt) goto loc_83291638;
	// rlwinm r11,r3,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// stb r3,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r3.u8);
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
loc_83291638:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291640"))) PPC_WEAK_FUNC(sub_83291640);
PPC_FUNC_IMPL(__imp__sub_83291640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83291648;
	__savegprlr_29(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291734
	if (cr6.eq) goto loc_83291734;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// subfic r4,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r4.s64;
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_83291678:
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bge cr6,0x83291734
	if (!cr6.lt) goto loc_83291734;
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r29,r9,0,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832916a0
	if (!cr6.eq) goto loc_832916A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x832916d8
	goto loc_832916D8;
loc_832916A0:
	// rlwinm r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x832916c4
	if (!cr6.eq) goto loc_832916C4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x832916d8
	goto loc_832916D8;
loc_832916C4:
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lbz r29,2(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// or r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 | ctx.r29.u64;
loc_832916D8:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// blt cr6,0x832916f8
	if (cr6.lt) goto loc_832916F8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwimi r9,r10,30,14,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x3C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFC3FFF);
	// rlwimi r29,r9,30,16,25
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xFFC0) | (ctx.r29.u64 & 0xFFFFFFFFFFFF003F);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// b 0x83291708
	goto loc_83291708;
loc_832916F8:
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// blt cr6,0x83291708
	if (cr6.lt) goto loc_83291708;
	// rlwimi r10,r10,30,21,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x7C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
loc_83291708:
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// srawi r29,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// stb r29,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r29.u8);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83291678
	if (!cr6.eq) goto loc_83291678;
loc_83291734:
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stbx r30,r6,r3
	PPC_STORE_U8(ctx.r6.u32 + ctx.r3.u32, ctx.r30.u8);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// beq cr6,0x83291754
	if (cr6.eq) goto loc_83291754;
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
loc_83291754:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291758"))) PPC_WEAK_FUNC(sub_83291758);
PPC_FUNC_IMPL(__imp__sub_83291758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83291774:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329178c
	if (!cr6.eq) goto loc_8329178C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x832917a4
	goto loc_832917A4;
loc_8329178C:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832917a0
	if (!cr6.eq) goto loc_832917A0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x832917a4
	goto loc_832917A4;
loc_832917A0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832917A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291774
	if (!cr6.eq) goto loc_83291774;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832917BC"))) PPC_WEAK_FUNC(sub_832917BC);
PPC_FUNC_IMPL(__imp__sub_832917BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832917C0"))) PPC_WEAK_FUNC(sub_832917C0);
PPC_FUNC_IMPL(__imp__sub_832917C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832917d8
	if (!cr6.eq) goto loc_832917D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_832917D8:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r3,r11,2
	ctx.r3.u64 = ctx.r11.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832917E4"))) PPC_WEAK_FUNC(sub_832917E4);
PPC_FUNC_IMPL(__imp__sub_832917E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832917E8"))) PPC_WEAK_FUNC(sub_832917E8);
PPC_FUNC_IMPL(__imp__sub_832917E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83291864
	if (cr6.eq) goto loc_83291864;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// and r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83291858
	if (cr6.eq) goto loc_83291858;
loc_83291810:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x8329186c
	if (cr6.eq) goto loc_8329186C;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r7,r10,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83291830
	if (!cr6.eq) goto loc_83291830;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83291848
	goto loc_83291848;
loc_83291830:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83291844
	if (!cr6.eq) goto loc_83291844;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x83291848
	goto loc_83291848;
loc_83291844:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_83291848:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291810
	if (!cr6.eq) goto loc_83291810;
loc_83291858:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x83291868
	if (cr6.eq) goto loc_83291868;
loc_83291864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83291868:
	// blr 
	return;
loc_8329186C:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291874"))) PPC_WEAK_FUNC(sub_83291874);
PPC_FUNC_IMPL(__imp__sub_83291874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291878"))) PPC_WEAK_FUNC(sub_83291878);
PPC_FUNC_IMPL(__imp__sub_83291878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83291880;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bne cr6,0x832918bc
	if (!cr6.eq) goto loc_832918BC;
	// rlwinm r11,r7,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r29,r7,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// stwx r9,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// b 0x832918e4
	goto loc_832918E4;
loc_832918BC:
	// subfic r11,r11,4
	xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832918e4
	if (!cr6.gt) goto loc_832918E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832918e4
	if (cr6.eq) goto loc_832918E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832918DC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x832918dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832918DC;
loc_832918E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832918f4
	if (!cr6.eq) goto loc_832918F4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832918F4:
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blt cr6,0x83291910
	if (cr6.lt) goto loc_83291910;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x832919f8
	if (cr6.lt) goto loc_832919F8;
loc_83291910:
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// beq cr6,0x832919f8
	if (cr6.eq) goto loc_832919F8;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x832917e8
	ctx.lr = 0x83291920;
	sub_832917E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832919f8
	if (cr6.eq) goto loc_832919F8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8329194c
	if (cr6.lt) goto loc_8329194C;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// bl 0x832917e8
	ctx.lr = 0x8329193C;
	sub_832917E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329194c
	if (!cr6.eq) goto loc_8329194C;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8329194C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832919b4
	if (cr6.eq) goto loc_832919B4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r5,r30,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r30.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x83291990
	if (!cr6.lt) goto loc_83291990;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83254ec0
	ctx.lr = 0x8329197C;
	sub_83254EC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83255980
	ctx.lr = 0x83291984;
	sub_83255980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83291990:
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r6,r31,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832553f0
	ctx.lr = 0x832919A0;
	sub_832553F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83255980
	ctx.lr = 0x832919A8;
	sub_83255980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832919B4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x832919e4
	if (!cr6.lt) goto loc_832919E4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83255098
	ctx.lr = 0x832919D0;
	sub_83255098(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255980
	ctx.lr = 0x832919D8;
	sub_83255980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832919E4:
	// subf r7,r31,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83255510
	ctx.lr = 0x832919F0;
	sub_83255510(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83255980
	ctx.lr = 0x832919F8;
	sub_83255980(ctx, base);
loc_832919F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291A04"))) PPC_WEAK_FUNC(sub_83291A04);
PPC_FUNC_IMPL(__imp__sub_83291A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291A08"))) PPC_WEAK_FUNC(sub_83291A08);
PPC_FUNC_IMPL(__imp__sub_83291A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83291A10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83291abc
	if (cr6.eq) goto loc_83291ABC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83291abc
	if (cr6.eq) goto loc_83291ABC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83296ba8
	ctx.lr = 0x83291A44;
	sub_83296BA8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83291abc
	if (cr6.eq) goto loc_83291ABC;
loc_83291A54:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296de8
	ctx.lr = 0x83291A64;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83291ab8
	if (cr6.eq) goto loc_83291AB8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291a84
	if (!cr6.eq) goto loc_83291A84;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83291a9c
	goto loc_83291A9C;
loc_83291A84:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83291a98
	if (!cr6.eq) goto loc_83291A98;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x83291a9c
	goto loc_83291A9C;
loc_83291A98:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_83291A9C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83291a54
	if (!cr6.eq) goto loc_83291A54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83291AB8:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_83291ABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291AC8"))) PPC_WEAK_FUNC(sub_83291AC8);
PPC_FUNC_IMPL(__imp__sub_83291AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83291AD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83291b7c
	if (cr6.eq) goto loc_83291B7C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83291b7c
	if (cr6.eq) goto loc_83291B7C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83296ba8
	ctx.lr = 0x83291B08;
	sub_83296BA8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83291b7c
	if (cr6.eq) goto loc_83291B7C;
loc_83291B18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296de8
	ctx.lr = 0x83291B28;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83291b34
	if (!cr6.eq) goto loc_83291B34;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_83291B34:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x83291b7c
	if (!cr6.lt) goto loc_83291B7C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291b54
	if (!cr6.eq) goto loc_83291B54;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83291b6c
	goto loc_83291B6C;
loc_83291B54:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83291b68
	if (!cr6.eq) goto loc_83291B68;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x83291b6c
	goto loc_83291B6C;
loc_83291B68:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_83291B6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83291b18
	if (!cr6.eq) goto loc_83291B18;
loc_83291B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83291B88"))) PPC_WEAK_FUNC(sub_83291B88);
PPC_FUNC_IMPL(__imp__sub_83291B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291ba4
	if (!cr6.eq) goto loc_83291BA4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83291bac
	goto loc_83291BAC;
loc_83291BA4:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
loc_83291BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83291BC0:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r3,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bdnz 0x83291bc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83291BC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291BD8"))) PPC_WEAK_FUNC(sub_83291BD8);
PPC_FUNC_IMPL(__imp__sub_83291BD8) {
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// bl 0x832915c0
	ctx.lr = 0x83291BEC;
	sub_832915C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bge cr6,0x83291c04
	if (!cr6.lt) goto loc_83291C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
loc_83291C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83291C14"))) PPC_WEAK_FUNC(sub_83291C14);
PPC_FUNC_IMPL(__imp__sub_83291C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83291C18"))) PPC_WEAK_FUNC(sub_83291C18);
PPC_FUNC_IMPL(__imp__sub_83291C18) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83291c48
	if (!cr6.eq) goto loc_83291C48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83291e34
	goto loc_83291E34;
loc_83291C48:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83254ec0
	ctx.lr = 0x83291C58;
	sub_83254EC0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x83291d84
	if (cr6.eq) goto loc_83291D84;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291e04
	if (cr6.eq) goto loc_83291E04;
	// lis r10,239
	ctx.r10.s64 = 15663104;
	// lis r9,239
	ctx.r9.s64 = 15663104;
	// ori r5,r10,48513
	ctx.r5.u64 = ctx.r10.u64 | 48513;
	// ori r6,r9,48538
	ctx.r6.u64 = ctx.r9.u64 | 48538;
loc_83291C84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291d50
	if (cr6.eq) goto loc_83291D50;
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291cf0
	if (cr6.eq) goto loc_83291CF0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 | ctx.r9.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x83291ce0
	if (cr6.lt) goto loc_83291CE0;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bgt cr6,0x83291ce0
	if (cr6.gt) goto loc_83291CE0;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
loc_83291CE0:
	// lbzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291c84
	if (!cr6.eq) goto loc_83291C84;
	// b 0x83291e04
	goto loc_83291E04;
loc_83291CF0:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r7,2
	ctx.r7.s64 = 2;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r8,52913
	cr6.compare<uint32_t>(ctx.r8.u32, 52913, xer);
	// blt cr6,0x83291ce0
	if (cr6.lt) goto loc_83291CE0;
	// cmplwi cr6,r8,53129
	cr6.compare<uint32_t>(ctx.r8.u32, 53129, xer);
	// bgt cr6,0x83291ce0
	if (cr6.gt) goto loc_83291CE0;
	// cmplwi cr6,r8,53122
	cr6.compare<uint32_t>(ctx.r8.u32, 53122, xer);
	// bne cr6,0x83291d1c
	if (!cr6.eq) goto loc_83291D1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_83291D1C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bge cr6,0x83291d3c
	if (!cr6.lt) goto loc_83291D3C;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_83291D3C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// b 0x83291ce0
	goto loc_83291CE0;
loc_83291D50:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x83291d68
	if (cr6.lt) goto loc_83291D68;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x83291d6c
	if (!cr6.gt) goto loc_83291D6C;
loc_83291D68:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83291D6C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291d7c
	if (cr6.eq) goto loc_83291D7C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
loc_83291D7C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x83291ce0
	goto loc_83291CE0;
loc_83291D84:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291e04
	if (cr6.eq) goto loc_83291E04;
	// lis r10,239
	ctx.r10.s64 = 15663104;
	// lis r9,239
	ctx.r9.s64 = 15663104;
	// ori r5,r10,48289
	ctx.r5.u64 = ctx.r10.u64 | 48289;
	// ori r6,r9,48314
	ctx.r6.u64 = ctx.r9.u64 | 48314;
loc_83291D9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291eac
	if (cr6.eq) goto loc_83291EAC;
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291e50
	if (cr6.eq) goto loc_83291E50;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r7,3
	ctx.r7.s64 = 3;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 | ctx.r9.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x83291df8
	if (cr6.lt) goto loc_83291DF8;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bgt cr6,0x83291df8
	if (cr6.gt) goto loc_83291DF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,224
	ctx.r9.s64 = ctx.r9.s64 + 224;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
loc_83291DF8:
	// lbzux r10,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83291d9c
	if (!cr6.eq) goto loc_83291D9C;
loc_83291E04:
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// subfic r10,r9,4
	xer.ca = ctx.r9.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r9.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83291e34
	if (!cr6.gt) goto loc_83291E34;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83291e34
	if (cr6.eq) goto loc_83291E34;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83291E2C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83291e2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83291E2C;
loc_83291E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83291E50:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r7,2
	ctx.r7.s64 = 2;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r8,52881
	cr6.compare<uint32_t>(ctx.r8.u32, 52881, xer);
	// blt cr6,0x83291df8
	if (cr6.lt) goto loc_83291DF8;
	// cmplwi cr6,r8,52905
	cr6.compare<uint32_t>(ctx.r8.u32, 52905, xer);
	// bgt cr6,0x83291df8
	if (cr6.gt) goto loc_83291DF8;
	// cmplwi cr6,r8,52898
	cr6.compare<uint32_t>(ctx.r8.u32, 52898, xer);
	// beq cr6,0x83291df8
	if (cr6.eq) goto loc_83291DF8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r4,r8,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83291df8
	if (cr6.eq) goto loc_83291DF8;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,192
	ctx.r9.s64 = ctx.r9.s64 + 192;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// b 0x83291df8
	goto loc_83291DF8;
loc_83291EAC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x83291ec4
	if (cr6.lt) goto loc_83291EC4;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x83291ec8
	if (!cr6.gt) goto loc_83291EC8;
loc_83291EC4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83291EC8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83291ed8
	if (cr6.eq) goto loc_83291ED8;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_83291ED8:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x83291df8
	goto loc_83291DF8;
}

__attribute__((alias("__imp__sub_83291EE0"))) PPC_WEAK_FUNC(sub_83291EE0);
PPC_FUNC_IMPL(__imp__sub_83291EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83291EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83291f04
	if (!cr6.eq) goto loc_83291F04;
loc_83291EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83291F04:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83291ef8
	if (cr6.eq) goto loc_83291EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83291F18;
	sub_83296BA8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r29,r11,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83291F2C;
	sub_83209AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83291640
	ctx.lr = 0x83291F40;
	sub_83291640(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// li r31,1
	ctx.r31.s64 = 1;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83291fa0
	if (cr6.eq) goto loc_83291FA0;
loc_83291F6C:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bge cr6,0x83291fb4
	if (!cr6.lt) goto loc_83291FB4;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x83291f94
	if (cr6.eq) goto loc_83291F94;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x83291f94
	if (cr6.eq) goto loc_83291F94;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x83291f9c
	if (cr6.lt) goto loc_83291F9C;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x83291f9c
	if (cr6.gt) goto loc_83291F9C;
loc_83291F94:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83291fe4
	if (!cr6.eq) goto loc_83291FE4;
loc_83291F9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83291FA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x83291FA8;
	sub_83209D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83291FB4:
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// ble cr6,0x83291fe4
	if (!cr6.gt) goto loc_83291FE4;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// beq cr6,0x83291fe4
	if (cr6.eq) goto loc_83291FE4;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x83291f9c
	if (cr6.lt) goto loc_83291F9C;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// ble cr6,0x83291fe4
	if (!cr6.gt) goto loc_83291FE4;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x83291f9c
	if (cr6.lt) goto loc_83291F9C;
	// cmplwi cr6,r11,65280
	cr6.compare<uint32_t>(ctx.r11.u32, 65280, xer);
	// bge cr6,0x83291f9c
	if (!cr6.lt) goto loc_83291F9C;
loc_83291FE4:
	// lbzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83291f6c
	if (!cr6.eq) goto loc_83291F6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x83292010;
	sub_83209D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329201C"))) PPC_WEAK_FUNC(sub_8329201C);
PPC_FUNC_IMPL(__imp__sub_8329201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292020"))) PPC_WEAK_FUNC(sub_83292020);
PPC_FUNC_IMPL(__imp__sub_83292020) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,27348
	ctx.r9.s64 = ctx.r10.s64 + 27348;
	// stb r11,36(r9)
	PPC_STORE_U8(ctx.r9.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292034"))) PPC_WEAK_FUNC(sub_83292034);
PPC_FUNC_IMPL(__imp__sub_83292034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292038"))) PPC_WEAK_FUNC(sub_83292038);
PPC_FUNC_IMPL(__imp__sub_83292038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832920d4
	if (cr6.lt) goto loc_832920D4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83292098
	if (!cr6.gt) goto loc_83292098;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83292078:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// beq cr6,0x832920d4
	if (cr6.eq) goto loc_832920D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x83292078
	if (cr6.lt) goto loc_83292078;
loc_83292098:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,257
	ctx.r9.s64 = ctx.r10.s64 + 257;
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// rlwinm r4,r9,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// beq cr6,0x832920c0
	if (cr6.eq) goto loc_832920C0;
	// bl 0x83209df8
	ctx.lr = 0x832920B8;
	sub_83209DF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_832920C0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832920D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832920EC"))) PPC_WEAK_FUNC(sub_832920EC);
PPC_FUNC_IMPL(__imp__sub_832920EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832920F0"))) PPC_WEAK_FUNC(sub_832920F0);
PPC_FUNC_IMPL(__imp__sub_832920F0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r30,r10,27348
	ctx.r30.s64 = ctx.r10.s64 + 27348;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r3,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r3.u16);
	// sth r4,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r4.u16);
	// bl 0x83292038
	ctx.lr = 0x83292130;
	sub_83292038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83292038
	ctx.lr = 0x83292138;
	sub_83292038(ctx, base);
	// stfs f31,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f30,44(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_83292160"))) PPC_WEAK_FUNC(sub_83292160);
PPC_FUNC_IMPL(__imp__sub_83292160) {
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
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x83292174;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// lwz r11,27348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27348);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,275
	ctx.r9.s64 = ctx.r10.s64 + 275;
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// rlwinm r4,r9,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// beq cr6,0x832921c8
	if (cr6.eq) goto loc_832921C8;
	// bl 0x83209df8
	ctx.lr = 0x832921C0;
	sub_83209DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_832921C8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sthx r10,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u16);
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// stfs f29,4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f28,12(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,16(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// bgt cr6,0x83292210
	if (cr6.gt) goto loc_83292210;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83292210:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329223c
	if (cr6.eq) goto loc_8329223C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stfs f28,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f29,12(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_8329223C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x83292248;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292258"))) PPC_WEAK_FUNC(sub_83292258);
PPC_FUNC_IMPL(__imp__sub_83292258) {
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
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce764
	ctx.lr = 0x8329226C;
	__savefpr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f3
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f3.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// fmr f23,f7
	ctx.f23.f64 = ctx.f7.f64;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// lfs f24,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// lfs f31,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
loc_8329229C:
	// fadds f0,f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f13,f1,f26
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fmuls f28,f11,f31
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f27,f10,f31
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fsubs f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x832922d0
	if (!cr6.lt) goto loc_832922D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832922D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832922e0
	if (!cr6.eq) goto loc_832922E0;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_832922E0:
	// fsubs f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x832922f4
	if (!cr6.lt) goto loc_832922F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832922F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83292304
	if (!cr6.eq) goto loc_83292304;
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_83292304:
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f23
	cr6.compare(ctx.f11.f64, ctx.f23.f64);
	// blt cr6,0x83292324
	if (cr6.lt) goto loc_83292324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329236c
	if (!cr6.eq) goto loc_8329236C;
	// fadds f0,f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f13,f1,f29
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmuls f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x83292258
	ctx.lr = 0x83292350;
	sub_83292258(ctx, base);
	// fadds f12,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// fadds f11,f29,f26
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f29,f11,f31
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// b 0x8329229c
	goto loc_8329229C;
loc_8329236C:
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// bl 0x83292160
	ctx.lr = 0x83292378;
	sub_83292160(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7b0
	ctx.lr = 0x83292384;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292394"))) PPC_WEAK_FUNC(sub_83292394);
PPC_FUNC_IMPL(__imp__sub_83292394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292398"))) PPC_WEAK_FUNC(sub_83292398);
PPC_FUNC_IMPL(__imp__sub_83292398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// addi r31,r10,27348
	ctx.r31.s64 = ctx.r10.s64 + 27348;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f7,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// bl 0x83292258
	ctx.lr = 0x832923E8;
	sub_83292258(ctx, base);
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f30,44(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329240C"))) PPC_WEAK_FUNC(sub_8329240C);
PPC_FUNC_IMPL(__imp__sub_8329240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292410"))) PPC_WEAK_FUNC(sub_83292410);
PPC_FUNC_IMPL(__imp__sub_83292410) {
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
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce770
	ctx.lr = 0x83292424;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// addi r9,r11,283
	ctx.r9.s64 = ctx.r11.s64 + 283;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// rlwinm r4,r9,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// beq cr6,0x83292478
	if (cr6.eq) goto loc_83292478;
	// bl 0x83209df8
	ctx.lr = 0x83292470;
	sub_83209DF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_83292478:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// lhz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// stfs f29,12(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f28,16(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7bc
	ctx.lr = 0x832924BC;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832924CC"))) PPC_WEAK_FUNC(sub_832924CC);
PPC_FUNC_IMPL(__imp__sub_832924CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832924D0"))) PPC_WEAK_FUNC(sub_832924D0);
PPC_FUNC_IMPL(__imp__sub_832924D0) {
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
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce770
	ctx.lr = 0x832924E4;
	__savefpr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// addi r9,r11,283
	ctx.r9.s64 = ctx.r11.s64 + 283;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// rlwinm r4,r9,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// beq cr6,0x83292538
	if (cr6.eq) goto loc_83292538;
	// bl 0x83209df8
	ctx.lr = 0x83292530;
	sub_83209DF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_83292538:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stfs f29,12(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f28,16(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f26,24(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7bc
	ctx.lr = 0x83292578;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292588"))) PPC_WEAK_FUNC(sub_83292588);
PPC_FUNC_IMPL(__imp__sub_83292588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x832925b0
	if (cr6.lt) goto loc_832925B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832925B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832925c4
	if (cr6.eq) goto loc_832925C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832925C4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832925d4
	if (cr6.gt) goto loc_832925D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832925D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_832925E4"))) PPC_WEAK_FUNC(sub_832925E4);
PPC_FUNC_IMPL(__imp__sub_832925E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832925E8"))) PPC_WEAK_FUNC(sub_832925E8);
PPC_FUNC_IMPL(__imp__sub_832925E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83292600
	if (cr6.lt) goto loc_83292600;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292600:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83292614
	if (cr6.eq) goto loc_83292614;
loc_8329260C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83292614:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83292624
	if (cr6.gt) goto loc_83292624;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292624:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83292638
	if (cr6.eq) goto loc_83292638;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83292638:
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83292650
	if (cr6.lt) goto loc_83292650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329260c
	if (!cr6.eq) goto loc_8329260C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8329266c
	if (cr6.gt) goto loc_8329266C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8329266C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8329267C"))) PPC_WEAK_FUNC(sub_8329267C);
PPC_FUNC_IMPL(__imp__sub_8329267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83292680"))) PPC_WEAK_FUNC(sub_83292680);
PPC_FUNC_IMPL(__imp__sub_83292680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// lfs f12,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x83292814
	if (cr6.lt) goto loc_83292814;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_832926A4:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832926B4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832926b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832926B4;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x832926dc
	if (cr6.eq) goto loc_832926DC;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_832926DC:
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8329270C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8329270c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329270C;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83292734
	if (cr6.eq) goto loc_83292734;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_83292734:
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f1,28(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
loc_83292764:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83292764
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83292764;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x8329278c
	if (cr6.eq) goto loc_8329278C;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8329278C:
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f1,48(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,44(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
loc_832927BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832927bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832927BC;
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x832927e4
	if (cr6.eq) goto loc_832927E4;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_832927E4:
	// stfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stfs f1,68(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f9,64(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// addi r4,r4,80
	ctx.r4.s64 = ctx.r4.s64 + 80;
	// bne 0x832926a4
	if (!cr0.eq) goto loc_832926A4;
loc_83292814:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r7,r3,-8
	ctx.r7.s64 = ctx.r3.s64 + -8;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
loc_8329282C:
	// li r8,5
	ctx.r8.s64 = 5;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83292840:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83292840
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83292840;
	// lfs f0,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x83292868
	if (cr6.eq) goto loc_83292868;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_83292868:
	// stfs f1,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsu f9,20(r7)
	ea = 20 + ctx.r7.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x8329282c
	if (!cr0.eq) goto loc_8329282C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292898"))) PPC_WEAK_FUNC(sub_83292898);
PPC_FUNC_IMPL(__imp__sub_83292898) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4095
	ctx.r7.s64 = ctx.r11.s64 + 4095;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// addi r5,r11,4095
	ctx.r5.s64 = ctx.r11.s64 + 4095;
	// rlwinm r4,r5,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// beq cr6,0x832928ec
	if (cr6.eq) goto loc_832928EC;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83209df8
	ctx.lr = 0x832928E8;
	sub_83209DF8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_832928EC:
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

__attribute__((alias("__imp__sub_83292900"))) PPC_WEAK_FUNC(sub_83292900);
PPC_FUNC_IMPL(__imp__sub_83292900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83292908;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bne cr6,0x8329295c
	if (!cr6.eq) goto loc_8329295C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329295C:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x831fcbb0
	ctx.lr = 0x83292994;
	sub_831FCBB0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831fcbb0
	ctx.lr = 0x832929A4;
	sub_831FCBB0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831fcbb0
	ctx.lr = 0x832929B4;
	sub_831FCBB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832929C8"))) PPC_WEAK_FUNC(sub_832929C8);
PPC_FUNC_IMPL(__imp__sub_832929C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce770
	ctx.lr = 0x832929E0;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// beq cr6,0x83292a14
	if (cr6.eq) goto loc_83292A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83292a50
	if (cr6.eq) goto loc_83292A50;
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// beq cr6,0x83292a30
	if (cr6.eq) goto loc_83292A30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292A30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83292ad8
	if (!cr6.eq) goto loc_83292AD8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83292898
	ctx.lr = 0x83292A48;
	sub_83292898(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x83292ab8
	goto loc_83292AB8;
loc_83292A50:
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// beq cr6,0x83292a5c
	if (cr6.eq) goto loc_83292A5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292A5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83292a88
	if (cr6.eq) goto loc_83292A88;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83292898
	ctx.lr = 0x83292A74;
	sub_83292898(ctx, base);
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x83292ac4
	goto loc_83292AC4;
loc_83292A88:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83292898
	ctx.lr = 0x83292A90;
	sub_83292898(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x83292900
	ctx.lr = 0x83292AB4;
	sub_83292900(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
loc_83292AB8:
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
loc_83292AC4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmr f5,f29
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x83292900
	ctx.lr = 0x83292AD8;
	sub_83292900(ctx, base);
loc_83292AD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7bc
	ctx.lr = 0x83292AE4;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83292AF8"))) PPC_WEAK_FUNC(sub_83292AF8);
PPC_FUNC_IMPL(__imp__sub_83292AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83292B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r11,9608
	ctx.r6.s64 = ctx.r11.s64 + 9608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832970a8
	ctx.lr = 0x83292B2C;
	sub_832970A8(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,27348
	ctx.r9.s64 = ctx.r10.s64 + 27348;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83292c00
	if (cr6.eq) goto loc_83292C00;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83292c90
	if (!cr6.gt) goto loc_83292C90;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x83292c90
	if (!cr6.lt) goto loc_83292C90;
loc_83292B58:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83292b80
	if (!cr6.eq) goto loc_83292B80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292b58
	if (cr6.lt) goto loc_83292B58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83292B80:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83292B8C:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// bge cr6,0x83292b9c
	if (!cr6.lt) goto loc_83292B9C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83292B9C:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// bge cr6,0x83292bac
	if (!cr6.lt) goto loc_83292BAC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_83292BAC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83292bc4
	if (cr6.eq) goto loc_83292BC4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292b8c
	if (cr6.lt) goto loc_83292B8C;
loc_83292BC4:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f6,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832929c8
	ctx.lr = 0x83292BE8;
	sub_832929C8(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292b58
	if (cr6.lt) goto loc_83292B58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83292C00:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83292c90
	if (!cr6.gt) goto loc_83292C90;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x83292c90
	if (!cr6.lt) goto loc_83292C90;
loc_83292C10:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83292c2c
	if (!cr6.eq) goto loc_83292C2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x83292c88
	goto loc_83292C88;
loc_83292C2C:
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// bge cr6,0x83292c5c
	if (!cr6.lt) goto loc_83292C5C;
loc_83292C3C:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83292c5c
	if (!cr6.eq) goto loc_83292C5C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292c3c
	if (cr6.lt) goto loc_83292C3C;
loc_83292C5C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f6,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832929c8
	ctx.lr = 0x83292C80;
	sub_832929C8(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
loc_83292C88:
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292c10
	if (cr6.lt) goto loc_83292C10;
loc_83292C90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83292C98"))) PPC_WEAK_FUNC(sub_83292C98);
PPC_FUNC_IMPL(__imp__sub_83292C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83292CA0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83292cdc
	if (cr6.lt) goto loc_83292CDC;
loc_83292CCC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// ble cr6,0x83292ccc
	if (!cr6.gt) goto loc_83292CCC;
loc_83292CDC:
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_83292CE4:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83292d00
	if (cr6.lt) goto loc_83292D00;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83292d68
	if (cr6.eq) goto loc_83292D68;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x83292ce4
	goto loc_83292CE4;
loc_83292D00:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83292d18
	if (cr6.eq) goto loc_83292D18;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83292D18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83292e24
	if (!cr6.eq) goto loc_83292E24;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x83292d34
	if (cr6.lt) goto loc_83292D34;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83292D34:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83292d54
	if (cr6.eq) goto loc_83292D54;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83292d74
	if (cr6.eq) goto loc_83292D74;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x83292ce4
	goto loc_83292CE4;
loc_83292D54:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83292d70
	if (cr6.eq) goto loc_83292D70;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x83292ce4
	goto loc_83292CE4;
loc_83292D68:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83292d74
	goto loc_83292D74;
loc_83292D70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83292D74:
	// clrlwi r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83292d8c
	if (!cr6.eq) goto loc_83292D8C;
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x83292D8C;
	sub_83209DF8(ctx, base);
loc_83292D8C:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// blt cr6,0x83292e10
	if (cr6.lt) goto loc_83292E10;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83292de4
	if (cr6.lt) goto loc_83292DE4;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83292DB8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfsu f11,-16(r11)
	ea = -16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bge cr6,0x83292db8
	if (!cr6.lt) goto loc_83292DB8;
loc_83292DE4:
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// blt cr6,0x83292e10
	if (cr6.lt) goto loc_83292E10;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83292E04:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,-4(r10)
	ea = -4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83292e04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83292E04;
loc_83292E10:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stfsx f31,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_83292E24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83292E30"))) PPC_WEAK_FUNC(sub_83292E30);
PPC_FUNC_IMPL(__imp__sub_83292E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83292E38;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83292e6c
	if (cr6.eq) goto loc_83292E6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83293030
	if (!cr6.eq) goto loc_83293030;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83292E8C;
	sub_83209AA8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x83292680
	ctx.lr = 0x83292EA0;
	sub_83292680(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83209df8
	ctx.lr = 0x83292EB4;
	sub_83209DF8(ctx, base);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83292f8c
	if (!cr6.gt) goto loc_83292F8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 4;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83292EDC:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, xer);
	// bge cr6,0x83292f6c
	if (!cr6.lt) goto loc_83292F6C;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_83292EEC:
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// bge cr6,0x83292f18
	if (!cr6.lt) goto loc_83292F18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292F18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83292f60
	if (!cr6.eq) goto loc_83292F60;
	// fsubs f10,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x83292f50
	if (cr6.eq) goto loc_83292F50;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_83292F50:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fsubs f1,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83292c98
	ctx.lr = 0x83292F60;
	sub_83292C98(ctx, base);
loc_83292F60:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x83292eec
	if (!cr0.eq) goto loc_83292EEC;
loc_83292F6C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x83292edc
	if (!cr0.eq) goto loc_83292EDC;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bgt cr6,0x83292fa4
	if (cr6.gt) goto loc_83292FA4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83292F8C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83292af8
	ctx.lr = 0x83292FA0;
	sub_83292AF8(ctx, base);
	// b 0x83293020
	goto loc_83293020;
loc_83292FA4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83292FAC;
	sub_83209AA8(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83293018
	if (!cr6.gt) goto loc_83293018;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83292FC0:
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x83292fd4
	if (cr6.eq) goto loc_83292FD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83292FD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329300c
	if (!cr6.eq) goto loc_8329300C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83292680
	ctx.lr = 0x83292FF4;
	sub_83292680(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83292af8
	ctx.lr = 0x83293008;
	sub_83292AF8(ctx, base);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_8329300C:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83292fc0
	if (!cr0.eq) goto loc_83292FC0;
loc_83293018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x83293020;
	sub_83209D68(ctx, base);
loc_83293020:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x83293028;
	sub_83209D68(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83209d68
	ctx.lr = 0x83293030;
	sub_83209D68(ctx, base);
loc_83293030:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83293040"))) PPC_WEAK_FUNC(sub_83293040);
PPC_FUNC_IMPL(__imp__sub_83293040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83293048;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce770
	ctx.lr = 0x83293050;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,27348
	ctx.r29.s64 = ctx.r11.s64 + 27348;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832931a4
	if (!cr6.gt) goto loc_832931A4;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
loc_83293084:
	// lhz r10,-52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// beq cr6,0x832930a4
	if (cr6.eq) goto loc_832930A4;
	// lhz r10,-50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -50);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// bne cr6,0x83293194
	if (!cr6.eq) goto loc_83293194;
loc_832930A4:
	// lbz r11,10(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 10);
	// lfs f31,-28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f30,-32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	ctx.f30.f64 = double(temp.f32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lfs f29,-36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	ctx.f29.f64 = double(temp.f32);
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfs f28,-40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,-48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	ctx.f26.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4095
	ctx.r6.s64 = ctx.r11.s64 + 4095;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// addi r4,r11,4095
	ctx.r4.s64 = ctx.r11.s64 + 4095;
	// rlwinm r4,r4,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beq cr6,0x83293100
	if (cr6.eq) goto loc_83293100;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x83209df8
	ctx.lr = 0x832930FC;
	sub_83209DF8(ctx, base);
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
loc_83293100:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83292900
	ctx.lr = 0x83293124;
	sub_83292900(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83293194
	if (!cr6.lt) goto loc_83293194;
	// lhz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -24);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83293194
	if (!cr6.eq) goto loc_83293194;
	// lhz r10,-22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -22);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x83293194
	if (!cr6.eq) goto loc_83293194;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_83293194:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83293084
	if (cr6.lt) goto loc_83293084;
loc_832931A4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832936c8
	if (!cr6.gt) goto loc_832936C8;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_832931C4:
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// beq cr6,0x832931e4
	if (cr6.eq) goto loc_832931E4;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// bne cr6,0x83293234
	if (!cr6.eq) goto loc_83293234;
loc_832931E4:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_832931F4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x832931f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832931F4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// beq cr6,0x83293214
	if (cr6.eq) goto loc_83293214;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
loc_83293214:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// beq cr6,0x83293228
	if (cr6.eq) goto loc_83293228;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
loc_83293228:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_83293234:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// blt cr6,0x832931c4
	if (cr6.lt) goto loc_832931C4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832936c8
	if (!cr6.gt) goto loc_832936C8;
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r11,9704
	ctx.r6.s64 = ctx.r11.s64 + 9704;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832970a8
	ctx.lr = 0x83293264;
	sub_832970A8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832936c8
	if (!cr6.gt) goto loc_832936C8;
loc_83293270:
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// bge cr6,0x832933c0
	if (!cr6.lt) goto loc_832933C0;
	// subf r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83293348
	if (cr6.lt) goto loc_83293348;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_832932B4:
	// lfs f13,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832932c8
	if (cr6.gt) goto loc_832932C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832932C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832933c0
	if (!cr6.eq) goto loc_832933C0;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832932e8
	if (cr6.gt) goto loc_832932E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832932E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832933ac
	if (!cr6.eq) goto loc_832933AC;
	// lfs f13,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293308
	if (cr6.gt) goto loc_83293308;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83293308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832933b4
	if (!cr6.eq) goto loc_832933B4;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293328
	if (cr6.gt) goto loc_83293328;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83293328:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832933bc
	if (!cr6.eq) goto loc_832933BC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r26,-3
	ctx.r11.s64 = ctx.r26.s64 + -3;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832932b4
	if (cr6.lt) goto loc_832932B4;
loc_83293348:
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// bge cr6,0x832933c0
	if (!cr6.lt) goto loc_832933C0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_83293378:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8329338c
	if (cr6.gt) goto loc_8329338C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8329338C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832933c0
	if (!cr6.eq) goto loc_832933C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// blt cr6,0x83293378
	if (cr6.lt) goto loc_83293378;
	// b 0x832933c0
	goto loc_832933C0;
loc_832933AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832933c0
	goto loc_832933C0;
loc_832933B4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x832933c0
	goto loc_832933C0;
loc_832933BC:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_832933C0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r30,r29,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r29.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,9704
	ctx.r6.s64 = ctx.r10.s64 + 9704;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832970a8
	ctx.lr = 0x832933EC;
	sub_832970A8(ctx, base);
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// blt cr6,0x8329352c
	if (cr6.lt) goto loc_8329352C;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f2,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83292e30
	ctx.lr = 0x83293410;
	sub_83292E30(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// bge cr6,0x832936b4
	if (!cr6.lt) goto loc_832936B4;
	// subf r10,r27,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x832934d4
	if (cr6.lt) goto loc_832934D4;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
loc_83293440:
	// lfs f13,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293454
	if (cr6.gt) goto loc_83293454;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83293454:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936b4
	if (!cr6.eq) goto loc_832936B4;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293474
	if (cr6.gt) goto loc_83293474;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83293474:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83293698
	if (!cr6.eq) goto loc_83293698;
	// lfs f13,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293494
	if (cr6.gt) goto loc_83293494;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83293494:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936a4
	if (!cr6.eq) goto loc_832936A4;
	// lfs f13,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832934b4
	if (cr6.gt) goto loc_832934B4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832934B4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936b0
	if (!cr6.eq) goto loc_832936B0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r26,-3
	ctx.r10.s64 = ctx.r26.s64 + -3;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83293440
	if (cr6.lt) goto loc_83293440;
loc_832934D4:
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bge cr6,0x832936b4
	if (!cr6.lt) goto loc_832936B4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_832934F4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293508
	if (cr6.gt) goto loc_83293508;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83293508:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832936b4
	if (!cr6.eq) goto loc_832936B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// blt cr6,0x832934f4
	if (cr6.lt) goto loc_832934F4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832936c0
	goto loc_832936C0;
loc_8329352C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x83293554
	if (!cr6.lt) goto loc_83293554;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83293554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// beq cr6,0x832936bc
	if (cr6.eq) goto loc_832936BC;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// bl 0x83292e30
	ctx.lr = 0x8329357C;
	sub_83292E30(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// bge cr6,0x832936b4
	if (!cr6.lt) goto loc_832936B4;
	// subf r10,r27,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r27.s64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83293640
	if (cr6.lt) goto loc_83293640;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
loc_832935AC:
	// lfs f13,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832935c0
	if (cr6.gt) goto loc_832935C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832935C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936b4
	if (!cr6.eq) goto loc_832936B4;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x832935e0
	if (cr6.gt) goto loc_832935E0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832935E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83293698
	if (!cr6.eq) goto loc_83293698;
	// lfs f13,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293600
	if (cr6.gt) goto loc_83293600;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83293600:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936a4
	if (!cr6.eq) goto loc_832936A4;
	// lfs f13,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293620
	if (cr6.gt) goto loc_83293620;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83293620:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832936b0
	if (!cr6.eq) goto loc_832936B0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r26,-3
	ctx.r10.s64 = ctx.r26.s64 + -3;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x832935ac
	if (cr6.lt) goto loc_832935AC;
loc_83293640:
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bge cr6,0x832936b4
	if (!cr6.lt) goto loc_832936B4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_83293660:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83293674
	if (cr6.gt) goto loc_83293674;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83293674:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832936b4
	if (!cr6.eq) goto loc_832936B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// blt cr6,0x83293660
	if (cr6.lt) goto loc_83293660;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832936c0
	goto loc_832936C0;
loc_83293698:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832936c0
	goto loc_832936C0;
loc_832936A4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832936c0
	goto loc_832936C0;
loc_832936B0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_832936B4:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x832936c0
	goto loc_832936C0;
loc_832936BC:
	// bl 0x83292e30
	ctx.lr = 0x832936C0;
	sub_83292E30(ctx, base);
loc_832936C0:
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// blt cr6,0x83293270
	if (cr6.lt) goto loc_83293270;
loc_832936C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7bc
	ctx.lr = 0x832936D4;
	__restfpr_26(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832936D8"))) PPC_WEAK_FUNC(sub_832936D8);
PPC_FUNC_IMPL(__imp__sub_832936D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x832936E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r11,27348
	ctx.r26.s64 = ctx.r11.s64 + 27348;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r23,8(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83293824
	if (!cr6.gt) goto loc_83293824;
	// lwz r19,0(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r23,r19
	ctx.r11.u64 = ctx.r23.u64 + ctx.r19.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x83293714;
	sub_83209DF8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x832937a4
	if (!cr6.gt) goto loc_832937A4;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r30,r19,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r20,9
	ctx.r20.s64 = 9;
loc_8329373C:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r30,r10
	ctx.r31.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lhzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r18,r11
	ctx.r18.s64 = ctx.r11.s16;
	// bl 0x8325d160
	ctx.lr = 0x83293758;
	sub_8325D160(ctx, base);
	// stb r24,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r24.u8);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// sth r18,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r18.u16);
	// stb r25,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r25.u8);
	// bl 0x8325db80
	ctx.lr = 0x83293774;
	sub_8325DB80(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x83293790
	if (cr6.lt) goto loc_83293790;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x8329382c
	if (!cr6.lt) goto loc_8329382C;
	// stb r20,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r20.u8);
	// stb r27,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r27.u8);
loc_83293790:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r21,r23
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r23.s32, xer);
	// blt cr6,0x8329373c
	if (cr6.lt) goto loc_8329373C;
loc_832937A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x832937C4;
	sub_83209AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83293814
	if (!cr6.gt) goto loc_83293814;
	// rlwinm r30,r19,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_832937D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8325db80
	ctx.lr = 0x832937F4;
	sub_8325DB80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83293040
	ctx.lr = 0x83293808;
	sub_83293040(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x832937d8
	if (!cr0.eq) goto loc_832937D8;
loc_83293814:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83293824
	if (cr6.eq) goto loc_83293824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209d68
	ctx.lr = 0x83293824;
	sub_83209D68(ctx, base);
loc_83293824:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8329382C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16720
	ctx.r4.s64 = ctx.r11.s64 + 16720;
	// addi r3,r10,25532
	ctx.r3.s64 = ctx.r10.s64 + 25532;
	// bl 0x83208568
	ctx.lr = 0x83293840;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83293840"))) PPC_WEAK_FUNC(sub_83293840);
PPC_FUNC_IMPL(__imp__sub_83293840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,48
	ctx.r5.s64 = 48;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x83293878;
	sub_83294018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832938A4"))) PPC_WEAK_FUNC(sub_832938A4);
PPC_FUNC_IMPL(__imp__sub_832938A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832938A8"))) PPC_WEAK_FUNC(sub_832938A8);
PPC_FUNC_IMPL(__imp__sub_832938A8) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,27348
	ctx.r31.s64 = ctx.r11.s64 + 27348;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832938dc
	if (cr6.eq) goto loc_832938DC;
	// bl 0x83209d68
	ctx.lr = 0x832938D4;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832938DC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832938f4
	if (cr6.eq) goto loc_832938F4;
	// bl 0x83209d68
	ctx.lr = 0x832938EC;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832938F4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329390c
	if (cr6.eq) goto loc_8329390C;
	// bl 0x83209d68
	ctx.lr = 0x83293904;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8329390C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83294018
	ctx.lr = 0x83293928;
	sub_83294018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293950"))) PPC_WEAK_FUNC(sub_83293950);
PPC_FUNC_IMPL(__imp__sub_83293950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83293a0c
	if (!cr6.eq) goto loc_83293A0C;
	// rlwinm r6,r5,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x832939bc
	if (cr0.eq) goto loc_832939BC;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_83293988:
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ld r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r3,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r3.u64);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x83293988
	if (!cr0.eq) goto loc_83293988;
loc_832939BC:
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x83293a00
	if (cr6.eq) goto loc_83293A00;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x832939f8
	if (cr6.eq) goto loc_832939F8;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// ld r9,-24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// std r9,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.r9.u64);
loc_832939F8:
	// ld r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r9,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r9.u64);
loc_83293A00:
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r10.u64);
	// blr 
	return;
loc_83293A0C:
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83293ab4
	if (!cr6.eq) goto loc_83293AB4;
	// rlwinm r6,r5,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293a64
	if (cr0.eq) goto loc_83293A64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_83293A30:
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x83293a30
	if (!cr0.eq) goto loc_83293A30;
loc_83293A64:
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x83293aa8
	if (cr6.eq) goto loc_83293AA8;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293aa0
	if (cr6.eq) goto loc_83293AA0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r9,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
loc_83293AA0:
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
loc_83293AA8:
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// blr 
	return;
loc_83293AB4:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83293b5c
	if (!cr6.eq) goto loc_83293B5C;
	// rlwinm r6,r5,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293b0c
	if (cr0.eq) goto loc_83293B0C;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_83293AD8:
	// lhz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r3,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x83293ad8
	if (!cr0.eq) goto loc_83293AD8;
loc_83293B0C:
	// srawi r9,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x83293b50
	if (cr6.eq) goto loc_83293B50;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293b48
	if (cr6.eq) goto loc_83293B48;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r9,-6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6);
	// sth r9,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r9.u16);
loc_83293B48:
	// lhz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// sth r9,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r9.u16);
loc_83293B50:
	// lhz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// blr 
	return;
loc_83293B5C:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293ba4
	if (cr0.eq) goto loc_83293BA4;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_83293B70:
	// lbz r4,1(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bne 0x83293b70
	if (!cr0.eq) goto loc_83293B70;
loc_83293BA4:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83293be4
	if (cr6.eq) goto loc_83293BE4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293bdc
	if (cr6.eq) goto loc_83293BDC;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r9,-3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// stb r9,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r9.u8);
loc_83293BDC:
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
loc_83293BE4:
	// lbz r10,-1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293BF0"))) PPC_WEAK_FUNC(sub_83293BF0);
PPC_FUNC_IMPL(__imp__sub_83293BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83293cc0
	if (!cr6.eq) goto loc_83293CC0;
	// rlwinm r5,r5,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293c68
	if (cr0.eq) goto loc_83293C68;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_83293C30:
	// ld r4,-8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// ld r3,-16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ld r31,-32(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -32);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// ld r30,-24(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// std r4,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r4.u64);
	// std r3,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r3.u64);
	// std r31,-32(r11)
	PPC_STORE_U64(ctx.r11.u32 + -32, ctx.r31.u64);
	// std r30,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.r30.u64);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x83293c30
	if (!cr0.eq) goto loc_83293C30;
loc_83293C68:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// beq cr6,0x83293cac
	if (cr6.eq) goto loc_83293CAC;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293ca4
	if (cr6.eq) goto loc_83293CA4;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x83293ebc
	if (!cr6.eq) goto loc_83293EBC;
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
loc_83293CA4:
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_83293CAC:
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83293CC0:
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83293d74
	if (!cr6.eq) goto loc_83293D74;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293d1c
	if (cr0.eq) goto loc_83293D1C;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_83293CE4:
	// lwz r4,-4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r31,-16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r30,-12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// stw r3,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r3.u32);
	// stw r31,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r31.u32);
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x83293ce4
	if (!cr0.eq) goto loc_83293CE4;
loc_83293D1C:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// beq cr6,0x83293d60
	if (cr6.eq) goto loc_83293D60;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293d58
	if (cr6.eq) goto loc_83293D58;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x83293ebc
	if (!cr6.eq) goto loc_83293EBC;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83293D58:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_83293D60:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83293D74:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83293e28
	if (!cr6.eq) goto loc_83293E28;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293dd0
	if (cr0.eq) goto loc_83293DD0;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_83293D98:
	// lhz r4,-2(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + -2);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhz r31,-8(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r30,-6(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// sth r4,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r4.u16);
	// sth r3,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r3.u16);
	// sth r31,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r31.u16);
	// sth r30,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r30.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x83293d98
	if (!cr0.eq) goto loc_83293D98;
loc_83293DD0:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// beq cr6,0x83293e14
	if (cr6.eq) goto loc_83293E14;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293e0c
	if (cr6.eq) goto loc_83293E0C;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x83293ebc
	if (!cr6.eq) goto loc_83293EBC;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
loc_83293E0C:
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_83293E14:
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83293E28:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze. r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83293e74
	if (cr0.eq) goto loc_83293E74;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_83293E3C:
	// lbz r4,-1(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + -1);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lbz r3,-2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r30,-3(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + -3);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stb r3,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r3.u8);
	// stb r31,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r31.u8);
	// stb r30,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r30.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x83293e3c
	if (!cr0.eq) goto loc_83293E3C;
loc_83293E74:
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x83293eb4
	if (cr6.eq) goto loc_83293EB4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83293eac
	if (cr6.eq) goto loc_83293EAC;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x83293ebc
	if (!cr6.eq) goto loc_83293EBC;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
loc_83293EAC:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_83293EB4:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_83293EBC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83293EC8"))) PPC_WEAK_FUNC(sub_83293EC8);
PPC_FUNC_IMPL(__imp__sub_83293EC8) {
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
	// beq cr6,0x83293f10
	if (cr6.eq) goto loc_83293F10;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83293f10
	if (cr6.eq) goto loc_83293F10;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83293f10
	if (!cr6.gt) goto loc_83293F10;
	// bl 0x83293950
	ctx.lr = 0x83293EF8;
	sub_83293950(ctx, base);
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
loc_83293F10:
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

__attribute__((alias("__imp__sub_83293F28"))) PPC_WEAK_FUNC(sub_83293F28);
PPC_FUNC_IMPL(__imp__sub_83293F28) {
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
	// beq cr6,0x83293f94
	if (cr6.eq) goto loc_83293F94;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83293f94
	if (cr6.eq) goto loc_83293F94;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83293f94
	if (!cr6.gt) goto loc_83293F94;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bge cr6,0x83293f78
	if (!cr6.lt) goto loc_83293F78;
	// bl 0x83293950
	ctx.lr = 0x83293F60;
	sub_83293950(ctx, base);
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
loc_83293F78:
	// bl 0x83293bf0
	ctx.lr = 0x83293F7C;
	sub_83293BF0(ctx, base);
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
loc_83293F94:
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

__attribute__((alias("__imp__sub_83293FAC"))) PPC_WEAK_FUNC(sub_83293FAC);
PPC_FUNC_IMPL(__imp__sub_83293FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83293FB0"))) PPC_WEAK_FUNC(sub_83293FB0);
PPC_FUNC_IMPL(__imp__sub_83293FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83293ffc
	if (cr6.eq) goto loc_83293FFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83294004
	if (cr6.eq) goto loc_83294004;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83293ff4
	if (!cr6.gt) goto loc_83293FF4;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_83293FD4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83293fd4
	if (cr6.lt) goto loc_83293FD4;
loc_83293FF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83293FFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83293ff4
	if (cr6.eq) goto loc_83293FF4;
loc_83294004:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83294018"))) PPC_WEAK_FUNC(sub_83294018);
PPC_FUNC_IMPL(__imp__sub_83294018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294024
	if (!cr6.eq) goto loc_83294024;
	// blr 
	return;
loc_83294024:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r10,r4,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00;
	// or r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// or r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rldicr r6,r7,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// bne cr6,0x832940b8
	if (!cr6.eq) goto loc_832940B8;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83294098
	if (!cr6.eq) goto loc_83294098;
	// rlwinm r9,r5,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83294080:
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stdu r11,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83294080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83294080;
	// blr 
	return;
loc_83294098:
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832940AC:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x832940ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832940AC;
	// blr 
	return;
loc_832940B8:
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83294124
	if (!cr6.eq) goto loc_83294124;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83294100
	if (!cr6.eq) goto loc_83294100;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_832940E8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832940e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832940E8;
	// blr 
	return;
loc_83294100:
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
loc_83294118:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83294118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83294118;
	// blr 
	return;
loc_83294124:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83294190
	if (!cr6.eq) goto loc_83294190;
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329416c
	if (!cr6.eq) goto loc_8329416C;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
loc_83294154:
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sthu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83294154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83294154;
	// blr 
	return;
loc_8329416C:
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
loc_83294184:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83294184
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83294184;
	// blr 
	return;
loc_83294190:
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832941cc
	if (!cr6.eq) goto loc_832941CC;
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_832941B4:
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x832941b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832941B4;
	// blr 
	return;
loc_832941CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_832941E0:
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x832941e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832941E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832941F0"))) PPC_WEAK_FUNC(sub_832941F0);
PPC_FUNC_IMPL(__imp__sub_832941F0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,47
	cr6.compare<uint32_t>(ctx.r3.u32, 47, xer);
	// bne cr6,0x832942f4
	if (!cr6.eq) goto loc_832942F4;
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r3,r9,26
	ctx.r3.u64 = ctx.r9.u32 & 0x3F;
	// ori r8,r3,64
	ctx.r8.u64 = ctx.r3.u64 | 64;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// bgt cr6,0x8329424c
	if (cr6.gt) goto loc_8329424C;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x832942e0
	if (!cr6.lt) goto loc_832942E0;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// b 0x83294250
	goto loc_83294250;
loc_8329424C:
	// cmplwi cr6,r3,46
	cr6.compare<uint32_t>(ctx.r3.u32, 46, xer);
loc_83294250:
	// beq cr6,0x832942e0
	if (cr6.eq) goto loc_832942E0;
	// rlwinm r11,r3,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83294268
	if (cr6.eq) goto loc_83294268;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83294280
	goto loc_83294280;
loc_83294268:
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// subfic r9,r11,56
	xer.ca = ctx.r11.u32 <= 56;
	ctx.r9.s64 = 56 - ctx.r11.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
loc_83294280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832945f8
	if (cr6.eq) goto loc_832945F8;
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r3,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x832942cc
	if (cr6.eq) goto loc_832942CC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832942CC:
	// bl 0x832996e8
	ctx.lr = 0x832942D0;
	sub_832996E8(ctx, base);
	// mullw r11,r30,r3
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832942E0:
	// bl 0x83299738
	ctx.lr = 0x832942E4;
	sub_83299738(ctx, base);
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8193
	ctx.r4.u64 = ctx.r4.u64 | 8193;
	// b 0x83294600
	goto loc_83294600;
loc_832942F4:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bgt cr6,0x832945f8
	if (cr6.gt) goto loc_832945F8;
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17180
	ctx.r12.s64 = ctx.r12.s64 + 17180;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832943FC;
	case 1:
		goto loc_83294460;
	case 2:
		goto loc_83294460;
	case 3:
		goto loc_83294494;
	case 4:
		goto loc_83294494;
	case 5:
		goto loc_832944C8;
	case 6:
		goto loc_832944C8;
	case 7:
		goto loc_832944FC;
	case 8:
		goto loc_832944FC;
	case 9:
		goto loc_83294530;
	case 10:
		goto loc_8329455C;
	case 11:
		goto loc_83294580;
	case 12:
		goto loc_832944C8;
	case 13:
		goto loc_83294580;
	case 14:
		goto loc_83294580;
	case 15:
		goto loc_83294580;
	case 16:
		goto loc_83294580;
	case 17:
		goto loc_83294580;
	case 18:
		goto loc_83294580;
	case 19:
		goto loc_83294580;
	case 20:
		goto loc_83294580;
	case 21:
		goto loc_83294580;
	case 22:
		goto loc_83294580;
	case 23:
		goto loc_83294580;
	case 24:
		goto loc_83294580;
	case 25:
		goto loc_83294580;
	case 26:
		goto loc_83294580;
	case 27:
		goto loc_83294580;
	case 28:
		goto loc_83294580;
	case 29:
		goto loc_83294580;
	case 30:
		goto loc_83294580;
	case 31:
		goto loc_83294580;
	case 32:
		goto loc_83294580;
	case 33:
		goto loc_83294580;
	case 34:
		goto loc_83294580;
	case 35:
		goto loc_83294580;
	case 36:
		goto loc_83294580;
	case 37:
		goto loc_83294580;
	case 38:
		goto loc_83294580;
	case 39:
		goto loc_83294580;
	case 40:
		goto loc_83294580;
	case 41:
		goto loc_83294580;
	case 42:
		goto loc_83294580;
	case 43:
		goto loc_83294580;
	case 44:
		goto loc_83294580;
	case 45:
		goto loc_8329455C;
	case 46:
		goto loc_832945F8;
	case 47:
		goto loc_83294580;
	case 48:
		goto loc_83294580;
	case 49:
		goto loc_83294580;
	case 50:
		goto loc_83294580;
	case 51:
		goto loc_83294414;
	case 52:
		goto loc_832945AC;
	case 53:
		goto loc_832945AC;
	case 54:
		goto loc_832945AC;
	case 55:
		goto loc_832945AC;
	default:
		return;
	}
	// lwz r25,17404(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17404);
	// lwz r25,17504(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17504);
	// lwz r25,17504(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17504);
	// lwz r25,17556(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17556);
	// lwz r25,17556(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17556);
	// lwz r25,17608(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17608);
	// lwz r25,17608(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17608);
	// lwz r25,17660(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17660);
	// lwz r25,17660(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17660);
	// lwz r25,17712(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17712);
	// lwz r25,17756(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17756);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17608(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17608);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17756(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17756);
	// lwz r25,17912(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17912);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17792(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17792);
	// lwz r25,17428(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17428);
	// lwz r25,17836(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17836);
	// lwz r25,17836(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17836);
	// lwz r25,17836(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17836);
	// lwz r25,17836(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17836);
loc_832943FC:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x83294608
	goto loc_83294608;
loc_83294414:
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r3,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r5,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r5.u8);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_83294450:
	// bl 0x832996e8
	ctx.lr = 0x83294454;
	sub_832996E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_83294460:
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r3,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_83294494:
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r3,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832944C8:
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r3,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832944FC:
	// addi r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 + 7;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r3,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_83294530:
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x83294608
	goto loc_83294608;
loc_8329455C:
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83296ba8
	ctx.lr = 0x83294570;
	sub_83296BA8(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x83294608
	goto loc_83294608;
loc_83294580:
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// rlwinm r10,r3,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// beq cr6,0x83294450
	if (cr6.eq) goto loc_83294450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832945AC:
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832996e8
	ctx.lr = 0x832945BC;
	sub_832996E8(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832945f0
	if (cr6.eq) goto loc_832945F0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_832945D8:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x832945d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832945D8;
loc_832945F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294608
	goto loc_83294608;
loc_832945F8:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
loc_83294600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a350
	ctx.lr = 0x83294608;
	sub_8329A350(ctx, base);
loc_83294608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294620"))) PPC_WEAK_FUNC(sub_83294620);
PPC_FUNC_IMPL(__imp__sub_83294620) {
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
	// bl 0x8329bc30
	ctx.lr = 0x83294640;
	sub_8329BC30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83294654
	if (cr6.eq) goto loc_83294654;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83294680
	goto loc_83294680;
loc_83294654:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83294664
	if (cr6.eq) goto loc_83294664;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83294680
	goto loc_83294680;
loc_83294664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b090
	ctx.lr = 0x8329466C;
	sub_8329B090(ctx, base);
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
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_83294680:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294698"))) PPC_WEAK_FUNC(sub_83294698);
PPC_FUNC_IMPL(__imp__sub_83294698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832946A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832946cc
	if (!cr6.eq) goto loc_832946CC;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r26,r11,-28128
	ctx.r26.s64 = ctx.r11.s64 + -28128;
loc_832946CC:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83294764
	if (!cr6.eq) goto loc_83294764;
	// lwz r8,536(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// addi r11,r29,536
	ctx.r11.s64 = ctx.r29.s64 + 536;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// lhz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lhz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
	// lhz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rotlwi r7,r6,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// and r8,r5,r30
	ctx.r8.u64 = ctx.r5.u64 & ctx.r30.u64;
	// and r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 & ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832947c4
	if (!cr6.eq) goto loc_832947C4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8517
	ctx.r4.u64 = ctx.r4.u64 | 8517;
	// bl 0x8329a350
	ctx.lr = 0x83294760;
	sub_8329A350(ctx, base);
	// b 0x83294880
	goto loc_83294880;
loc_83294764:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// lbz r5,47(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// clrlwi r4,r5,26
	ctx.r4.u64 = ctx.r5.u32 & 0x3F;
	// and r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 & ctx.r30.u64;
	// cmplwi cr6,r4,46
	cr6.compare<uint32_t>(ctx.r4.u32, 46, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r29,r11,-536
	ctx.r29.s64 = ctx.r11.s64 + -536;
	// bne cr6,0x832947c4
	if (!cr6.eq) goto loc_832947C4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8454
	ctx.r4.u64 = ctx.r4.u64 | 8454;
	// bl 0x8329a350
	ctx.lr = 0x832947C0;
	sub_8329A350(ctx, base);
	// b 0x83294880
	goto loc_83294880;
loc_832947C4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832947ec
	if (cr6.eq) goto loc_832947EC;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329ccb0
	ctx.lr = 0x832947E4;
	sub_8329CCB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329488c
	if (cr6.lt) goto loc_8329488C;
loc_832947EC:
	// lwz r11,560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r11,0,24,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// addi r28,r29,560
	ctx.r28.s64 = ctx.r29.s64 + 560;
	// bl 0x8329cd50
	ctx.lr = 0x83294808;
	sub_8329CD50(ctx, base);
	// lwz r10,560(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r10,0,20,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF8;
	// rlwinm r11,r11,0,28,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF80F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83294854
	if (cr6.eq) goto loc_83294854;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x83294838
	if (cr6.eq) goto loc_83294838;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8896
	ctx.r4.u64 = ctx.r4.u64 | 8896;
	// bl 0x8329a350
	ctx.lr = 0x83294834;
	sub_8329A350(ctx, base);
	// b 0x83294880
	goto loc_83294880;
loc_83294838:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8329ca98
	ctx.lr = 0x83294850;
	sub_8329CA98(ctx, base);
	// b 0x83294880
	goto loc_83294880;
loc_83294854:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x8329486c
	if (cr6.eq) goto loc_8329486C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8896
	ctx.r4.u64 = ctx.r4.u64 | 8896;
	// bl 0x8329a350
	ctx.lr = 0x83294868;
	sub_8329A350(ctx, base);
	// b 0x83294880
	goto loc_83294880;
loc_8329486C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8329c208
	ctx.lr = 0x83294880;
	sub_8329C208(ctx, base);
loc_83294880:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83294898
	if (cr6.lt) goto loc_83294898;
loc_8329488C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83294898:
	// addi r4,r29,560
	ctx.r4.s64 = ctx.r29.s64 + 560;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a3b0
	ctx.lr = 0x832948A4;
	sub_8329A3B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832948AC"))) PPC_WEAK_FUNC(sub_832948AC);
PPC_FUNC_IMPL(__imp__sub_832948AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832948B0"))) PPC_WEAK_FUNC(sub_832948B0);
PPC_FUNC_IMPL(__imp__sub_832948B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832948B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832948d4
	if (!cr6.eq) goto loc_832948D4;
loc_832948C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832948D4:
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
	// clrlwi r29,r11,29
	ctx.r29.u64 = ctx.r11.u32 & 0x7;
	// subf r30,r29,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r29.s64;
	// cmplwi cr6,r30,576
	cr6.compare<uint32_t>(ctx.r30.u32, 576, xer);
	// ble cr6,0x832948c8
	if (!cr6.gt) goto loc_832948C8;
	// add r31,r29,r4
	ctx.r31.u64 = ctx.r29.u64 + ctx.r4.u64;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832948FC;
	sub_83294018(ctx, base);
	// rlwinm r6,r28,20,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x1;
	// addi r5,r30,-576
	ctx.r5.s64 = ctx.r30.s64 + -576;
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x8329e3f8
	ctx.lr = 0x83294910;
	sub_8329E3F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832948c8
	if (cr6.lt) goto loc_832948C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83294944
	if (!cr6.eq) goto loc_83294944;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83294944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83294954"))) PPC_WEAK_FUNC(sub_83294954);
PPC_FUNC_IMPL(__imp__sub_83294954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294958"))) PPC_WEAK_FUNC(sub_83294958);
PPC_FUNC_IMPL(__imp__sub_83294958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,12080
	ctx.r6.s64 = ctx.r11.s64 + 12080;
	// addi r5,r10,25584
	ctx.r5.s64 = ctx.r10.s64 + 25584;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// b 0x83298338
	sub_83298338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83294984"))) PPC_WEAK_FUNC(sub_83294984);
PPC_FUNC_IMPL(__imp__sub_83294984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294988"))) PPC_WEAK_FUNC(sub_83294988);
PPC_FUNC_IMPL(__imp__sub_83294988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294994
	if (!cr6.eq) goto loc_83294994;
	// blr 
	return;
loc_83294994:
	// lbz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 572);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832949A0"))) PPC_WEAK_FUNC(sub_832949A0);
PPC_FUNC_IMPL(__imp__sub_832949A0) {
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
	// bne cr6,0x832949f4
	if (!cr6.eq) goto loc_832949F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,12080
	ctx.r6.s64 = ctx.r11.s64 + 12080;
	// addi r5,r10,25592
	ctx.r5.s64 = ctx.r10.s64 + 25592;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832949E0;
	sub_83298338(ctx, base);
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
loc_832949F4:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// neg r4,r10
	ctx.r4.s64 = -ctx.r10.s64;
	// bl 0x8329d878
	ctx.lr = 0x83294A08;
	sub_8329D878(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83294A24"))) PPC_WEAK_FUNC(sub_83294A24);
PPC_FUNC_IMPL(__imp__sub_83294A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294A28"))) PPC_WEAK_FUNC(sub_83294A28);
PPC_FUNC_IMPL(__imp__sub_83294A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83294a98
	if (cr6.eq) goto loc_83294A98;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,25836
	ctx.r7.s64 = ctx.r11.s64 + 25836;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,25656
	ctx.r5.s64 = ctx.r9.s64 + 25656;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294A80;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83294A98:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,25640
	ctx.r9.s64 = ctx.r11.s64 + 25640;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83294698
	ctx.lr = 0x83294AC8;
	sub_83294698(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294AD8"))) PPC_WEAK_FUNC(sub_83294AD8);
PPC_FUNC_IMPL(__imp__sub_83294AD8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294b24
	if (!cr6.eq) goto loc_83294B24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,12080
	ctx.r6.s64 = ctx.r11.s64 + 12080;
	// addi r5,r10,25668
	ctx.r5.s64 = ctx.r10.s64 + 25668;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294B10;
	sub_83298338(ctx, base);
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
loc_83294B24:
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83294b48
	if (!cr6.eq) goto loc_83294B48;
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// rlwinm r10,r5,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// rlwinm r9,r4,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r7.u32);
loc_83294B48:
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294B5C"))) PPC_WEAK_FUNC(sub_83294B5C);
PPC_FUNC_IMPL(__imp__sub_83294B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294B60"))) PPC_WEAK_FUNC(sub_83294B60);
PPC_FUNC_IMPL(__imp__sub_83294B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294b8c
	if (!cr6.eq) goto loc_83294B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,12080
	ctx.r6.s64 = ctx.r11.s64 + 12080;
	// addi r5,r10,25680
	ctx.r5.s64 = ctx.r10.s64 + 25680;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// b 0x83298338
	sub_83298338(ctx, base);
	return;
loc_83294B8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294B98"))) PPC_WEAK_FUNC(sub_83294B98);
PPC_FUNC_IMPL(__imp__sub_83294B98) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294be8
	if (!cr6.eq) goto loc_83294BE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,12080
	ctx.r6.s64 = ctx.r11.s64 + 12080;
	// addi r5,r10,25692
	ctx.r5.s64 = ctx.r10.s64 + 25692;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294BD0;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83294BE8:
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83294BFC"))) PPC_WEAK_FUNC(sub_83294BFC);
PPC_FUNC_IMPL(__imp__sub_83294BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294C00"))) PPC_WEAK_FUNC(sub_83294C00);
PPC_FUNC_IMPL(__imp__sub_83294C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83294C08;
	__savegprlr_29(ctx, base);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// and r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83294cbc
	if (cr6.eq) goto loc_83294CBC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83294c84
	if (!cr6.eq) goto loc_83294C84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,11628
	ctx.r6.s64 = ctx.r11.s64 + 11628;
	// addi r5,r10,25720
	ctx.r5.s64 = ctx.r10.s64 + 25720;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294C78;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83294C84:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,12932
	ctx.r7.s64 = ctx.r11.s64 + 12932;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,25720
	ctx.r5.s64 = ctx.r9.s64 + 25720;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294CB0;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83294CBC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,25704
	ctx.r9.s64 = ctx.r11.s64 + 25704;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bne cr6,0x83294cf4
	if (!cr6.eq) goto loc_83294CF4;
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r3,536
	ctx.r11.s64 = ctx.r3.s64 + 536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x83294d30
	goto loc_83294D30;
loc_83294CF4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r3,r11,-536
	ctx.r3.s64 = ctx.r11.s64 + -536;
loc_83294D30:
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// addi r29,r3,560
	ctx.r29.s64 = ctx.r3.s64 + 560;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x83294d58
	if (!cr6.eq) goto loc_83294D58;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8513
	ctx.r4.u64 = ctx.r4.u64 | 8513;
	// bl 0x8329a350
	ctx.lr = 0x83294D54;
	sub_8329A350(ctx, base);
	// b 0x83294da4
	goto loc_83294DA4;
loc_83294D58:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832941f0
	ctx.lr = 0x83294D70;
	sub_832941F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83294da4
	if (cr6.lt) goto loc_83294DA4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x8329f568
	ctx.lr = 0x83294D9C;
	sub_8329F568(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294db4
	if (!cr6.eq) goto loc_83294DB4;
loc_83294DA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8329a3b0
	ctx.lr = 0x83294DB0;
	sub_8329A3B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83294DB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83294DBC"))) PPC_WEAK_FUNC(sub_83294DBC);
PPC_FUNC_IMPL(__imp__sub_83294DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83294DC0"))) PPC_WEAK_FUNC(sub_83294DC0);
PPC_FUNC_IMPL(__imp__sub_83294DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83294DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83294e08
	if (!cr6.eq) goto loc_83294E08;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25748
	ctx.r5.s64 = ctx.r10.s64 + 25748;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83294DFC;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83294E08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r6,r10,25732
	ctx.r6.s64 = ctx.r10.s64 + 25732;
	// and r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 & ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83294e94
	if (cr6.eq) goto loc_83294E94;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8448
	ctx.r4.u64 = ctx.r4.u64 | 8448;
	// bl 0x8329a350
	ctx.lr = 0x83294E7C;
	sub_8329A350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a3b0
	ctx.lr = 0x83294E88;
	sub_8329A3B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83294E94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ff48
	ctx.lr = 0x83294EA0;
	sub_8329FF48(ctx, base);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// and r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 & ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// bl 0x8329f8b8
	ctx.lr = 0x83294EDC;
	sub_8329F8B8(ctx, base);
	// lhz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// and r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 & ctx.r30.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83294F00"))) PPC_WEAK_FUNC(sub_83294F00);
PPC_FUNC_IMPL(__imp__sub_83294F00) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83294fa4
	if (cr6.eq) goto loc_83294FA4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r5,r10,25780
	ctx.r5.s64 = ctx.r10.s64 + 25780;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bne cr6,0x83294f7c
	if (!cr6.eq) goto loc_83294F7C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// bl 0x83298338
	ctx.lr = 0x83294F60;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_83294F7C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r11,25776
	ctx.r6.s64 = ctx.r11.s64 + 25776;
	// bl 0x83298338
	ctx.lr = 0x83294F88;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_83294FA4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,25760
	ctx.r9.s64 = ctx.r11.s64 + 25760;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329f9d0
	ctx.lr = 0x83294FCC;
	sub_8329F9D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83295018
	if (!cr6.lt) goto loc_83295018;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8329a3b0
	ctx.lr = 0x83295018;
	sub_8329A3B0(ctx, base);
loc_83295018:
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

__attribute__((alias("__imp__sub_8329502C"))) PPC_WEAK_FUNC(sub_8329502C);
PPC_FUNC_IMPL(__imp__sub_8329502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295030"))) PPC_WEAK_FUNC(sub_83295030);
PPC_FUNC_IMPL(__imp__sub_83295030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83295038;
	__savegprlr_29(ctx, base);
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329509c
	if (!cr6.eq) goto loc_8329509C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25808
	ctx.r5.s64 = ctx.r10.s64 + 25808;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x8329508C;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329509C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r6,r10,25792
	ctx.r6.s64 = ctx.r10.s64 + 25792;
	// and r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 & ctx.r30.u64;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83295124
	if (cr6.eq) goto loc_83295124;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8450
	ctx.r4.u64 = ctx.r4.u64 | 8450;
loc_8329510C:
	// bl 0x8329a350
	ctx.lr = 0x83295110;
	sub_8329A350(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8329a3b0
	ctx.lr = 0x8329511C;
	sub_8329A3B0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83295124:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832941f0
	ctx.lr = 0x8329513C;
	sub_832941F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// blt cr6,0x8329510c
	if (cr6.lt) goto loc_8329510C;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// and r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8329fbb0
	ctx.lr = 0x8329518C;
	sub_8329FBB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832951a0
	if (!cr6.lt) goto loc_832951A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8329a3b0
	ctx.lr = 0x832951A0;
	sub_8329A3B0(ctx, base);
loc_832951A0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832951A8"))) PPC_WEAK_FUNC(sub_832951A8);
PPC_FUNC_IMPL(__imp__sub_832951A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832951f4
	if (!cr6.eq) goto loc_832951F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25820
	ctx.r5.s64 = ctx.r10.s64 + 25820;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832951E0;
	sub_83298338(ctx, base);
loc_832951E0:
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
loc_832951F4:
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lhz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832951e0
	if (cr6.eq) goto loc_832951E0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83295228
	if (cr6.gt) goto loc_83295228;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83295228:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329524C"))) PPC_WEAK_FUNC(sub_8329524C);
PPC_FUNC_IMPL(__imp__sub_8329524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295250"))) PPC_WEAK_FUNC(sub_83295250);
PPC_FUNC_IMPL(__imp__sub_83295250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// and r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8329530c
	if (cr6.eq) goto loc_8329530C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832952cc
	if (!cr6.eq) goto loc_832952CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,11628
	ctx.r6.s64 = ctx.r11.s64 + 11628;
	// addi r5,r10,25852
	ctx.r5.s64 = ctx.r10.s64 + 25852;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832952B8;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832952CC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,25836
	ctx.r7.s64 = ctx.r11.s64 + 25836;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,25852
	ctx.r5.s64 = ctx.r9.s64 + 25852;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832952F8;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329530C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83295330
	if (!cr6.eq) goto loc_83295330;
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r3,536
	ctx.r11.s64 = ctx.r3.s64 + 536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// b 0x8329536c
	goto loc_8329536C;
loc_83295330:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 & ctx.r4.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r3,r10,-536
	ctx.r3.s64 = ctx.r10.s64 + -536;
loc_8329536C:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,25836
	ctx.r8.s64 = ctx.r10.s64 + 25836;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r3,560
	ctx.r7.s64 = ctx.r3.s64 + 560;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a5b0
	ctx.lr = 0x83295390;
	sub_8329A5B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832953A0"))) PPC_WEAK_FUNC(sub_832953A0);
PPC_FUNC_IMPL(__imp__sub_832953A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832953A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r6,r5
	ctx.r6.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// and r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// or r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x832954a4
	if (cr6.eq) goto loc_832954A4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8329542c
	if (!cr6.eq) goto loc_8329542C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,11628
	ctx.r6.s64 = ctx.r11.s64 + 11628;
	// addi r5,r10,25876
	ctx.r5.s64 = ctx.r10.s64 + 25876;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x8329541C;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329542C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83295468
	if (!cr6.eq) goto loc_83295468;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25776
	ctx.r6.s64 = ctx.r11.s64 + 25776;
	// addi r5,r10,25876
	ctx.r5.s64 = ctx.r10.s64 + 25876;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295458;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295468:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,25836
	ctx.r7.s64 = ctx.r11.s64 + 25836;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,25876
	ctx.r5.s64 = ctx.r9.s64 + 25876;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295494;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832954A4:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,25860
	ctx.r8.s64 = ctx.r10.s64 + 25860;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bne cr6,0x832954dc
	if (!cr6.eq) goto loc_832954DC;
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r3,536
	ctx.r11.s64 = ctx.r3.s64 + 536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// b 0x83295518
	goto loc_83295518;
loc_832954DC:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 & ctx.r4.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r3,r10,-536
	ctx.r3.s64 = ctx.r10.s64 + -536;
loc_83295518:
	// addi r31,r3,560
	ctx.r31.s64 = ctx.r3.s64 + 560;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a5b0
	ctx.lr = 0x83295530;
	sub_8329A5B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83295558
	if (cr6.eq) goto loc_83295558;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329f9d0
	ctx.lr = 0x83295550;
	sub_8329F9D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83295564
	if (!cr6.lt) goto loc_83295564;
loc_83295558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a3b0
	ctx.lr = 0x83295564;
	sub_8329A3B0(ctx, base);
loc_83295564:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329556C"))) PPC_WEAK_FUNC(sub_8329556C);
PPC_FUNC_IMPL(__imp__sub_8329556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295570"))) PPC_WEAK_FUNC(sub_83295570);
PPC_FUNC_IMPL(__imp__sub_83295570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83295578;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832955bc
	if (!cr6.eq) goto loc_832955BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25904
	ctx.r5.s64 = ctx.r10.s64 + 25904;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832955B0;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832955BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,25888
	ctx.r8.s64 = ctx.r10.s64 + 25888;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x83295a94
	if (cr6.gt) goto loc_83295A94;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8329566c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329566C;
	// bdzf 4*cr6+eq,0x832956cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832956CC;
	// bdzf 4*cr6+eq,0x8329572c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329572C;
	// bdzf 4*cr6+eq,0x832957e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832957E4;
	// bdzf 4*cr6+eq,0x83295844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83295844;
	// bdzf 4*cr6+eq,0x832958a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832958A4;
	// bdzf 4*cr6+eq,0x832959fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832959FC;
	// bne cr6,0x83295958
	if (!cr6.eq) goto loc_83295958;
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 & ctx.r30.u64;
	// and r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 & ctx.r30.u64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// and r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 & ctx.r30.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 & ctx.r11.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329566C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832956CC:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329572C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,38(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// lbz r6,47(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,-46
	ctx.r3.s64 = ctx.r10.s64 + -46;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// addi r4,r10,-10
	ctx.r4.s64 = ctx.r10.s64 + -10;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// and r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 & ctx.r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832957E4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295844:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,34(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832958A4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// lhz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// lhz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 36);
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// and r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8329593c
	if (cr0.eq) goto loc_8329593C;
loc_83295900:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lhz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83295900
	if (!cr0.eq) goto loc_83295900;
loc_8329593C:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295958:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq 0x83295ae4
	if (cr0.eq) goto loc_83295AE4;
loc_83295994:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r5,r9
	ctx.r29.u64 = ctx.r5.u64 & ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83299f20
	ctx.lr = 0x832959C0;
	sub_83299F20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832959f0
	if (!cr6.eq) goto loc_832959F0;
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// lhz r10,34(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83295994
	if (!cr0.eq) goto loc_83295994;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832959F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832959FC:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lhz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq 0x83295ae4
	if (cr0.eq) goto loc_83295AE4;
loc_83295A38:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// subf r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r5,r9
	ctx.r29.u64 = ctx.r5.u64 & ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83299f20
	ctx.lr = 0x83295A64;
	sub_83299F20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832959f0
	if (!cr6.eq) goto loc_832959F0;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// lhz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83295a38
	if (!cr0.eq) goto loc_83295A38;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295A94:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// addi r5,r11,14560
	ctx.r5.s64 = ctx.r11.s64 + 14560;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a350
	ctx.lr = 0x83295AAC;
	sub_8329A350(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8329a3b0
	ctx.lr = 0x83295AE4;
	sub_8329A3B0(ctx, base);
loc_83295AE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83295AF0"))) PPC_WEAK_FUNC(sub_83295AF0);
PPC_FUNC_IMPL(__imp__sub_83295AF0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83295b3c
	if (!cr6.eq) goto loc_83295B3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25916
	ctx.r5.s64 = ctx.r10.s64 + 25916;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295B28;
	sub_83298338(ctx, base);
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
loc_83295B3C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r3,r11,-536
	ctx.r3.s64 = ctx.r11.s64 + -536;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295B88"))) PPC_WEAK_FUNC(sub_83295B88);
PPC_FUNC_IMPL(__imp__sub_83295B88) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83295c18
	if (cr6.eq) goto loc_83295C18;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r5,r10,25932
	ctx.r5.s64 = ctx.r10.s64 + 25932;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bne cr6,0x83295bf4
	if (!cr6.eq) goto loc_83295BF4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// bl 0x83298338
	ctx.lr = 0x83295BDC;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83295BF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,11612
	ctx.r6.s64 = ctx.r11.s64 + 11612;
	// bl 0x83298338
	ctx.lr = 0x83295C00;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83295C18:
	// bl 0x83299e10
	ctx.lr = 0x83295C1C;
	sub_83299E10(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295C3C"))) PPC_WEAK_FUNC(sub_83295C3C);
PPC_FUNC_IMPL(__imp__sub_83295C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295C40"))) PPC_WEAK_FUNC(sub_83295C40);
PPC_FUNC_IMPL(__imp__sub_83295C40) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83295c94
	if (!cr6.eq) goto loc_83295C94;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25944
	ctx.r5.s64 = ctx.r10.s64 + 25944;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295C7C;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83295C94:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lhz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lhz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rotlwi r4,r6,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbz r3,47(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// and r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 & ctx.r9.u64;
	// and r6,r4,r9
	ctx.r6.u64 = ctx.r4.u64 & ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r3,r3,26
	ctx.r3.u64 = ctx.r3.u32 & 0x3F;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83295d0c
	if (cr6.eq) goto loc_83295D0C;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_83295D0C:
	// lhz r8,22(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r11,42(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83295d4c
	if (cr6.eq) goto loc_83295D4C;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_83295D4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295D5C"))) PPC_WEAK_FUNC(sub_83295D5C);
PPC_FUNC_IMPL(__imp__sub_83295D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295D60"))) PPC_WEAK_FUNC(sub_83295D60);
PPC_FUNC_IMPL(__imp__sub_83295D60) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83295dac
	if (!cr6.eq) goto loc_83295DAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25956
	ctx.r5.s64 = ctx.r10.s64 + 25956;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295D98;
	sub_83298338(ctx, base);
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
loc_83295DAC:
	// lbz r11,47(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295DC4"))) PPC_WEAK_FUNC(sub_83295DC4);
PPC_FUNC_IMPL(__imp__sub_83295DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83295DC8"))) PPC_WEAK_FUNC(sub_83295DC8);
PPC_FUNC_IMPL(__imp__sub_83295DC8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83295e18
	if (!cr6.eq) goto loc_83295E18;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,25972
	ctx.r5.s64 = ctx.r10.s64 + 25972;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295E00;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83295E18:
	// lbz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lhz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83295E38"))) PPC_WEAK_FUNC(sub_83295E38);
PPC_FUNC_IMPL(__imp__sub_83295E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83295E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83295e88
	if (!cr6.eq) goto loc_83295E88;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// addi r5,r10,26004
	ctx.r5.s64 = ctx.r10.s64 + 26004;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83295E78;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295E88:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,25988
	ctx.r9.s64 = ctx.r10.s64 + 25988;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x83296414
	if (cr6.gt) goto loc_83296414;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83295f24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83295F24;
	// bdzf 4*cr6+eq,0x832960bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832960BC;
	// bdzf 4*cr6+eq,0x83295ff0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83295FF0;
	// bne cr6,0x8329624c
	if (!cr6.eq) goto loc_8329624C;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,38(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// and r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 & ctx.r31.u64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// and r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 & ctx.r31.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295F24:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// and r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 & ctx.r31.u64;
	// and r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 & ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83296464
	if (cr6.eq) goto loc_83296464;
loc_83295F84:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83295f84
	if (!cr6.eq) goto loc_83295F84;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83295FF0:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r10,22(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,42(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// and r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 & ctx.r31.u64;
	// and r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 & ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83296464
	if (cr6.eq) goto loc_83296464;
loc_83296050:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83296050
	if (!cr6.eq) goto loc_83296050;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832960BC:
	// lbz r11,47(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// lhz r8,38(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// and r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 & ctx.r31.u64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// bne cr6,0x83296164
	if (!cr6.eq) goto loc_83296164;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,42(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// b 0x832961d8
	goto loc_832961D8;
loc_83296164:
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// and r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 & ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
loc_832961D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83296464
	if (cr6.eq) goto loc_83296464;
loc_832961E0:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// and r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 & ctx.r31.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832961e0
	if (!cr6.eq) goto loc_832961E0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329624C:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// li r28,1
	ctx.r28.s64 = 1;
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// and r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 & ctx.r31.u64;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329632c
	if (cr6.eq) goto loc_8329632C;
loc_832962B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299f20
	ctx.lr = 0x832962BC;
	sub_83299F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832962cc
	if (cr6.eq) goto loc_832962CC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_832962CC:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,34(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832962b0
	if (!cr6.eq) goto loc_832962B0;
loc_8329632C:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83296408
	if (cr6.eq) goto loc_83296408;
loc_8329638C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299f20
	ctx.lr = 0x83296398;
	sub_83299F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832963a8
	if (cr6.eq) goto loc_832963A8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_832963A8:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8329638c
	if (!cr6.eq) goto loc_8329638C;
loc_83296408:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83296414:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// addi r5,r11,15088
	ctx.r5.s64 = ctx.r11.s64 + 15088;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329a350
	ctx.lr = 0x8329642C;
	sub_8329A350(ctx, base);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 & ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8329a3b0
	ctx.lr = 0x83296464;
	sub_8329A3B0(ctx, base);
loc_83296464:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329646C"))) PPC_WEAK_FUNC(sub_8329646C);
PPC_FUNC_IMPL(__imp__sub_8329646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296470"))) PPC_WEAK_FUNC(sub_83296470);
PPC_FUNC_IMPL(__imp__sub_83296470) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r7,r5
	ctx.r7.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// or r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8329652c
	if (cr6.eq) goto loc_8329652C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832964e8
	if (!cr6.eq) goto loc_832964E8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,26032
	ctx.r6.s64 = ctx.r11.s64 + 26032;
	// addi r5,r10,26016
	ctx.r5.s64 = ctx.r10.s64 + 26016;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832964D0;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832964E8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,25836
	ctx.r7.s64 = ctx.r11.s64 + 25836;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,26016
	ctx.r5.s64 = ctx.r9.s64 + 26016;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x83296514;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329652C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832965d4
	if (!cr6.eq) goto loc_832965D4;
	// lwz r10,536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r3,536
	ctx.r11.s64 = ctx.r3.s64 + 536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lhz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rotlwi r4,r7,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// and r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 & ctx.r3.u64;
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832965e0
	if (!cr6.eq) goto loc_832965E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,632
	ctx.r3.s64 = 632;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832965D4:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_832965E0:
	// bl 0x832a09e8
	ctx.lr = 0x832965E4;
	sub_832A09E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832965F4"))) PPC_WEAK_FUNC(sub_832965F4);
PPC_FUNC_IMPL(__imp__sub_832965F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832965F8"))) PPC_WEAK_FUNC(sub_832965F8);
PPC_FUNC_IMPL(__imp__sub_832965F8) {
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
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// or r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83296690
	if (cr6.eq) goto loc_83296690;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r5,r10,26040
	ctx.r5.s64 = ctx.r10.s64 + 26040;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bne cr6,0x8329666c
	if (!cr6.eq) goto loc_8329666C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r6,r11,25836
	ctx.r6.s64 = ctx.r11.s64 + 25836;
	// bl 0x83298338
	ctx.lr = 0x83296654;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329666C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,11628
	ctx.r6.s64 = ctx.r11.s64 + 11628;
	// bl 0x83298338
	ctx.lr = 0x83296678;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83296690:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// bl 0x832a06e0
	ctx.lr = 0x832966AC;
	sub_832A06E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832966BC"))) PPC_WEAK_FUNC(sub_832966BC);
PPC_FUNC_IMPL(__imp__sub_832966BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832966C0"))) PPC_WEAK_FUNC(sub_832966C0);
PPC_FUNC_IMPL(__imp__sub_832966C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832966C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83296720
	if (!cr6.eq) goto loc_83296720;
	// lwz r10,536(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 536);
	// addi r11,r4,536
	ctx.r11.s64 = ctx.r4.s64 + 536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832949a0
	ctx.lr = 0x83296710;
	sub_832949A0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x83296838
	goto loc_83296838;
loc_83296720:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lbz r7,47(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// and r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r6,46
	cr6.compare<uint32_t>(ctx.r6.u32, 46, xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r29,r10,-536
	ctx.r29.s64 = ctx.r10.s64 + -536;
	// bne cr6,0x83296788
	if (!cr6.eq) goto loc_83296788;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r4,r4,8453
	ctx.r4.u64 = ctx.r4.u64 | 8453;
	// bl 0x8329a350
	ctx.lr = 0x83296780;
	sub_8329A350(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8329691c
	goto loc_8329691C;
loc_83296788:
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 & ctx.r30.u64;
	// lhz r28,18(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lhz r27,38(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r5,r28,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 & ctx.r30.u64;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r27,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// and r27,r7,r6
	ctx.r27.u64 = ctx.r7.u64 & ctx.r6.u64;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// and r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 & ctx.r8.u64;
	// bl 0x8329ff48
	ctx.lr = 0x83296828;
	sub_8329FF48(ctx, base);
	// addi r4,r29,536
	ctx.r4.s64 = ctx.r29.s64 + 536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329f8b8
	ctx.lr = 0x83296838;
	sub_8329F8B8(ctx, base);
loc_83296838:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e670
	ctx.lr = 0x83296848;
	sub_8329E670(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294620
	ctx.lr = 0x83296858;
	sub_83294620(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x832968ac
	if (cr6.lt) goto loc_832968AC;
	// beq cr6,0x83296894
	if (cr6.eq) goto loc_83296894;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// beq cr6,0x83296884
	if (cr6.eq) goto loc_83296884;
	// ori r4,r4,8578
	ctx.r4.u64 = ctx.r4.u64 | 8578;
	// bl 0x8329a350
	ctx.lr = 0x8329687C;
	sub_8329A350(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8329691c
	goto loc_8329691C;
loc_83296884:
	// ori r4,r4,8896
	ctx.r4.u64 = ctx.r4.u64 | 8896;
	// bl 0x8329a350
	ctx.lr = 0x8329688C;
	sub_8329A350(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8329691c
	goto loc_8329691C;
loc_83296894:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8329b120
	ctx.lr = 0x832968A8;
	sub_8329B120(ctx, base);
	// b 0x832968c8
	goto loc_832968C8;
loc_832968AC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8329bc80
	ctx.lr = 0x832968C8;
	sub_8329BC80(ctx, base);
loc_832968C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832968f4
	if (!cr6.eq) goto loc_832968F4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x832968e8
	if (cr6.eq) goto loc_832968E8;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8329691c
	goto loc_8329691C;
loc_832968E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832968F4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329fce8
	ctx.lr = 0x8329690C;
	sub_8329FCE8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8329691c
	if (cr6.eq) goto loc_8329691C;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_8329691C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83296930
	if (!cr6.lt) goto loc_83296930;
	// addi r4,r29,560
	ctx.r4.s64 = ctx.r29.s64 + 560;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8329a3b0
	ctx.lr = 0x83296930;
	sub_8329A3B0(ctx, base);
loc_83296930:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83296938"))) PPC_WEAK_FUNC(sub_83296938);
PPC_FUNC_IMPL(__imp__sub_83296938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r6,r5
	ctx.r6.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832969f8
	if (cr6.eq) goto loc_832969F8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832969b4
	if (!cr6.eq) goto loc_832969B4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,25628
	ctx.r6.s64 = ctx.r11.s64 + 25628;
	// addi r5,r10,26096
	ctx.r5.s64 = ctx.r10.s64 + 26096;
	// addi r4,r9,25568
	ctx.r4.s64 = ctx.r9.s64 + 25568;
	// addi r3,r8,25556
	ctx.r3.s64 = ctx.r8.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x8329699C;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832969B4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,25836
	ctx.r7.s64 = ctx.r11.s64 + 25836;
	// addi r6,r10,12080
	ctx.r6.s64 = ctx.r10.s64 + 12080;
	// addi r5,r9,26096
	ctx.r5.s64 = ctx.r9.s64 + 26096;
	// addi r4,r8,25600
	ctx.r4.s64 = ctx.r8.s64 + 25600;
	// addi r3,r3,25556
	ctx.r3.s64 = ctx.r3.s64 + 25556;
	// bl 0x83298338
	ctx.lr = 0x832969E0;
	sub_83298338(ctx, base);
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832969F8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26080
	ctx.r9.s64 = ctx.r11.s64 + 26080;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832966c0
	ctx.lr = 0x83296A24;
	sub_832966C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296A34"))) PPC_WEAK_FUNC(sub_83296A34);
PPC_FUNC_IMPL(__imp__sub_83296A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296A38"))) PPC_WEAK_FUNC(sub_83296A38);
PPC_FUNC_IMPL(__imp__sub_83296A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x83299248
	ctx.lr = 0x83296A60;
	sub_83299248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83296a70
	if (cr6.gt) goto loc_83296A70;
	// b 0x83296a98
	goto loc_83296A98;
loc_83296A70:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-27328
	ctx.r5.s64 = ctx.r11.s64 + -27328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294a28
	ctx.lr = 0x83296A88;
	sub_83294A28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299380
	ctx.lr = 0x83296A94;
	sub_83299380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83296A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296AB0"))) PPC_WEAK_FUNC(sub_83296AB0);
PPC_FUNC_IMPL(__imp__sub_83296AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83296AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83296b50
	if (cr6.eq) goto loc_83296B50;
	// cmpwi cr6,r6,848
	cr6.compare<int32_t>(ctx.r6.s32, 848, xer);
	// blt cr6,0x83296b50
	if (cr6.lt) goto loc_83296B50;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x832948b0
	ctx.lr = 0x83296AE0;
	sub_832948B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296b50
	if (cr6.eq) goto loc_83296B50;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83299248
	ctx.lr = 0x83296AFC;
	sub_83299248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83296b50
	if (!cr6.gt) goto loc_83296B50;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-27672
	ctx.r5.s64 = ctx.r11.s64 + -27672;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296938
	ctx.lr = 0x83296B20;
	sub_83296938(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299380
	ctx.lr = 0x83296B2C;
	sub_83299380(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x83296b5c
	if (!cr6.lt) goto loc_83296B5C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r11,26104
	ctx.r4.s64 = ctx.r11.s64 + 26104;
	// addi r3,r10,12080
	ctx.r3.s64 = ctx.r10.s64 + 12080;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83298338
	ctx.lr = 0x83296B50;
	sub_83298338(ctx, base);
loc_83296B50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83296B5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83296B68"))) PPC_WEAK_FUNC(sub_83296B68);
PPC_FUNC_IMPL(__imp__sub_83296B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,26128
	ctx.r9.s64 = ctx.r11.s64 + 26128;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7C;
	// rlwinm r7,r7,0,29,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296B8C"))) PPC_WEAK_FUNC(sub_83296B8C);
PPC_FUNC_IMPL(__imp__sub_83296B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296B90"))) PPC_WEAK_FUNC(sub_83296B90);
PPC_FUNC_IMPL(__imp__sub_83296B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r11,26128
	ctx.r9.s64 = ctx.r11.s64 + 26128;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296BA8"))) PPC_WEAK_FUNC(sub_83296BA8);
PPC_FUNC_IMPL(__imp__sub_83296BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83296bb4
	if (!cr6.eq) goto loc_83296BB4;
	// blr 
	return;
loc_83296BB4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83296bd4
	if (cr6.eq) goto loc_83296BD4;
loc_83296BC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83296bc4
	if (!cr6.eq) goto loc_83296BC4;
loc_83296BD4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296BDC"))) PPC_WEAK_FUNC(sub_83296BDC);
PPC_FUNC_IMPL(__imp__sub_83296BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296BE0"))) PPC_WEAK_FUNC(sub_83296BE0);
PPC_FUNC_IMPL(__imp__sub_83296BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296c54
	if (cr6.eq) goto loc_83296C54;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83296c54
	if (cr6.eq) goto loc_83296C54;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83296c54
	if (!cr6.gt) goto loc_83296C54;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_83296C04:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// beq cr6,0x83296c38
	if (cr6.eq) goto loc_83296C38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83296c04
	if (cr6.lt) goto loc_83296C04;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// blr 
	return;
loc_83296C38:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83296c4c
	if (cr6.lt) goto loc_83296C4C;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
loc_83296C4C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_83296C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296C5C"))) PPC_WEAK_FUNC(sub_83296C5C);
PPC_FUNC_IMPL(__imp__sub_83296C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296C60"))) PPC_WEAK_FUNC(sub_83296C60);
PPC_FUNC_IMPL(__imp__sub_83296C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296cfc
	if (cr6.eq) goto loc_83296CFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83296cfc
	if (cr6.eq) goto loc_83296CFC;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83296cfc
	if (!cr6.gt) goto loc_83296CFC;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83296c98
	if (cr6.eq) goto loc_83296C98;
loc_83296C88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83296c88
	if (!cr6.eq) goto loc_83296C88;
loc_83296C98:
	// subf. r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble 0x83296cfc
	if (!cr0.gt) goto loc_83296CFC;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bge cr6,0x83296cb0
	if (!cr6.lt) goto loc_83296CB0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_83296CB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83296ce4
	if (!cr6.gt) goto loc_83296CE4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_83296CC4:
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x83296cc4
	if (cr6.lt) goto loc_83296CC4;
loc_83296CE4:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83296cf0
	if (cr6.lt) goto loc_83296CF0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
loc_83296CF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u8);
	// blr 
	return;
loc_83296CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296D04"))) PPC_WEAK_FUNC(sub_83296D04);
PPC_FUNC_IMPL(__imp__sub_83296D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296D08"))) PPC_WEAK_FUNC(sub_83296D08);
PPC_FUNC_IMPL(__imp__sub_83296D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296d38
	if (cr6.eq) goto loc_83296D38;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83296D20:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83296d38
	if (cr6.eq) goto loc_83296D38;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83296d20
	if (!cr6.eq) goto loc_83296D20;
	// blr 
	return;
loc_83296D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296D40"))) PPC_WEAK_FUNC(sub_83296D40);
PPC_FUNC_IMPL(__imp__sub_83296D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83296d54
	if (!cr6.eq) goto loc_83296D54;
	// blr 
	return;
loc_83296D54:
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
loc_83296D58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83296d68
	if (!cr6.eq) goto loc_83296D68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83296D68:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83296d58
	goto loc_83296D58;
}

__attribute__((alias("__imp__sub_83296D78"))) PPC_WEAK_FUNC(sub_83296D78);
PPC_FUNC_IMPL(__imp__sub_83296D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296dc4
	if (cr6.eq) goto loc_83296DC4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83296dd4
	if (cr6.eq) goto loc_83296DD4;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83296dbc
	if (cr6.eq) goto loc_83296DBC;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_83296DA0:
	// subf. r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83296da0
	if (!cr6.eq) goto loc_83296DA0;
loc_83296DBC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_83296DC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83296dd4
	if (!cr6.eq) goto loc_83296DD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83296DD4:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83296DE8"))) PPC_WEAK_FUNC(sub_83296DE8);
PPC_FUNC_IMPL(__imp__sub_83296DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296e3c
	if (cr6.eq) goto loc_83296E3C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83296e44
	if (cr6.eq) goto loc_83296E44;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83296e34
	if (!cr6.gt) goto loc_83296E34;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_83296E0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf. r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x83296e0c
	if (cr6.lt) goto loc_83296E0C;
loc_83296E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83296E3C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83296e34
	if (cr6.eq) goto loc_83296E34;
loc_83296E44:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83296E58"))) PPC_WEAK_FUNC(sub_83296E58);
PPC_FUNC_IMPL(__imp__sub_83296E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83296ee0
	if (cr6.eq) goto loc_83296EE0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83296ef0
	if (cr6.eq) goto loc_83296EF0;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83296ed8
	if (cr6.eq) goto loc_83296ED8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// subf r6,r4,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r7,r9,26128
	ctx.r7.s64 = ctx.r9.s64 + 26128;
loc_83296E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r9,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83296ea4
	if (!cr6.eq) goto loc_83296EA4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83296EA4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r10,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83296ebc
	if (cr6.eq) goto loc_83296EBC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_83296EBC:
	// subf. r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83296e88
	if (!cr6.eq) goto loc_83296E88;
loc_83296ED8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83296EE0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83296ef0
	if (!cr6.eq) goto loc_83296EF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83296EF0:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
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

__attribute__((alias("__imp__sub_83296F04"))) PPC_WEAK_FUNC(sub_83296F04);
PPC_FUNC_IMPL(__imp__sub_83296F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83296F08"))) PPC_WEAK_FUNC(sub_83296F08);
PPC_FUNC_IMPL(__imp__sub_83296F08) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83296f44
	if (cr6.eq) goto loc_83296F44;
loc_83296F30:
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
loc_83296F44:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83296fc0
	if (cr6.eq) goto loc_83296FC0;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83296fc0
	if (cr6.eq) goto loc_83296FC0;
loc_83296F5C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83296f5c
	if (!cr6.eq) goto loc_83296F5C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83296fc0
	if (cr6.eq) goto loc_83296FC0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_83296F78:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83296f30
	if (cr6.eq) goto loc_83296F30;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83296fa4
	if (cr6.eq) goto loc_83296FA4;
loc_83296F90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83296f30
	if (cr6.eq) goto loc_83296F30;
	// lbzu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83296f90
	if (!cr6.eq) goto loc_83296F90;
loc_83296FA4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83296de8
	ctx.lr = 0x83296FAC;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83296fbc
	if (cr6.eq) goto loc_83296FBC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x83296f78
	goto loc_83296F78;
loc_83296FBC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_83296FC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83296FD0"))) PPC_WEAK_FUNC(sub_83296FD0);
PPC_FUNC_IMPL(__imp__sub_83296FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83296FD8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addic. r19,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r19.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// ble 0x832970a0
	if (!cr0.gt) goto loc_832970A0;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r18,r3,r5
	ctx.r18.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_83297004:
	// addi r23,r24,1
	ctx.r23.s64 = ctx.r24.s64 + 1;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpw cr6,r23,r21
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r21.s32, xer);
	// bge cr6,0x8329708c
	if (!cr6.lt) goto loc_8329708C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// add r31,r18,r26
	ctx.r31.u64 = ctx.r18.u64 + ctx.r26.u64;
loc_83297020:
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83297030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83297040
	if (!cr6.gt) goto loc_83297040;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83297040:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, xer);
	// blt cr6,0x83297020
	if (cr6.lt) goto loc_83297020;
	// cmpw cr6,r24,r27
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, xer);
	// beq cr6,0x8329708c
	if (cr6.eq) goto loc_8329708C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8329708c
	if (!cr6.gt) goto loc_8329708C;
	// mullw r10,r27,r28
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// subf r10,r26,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r26.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
loc_83297074:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83297074
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83297074;
loc_8329708C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// add r22,r22,r28
	ctx.r22.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmpw cr6,r23,r19
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, xer);
	// blt cr6,0x83297004
	if (cr6.lt) goto loc_83297004;
loc_832970A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832970A8"))) PPC_WEAK_FUNC(sub_832970A8);
PPC_FUNC_IMPL(__imp__sub_832970A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832970B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8329727c
	if (cr6.lt) goto loc_8329727C;
loc_832970CC:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// ble cr6,0x83297140
	if (!cr6.gt) goto loc_83297140;
	// add r31,r24,r29
	ctx.r31.u64 = ctx.r24.u64 + ctx.r29.u64;
loc_832970E0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832970F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83297110
	if (cr6.lt) goto loc_83297110;
	// bgt cr6,0x8329713c
	if (cr6.gt) goto loc_8329713C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832970e0
	if (cr6.lt) goto loc_832970E0;
	// b 0x83297140
	goto loc_83297140;
loc_83297110:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8329713c
	if (!cr6.gt) goto loc_8329713C;
	// mullw r10,r30,r29
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_83297124:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83297124
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83297124;
loc_8329713C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83297140:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329727c
	if (!cr6.eq) goto loc_8329727C;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// ble cr6,0x83297248
	if (!cr6.gt) goto loc_83297248;
loc_8329715C:
	// add r30,r28,r26
	ctx.r30.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x8329719c
	if (!cr6.lt) goto loc_8329719C;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_83297170:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83297180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8329719c
	if (cr6.gt) goto loc_8329719C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x83297170
	if (cr6.lt) goto loc_83297170;
loc_8329719C:
	// add r30,r28,r26
	ctx.r30.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x832971e8
	if (!cr6.lt) goto loc_832971E8;
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// neg r25,r29
	ctx.r25.s64 = -ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_832971BC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832971CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832971e8
	if (!cr6.gt) goto loc_832971E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832971bc
	if (cr6.lt) goto loc_832971BC;
loc_832971E8:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bge cr6,0x8329723c
	if (!cr6.lt) goto loc_8329723C;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83297234
	if (!cr6.gt) goto loc_83297234;
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_8329721C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8329721c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329721C;
loc_83297234:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8329723C:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// blt cr6,0x8329715c
	if (cr6.lt) goto loc_8329715C;
loc_83297248:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x83297284
	if (!cr6.eq) goto loc_83297284;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832970a8
	ctx.lr = 0x83297268;
	sub_832970A8(ctx, base);
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x832970cc
	if (!cr6.lt) goto loc_832970CC;
loc_8329727C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83297284:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,26404
	ctx.r5.s64 = ctx.r11.s64 + 26404;
	// addi r3,r10,26392
	ctx.r3.s64 = ctx.r10.s64 + 26392;
	// li r4,107
	ctx.r4.s64 = 107;
	// bl 0x83298458
	ctx.lr = 0x8329729C;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_8329729C"))) PPC_WEAK_FUNC(sub_8329729C);
PPC_FUNC_IMPL(__imp__sub_8329729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832972A0"))) PPC_WEAK_FUNC(sub_832972A0);
PPC_FUNC_IMPL(__imp__sub_832972A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832972A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83297488
	if (cr6.lt) goto loc_83297488;
loc_832972C8:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// ble cr6,0x83297340
	if (!cr6.gt) goto loc_83297340;
	// add r31,r24,r29
	ctx.r31.u64 = ctx.r24.u64 + ctx.r29.u64;
loc_832972DC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x832972F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83297310
	if (cr6.lt) goto loc_83297310;
	// bgt cr6,0x8329733c
	if (cr6.gt) goto loc_8329733C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832972dc
	if (cr6.lt) goto loc_832972DC;
	// b 0x83297340
	goto loc_83297340;
loc_83297310:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8329733c
	if (!cr6.gt) goto loc_8329733C;
	// mullw r10,r30,r29
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_83297324:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83297324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83297324;
loc_8329733C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_83297340:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83297488
	if (!cr6.eq) goto loc_83297488;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// ble cr6,0x83297450
	if (!cr6.gt) goto loc_83297450;
loc_8329735C:
	// add r30,r28,r26
	ctx.r30.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x832973a0
	if (!cr6.lt) goto loc_832973A0;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_83297370:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x83297384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832973a0
	if (cr6.gt) goto loc_832973A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x83297370
	if (cr6.lt) goto loc_83297370;
loc_832973A0:
	// add r30,r28,r26
	ctx.r30.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x832973f0
	if (!cr6.lt) goto loc_832973F0;
	// subf r11,r28,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r28.s64;
	// neg r25,r29
	ctx.r25.s64 = -ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_832973C0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x832973D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832973f0
	if (!cr6.gt) goto loc_832973F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832973c0
	if (cr6.lt) goto loc_832973C0;
loc_832973F0:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bge cr6,0x83297444
	if (!cr6.lt) goto loc_83297444;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8329743c
	if (!cr6.gt) goto loc_8329743C;
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_83297424:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83297424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83297424;
loc_8329743C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83297444:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// blt cr6,0x8329735c
	if (cr6.lt) goto loc_8329735C;
loc_83297450:
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x83297490
	if (!cr6.eq) goto loc_83297490;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832972a0
	ctx.lr = 0x83297474;
	sub_832972A0(ctx, base);
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x832972c8
	if (!cr6.lt) goto loc_832972C8;
loc_83297488:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83297490:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,26420
	ctx.r5.s64 = ctx.r11.s64 + 26420;
	// addi r3,r10,26392
	ctx.r3.s64 = ctx.r10.s64 + 26392;
	// li r4,193
	ctx.r4.s64 = 193;
	// bl 0x83298458
	ctx.lr = 0x832974A8;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_832974A8"))) PPC_WEAK_FUNC(sub_832974A8);
PPC_FUNC_IMPL(__imp__sub_832974A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832974B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8329794c
	if (cr6.eq) goto loc_8329794C;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r24,12
	ctx.r24.s64 = 12;
	// addi r22,r9,27396
	ctx.r22.s64 = ctx.r9.s64 + 27396;
	// addi r23,r8,12216
	ctx.r23.s64 = ctx.r8.s64 + 12216;
loc_832974F8:
	// cmpwi cr6,r10,37
	cr6.compare<int32_t>(ctx.r10.s32, 37, xer);
	// bne cr6,0x83297908
	if (!cr6.eq) goto loc_83297908;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x832975b0
	if (cr6.gt) goto loc_832975B0;
loc_83297518:
	// lis r12,-31959
	ctx.r12.s64 = -2094465024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30000
	ctx.r12.s64 = ctx.r12.s64 + 30000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8329758C;
	case 1:
		goto loc_832975B0;
	case 2:
		goto loc_832975B0;
	case 3:
		goto loc_83297574;
	case 4:
		goto loc_832975B0;
	case 5:
		goto loc_832975B0;
	case 6:
		goto loc_832975B0;
	case 7:
		goto loc_832975B0;
	case 8:
		goto loc_832975B0;
	case 9:
		goto loc_832975B0;
	case 10:
		goto loc_832975B0;
	case 11:
		goto loc_83297594;
	case 12:
		goto loc_832975B0;
	case 13:
		goto loc_83297584;
	case 14:
		goto loc_832975B0;
	case 15:
		goto loc_832975B0;
	case 16:
		goto loc_8329757C;
	default:
		return;
	}
	// lwz r25,30092(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30092);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30068(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30068);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30100(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30100);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30084(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30084);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30128(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30128);
	// lwz r25,30076(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30076);
loc_83297574:
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// b 0x83297598
	goto loc_83297598;
loc_8329757C:
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// b 0x83297598
	goto loc_83297598;
loc_83297584:
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// b 0x83297598
	goto loc_83297598;
loc_8329758C:
	// ori r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 8;
	// b 0x83297598
	goto loc_83297598;
loc_83297594:
	// ori r7,r7,16
	ctx.r7.u64 = ctx.r7.u64 | 16;
loc_83297598:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// ble cr6,0x83297518
	if (!cr6.gt) goto loc_83297518;
loc_832975B0:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bne cr6,0x832975e4
	if (!cr6.eq) goto loc_832975E4;
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// b 0x83297650
	goto loc_83297650;
loc_832975E4:
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// subfic r11,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r11.s64 = 57 - ctx.r11.s64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8329764c
	if (cr6.lt) goto loc_8329764C;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// subfic r8,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r8.s64 = 57 - ctx.r11.s64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x83297644
	if (cr6.lt) goto loc_83297644;
loc_83297614:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// subfic r8,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r8.s64 = 57 - ctx.r11.s64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x83297614
	if (!cr6.lt) goto loc_83297614;
loc_83297644:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x83297650
	goto loc_83297650;
loc_8329764C:
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
loc_83297650:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x83297664
	if (cr6.eq) goto loc_83297664;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// b 0x83297708
	goto loc_83297708;
loc_83297664:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bne cr6,0x8329769c
	if (!cr6.eq) goto loc_8329769C;
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x83297708
	goto loc_83297708;
loc_8329769C:
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// subfic r11,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r11.s64 = 57 - ctx.r11.s64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83297704
	if (cr6.lt) goto loc_83297704;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// subfic r8,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r8.s64 = 57 - ctx.r11.s64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x832976fc
	if (cr6.lt) goto loc_832976FC;
loc_832976CC:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// subfic r8,r11,57
	xer.ca = ctx.r11.u32 <= 57;
	ctx.r8.s64 = 57 - ctx.r11.s64;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x832976cc
	if (!cr6.lt) goto loc_832976CC;
loc_832976FC:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x83297708
	goto loc_83297708;
loc_83297704:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_83297708:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bgt cr6,0x83297738
	if (cr6.gt) goto loc_83297738;
	// beq cr6,0x83297730
	if (cr6.eq) goto loc_83297730;
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// beq cr6,0x83297748
	if (cr6.eq) goto loc_83297748;
	// cmplwi cr6,r11,104
	cr6.compare<uint32_t>(ctx.r11.u32, 104, xer);
	// bne cr6,0x8329774c
	if (!cr6.eq) goto loc_8329774C;
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// b 0x83297748
	goto loc_83297748;
loc_83297730:
	// ori r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 64;
	// b 0x83297748
	goto loc_83297748;
loc_83297738:
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// beq cr6,0x83297748
	if (cr6.eq) goto loc_83297748;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bne cr6,0x8329774c
	if (!cr6.eq) goto loc_8329774C;
loc_83297748:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8329774C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,123
	cr6.compare<int32_t>(ctx.r10.s32, 123, xer);
	// beq cr6,0x83297790
	if (cr6.eq) goto loc_83297790;
	// addi r10,r10,-65
	ctx.r10.s64 = ctx.r10.s64 + -65;
	// cmplwi cr6,r10,58
	cr6.compare<uint32_t>(ctx.r10.u32, 58, xer);
	// bge cr6,0x8329777c
	if (!cr6.lt) goto loc_8329777C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// b 0x83297780
	goto loc_83297780;
loc_8329777C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83297780:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83297908
	if (cr6.eq) goto loc_83297908;
	// b 0x83297830
	goto loc_83297830;
loc_83297790:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(ctx.r11.s32, 125, xer);
	// beq cr6,0x832977bc
	if (cr6.eq) goto loc_832977BC;
loc_832977A4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832978fc
	if (cr6.eq) goto loc_832978FC;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(ctx.r11.s32, 125, xer);
	// bne cr6,0x832977a4
	if (!cr6.eq) goto loc_832977A4;
loc_832977BC:
	// addi r11,r23,464
	ctx.r11.s64 = ctx.r23.s64 + 464;
	// addi r29,r23,464
	ctx.r29.s64 = ctx.r23.s64 + 464;
	// subf r27,r26,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r26.s64;
	// addi r28,r11,468
	ctx.r28.s64 = ctx.r11.s64 + 468;
loc_832977CC:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// divw r10,r11,r24
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x83296de8
	ctx.lr = 0x832977F8;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83297860
	if (!cr6.eq) goto loc_83297860;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329786c
	if (cr6.eq) goto loc_8329786C;
loc_83297810:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83297814:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x832977cc
	if (!cr6.eq) goto loc_832977CC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_83297820:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832978fc
	if (cr6.eq) goto loc_832978FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83297830:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83297958
	if (cr6.gt) goto loc_83297958;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832978e0
	if (cr6.eq) goto loc_832978E0;
	// bdz 0x83297874
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83297874;
	// bdz 0x832978cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832978CC;
	// bdz 0x8329789c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329789C;
	// bdz 0x832978cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832978CC;
	// bdz 0x832978b4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832978B4;
	// b 0x832978cc
	goto loc_832978CC;
loc_83297860:
	// ble cr6,0x83297810
	if (!cr6.gt) goto loc_83297810;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// b 0x83297814
	goto loc_83297814;
loc_8329786C:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// b 0x83297820
	goto loc_83297820;
loc_83297874:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x832978d8
	if (cr6.eq) goto loc_832978D8;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// b 0x832978e0
	goto loc_832978E0;
loc_8329789C:
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// b 0x832978e0
	goto loc_832978E0;
loc_832978B4:
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// b 0x832978e0
	goto loc_832978E0;
loc_832978CC:
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
loc_832978D8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_832978E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832978F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83297930
	goto loc_83297930;
loc_832978FC:
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// lbz r11,-2(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -2);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
loc_83297908:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329791C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83297934
	if (!cr6.gt) goto loc_83297934;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_83297930:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_83297934:
	// blt cr6,0x83297950
	if (cr6.lt) goto loc_83297950;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832974f8
	if (!cr6.eq) goto loc_832974F8;
loc_8329794C:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_83297950:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83297958:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,26744
	ctx.r5.s64 = ctx.r11.s64 + 26744;
	// addi r3,r10,26724
	ctx.r3.s64 = ctx.r10.s64 + 26724;
	// li r4,431
	ctx.r4.s64 = 431;
	// bl 0x83298458
	ctx.lr = 0x83297970;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_83297970"))) PPC_WEAK_FUNC(sub_83297970);
PPC_FUNC_IMPL(__imp__sub_83297970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8329798c
	if (cr6.lt) goto loc_8329798C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329798C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r4,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832979A4"))) PPC_WEAK_FUNC(sub_832979A4);
PPC_FUNC_IMPL(__imp__sub_832979A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832979A8"))) PPC_WEAK_FUNC(sub_832979A8);
PPC_FUNC_IMPL(__imp__sub_832979A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832979B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x832979d0
	if (cr6.gt) goto loc_832979D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832979D0:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31088
	ctx.r3.s64 = ctx.r11.s64 + 31088;
	// bl 0x832974a8
	ctx.lr = 0x832979F0;
	sub_832974A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83297a1c
	if (!cr6.lt) goto loc_83297A1C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,26772
	ctx.r4.s64 = ctx.r11.s64 + 26772;
	// addi r3,r10,26760
	ctx.r3.s64 = ctx.r10.s64 + 26760;
	// bl 0x83298338
	ctx.lr = 0x83297A10;
	sub_83298338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83297A1C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x83297a30
	if (cr6.lt) goto loc_83297A30;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_83297A30:
	// stbx r29,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83297A3C"))) PPC_WEAK_FUNC(sub_83297A3C);
PPC_FUNC_IMPL(__imp__sub_83297A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297A40"))) PPC_WEAK_FUNC(sub_83297A40);
PPC_FUNC_IMPL(__imp__sub_83297A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832979a8
	ctx.lr = 0x83297A78;
	sub_832979A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297A88"))) PPC_WEAK_FUNC(sub_83297A88);
PPC_FUNC_IMPL(__imp__sub_83297A88) {
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
	// lis r30,-31748
	ctx.r30.s64 = -2080636928;
	// addi r31,r30,28384
	ctx.r31.s64 = ctx.r30.s64 + 28384;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83297AB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// ld r10,28384(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 28384);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulli r11,r9,1000
	ctx.r11.s64 = ctx.r9.s64 * 1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297AE4"))) PPC_WEAK_FUNC(sub_83297AE4);
PPC_FUNC_IMPL(__imp__sub_83297AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297AE8"))) PPC_WEAK_FUNC(sub_83297AE8);
PPC_FUNC_IMPL(__imp__sub_83297AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83297AF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27408
	ctx.r31.s64 = ctx.r11.s64 + 27408;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83294018
	ctx.lr = 0x83297B1C;
	sub_83294018(ctx, base);
	// li r5,264
	ctx.r5.s64 = 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x83296be0
	ctx.lr = 0x83297B2C;
	sub_83296BE0(ctx, base);
	// cmpwi cr6,r3,264
	cr6.compare<int32_t>(ctx.r3.s32, 264, xer);
	// blt cr6,0x83297b4c
	if (cr6.lt) goto loc_83297B4C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,26852
	ctx.r4.s64 = ctx.r11.s64 + 26852;
	// addi r3,r10,12816
	ctx.r3.s64 = ctx.r10.s64 + 12816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832982e8
	ctx.lr = 0x83297B4C;
	sub_832982E8(ctx, base);
loc_83297B4C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83297b78
	if (cr6.eq) goto loc_83297B78;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,26816
	ctx.r4.s64 = ctx.r11.s64 + 26816;
	// addi r3,r10,12816
	ctx.r3.s64 = ctx.r10.s64 + 12816;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298338
	ctx.lr = 0x83297B6C;
	sub_83298338(ctx, base);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// mulli r11,r9,1000
	ctx.r11.s64 = ctx.r9.s64 * 1000;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_83297B78:
	// lis r11,-31959
	ctx.r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r11,r11,31368
	ctx.r11.s64 = ctx.r11.s64 + 31368;
	// addi r10,r10,31368
	ctx.r10.s64 = ctx.r10.s64 + 31368;
	// addi r9,r9,31368
	ctx.r9.s64 = ctx.r9.s64 + 31368;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a5348
	ctx.lr = 0x83297BA8;
	sub_832A5348(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83297BB0"))) PPC_WEAK_FUNC(sub_83297BB0);
PPC_FUNC_IMPL(__imp__sub_83297BB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a5460
	sub_832A5460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83297BB4"))) PPC_WEAK_FUNC(sub_83297BB4);
PPC_FUNC_IMPL(__imp__sub_83297BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297BB8"))) PPC_WEAK_FUNC(sub_83297BB8);
PPC_FUNC_IMPL(__imp__sub_83297BB8) {
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
	// subfic r11,r3,2
	xer.ca = ctx.r3.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83297be8
	if (cr6.lt) goto loc_83297BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83297c0c
	goto loc_83297C0C;
loc_83297BE8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,26884
	ctx.r5.s64 = ctx.r11.s64 + 26884;
	// addi r4,r10,26792
	ctx.r4.s64 = ctx.r10.s64 + 26792;
	// addi r3,r9,12816
	ctx.r3.s64 = ctx.r9.s64 + 12816;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x83297C08;
	sub_83298338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83297C0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83297c20
	if (!cr6.eq) goto loc_83297C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83297c44
	goto loc_83297C44;
loc_83297C20:
	// lis r30,-31748
	ctx.r30.s64 = -2080636928;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,27408
	ctx.r11.s64 = ctx.r30.s64 + 27408;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83297C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,27408(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 27408);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_83297C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297C5C"))) PPC_WEAK_FUNC(sub_83297C5C);
PPC_FUNC_IMPL(__imp__sub_83297C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297C60"))) PPC_WEAK_FUNC(sub_83297C60);
PPC_FUNC_IMPL(__imp__sub_83297C60) {
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
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x83297e1c
	if (cr6.gt) goto loc_83297E1C;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83297ce8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297CE8;
	// bdzf 4*cr6+eq,0x83297d30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297D30;
	// bdzf 4*cr6+eq,0x83297d40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297D40;
	// bdzf 4*cr6+eq,0x83297d64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297D64;
	// bdzf 4*cr6+eq,0x83297d7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297D7C;
	// bdzf 4*cr6+eq,0x83297d94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297D94;
	// bdzf 4*cr6+eq,0x83297da0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83297DA0;
	// bne cr6,0x83297de4
	if (!cr6.eq) goto loc_83297DE4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,28384
	ctx.r10.s64 = ctx.r11.s64 + 28384;
	// lwz r30,232(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297CE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// ori r11,r9,20863
	ctx.r11.u64 = ctx.r9.u64 | 20863;
	// rlwinm r9,r8,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r10,r10,28384
	ctx.r10.s64 = ctx.r10.s64 + 28384;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r30,232(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83297e38
	if (cr6.lt) goto loc_83297E38;
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297D30:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,28384
	ctx.r10.s64 = ctx.r11.s64 + 28384;
	// lwz r30,236(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297D40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r8,r10,28384
	ctx.r8.s64 = ctx.r10.s64 + 28384;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,236(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r11.u32);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297D64:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,27408
	ctx.r11.s64 = ctx.r11.s64 + 27408;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x832a54f8
	ctx.lr = 0x83297D74;
	sub_832A54F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83297e38
	goto loc_83297E38;
loc_83297D7C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,27408
	ctx.r11.s64 = ctx.r11.s64 + 27408;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x832a54d0
	ctx.lr = 0x83297D8C;
	sub_832A54D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83297e38
	goto loc_83297E38;
loc_83297D94:
	// bl 0x832a5520
	ctx.lr = 0x83297D98;
	sub_832A5520(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83297e38
	goto loc_83297E38;
loc_83297DA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83297e30
	if (cr6.eq) goto loc_83297E30;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83297DD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// ld r11,27408(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 27408);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297DE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83297e30
	if (cr6.eq) goto loc_83297E30;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83297E14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// b 0x83297e38
	goto loc_83297E38;
loc_83297E1C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,26896
	ctx.r4.s64 = ctx.r11.s64 + 26896;
	// addi r3,r10,12816
	ctx.r3.s64 = ctx.r10.s64 + 12816;
	// bl 0x83298338
	ctx.lr = 0x83297E30;
	sub_83298338(ctx, base);
loc_83297E30:
	// lis r30,-32767
	ctx.r30.s64 = -2147418112;
	// ori r30,r30,22
	ctx.r30.u64 = ctx.r30.u64 | 22;
loc_83297E38:
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

__attribute__((alias("__imp__sub_83297E54"))) PPC_WEAK_FUNC(sub_83297E54);
PPC_FUNC_IMPL(__imp__sub_83297E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297E58"))) PPC_WEAK_FUNC(sub_83297E58);
PPC_FUNC_IMPL(__imp__sub_83297E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x832a5950
	ctx.lr = 0x83297E74;
	sub_832A5950(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r30,r11,27696
	ctx.r30.s64 = ctx.r11.s64 + 27696;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bgt cr6,0x83297e9c
	if (cr6.gt) goto loc_83297E9C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27040
	ctx.r4.s64 = ctx.r11.s64 + 27040;
	// addi r3,r10,27028
	ctx.r3.s64 = ctx.r10.s64 + 27028;
	// bl 0x832982e8
	ctx.lr = 0x83297E9C;
	sub_832982E8(ctx, base);
loc_83297E9C:
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ori r4,r4,20077
	ctx.r4.u64 = ctx.r4.u64 | 20077;
	// bl 0x832a5740
	ctx.lr = 0x83297EAC;
	sub_832A5740(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3320
	ctx.r4.s64 = 3320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x83297EBC;
	sub_832A1CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3320
	ctx.r5.s64 = 3320;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x832948b0
	ctx.lr = 0x83297ECC;
	sub_832948B0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83297eec
	if (!cr6.eq) goto loc_83297EEC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27008
	ctx.r4.s64 = ctx.r11.s64 + 27008;
	// addi r3,r10,27028
	ctx.r3.s64 = ctx.r10.s64 + 27028;
	// bl 0x832982e8
	ctx.lr = 0x83297EEC;
	sub_832982E8(ctx, base);
loc_83297EEC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r7,r11,27000
	ctx.r7.s64 = ctx.r11.s64 + 27000;
	// addi r6,r10,26980
	ctx.r6.s64 = ctx.r10.s64 + 26980;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83297F08;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83297f14
	if (cr6.eq) goto loc_83297F14;
	// bl 0x83295dc8
	ctx.lr = 0x83297F14;
	sub_83295DC8(ctx, base);
loc_83297F14:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,26960
	ctx.r6.s64 = ctx.r10.s64 + 26960;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83297F38;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83297f44
	if (cr6.eq) goto loc_83297F44;
	// bl 0x83295dc8
	ctx.lr = 0x83297F44;
	sub_83295DC8(ctx, base);
loc_83297F44:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,26944
	ctx.r6.s64 = ctx.r10.s64 + 26944;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83297F68;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83297f74
	if (cr6.eq) goto loc_83297F74;
	// bl 0x83295dc8
	ctx.lr = 0x83297F74;
	sub_83295DC8(ctx, base);
loc_83297F74:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,26924
	ctx.r6.s64 = ctx.r10.s64 + 26924;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x83297F98;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83297fa4
	if (cr6.eq) goto loc_83297FA4;
	// bl 0x83295dc8
	ctx.lr = 0x83297FA4;
	sub_83295DC8(ctx, base);
loc_83297FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83297FBC"))) PPC_WEAK_FUNC(sub_83297FBC);
PPC_FUNC_IMPL(__imp__sub_83297FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83297FC0"))) PPC_WEAK_FUNC(sub_83297FC0);
PPC_FUNC_IMPL(__imp__sub_83297FC0) {
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
	// lis r31,-31748
	ctx.r31.s64 = -2080636928;
	// addi r30,r31,27696
	ctx.r30.s64 = ctx.r31.s64 + 27696;
	// lwz r3,27696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// bl 0x83294988
	ctx.lr = 0x83297FE4;
	sub_83294988(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83294958
	ctx.lr = 0x83297FF4;
	sub_83294958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x83297FFC;
	sub_832A1D18(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832a59f0
	ctx.lr = 0x83298004;
	sub_832A59F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329801C"))) PPC_WEAK_FUNC(sub_8329801C);
PPC_FUNC_IMPL(__imp__sub_8329801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298020"))) PPC_WEAK_FUNC(sub_83298020);
PPC_FUNC_IMPL(__imp__sub_83298020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83298028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27696
	ctx.r31.s64 = ctx.r11.s64 + 27696;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5a38
	ctx.lr = 0x83298044;
	sub_832A5A38(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x8329805C;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83298080
	if (cr6.eq) goto loc_83298080;
	// bl 0x83295dc8
	ctx.lr = 0x83298068;
	sub_83295DC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5ae8
	ctx.lr = 0x83298074;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83298080:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x832a5ae8
	ctx.lr = 0x8329808C;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83298098"))) PPC_WEAK_FUNC(sub_83298098);
PPC_FUNC_IMPL(__imp__sub_83298098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832980A0;
	__savegprlr_27(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832980c8
	if (cr6.eq) goto loc_832980C8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832980d0
	goto loc_832980D0;
loc_832980C8:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
loc_832980D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a7498
	ctx.lr = 0x832980DC;
	sub_832A7498(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a7580
	ctx.lr = 0x832980F4;
	sub_832A7580(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832980FC"))) PPC_WEAK_FUNC(sub_832980FC);
PPC_FUNC_IMPL(__imp__sub_832980FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298100"))) PPC_WEAK_FUNC(sub_83298100);
PPC_FUNC_IMPL(__imp__sub_83298100) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a76f0
	sub_832A76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83298104"))) PPC_WEAK_FUNC(sub_83298104);
PPC_FUNC_IMPL(__imp__sub_83298104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298108"))) PPC_WEAK_FUNC(sub_83298108);
PPC_FUNC_IMPL(__imp__sub_83298108) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a7d18
	sub_832A7D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329810C"))) PPC_WEAK_FUNC(sub_8329810C);
PPC_FUNC_IMPL(__imp__sub_8329810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298110"))) PPC_WEAK_FUNC(sub_83298110);
PPC_FUNC_IMPL(__imp__sub_83298110) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a7d90
	sub_832A7D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83298114"))) PPC_WEAK_FUNC(sub_83298114);
PPC_FUNC_IMPL(__imp__sub_83298114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298118"))) PPC_WEAK_FUNC(sub_83298118);
PPC_FUNC_IMPL(__imp__sub_83298118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329814c
	if (!cr6.eq) goto loc_8329814C;
	// bl 0x832a79d0
	ctx.lr = 0x8329814C;
	sub_832A79D0(ctx, base);
loc_8329814C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832a7fa8
	ctx.lr = 0x83298164;
	sub_832A7FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298174"))) PPC_WEAK_FUNC(sub_83298174);
PPC_FUNC_IMPL(__imp__sub_83298174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298178"))) PPC_WEAK_FUNC(sub_83298178);
PPC_FUNC_IMPL(__imp__sub_83298178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83298180;
	__savegprlr_26(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// subfze r8,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r8.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x832982dc
	if (!cr6.eq) goto loc_832982DC;
	// bl 0x832a7980
	ctx.lr = 0x832981C0;
	sub_832A7980(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832981d4
	if (cr6.eq) goto loc_832981D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832981e0
	goto loc_832981E0;
loc_832981D4:
	// bl 0x832a6bf8
	ctx.lr = 0x832981D8;
	sub_832A6BF8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
loc_832981E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832982dc
	if (cr6.eq) goto loc_832982DC;
	// bl 0x832a7be8
	ctx.lr = 0x832981F0;
	sub_832A7BE8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83298200
	if (!cr6.eq) goto loc_83298200;
	// bl 0x832a79d0
	ctx.lr = 0x832981FC;
	sub_832A79D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83298200:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329821C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf r9,r28,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r8,r28,-1
	ctx.r8.s64 = ctx.r28.s64 + -1;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x832982d0
	if (cr6.lt) goto loc_832982D0;
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832a79b8
	ctx.lr = 0x83298238;
	sub_832A79B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x832a8310
	ctx.lr = 0x83298250;
	sub_832A8310(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83298268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329827C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832982d0
	if (cr6.eq) goto loc_832982D0;
loc_83298288:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x832982b0
	if (!cr6.gt) goto loc_832982B0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832982B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832982B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832982C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83298288
	if (!cr6.eq) goto loc_83298288;
loc_832982D0:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// bne cr6,0x832982dc
	if (!cr6.eq) goto loc_832982DC;
	// bl 0x832a7e00
	ctx.lr = 0x832982DC;
	sub_832A7E00(ctx, base);
loc_832982DC:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832982E4"))) PPC_WEAK_FUNC(sub_832982E4);
PPC_FUNC_IMPL(__imp__sub_832982E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832982E8"))) PPC_WEAK_FUNC(sub_832982E8);
PPC_FUNC_IMPL(__imp__sub_832982E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83298178
	ctx.lr = 0x83298334;
	sub_83298178(ctx, base);
loc_83298334:
	// b 0x83298334
	goto loc_83298334;
}

__attribute__((alias("__imp__sub_83298338"))) PPC_WEAK_FUNC(sub_83298338);
PPC_FUNC_IMPL(__imp__sub_83298338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83298178
	ctx.lr = 0x83298384;
	sub_83298178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298394"))) PPC_WEAK_FUNC(sub_83298394);
PPC_FUNC_IMPL(__imp__sub_83298394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298398"))) PPC_WEAK_FUNC(sub_83298398);
PPC_FUNC_IMPL(__imp__sub_83298398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83298178
	ctx.lr = 0x832983E4;
	sub_83298178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832983F4"))) PPC_WEAK_FUNC(sub_832983F4);
PPC_FUNC_IMPL(__imp__sub_832983F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832983F8"))) PPC_WEAK_FUNC(sub_832983F8);
PPC_FUNC_IMPL(__imp__sub_832983F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83298178
	ctx.lr = 0x83298444;
	sub_83298178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298454"))) PPC_WEAK_FUNC(sub_83298454);
PPC_FUNC_IMPL(__imp__sub_83298454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298458"))) PPC_WEAK_FUNC(sub_83298458);
PPC_FUNC_IMPL(__imp__sub_83298458) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r10,27080
	ctx.r4.s64 = ctx.r10.s64 + 27080;
	// addi r3,r9,27072
	ctx.r3.s64 = ctx.r9.s64 + 27072;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x832982e8
	ctx.lr = 0x83298488;
	sub_832982E8(ctx, base);
}

__attribute__((alias("__imp__sub_83298488"))) PPC_WEAK_FUNC(sub_83298488);
PPC_FUNC_IMPL(__imp__sub_83298488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83298178
	ctx.lr = 0x832984BC;
	sub_83298178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832984CC"))) PPC_WEAK_FUNC(sub_832984CC);
PPC_FUNC_IMPL(__imp__sub_832984CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832984D0"))) PPC_WEAK_FUNC(sub_832984D0);
PPC_FUNC_IMPL(__imp__sub_832984D0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,26128
	ctx.r6.s64 = ctx.r11.s64 + 26128;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83298524
	if (cr6.eq) goto loc_83298524;
loc_8329850C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8329850c
	if (!cr6.eq) goto loc_8329850C;
loc_83298524:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// beq cr6,0x83298540
	if (cr6.eq) goto loc_83298540;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x83298544
	if (!cr6.eq) goto loc_83298544;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83298540:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83298544:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832985d4
	if (!cr6.eq) goto loc_832985D4;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x83298640
	if (!cr6.eq) goto loc_83298640;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x83298574
	if (cr6.eq) goto loc_83298574;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x83298684
	if (!cr6.eq) goto loc_83298684;
loc_83298574:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83298578:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x832985a4
	if (!cr6.eq) goto loc_832985A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x832985a0
	if (cr6.eq) goto loc_832985A0;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x832985a4
	if (!cr6.eq) goto loc_832985A4;
loc_832985A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832985A4:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r5,r8,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83298624
	if (cr6.eq) goto loc_83298624;
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// blt cr6,0x83298604
	if (cr6.lt) goto loc_83298604;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// bgt cr6,0x83298604
	if (cr6.gt) goto loc_83298604;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
	// b 0x83298628
	goto loc_83298628;
loc_832985D4:
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// beq cr6,0x83298684
	if (cr6.eq) goto loc_83298684;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// beq cr6,0x83298640
	if (cr6.eq) goto loc_83298640;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// beq cr6,0x83298578
	if (cr6.eq) goto loc_83298578;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,27124
	ctx.r5.s64 = ctx.r11.s64 + 27124;
	// addi r3,r10,27104
	ctx.r3.s64 = ctx.r10.s64 + 27104;
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x83298458
	ctx.lr = 0x83298604;
	sub_83298458(ctx, base);
loc_83298604:
	// cmplwi cr6,r10,97
	cr6.compare<uint32_t>(ctx.r10.u32, 97, xer);
	// blt cr6,0x8329861c
	if (cr6.lt) goto loc_8329861C;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, xer);
	// bgt cr6,0x8329861c
	if (cr6.gt) goto loc_8329861C;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x83298628
	goto loc_83298628;
loc_8329861C:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x83298628
	goto loc_83298628;
loc_83298624:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83298628:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x832986c4
	if (cr6.lt) goto loc_832986C4;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x832985a0
	goto loc_832985A0;
loc_83298640:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r8,r10,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// rlwinm r5,r8,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83298660
	if (!cr6.eq) goto loc_83298660;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83298660:
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832986c4
	if (cr6.lt) goto loc_832986C4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x83298640
	goto loc_83298640;
loc_83298684:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x832986c4
	if (cr6.lt) goto loc_832986C4;
loc_83298698:
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bgt cr6,0x832986c4
	if (cr6.gt) goto loc_832986C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r3,r10,-48
	ctx.r3.s64 = ctx.r10.s64 + -48;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bge cr6,0x83298698
	if (!cr6.lt) goto loc_83298698;
loc_832986C4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832986d0
	if (cr6.eq) goto loc_832986D0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_832986D0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832986e0
	if (cr6.eq) goto loc_832986E0;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_832986E0:
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

__attribute__((alias("__imp__sub_832986F4"))) PPC_WEAK_FUNC(sub_832986F4);
PPC_FUNC_IMPL(__imp__sub_832986F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832986F8"))) PPC_WEAK_FUNC(sub_832986F8);
PPC_FUNC_IMPL(__imp__sub_832986F8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,26128
	ctx.r6.s64 = ctx.r11.s64 + 26128;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8329874c
	if (cr6.eq) goto loc_8329874C;
loc_83298734:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83298734
	if (!cr6.eq) goto loc_83298734;
loc_8329874C:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// beq cr6,0x83298768
	if (cr6.eq) goto loc_83298768;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x8329876c
	if (!cr6.eq) goto loc_8329876C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83298768:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329876C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832987fc
	if (!cr6.eq) goto loc_832987FC;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x8329886c
	if (!cr6.eq) goto loc_8329886C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x8329879c
	if (cr6.eq) goto loc_8329879C;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x832988b4
	if (!cr6.eq) goto loc_832988B4;
loc_8329879C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832987A0:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x832987cc
	if (!cr6.eq) goto loc_832987CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x832987c8
	if (cr6.eq) goto loc_832987C8;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x832987cc
	if (!cr6.eq) goto loc_832987CC;
loc_832987C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832987CC:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r5,r9,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8329884c
	if (cr6.eq) goto loc_8329884C;
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// blt cr6,0x8329882c
	if (cr6.lt) goto loc_8329882C;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// bgt cr6,0x8329882c
	if (cr6.gt) goto loc_8329882C;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
	// b 0x83298850
	goto loc_83298850;
loc_832987FC:
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// beq cr6,0x832988b4
	if (cr6.eq) goto loc_832988B4;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// beq cr6,0x8329886c
	if (cr6.eq) goto loc_8329886C;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// beq cr6,0x832987a0
	if (cr6.eq) goto loc_832987A0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,27140
	ctx.r5.s64 = ctx.r11.s64 + 27140;
	// addi r3,r10,27104
	ctx.r3.s64 = ctx.r10.s64 + 27104;
	// li r4,152
	ctx.r4.s64 = 152;
	// bl 0x83298458
	ctx.lr = 0x8329882C;
	sub_83298458(ctx, base);
loc_8329882C:
	// cmplwi cr6,r10,97
	cr6.compare<uint32_t>(ctx.r10.u32, 97, xer);
	// blt cr6,0x83298844
	if (cr6.lt) goto loc_83298844;
	// cmplwi cr6,r10,102
	cr6.compare<uint32_t>(ctx.r10.u32, 102, xer);
	// bgt cr6,0x83298844
	if (cr6.gt) goto loc_83298844;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x83298850
	goto loc_83298850;
loc_83298844:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x83298850
	goto loc_83298850;
loc_8329884C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83298850:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x832988f8
	if (cr6.lt) goto loc_832988F8;
	// rldicr r9,r3,4,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x832987c8
	goto loc_832987C8;
loc_8329886C:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// rlwinm r5,r9,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8329888c
	if (!cr6.eq) goto loc_8329888C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8329888C:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x832988f8
	if (cr6.lt) goto loc_832988F8;
	// rldicr r10,r3,2,61
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8329886c
	goto loc_8329886C;
loc_832988B4:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// blt cr6,0x832988f8
	if (cr6.lt) goto loc_832988F8;
loc_832988C8:
	// cmpwi cr6,r9,55
	cr6.compare<int32_t>(ctx.r9.s32, 55, xer);
	// bgt cr6,0x832988f8
	if (cr6.gt) goto loc_832988F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rldicr r10,r3,3,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r3,r9,-48
	ctx.r3.s64 = ctx.r9.s64 + -48;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// bge cr6,0x832988c8
	if (!cr6.lt) goto loc_832988C8;
loc_832988F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83298904
	if (cr6.eq) goto loc_83298904;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_83298904:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83298914
	if (cr6.eq) goto loc_83298914;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_83298914:
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

__attribute__((alias("__imp__sub_83298928"))) PPC_WEAK_FUNC(sub_83298928);
PPC_FUNC_IMPL(__imp__sub_83298928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83298930;
	__savegprlr_29(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,26128
	ctx.r31.s64 = ctx.r10.s64 + 26128;
	// lbzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83298964
	if (cr6.eq) goto loc_83298964;
loc_83298950:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83298950
	if (!cr6.eq) goto loc_83298950;
loc_83298964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x83298980
	if (!cr6.eq) goto loc_83298980;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x83298988
	goto loc_83298988;
loc_83298980:
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// bne cr6,0x8329898c
	if (!cr6.eq) goto loc_8329898C;
loc_83298988:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329898C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83298994:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832989c4
	if (!cr6.eq) goto loc_832989C4;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	cr6.compare<int32_t>(ctx.r10.s32, 46, xer);
	// bne cr6,0x832989d0
	if (!cr6.eq) goto loc_832989D0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x832989d0
	if (!cr6.lt) goto loc_832989D0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_832989C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x83298994
	goto loc_83298994;
loc_832989D0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x832989e8
	if (!cr6.lt) goto loc_832989E8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x832989ec
	goto loc_832989EC;
loc_832989E8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_832989EC:
	// cmpwi cr6,r9,18
	cr6.compare<int32_t>(ctx.r9.s32, 18, xer);
	// ble cr6,0x83298af0
	if (!cr6.gt) goto loc_83298AF0;
	// addi r30,r8,-18
	ctx.r30.s64 = ctx.r8.s64 + -18;
	// li r9,18
	ctx.r9.s64 = 18;
loc_832989FC:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// ble cr6,0x83298a48
	if (!cr6.gt) goto loc_83298A48;
	// addi r11,r9,-9
	ctx.r11.s64 = ctx.r9.s64 + -9;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83298A14:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x83298a2c
	if (!cr6.eq) goto loc_83298A2C;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_83298A2C:
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// bdnz 0x83298a14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83298A14;
loc_83298A48:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83298a8c
	if (!cr6.gt) goto loc_83298A8C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
loc_83298A5C:
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x83298a70
	if (!cr6.eq) goto loc_83298A70;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
loc_83298A70:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bdnz 0x83298a5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83298A5C;
loc_83298A8C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lfd f0,27232(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 27232);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// fmadd f12,f12,f0,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64;
	// beq cr6,0x83298ad8
	if (cr6.eq) goto loc_83298AD8;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// bne cr6,0x83298b60
	if (!cr6.eq) goto loc_83298B60;
loc_83298AD8:
	// lbzu r11,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x83298b0c
	if (!cr6.eq) goto loc_83298B0C;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x83298b14
	goto loc_83298B14;
loc_83298AF0:
	// subf r30,r9,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832989fc
	if (!cr6.eq) goto loc_832989FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// b 0x83298c8c
	goto loc_83298C8C;
loc_83298B0C:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// bne cr6,0x83298b18
	if (!cr6.eq) goto loc_83298B18;
loc_83298B14:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_83298B18:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r6,r8,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83298b60
	if (cr6.eq) goto loc_83298B60;
loc_83298B30:
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbzu r11,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r8,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83298b30
	if (!cr6.eq) goto loc_83298B30;
loc_83298B60:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// bne cr6,0x83298b74
	if (!cr6.eq) goto loc_83298B74;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_83298B74:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83298b88
	if (!cr6.lt) goto loc_83298B88;
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x83298b8c
	goto loc_83298B8C;
loc_83298B88:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83298B8C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,511
	cr6.compare<int32_t>(ctx.r11.s32, 511, xer);
	// lfd f0,17056(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17056);
	// ble cr6,0x83298ba0
	if (!cr6.gt) goto loc_83298BA0;
	// li r11,511
	ctx.r11.s64 = 511;
loc_83298BA0:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,27160
	ctx.r10.s64 = ctx.r10.s64 + 27160;
	// beq cr6,0x83298bb8
	if (cr6.eq) goto loc_83298BB8;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
loc_83298BB8:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298bd0
	if (cr6.eq) goto loc_83298BD0;
	// lfd f13,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298BD0:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298be8
	if (cr6.eq) goto loc_83298BE8;
	// lfd f13,16(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298BE8:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298c00
	if (cr6.eq) goto loc_83298C00;
	// lfd f13,24(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C00:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298c18
	if (cr6.eq) goto loc_83298C18;
	// lfd f13,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C18:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298c30
	if (cr6.eq) goto loc_83298C30;
	// lfd f13,40(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C30:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298c48
	if (cr6.eq) goto loc_83298C48;
	// lfd f13,48(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C48:
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83298c60
	if (cr6.eq) goto loc_83298C60;
	// lfd f13,56(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C60:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83298c74
	if (cr6.eq) goto loc_83298C74;
	// lfd f13,64(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_83298C74:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83298c88
	if (cr6.eq) goto loc_83298C88;
	// fdiv f1,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x83298c8c
	goto loc_83298C8C;
loc_83298C88:
	// fmul f1,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f12.f64;
loc_83298C8C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83298c98
	if (cr6.eq) goto loc_83298C98;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
loc_83298C98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83298ca8
	if (cr6.eq) goto loc_83298CA8;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_83298CA8:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83298CAC"))) PPC_WEAK_FUNC(sub_83298CAC);
PPC_FUNC_IMPL(__imp__sub_83298CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298CB0"))) PPC_WEAK_FUNC(sub_83298CB0);
PPC_FUNC_IMPL(__imp__sub_83298CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r8,9362
	ctx.r8.s64 = 613548032;
	// ori r10,r11,20864
	ctx.r10.u64 = ctx.r11.u64 | 20864;
	// ori r6,r8,18725
	ctx.r6.u64 = ctx.r8.u64 | 18725;
	// divwu r11,r4,r10
	ctx.r11.u32 = PPCDivide(ctx.r4.u32, ctx.r10.u32);
	// li r9,1461
	ctx.r9.s64 = 1461;
	// addi r8,r11,306
	ctx.r8.s64 = ctx.r11.s64 + 306;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// divwu r7,r10,r9
	ctx.r7.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// li r5,3600
	ctx.r5.s64 = 3600;
	// mulli r10,r7,1461
	ctx.r10.s64 = ctx.r7.s64 * 1461;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhwu r9,r11,r6
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// divwu r6,r4,r5
	ctx.r6.u32 = PPCDivide(ctx.r4.u32, ctx.r5.u32);
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r31,r5,3600
	ctx.r31.s64 = ctx.r5.s64 * 3600;
	// stb r5,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r5.u8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-30584
	ctx.r30.s64 = -2004353024;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// ori r5,r30,34953
	ctx.r5.u64 = ctx.r30.u64 | 34953;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mulhwu r5,r4,r5
	ctx.r5.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// li r31,153
	ctx.r31.s64 = 153;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// divwu r9,r9,r31
	ctx.r9.u32 = PPCDivide(ctx.r9.u32, ctx.r31.u32);
	// subf r31,r6,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r6.s64;
	// li r30,60
	ctx.r30.s64 = 60;
	// mulli r5,r5,60
	ctx.r5.s64 = ctx.r5.s64 * 60;
	// mulli r6,r9,153
	ctx.r6.s64 = ctx.r9.s64 * 153;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// divwu r31,r4,r30
	ctx.r31.u32 = PPCDivide(ctx.r4.u32, ctx.r30.u32);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r31.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r5,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r5.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu r4,r4,r6
	ctx.r4.u32 = PPCDivide(ctx.r4.u32, ctx.r6.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// blt cr6,0x83298da0
	if (cr6.lt) goto loc_83298DA0;
	// addi r10,r9,246
	ctx.r10.s64 = ctx.r9.s64 + 246;
	// b 0x83298da8
	goto loc_83298DA8;
loc_83298DA0:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_83298DA8:
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// mulli r10,r7,1461
	ctx.r10.s64 = ctx.r7.s64 * 1461;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r7,70
	ctx.r9.s64 = ctx.r7.s64 + 70;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stb r6,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r6.u8);
	// addis r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 65536;
	// addi r11,r11,-306
	ctx.r11.s64 = ctx.r11.s64 + -306;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298DE4"))) PPC_WEAK_FUNC(sub_83298DE4);
PPC_FUNC_IMPL(__imp__sub_83298DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298DE8"))) PPC_WEAK_FUNC(sub_83298DE8);
PPC_FUNC_IMPL(__imp__sub_83298DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// addi r11,r11,-70
	ctx.r11.s64 = ctx.r11.s64 + -70;
	// blt cr6,0x83298e08
	if (cr6.lt) goto loc_83298E08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// b 0x83298e0c
	goto loc_83298E0C;
loc_83298E08:
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
loc_83298E0C:
	// mulli r11,r11,1461
	ctx.r11.s64 = ctx.r11.s64 * 1461;
	// lbz r7,11(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// mulli r6,r10,153
	ctx.r6.s64 = ctx.r10.s64 * 153;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// divw r11,r5,r4
	ctx.r11.s32 = PPCDivide(ctx.r5.s32, ctx.r4.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,-307
	ctx.r11.s64 = ctx.r11.s64 + -307;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298E68"))) PPC_WEAK_FUNC(sub_83298E68);
PPC_FUNC_IMPL(__imp__sub_83298E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83298E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83297c60
	ctx.lr = 0x83298E84;
	sub_83297C60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x83298cb0
	ctx.lr = 0x83298E94;
	sub_83298CB0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83298EA0"))) PPC_WEAK_FUNC(sub_83298EA0);
PPC_FUNC_IMPL(__imp__sub_83298EA0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83297c60
	ctx.lr = 0x83298EC0;
	sub_83297C60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298de8
	ctx.lr = 0x83298ECC;
	sub_83298DE8(ctx, base);
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298EE8"))) PPC_WEAK_FUNC(sub_83298EE8);
PPC_FUNC_IMPL(__imp__sub_83298EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E0000;
	// lis r10,28
	ctx.r10.s64 = 1835008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83298f20
	if (cr6.eq) goto loc_83298F20;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,27272
	ctx.r4.s64 = ctx.r11.s64 + 27272;
	// b 0x83298f48
	goto loc_83298F48;
loc_83298F20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x83298F2C;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83298f40
	if (cr6.eq) goto loc_83298F40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83298f60
	goto loc_83298F60;
loc_83298F40:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,27248
	ctx.r4.s64 = ctx.r11.s64 + 27248;
loc_83298F48:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,27240
	ctx.r3.s64 = ctx.r10.s64 + 27240;
	// bl 0x83298338
	ctx.lr = 0x83298F5C;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83298F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83298F78"))) PPC_WEAK_FUNC(sub_83298F78);
PPC_FUNC_IMPL(__imp__sub_83298F78) {
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
	// bl 0x832a1d18
	ctx.lr = 0x83298F88;
	sub_832A1D18(ctx, base);
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

__attribute__((alias("__imp__sub_83298F9C"))) PPC_WEAK_FUNC(sub_83298F9C);
PPC_FUNC_IMPL(__imp__sub_83298F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83298FA0"))) PPC_WEAK_FUNC(sub_83298FA0);
PPC_FUNC_IMPL(__imp__sub_83298FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83298FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83298fc8
	if (!cr6.lt) goto loc_83298FC8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,27364
	ctx.r4.s64 = ctx.r11.s64 + 27364;
	// b 0x83299040
	goto loc_83299040;
loc_83298FC8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83298fec
	if (cr6.eq) goto loc_83298FEC;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x832a1cb0
	ctx.lr = 0x83298FE0;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x83298ffc
	goto loc_83298FFC;
loc_83298FEC:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x832a1cb0
	ctx.lr = 0x83298FF4;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_83298FFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83299058
	if (cr6.eq) goto loc_83299058;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-28808
	ctx.r4.s64 = ctx.r11.s64 + -28808;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x832a1350
	ctx.lr = 0x83299028;
	sub_832A1350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x83299050
	if (cr6.gt) goto loc_83299050;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x83299038;
	sub_832A1D18(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,27332
	ctx.r4.s64 = ctx.r11.s64 + 27332;
loc_83299040:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r3,r10,27240
	ctx.r3.s64 = ctx.r10.s64 + 27240;
	// bl 0x83298338
	ctx.lr = 0x8329904C;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83299050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299058:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,27308
	ctx.r4.s64 = ctx.r11.s64 + 27308;
	// b 0x83299040
	goto loc_83299040;
}

__attribute__((alias("__imp__sub_83299064"))) PPC_WEAK_FUNC(sub_83299064);
PPC_FUNC_IMPL(__imp__sub_83299064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299068"))) PPC_WEAK_FUNC(sub_83299068);
PPC_FUNC_IMPL(__imp__sub_83299068) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// bl 0x83298ee8
	ctx.lr = 0x8329908C;
	sub_83298EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x83299094;
	sub_832A13D8(ctx, base);
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

__attribute__((alias("__imp__sub_832990A8"))) PPC_WEAK_FUNC(sub_832990A8);
PPC_FUNC_IMPL(__imp__sub_832990A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83298ee8
	ctx.lr = 0x832990D4;
	sub_83298EE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x832990f0
	if (cr6.gt) goto loc_832990F0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329910c
	goto loc_8329910C;
loc_832990F0:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83299104
	if (!cr6.gt) goto loc_83299104;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83299104:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8329910C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83299118;
	sub_83293EC8(ctx, base);
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

__attribute__((alias("__imp__sub_83299134"))) PPC_WEAK_FUNC(sub_83299134);
PPC_FUNC_IMPL(__imp__sub_83299134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299138"))) PPC_WEAK_FUNC(sub_83299138);
PPC_FUNC_IMPL(__imp__sub_83299138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83298ee8
	ctx.lr = 0x83299164;
	sub_83298EE8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bgt cr6,0x83299184
	if (cr6.gt) goto loc_83299184;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832991a0
	goto loc_832991A0;
loc_83299184:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x83299198
	if (!cr6.gt) goto loc_83299198;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83299198:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// subf r31,r9,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_832991A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832991AC;
	sub_83293EC8(ctx, base);
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

__attribute__((alias("__imp__sub_832991C8"))) PPC_WEAK_FUNC(sub_832991C8);
PPC_FUNC_IMPL(__imp__sub_832991C8) {
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
	// rlwinm r11,r4,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E0000;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83299214
	if (cr6.eq) goto loc_83299214;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27404
	ctx.r4.s64 = ctx.r11.s64 + 27404;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x83299200;
	sub_83298338(ctx, base);
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
loc_83299214:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832a1510
	ctx.lr = 0x83299220;
	sub_832A1510(ctx, base);
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299244"))) PPC_WEAK_FUNC(sub_83299244);
PPC_FUNC_IMPL(__imp__sub_83299244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299248"))) PPC_WEAK_FUNC(sub_83299248);
PPC_FUNC_IMPL(__imp__sub_83299248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83299250;
	__savegprlr_29(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299288
	if (!cr6.eq) goto loc_83299288;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27436
	ctx.r4.s64 = ctx.r11.s64 + 27436;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x83299278;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299288:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832aa0c0
	ctx.lr = 0x832992A0;
	sub_832AA0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299374
	if (cr6.lt) goto loc_83299374;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832a8d78
	ctx.lr = 0x832992BC;
	sub_832A8D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83299360
	if (cr6.lt) goto loc_83299360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832992f0
	if (cr6.eq) goto loc_832992F0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83299360
	goto loc_83299360;
loc_832992F0:
	// lhz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 124);
	// ori r10,r30,32768
	ctx.r10.u64 = ctx.r30.u64 | 32768;
	// addi r4,r31,540
	ctx.r4.s64 = ctx.r31.s64 + 540;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x832aa3e8
	ctx.lr = 0x83299308;
	sub_832AA3E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8329932C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299360
	if (cr6.lt) goto loc_83299360;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9c00
	ctx.lr = 0x83299350;
	sub_832A9C00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83299374
	if (!cr6.lt) goto loc_83299374;
loc_83299360:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83299374
	if (cr6.eq) goto loc_83299374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e48
	ctx.lr = 0x83299370;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83299374:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299380"))) PPC_WEAK_FUNC(sub_83299380);
PPC_FUNC_IMPL(__imp__sub_83299380) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// bl 0x832991c8
	ctx.lr = 0x832993A4;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832993c8
	if (!cr6.eq) goto loc_832993C8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832993C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832993D0;
	sub_832A13D8(ctx, base);
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

__attribute__((alias("__imp__sub_832993E4"))) PPC_WEAK_FUNC(sub_832993E4);
PPC_FUNC_IMPL(__imp__sub_832993E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832993E8"))) PPC_WEAK_FUNC(sub_832993E8);
PPC_FUNC_IMPL(__imp__sub_832993E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8329942c
	if (!cr6.eq) goto loc_8329942C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27456
	ctx.r4.s64 = ctx.r11.s64 + 27456;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x83299420;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x83299468
	goto loc_83299468;
loc_8329942C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// bl 0x832991c8
	ctx.lr = 0x8329943C;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299450
	if (!cr6.eq) goto loc_83299450;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x83299468
	goto loc_83299468;
loc_83299450:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83299468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299480"))) PPC_WEAK_FUNC(sub_83299480);
PPC_FUNC_IMPL(__imp__sub_83299480) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832994c4
	if (!cr6.eq) goto loc_832994C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27504
	ctx.r4.s64 = ctx.r11.s64 + 27504;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832994B8;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x83299528
	goto loc_83299528;
loc_832994C4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832994ec
	if (!cr6.lt) goto loc_832994EC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27480
	ctx.r4.s64 = ctx.r11.s64 + 27480;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832994E0;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x83299528
	goto loc_83299528;
loc_832994EC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// bl 0x832991c8
	ctx.lr = 0x832994FC;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299510
	if (!cr6.eq) goto loc_83299510;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x83299528
	goto loc_83299528;
loc_83299510:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83299528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299540"))) PPC_WEAK_FUNC(sub_83299540);
PPC_FUNC_IMPL(__imp__sub_83299540) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83299584
	if (!cr6.eq) goto loc_83299584;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27524
	ctx.r4.s64 = ctx.r11.s64 + 27524;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x83299578;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x832995c0
	goto loc_832995C0;
loc_83299584:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// bl 0x832991c8
	ctx.lr = 0x83299594;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832995a8
	if (!cr6.eq) goto loc_832995A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x832995c0
	goto loc_832995C0;
loc_832995A8:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832995C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832995C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832995D8"))) PPC_WEAK_FUNC(sub_832995D8);
PPC_FUNC_IMPL(__imp__sub_832995D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8329962c
	if (cr6.eq) goto loc_8329962C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8329962c
	if (cr6.eq) goto loc_8329962C;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x8329962c
	if (cr6.eq) goto loc_8329962C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,27560
	ctx.r4.s64 = ctx.r11.s64 + 27560;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x83299620;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x8329966c
	goto loc_8329966C;
loc_8329962C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27552
	ctx.r3.s64 = ctx.r11.s64 + 27552;
	// bl 0x832991c8
	ctx.lr = 0x8329963C;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299650
	if (!cr6.eq) goto loc_83299650;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// b 0x8329966c
	goto loc_8329966C;
loc_83299650:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83299668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
loc_8329966C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299684"))) PPC_WEAK_FUNC(sub_83299684);
PPC_FUNC_IMPL(__imp__sub_83299684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299688"))) PPC_WEAK_FUNC(sub_83299688);
PPC_FUNC_IMPL(__imp__sub_83299688) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,27592
	ctx.r3.s64 = ctx.r11.s64 + 27592;
	// bl 0x832991c8
	ctx.lr = 0x832996A4;
	sub_832991C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832996c4
	if (!cr6.eq) goto loc_832996C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832996C4:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832996D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832996E8"))) PPC_WEAK_FUNC(sub_832996E8);
PPC_FUNC_IMPL(__imp__sub_832996E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,3,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x1F8;
	// addi r11,r11,13152
	ctx.r11.s64 = ctx.r11.s64 + 13152;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299704"))) PPC_WEAK_FUNC(sub_83299704);
PPC_FUNC_IMPL(__imp__sub_83299704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299708"))) PPC_WEAK_FUNC(sub_83299708);
PPC_FUNC_IMPL(__imp__sub_83299708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,3,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x1F8;
	// addi r11,r11,13152
	ctx.r11.s64 = ctx.r11.s64 + 13152;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299720"))) PPC_WEAK_FUNC(sub_83299720);
PPC_FUNC_IMPL(__imp__sub_83299720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,3,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x1F8;
	// addi r11,r11,13152
	ctx.r11.s64 = ctx.r11.s64 + 13152;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299738"))) PPC_WEAK_FUNC(sub_83299738);
PPC_FUNC_IMPL(__imp__sub_83299738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,3,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x1F8;
	// addi r9,r11,13152
	ctx.r9.s64 = ctx.r11.s64 + 13152;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329974C"))) PPC_WEAK_FUNC(sub_8329974C);
PPC_FUNC_IMPL(__imp__sub_8329974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299750"))) PPC_WEAK_FUNC(sub_83299750);
PPC_FUNC_IMPL(__imp__sub_83299750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x8329ea90
	sub_8329EA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299768"))) PPC_WEAK_FUNC(sub_83299768);
PPC_FUNC_IMPL(__imp__sub_83299768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4096
	cr6.compare<int32_t>(ctx.r4.s32, 4096, xer);
	// ble cr6,0x8329977c
	if (!cr6.gt) goto loc_8329977C;
loc_83299774:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329977C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832997b4
	if (!cr6.gt) goto loc_832997B4;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r10,14128
	ctx.r9.s64 = ctx.r10.s64 + 14128;
loc_8329978C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299774
	if (cr6.lt) goto loc_83299774;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x8329978c
	if (cr6.gt) goto loc_8329978C;
loc_832997B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832997BC"))) PPC_WEAK_FUNC(sub_832997BC);
PPC_FUNC_IMPL(__imp__sub_832997BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832997C0"))) PPC_WEAK_FUNC(sub_832997C0);
PPC_FUNC_IMPL(__imp__sub_832997C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subfic r11,r5,36
	xer.ca = ctx.r5.u32 <= 36;
	ctx.r11.s64 = 36 - ctx.r5.s64;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8329987c
	if (cr6.lt) goto loc_8329987C;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r6,r3,-4
	ctx.r6.s64 = ctx.r3.s64 + -4;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r3,r10,14128
	ctx.r3.s64 = ctx.r10.s64 + 14128;
loc_83299800:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8329987c
	if (cr6.lt) goto loc_8329987C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8329982c
	if (cr6.lt) goto loc_8329982C;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x83299848
	goto loc_83299848;
loc_8329982C:
	// subfic r8,r11,6
	xer.ca = ctx.r11.u32 <= 6;
	ctx.r8.s64 = 6 - ctx.r11.s64;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
loc_83299848:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83299800
	if (!cr0.eq) goto loc_83299800;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// stb r7,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r7.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8329987C:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8256
	ctx.r3.u64 = ctx.r3.u64 | 8256;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83299890"))) PPC_WEAK_FUNC(sub_83299890);
PPC_FUNC_IMPL(__imp__sub_83299890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83299898;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r7,4096
	xer.ca = ctx.r7.u32 <= 4096;
	ctx.r11.s64 = 4096 - ctx.r7.s64;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83299918
	if (cr6.lt) goto loc_83299918;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832998fc
	if (cr6.eq) goto loc_832998FC;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r10,14128
	ctx.r9.s64 = ctx.r10.s64 + 14128;
loc_832998D8:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83299918
	if (cr6.lt) goto loc_83299918;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x832998d8
	if (cr6.lt) goto loc_832998D8;
loc_832998FC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83299974
	if (cr6.eq) goto loc_83299974;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bge cr6,0x83299934
	if (!cr6.lt) goto loc_83299934;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8329993c
	goto loc_8329993C;
loc_83299918:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,8256
	ctx.r4.u64 = ctx.r4.u64 | 8256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329992C;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83299934:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_8329993C:
	// bl 0x8329df98
	ctx.lr = 0x83299940;
	sub_8329DF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299964
	if (!cr6.eq) goto loc_83299964;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8323
	ctx.r4.u64 = ctx.r4.u64 | 8323;
	// bl 0x8329a350
	ctx.lr = 0x8329995C;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83299964:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83299974;
	sub_83293EC8(ctx, base);
loc_83299974:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,27(r28)
	PPC_STORE_U8(ctx.r28.u32 + 27, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

