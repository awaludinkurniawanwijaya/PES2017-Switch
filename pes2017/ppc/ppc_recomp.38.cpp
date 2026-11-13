#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825539B8"))) PPC_WEAK_FUNC(sub_825539B8);
PPC_FUNC_IMPL(__imp__sub_825539B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ceeb0
	ctx.lr = 0x825539D8;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825539f4
	if (!cr6.eq) goto loc_825539F4;
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
loc_825539F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825534e8
	ctx.lr = 0x82553A00;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553a30
	if (cr6.eq) goto loc_82553A30;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553a38
	goto loc_82553A38;
loc_82553A30:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553A38;
	sub_82549BD8(ctx, base);
loc_82553A38:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82553A54"))) PPC_WEAK_FUNC(sub_82553A54);
PPC_FUNC_IMPL(__imp__sub_82553A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553A58"))) PPC_WEAK_FUNC(sub_82553A58);
PPC_FUNC_IMPL(__imp__sub_82553A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82553A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831cf160
	ctx.lr = 0x82553A70;
	sub_831CF160(ctx, base);
	// lbz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// li r29,46
	ctx.r29.s64 = 46;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82553a90
	if (cr6.eq) goto loc_82553A90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// b 0x82553a94
	goto loc_82553A94;
loc_82553A90:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82553A94:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stb r9,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r9.u8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82553ad4
	if (cr6.eq) goto loc_82553AD4;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82553AB8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bne cr6,0x82553ad0
	if (!cr6.eq) goto loc_82553AD0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82553AD0:
	// bdnz 0x82553ab8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82553AB8;
loc_82553AD4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82540d18
	ctx.lr = 0x82553AE4;
	sub_82540D18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82553b90
	if (!cr6.eq) goto loc_82553B90;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82553b28
	if (cr6.eq) goto loc_82553B28;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82553B0C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82553b24
	if (!cr6.eq) goto loc_82553B24;
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
loc_82553B24:
	// bdnz 0x82553b0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82553B0C;
loc_82553B28:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82553B3C;
	sub_82541168(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,15492
	ctx.r30.s64 = ctx.r11.s64 + 15492;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x82541118
	ctx.lr = 0x82553B5C;
	sub_82541118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553B6C;
	sub_825534E8(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x82553B84;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x82553B90;
	sub_82547B68(ctx, base);
loc_82553B90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553B98"))) PPC_WEAK_FUNC(sub_82553B98);
PPC_FUNC_IMPL(__imp__sub_82553B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82553BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_82553BAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825534e8
	ctx.lr = 0x82553BB8;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553be8
	if (cr6.eq) goto loc_82553BE8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553bf0
	goto loc_82553BF0;
loc_82553BE8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553BF0;
	sub_82549BD8(ctx, base);
loc_82553BF0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x831d34e0
	ctx.lr = 0x82553BFC;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82553bac
	if (!cr6.eq) goto loc_82553BAC;
	// cmpwi cr6,r30,46
	cr6.compare<int32_t>(ctx.r30.s32, 46, xer);
	// beq cr6,0x82553bac
	if (cr6.eq) goto loc_82553BAC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,15560
	ctx.r30.s64 = ctx.r11.s64 + 15560;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// bl 0x825539b8
	ctx.lr = 0x82553C2C;
	sub_825539B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82553c40
	if (cr6.eq) goto loc_82553C40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825539b8
	ctx.lr = 0x82553C40;
	sub_825539B8(ctx, base);
loc_82553C40:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831d34e0
	ctx.lr = 0x82553C48;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82553c68
	if (!cr6.eq) goto loc_82553C68;
	// cmpwi cr6,r30,95
	cr6.compare<int32_t>(ctx.r30.s32, 95, xer);
	// bne cr6,0x82553cb8
	if (!cr6.eq) goto loc_82553CB8;
loc_82553C68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553C74;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553ca8
	if (cr6.eq) goto loc_82553CA8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82553c40
	goto loc_82553C40;
loc_82553CA8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553CB0;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82553c40
	goto loc_82553C40;
loc_82553CB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553CC4;
	sub_825534E8(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x82553cf8
	if (cr6.eq) goto loc_82553CF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82553CE0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,46
	cr6.compare<uint32_t>(ctx.r8.u32, 46, xer);
	// bne cr6,0x82553cf4
	if (!cr6.eq) goto loc_82553CF4;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82553CF4:
	// bdnz 0x82553ce0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82553CE0;
loc_82553CF8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82540d18
	ctx.lr = 0x82553D08;
	sub_82540D18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82553d1c
	if (!cr6.eq) goto loc_82553D1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553a58
	ctx.lr = 0x82553D1C;
	sub_82553A58(ctx, base);
loc_82553D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553D24"))) PPC_WEAK_FUNC(sub_82553D24);
PPC_FUNC_IMPL(__imp__sub_82553D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553D28"))) PPC_WEAK_FUNC(sub_82553D28);
PPC_FUNC_IMPL(__imp__sub_82553D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82553D30;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553D48;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553d78
	if (cr6.eq) goto loc_82553D78;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553d80
	goto loc_82553D80;
loc_82553D78:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553D80;
	sub_82549BD8(ctx, base);
loc_82553D80:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// bne cr6,0x82553e94
	if (!cr6.eq) goto loc_82553E94;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// ori r25,r10,65534
	ctx.r25.u64 = ctx.r10.u64 | 65534;
	// li r27,-3
	ctx.r27.s64 = -3;
	// addi r26,r11,15480
	ctx.r26.s64 = ctx.r11.s64 + 15480;
loc_82553DA0:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82553e30
	if (!cr6.gt) goto loc_82553E30;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82553dfc
	if (cr6.lt) goto loc_82553DFC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82553DD8;
	sub_82541168(ctx, base);
	// addi r7,r26,-44
	ctx.r7.s64 = ctx.r26.s64 + -44;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82553DF0;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x82553DFC;
	sub_82547B68(ctx, base);
loc_82553DFC:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bgt cr6,0x82553e24
	if (cr6.gt) goto loc_82553E24;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82553380
	ctx.lr = 0x82553E20;
	sub_82553380(ctx, base);
	// b 0x82553e28
	goto loc_82553E28;
loc_82553E24:
	// bl 0x82553350
	ctx.lr = 0x82553E28;
	sub_82553350(ctx, base);
loc_82553E28:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82553E30:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// beq cr6,0x82553e78
	if (cr6.eq) goto loc_82553E78;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82553e80
	goto loc_82553E80;
loc_82553E78:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553E80;
	sub_82549BD8(ctx, base);
loc_82553E80:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// beq cr6,0x82553da0
	if (cr6.eq) goto loc_82553DA0;
loc_82553E94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, xer);
	// beq cr6,0x82553ea8
	if (cr6.eq) goto loc_82553EA8;
	// subfic r3,r24,-1
	xer.ca = ctx.r24.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r24.s64;
loc_82553EA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553EB0"))) PPC_WEAK_FUNC(sub_82553EB0);
PPC_FUNC_IMPL(__imp__sub_82553EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82553EB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553ED0;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553f00
	if (cr6.eq) goto loc_82553F00;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553f08
	goto loc_82553F08;
loc_82553F00:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553F08;
	sub_82549BD8(ctx, base);
loc_82553F08:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82553f1c
	if (cr6.eq) goto loc_82553F1C;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x82553f24
	if (!cr6.eq) goto loc_82553F24;
loc_82553F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825537f0
	ctx.lr = 0x82553F24;
	sub_825537F0(ctx, base);
loc_82553F24:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,15476
	ctx.r29.s64 = ctx.r11.s64 + 15476;
	// addi r28,r10,1536
	ctx.r28.s64 = ctx.r10.s64 + 1536;
loc_82553F38:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgt cr6,0x82553fe0
	if (cr6.gt) goto loc_82553FE0;
	// beq cr6,0x82553f58
	if (cr6.eq) goto loc_82553F58;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82553f80
	if (cr6.eq) goto loc_82553F80;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bne cr6,0x82553ff0
	if (!cr6.eq) goto loc_82553FF0;
loc_82553F58:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553F64;
	sub_825534E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825537f0
	ctx.lr = 0x82553F6C;
	sub_825537F0(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82553f38
	if (!cr6.eq) goto loc_82553F38;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// b 0x82553f38
	goto loc_82553F38;
loc_82553F80:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// addi r30,r29,88
	ctx.r30.s64 = ctx.r29.s64 + 88;
	// bne cr6,0x82553f90
	if (!cr6.eq) goto loc_82553F90;
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
loc_82553F90:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82553FA4;
	sub_82541168(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82553FBC;
	sub_82541118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r6,120(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82553FD0;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x82553FDC;
	sub_82547B68(ctx, base);
	// b 0x82553f38
	goto loc_82553F38;
loc_82553FE0:
	// cmpwi cr6,r4,91
	cr6.compare<int32_t>(ctx.r4.s32, 91, xer);
	// beq cr6,0x82554090
	if (cr6.eq) goto loc_82554090;
	// cmpwi cr6,r4,93
	cr6.compare<int32_t>(ctx.r4.s32, 93, xer);
	// beq cr6,0x82554044
	if (cr6.eq) goto loc_82554044;
loc_82553FF0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82554000
	if (cr6.eq) goto loc_82554000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554000;
	sub_825534E8(ctx, base);
loc_82554000:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554034
	if (cr6.eq) goto loc_82554034;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82553f38
	goto loc_82553F38;
loc_82554034:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x8255403C;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82553f38
	goto loc_82553F38;
loc_82554044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553d28
	ctx.lr = 0x8255404C;
	sub_82553D28(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// bne cr6,0x82553f38
	if (!cr6.eq) goto loc_82553F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825534e8
	ctx.lr = 0x82554060;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255416c
	if (cr6.eq) goto loc_8255416C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554174
	goto loc_82554174;
loc_82554090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553d28
	ctx.lr = 0x82554098;
	sub_82553D28(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, xer);
	// bne cr6,0x82553f38
	if (!cr6.eq) goto loc_82553F38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825534e8
	ctx.lr = 0x825540AC;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825540dc
	if (cr6.eq) goto loc_825540DC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825540e4
	goto loc_825540E4;
loc_825540DC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825540E4;
	sub_82549BD8(ctx, base);
loc_825540E4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x82553f38
	if (!cr6.eq) goto loc_82553F38;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82554104;
	sub_82541168(ctx, base);
	// addi r7,r29,136
	ctx.r7.s64 = ctx.r29.s64 + 136;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x8255411C;
	sub_82541118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831d34e0
	ctx.lr = 0x82554124;
	sub_831D34E0(ctx, base);
	// lhz r11,182(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 182);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,91
	ctx.r5.s64 = 91;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82554144
	if (!cr6.eq) goto loc_82554144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82554144:
	// bl 0x82541118
	ctx.lr = 0x82554148;
	sub_82541118(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82541118
	ctx.lr = 0x8255415C;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x82554168;
	sub_82547B68(ctx, base);
	// b 0x82553f38
	goto loc_82553F38;
loc_8255416C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554174;
	sub_82549BD8(ctx, base);
loc_82554174:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x825541ac
	if (cr6.eq) goto loc_825541AC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82553760
	ctx.lr = 0x825541A8;
	sub_82553760(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
loc_825541AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825541B4"))) PPC_WEAK_FUNC(sub_825541B4);
PPC_FUNC_IMPL(__imp__sub_825541B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825541B8"))) PPC_WEAK_FUNC(sub_825541B8);
PPC_FUNC_IMPL(__imp__sub_825541B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825541C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x825534e8
	ctx.lr = 0x825541D8;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554208
	if (cr6.eq) goto loc_82554208;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554210
	goto loc_82554210;
loc_82554208:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554210;
	sub_82549BD8(ctx, base);
loc_82554210:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r25
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, xer);
	// beq cr6,0x825545e0
	if (cr6.eq) goto loc_825545E0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r11,15492
	ctx.r27.s64 = ctx.r11.s64 + 15492;
	// addi r26,r10,1536
	ctx.r26.s64 = ctx.r10.s64 + 1536;
loc_8255422C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgt cr6,0x82554300
	if (cr6.gt) goto loc_82554300;
	// beq cr6,0x8255424c
	if (cr6.eq) goto loc_8255424C;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x825542b0
	if (cr6.eq) goto loc_825542B0;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bne cr6,0x82554308
	if (!cr6.eq) goto loc_82554308;
loc_8255424C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82554260;
	sub_82541168(ctx, base);
	// addi r7,r27,176
	ctx.r7.s64 = ctx.r27.s64 + 176;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82554278;
	sub_82541118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554288;
	sub_825534E8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x825542A0;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x825542AC;
	sub_82547B68(ctx, base);
	// b 0x825545d4
	goto loc_825545D4;
loc_825542B0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x825542C4;
	sub_82541168(ctx, base);
	// addi r7,r27,156
	ctx.r7.s64 = ctx.r27.s64 + 156;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x825542DC;
	sub_82541118(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,120(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x825542F0;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x825542FC;
	sub_82547B68(ctx, base);
	// b 0x825545d4
	goto loc_825545D4;
loc_82554300:
	// cmpwi cr6,r4,92
	cr6.compare<int32_t>(ctx.r4.s32, 92, xer);
	// beq cr6,0x82554344
	if (cr6.eq) goto loc_82554344;
loc_82554308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554310;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825544d0
	if (cr6.eq) goto loc_825544D0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825545d4
	goto loc_825545D4;
loc_82554344:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554374
	if (cr6.eq) goto loc_82554374;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8255437c
	goto loc_8255437C;
loc_82554374:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x8255437C;
	sub_82549BD8(ctx, base);
loc_8255437C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,102
	cr6.compare<int32_t>(ctx.r3.s32, 102, xer);
	// bgt cr6,0x825543e8
	if (cr6.gt) goto loc_825543E8;
	// beq cr6,0x825543e0
	if (cr6.eq) goto loc_825543E0;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bgt cr6,0x825543c0
	if (cr6.gt) goto loc_825543C0;
	// beq cr6,0x825543a8
	if (cr6.eq) goto loc_825543A8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825545d4
	if (cr6.eq) goto loc_825545D4;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x82554474
	if (!cr6.eq) goto loc_82554474;
loc_825543A8:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x825543B4;
	sub_825534E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825537f0
	ctx.lr = 0x825543BC;
	sub_825537F0(ctx, base);
	// b 0x825545d4
	goto loc_825545D4;
loc_825543C0:
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// beq cr6,0x825543d8
	if (cr6.eq) goto loc_825543D8;
	// cmpwi cr6,r3,98
	cr6.compare<int32_t>(ctx.r3.s32, 98, xer);
	// bne cr6,0x82554474
	if (!cr6.eq) goto loc_82554474;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82554438
	goto loc_82554438;
loc_825543D8:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82554438
	goto loc_82554438;
loc_825543E0:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82554438
	goto loc_82554438;
loc_825543E8:
	// addi r11,r3,-110
	ctx.r11.s64 = ctx.r3.s64 + -110;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82554474
	if (cr6.gt) goto loc_82554474;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82554474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554474;
	// bdzf 4*cr6+eq,0x82554474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554474;
	// bdzf 4*cr6+eq,0x82554474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554474;
	// bdzf 4*cr6+eq,0x82554424
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554424;
	// bdzf 4*cr6+eq,0x82554474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554474;
	// bdzf 4*cr6+eq,0x8255442c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255442C;
	// bdzf 4*cr6+eq,0x82554474
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82554474;
	// bne cr6,0x82554434
	if (!cr6.eq) goto loc_82554434;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82554438
	goto loc_82554438;
loc_82554424:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82554438
	goto loc_82554438;
loc_8255442C:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82554438
	goto loc_82554438;
loc_82554434:
	// li r4,11
	ctx.r4.s64 = 11;
loc_82554438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554440;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825544d0
	if (cr6.eq) goto loc_825544D0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825545d4
	goto loc_825545D4;
loc_82554474:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831d34e0
	ctx.lr = 0x8255447C;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825544e0
	if (!cr6.eq) goto loc_825544E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x8255449C;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825544d0
	if (cr6.eq) goto loc_825544D0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825545d4
	goto loc_825545D4;
loc_825544D0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825544D8;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x825545d4
	goto loc_825545D4;
loc_825544E0:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825544E8:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-48
	ctx.r29.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8255452c
	if (cr6.eq) goto loc_8255452C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554534
	goto loc_82554534;
loc_8255452C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554534;
	sub_82549BD8(ctx, base);
loc_82554534:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bge cr6,0x82554560
	if (!cr6.lt) goto loc_82554560;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x831d34e0
	ctx.lr = 0x8255454C;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825544e8
	if (!cr6.eq) goto loc_825544E8;
loc_82554560:
	// cmpwi cr6,r29,255
	cr6.compare<int32_t>(ctx.r29.s32, 255, xer);
	// ble cr6,0x825545c8
	if (!cr6.gt) goto loc_825545C8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x8255457C;
	sub_82541168(ctx, base);
	// addi r7,r27,196
	ctx.r7.s64 = ctx.r27.s64 + 196;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82554594;
	sub_82541118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x825545A4;
	sub_825534E8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x825545BC;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x825545C8;
	sub_82547B68(ctx, base);
loc_825545C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x825545D4;
	sub_825534E8(ctx, base);
loc_825545D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x8255422c
	if (!cr6.eq) goto loc_8255422C;
loc_825545E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825534e8
	ctx.lr = 0x825545EC;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255461c
	if (cr6.eq) goto loc_8255461C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554624
	goto loc_82554624;
loc_8255461C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554624;
	sub_82549BD8(ctx, base);
loc_82554624:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82553760
	ctx.lr = 0x82554644;
	sub_82553760(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554650"))) PPC_WEAK_FUNC(sub_82554650);
PPC_FUNC_IMPL(__imp__sub_82554650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82554658;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82554668:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82554670:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,46
	cr6.compare<int32_t>(ctx.r4.s32, 46, xer);
	// bgt cr6,0x825547e0
	if (cr6.gt) goto loc_825547E0;
	// beq cr6,0x825548a0
	if (cr6.eq) goto loc_825548A0;
	// cmpwi cr6,r4,34
	cr6.compare<int32_t>(ctx.r4.s32, 34, xer);
	// bgt cr6,0x825546b0
	if (cr6.gt) goto loc_825546B0;
	// beq cr6,0x82554888
	if (cr6.eq) goto loc_82554888;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82554870
	if (cr6.eq) goto loc_82554870;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// beq cr6,0x825546a4
	if (cr6.eq) goto loc_825546A4;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bne cr6,0x82554810
	if (!cr6.eq) goto loc_82554810;
loc_825546A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825537f0
	ctx.lr = 0x825546AC;
	sub_825537F0(ctx, base);
	// b 0x82554670
	goto loc_82554670;
loc_825546B0:
	// cmpwi cr6,r4,39
	cr6.compare<int32_t>(ctx.r4.s32, 39, xer);
	// beq cr6,0x82554888
	if (cr6.eq) goto loc_82554888;
	// cmpwi cr6,r4,45
	cr6.compare<int32_t>(ctx.r4.s32, 45, xer);
	// bne cr6,0x82554810
	if (!cr6.eq) goto loc_82554810;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825546f0
	if (cr6.eq) goto loc_825546F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825546f8
	goto loc_825546F8;
loc_825546F0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825546F8;
	sub_82549BD8(ctx, base);
loc_825546F8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// bne cr6,0x8255487c
	if (!cr6.eq) goto loc_8255487C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554734
	if (cr6.eq) goto loc_82554734;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8255473c
	goto loc_8255473C;
loc_82554734:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x8255473C;
	sub_82549BD8(ctx, base);
loc_8255473C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,91
	cr6.compare<int32_t>(ctx.r3.s32, 91, xer);
	// bne cr6,0x82554774
	if (!cr6.eq) goto loc_82554774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553d28
	ctx.lr = 0x82554750;
	sub_82553D28(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// blt cr6,0x82554774
	if (cr6.lt) goto loc_82554774;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553eb0
	ctx.lr = 0x82554770;
	sub_82553EB0(ctx, base);
	// b 0x82554668
	goto loc_82554668;
loc_82554774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82554670
	if (cr6.eq) goto loc_82554670;
loc_82554780:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82554670
	if (cr6.eq) goto loc_82554670;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82554670
	if (cr6.eq) goto loc_82554670;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825547c4
	if (cr6.eq) goto loc_825547C4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825547cc
	goto loc_825547CC;
loc_825547C4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825547CC;
	sub_82549BD8(ctx, base);
loc_825547CC:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82554780
	if (!cr6.eq) goto loc_82554780;
	// b 0x82554670
	goto loc_82554670;
loc_825547E0:
	// cmpwi cr6,r4,62
	cr6.compare<int32_t>(ctx.r4.s32, 62, xer);
	// bgt cr6,0x82554800
	if (cr6.gt) goto loc_82554800;
	// beq cr6,0x82554a08
	if (cr6.eq) goto loc_82554A08;
	// cmpwi cr6,r4,60
	cr6.compare<int32_t>(ctx.r4.s32, 60, xer);
	// beq cr6,0x82554964
	if (cr6.eq) goto loc_82554964;
	// cmpwi cr6,r4,61
	cr6.compare<int32_t>(ctx.r4.s32, 61, xer);
	// beq cr6,0x82554d3c
	if (cr6.eq) goto loc_82554D3C;
	// b 0x82554810
	goto loc_82554810;
loc_82554800:
	// cmpwi cr6,r4,91
	cr6.compare<int32_t>(ctx.r4.s32, 91, xer);
	// beq cr6,0x82554c94
	if (cr6.eq) goto loc_82554C94;
	// cmpwi cr6,r4,126
	cr6.compare<int32_t>(ctx.r4.s32, 126, xer);
	// beq cr6,0x82554bf0
	if (cr6.eq) goto loc_82554BF0;
loc_82554810:
	// bl 0x831d34e0
	ctx.lr = 0x82554814;
	sub_831D34E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82554aac
	if (cr6.eq) goto loc_82554AAC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554860
	if (cr6.eq) goto loc_82554860;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82554670
	goto loc_82554670;
loc_82554860:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554868;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82554670
	goto loc_82554670;
loc_82554870:
	// li r3,287
	ctx.r3.s64 = 287;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255487C:
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554888:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825541b8
	ctx.lr = 0x82554894;
	sub_825541B8(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825548A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x825548A8;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825548d8
	if (cr6.eq) goto loc_825548D8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x825548e0
	goto loc_825548E0;
loc_825548D8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825548E0;
	sub_82549BD8(ctx, base);
loc_825548E0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,15492
	ctx.r30.s64 = ctx.r11.s64 + 15492;
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// bl 0x825539b8
	ctx.lr = 0x825548F8;
	sub_825539B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82554924
	if (cr6.eq) goto loc_82554924;
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825539b8
	ctx.lr = 0x8255490C;
	sub_825539B8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r11,278
	ctx.r3.s64 = ctx.r11.s64 + 278;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554924:
	// bl 0x831d34e0
	ctx.lr = 0x82554928;
	sub_831D34E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255494c
	if (!cr6.eq) goto loc_8255494C;
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255494C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553b98
	ctx.lr = 0x82554958;
	sub_82553B98(ctx, base);
	// li r3,284
	ctx.r3.s64 = 284;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554964:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554994
	if (cr6.eq) goto loc_82554994;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8255499c
	goto loc_8255499C;
loc_82554994:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x8255499C;
	sub_82549BD8(ctx, base);
loc_8255499C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// beq cr6,0x825549b4
	if (cr6.eq) goto loc_825549B4;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825549B4:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825549f0
	if (cr6.eq) goto loc_825549F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825549F0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825549F8;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554A08:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554a38
	if (cr6.eq) goto loc_82554A38;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554a40
	goto loc_82554A40;
loc_82554A38:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554A40;
	sub_82549BD8(ctx, base);
loc_82554A40:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// beq cr6,0x82554a58
	if (cr6.eq) goto loc_82554A58;
	// li r3,62
	ctx.r3.s64 = 62;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554A58:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554a94
	if (cr6.eq) goto loc_82554A94;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554A94:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554A9C;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554AAC:
	// bl 0x831d34e0
	ctx.lr = 0x82554AB0;
	sub_831D34E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255494c
	if (!cr6.eq) goto loc_8255494C;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831d34e0
	ctx.lr = 0x82554AD0;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,30,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82554b44
	if (!cr6.eq) goto loc_82554B44;
	// cmpwi cr6,r30,95
	cr6.compare<int32_t>(ctx.r30.s32, 95, xer);
	// beq cr6,0x82554b44
	if (cr6.eq) goto loc_82554B44;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554b2c
	if (cr6.eq) goto loc_82554B2C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554B2C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554B34;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554B44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554B50;
	sub_825534E8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554b80
	if (cr6.eq) goto loc_82554B80;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554b88
	goto loc_82554B88;
loc_82554B80:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554B88;
	sub_82549BD8(ctx, base);
loc_82554B88:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x831d34e0
	ctx.lr = 0x82554B94;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82554b44
	if (!cr6.eq) goto loc_82554B44;
	// cmpwi cr6,r30,95
	cr6.compare<int32_t>(ctx.r30.s32, 95, xer);
	// beq cr6,0x82554b44
	if (cr6.eq) goto loc_82554B44;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82553760
	ctx.lr = 0x82554BC8;
	sub_82553760(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82554be0
	if (cr6.eq) goto loc_82554BE0;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554BE0:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,285
	ctx.r3.s64 = 285;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554BF0:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554c20
	if (cr6.eq) goto loc_82554C20;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554c28
	goto loc_82554C28;
loc_82554C20:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554C28;
	sub_82549BD8(ctx, base);
loc_82554C28:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// beq cr6,0x82554c40
	if (cr6.eq) goto loc_82554C40;
	// li r3,126
	ctx.r3.s64 = 126;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554C40:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554c7c
	if (cr6.eq) goto loc_82554C7C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554C7C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554C84;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554C94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553d28
	ctx.lr = 0x82554C9C;
	sub_82553D28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82554cc0
	if (cr6.lt) goto loc_82554CC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553eb0
	ctx.lr = 0x82554CB4;
	sub_82553EB0(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554CC0:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82554cd4
	if (!cr6.eq) goto loc_82554CD4;
	// li r3,91
	ctx.r3.s64 = 91;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554CD4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x82554CE8;
	sub_82541168(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,15492
	ctx.r30.s64 = ctx.r11.s64 + 15492;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r7,r30,224
	ctx.r7.s64 = ctx.r30.s64 + 224;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x82541118
	ctx.lr = 0x82554D08;
	sub_82541118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82554D18;
	sub_825534E8(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x82554D30;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x82554D3C;
	sub_82547B68(ctx, base);
loc_82554D3C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554d6c
	if (cr6.eq) goto loc_82554D6C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82554d74
	goto loc_82554D74;
loc_82554D6C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554D74;
	sub_82549BD8(ctx, base);
loc_82554D74:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// beq cr6,0x82554d8c
	if (cr6.eq) goto loc_82554D8C;
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554D8C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82554dc8
	if (cr6.eq) goto loc_82554DC8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82554DC8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82554DD0;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554DE0"))) PPC_WEAK_FUNC(sub_82554DE0);
PPC_FUNC_IMPL(__imp__sub_82554DE0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,287
	cr6.compare<int32_t>(ctx.r10.s32, 287, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82554e38
	if (cr6.eq) goto loc_82554E38;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r10,287
	ctx.r10.s64 = 287;
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
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
loc_82554E38:
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554650
	ctx.lr = 0x82554E44;
	sub_82554650(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82554E5C"))) PPC_WEAK_FUNC(sub_82554E5C);
PPC_FUNC_IMPL(__imp__sub_82554E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554E60"))) PPC_WEAK_FUNC(sub_82554E60);
PPC_FUNC_IMPL(__imp__sub_82554E60) {
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
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82554650
	ctx.lr = 0x82554E7C;
	sub_82554650(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82554E94"))) PPC_WEAK_FUNC(sub_82554E94);
PPC_FUNC_IMPL(__imp__sub_82554E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554E98"))) PPC_WEAK_FUNC(sub_82554E98);
PPC_FUNC_IMPL(__imp__sub_82554E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r9,15756
	ctx.r4.s64 = ctx.r9.s64 + 15756;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8255b5d8
	ctx.lr = 0x82554EE4;
	sub_8255B5D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82554f44
	if (!cr6.eq) goto loc_82554F44;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255b728
	ctx.lr = 0x82554EF8;
	sub_8255B728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82554f38
	if (cr6.eq) goto loc_82554F38;
	// bl 0x8255cfb8
	ctx.lr = 0x82554F0C;
	sub_8255CFB8(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x82554f30
	if (cr6.eq) goto loc_82554F30;
	// cmpwi cr6,r30,-5
	cr6.compare<int32_t>(ctx.r30.s32, -5, xer);
	// bne cr6,0x82554f28
	if (!cr6.eq) goto loc_82554F28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82554f30
	if (cr6.eq) goto loc_82554F30;
loc_82554F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82554f44
	goto loc_82554F44;
loc_82554F30:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x82554f44
	goto loc_82554F44;
loc_82554F38:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8255cfb8
	ctx.lr = 0x82554F44;
	sub_8255CFB8(ctx, base);
loc_82554F44:
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

__attribute__((alias("__imp__sub_82554F5C"))) PPC_WEAK_FUNC(sub_82554F5C);
PPC_FUNC_IMPL(__imp__sub_82554F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554F60"))) PPC_WEAK_FUNC(sub_82554F60);
PPC_FUNC_IMPL(__imp__sub_82554F60) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82554F68;
	__savegprlr_25(ctx, base);
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r9,r9,8,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r31,r11,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rldicr r9,r9,0,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rotlwi r30,r8,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r7,r7,8,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFF;
	// rldicl r29,r11,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r31,r10,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rldicr r7,r7,0,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// rlwinm r30,r30,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rlwinm r28,r11,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rlwimi r27,r29,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r9,r9,16,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r29,r11,32,40
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFF;
	// rldicl r30,r30,8,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 8) & 0xFFFFFFFFFF;
	// rlwimi r25,r31,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 | ctx.r28.u64;
	// rldicl r31,r10,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rlwinm r28,r8,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF0000;
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicr r30,r30,0,55
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicr r29,r29,0,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r26,r10,0,0,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r27,r27,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// rldicr r31,r30,16,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r30,r8,0,0,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rldicl r29,r8,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r8,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r25,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r26,r4,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rldicl r8,r8,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFF;
	// rldicl r10,r10,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r26,r4,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// rlwimi r27,r29,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r31,r26,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r5,r9,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r30,r27,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r7,r4,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r31,8,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFFFF;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rldicl r8,r8,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r30,r4,0,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rldicr r31,r31,0,55
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r29,r7,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r5,r4,0,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldicl r31,r4,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r4,r4,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r5,r29,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rldicl r4,r4,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r7,r9,43,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rldicr r9,r11,20,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555110"))) PPC_WEAK_FUNC(sub_82555110);
PPC_FUNC_IMPL(__imp__sub_82555110) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82555118;
	__savegprlr_25(ctx, base);
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r9,r9,8,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r31,r11,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rldicr r9,r9,0,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rotlwi r30,r8,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rldicl r7,r7,8,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFF;
	// rldicl r29,r11,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r31,r10,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rldicr r7,r7,0,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// rlwinm r30,r30,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rlwinm r28,r11,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rlwimi r27,r29,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r9,r9,16,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r29,r11,32,40
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFF;
	// rldicl r30,r30,8,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 8) & 0xFFFFFFFFFF;
	// rlwimi r25,r31,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 | ctx.r28.u64;
	// rldicl r31,r10,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rlwinm r28,r8,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF0000;
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicr r30,r30,0,55
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicr r29,r29,0,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r26,r10,0,0,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r27,r27,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | ctx.r27.u64;
	// rldicr r31,r30,16,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r30,r8,0,0,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rldicl r29,r8,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r8,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r25,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r26,r4,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rldicl r8,r8,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFF;
	// rldicl r10,r10,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r26,r4,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// rlwimi r27,r29,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r31,r26,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r5,r9,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r30,r27,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r7,r4,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r31,8,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFFFF;
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rldicl r8,r8,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r30,r4,0,8,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rldicr r31,r31,0,55
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r29,r7,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r5,r4,0,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldicl r31,r4,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r4,r4,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r5,r29,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 | ctx.r4.u64;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rldicl r4,r4,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r7,r9,43,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rldicr r9,r11,20,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825552C0"))) PPC_WEAK_FUNC(sub_825552C0);
PPC_FUNC_IMPL(__imp__sub_825552C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x825552C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgt cr6,0x82555798
	if (cr6.gt) goto loc_82555798;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bgt cr6,0x82555558
	if (cr6.gt) goto loc_82555558;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// ble cr6,0x8255540c
	if (!cr6.gt) goto loc_8255540C;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r9,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwinm r4,r8,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rldicl r8,r6,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r6,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r31,r6,0,0,7
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rldicl r3,r6,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicr r8,r10,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rldicl r8,r6,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldimi r6,r4,8,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r6.u64 & 0xFFFFFF00000000FF);
	// rldicr r4,r10,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r10,r30,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rldicl r4,r8,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r3,r7,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r8,r9,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// or r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicl r3,r9,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// subfic r6,r27,64
	xer.ca = ctx.r27.u32 <= 64;
	ctx.r6.s64 = 64 - ctx.r27.s64;
	// rlwimi r7,r5,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 | ctx.r9.u64;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lis r8,-5320
	ctx.r8.s64 = -348651520;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r6,r27
	ctx.r6.s64 = ctx.r27.s32;
	// ori r31,r8,11625
	ctx.r31.u64 = ctx.r8.u64 | 11625;
	// lis r5,-25121
	ctx.r5.s64 = -1646329856;
	// srd r8,r11,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// or r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rldicl r3,r3,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// sld r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// ori r5,r5,59912
	ctx.r5.u64 = ctx.r5.u64 | 59912;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rldimi r31,r5,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// mulld r4,r5,r31
	ctx.r4.s64 = ctx.r5.s64 * ctx.r31.s64;
	// rldicl r3,r4,17,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 17) & 0x1FFFF;
	// xor r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// mulld r8,r9,r31
	ctx.r8.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r7,r8,17,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// mulld r5,r6,r31
	ctx.r5.s64 = ctx.r6.s64 * ctx.r31.s64;
	// xor r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_8255540C:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x825554ac
	if (cr6.lt) goto loc_825554AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lis r9,-5320
	ctx.r9.s64 = -348651520;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r7,r11,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rldicl r6,r11,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r3,r8,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r4,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r6,r5,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r7,r5,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// lis r4,-25121
	ctx.r4.s64 = -1646329856;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwimi r8,r5,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// ori r6,r4,59912
	ctx.r6.u64 = ctx.r4.u64 | 59912;
	// rldicr r10,r3,3,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// rlwinm r5,r8,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r4,r7,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// ori r31,r9,11625
	ctx.r31.u64 = ctx.r9.u64 | 11625;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldimi r31,r6,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulld r6,r7,r31
	ctx.r6.s64 = ctx.r7.s64 * ctx.r31.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r31
	ctx.r3.s64 = ctx.r4.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825554AC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8255553c
	if (cr6.eq) goto loc_8255553C;
	// rlwinm r10,r27,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r9,r29,r27
	ctx.r9.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lis r8,12176
	ctx.r8.s64 = 797966336;
	// lis r7,-25887
	ctx.r7.s64 = -1696530432;
	// lis r6,20638
	ctx.r6.s64 = 1352531968;
	// lbzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// lis r4,-14007
	ctx.r4.s64 = -917962752;
	// lbz r3,-1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// ori r7,r7,27195
	ctx.r7.u64 = ctx.r7.u64 | 27195;
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rotlwi r9,r3,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// ori r8,r8,16463
	ctx.r8.u64 = ctx.r8.u64 | 16463;
	// ori r4,r4,55239
	ctx.r4.u64 = ctx.r4.u64 | 55239;
	// ori r6,r6,25943
	ctx.r6.u64 = ctx.r6.u64 | 25943;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulld r4,r10,r8
	ctx.r4.s64 = ctx.r10.s64 * ctx.r8.s64;
	// mulld r3,r9,r6
	ctx.r3.s64 = ctx.r9.s64 * ctx.r6.s64;
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lis r7,12176
	ctx.r7.s64 = 797966336;
	// lis r5,-25887
	ctx.r5.s64 = -1696530432;
	// ori r10,r7,16463
	ctx.r10.u64 = ctx.r7.u64 | 16463;
	// ori r9,r5,27195
	ctx.r9.u64 = ctx.r5.u64 | 27195;
	// rldicl r8,r11,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// mulld r3,r7,r10
	ctx.r3.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_8255553C:
	// lis r11,12176
	ctx.r11.s64 = 797966336;
	// lis r10,-25887
	ctx.r10.s64 = -1696530432;
	// ori r3,r11,16463
	ctx.r3.u64 = ctx.r11.u64 | 16463;
	// ori r9,r10,27195
	ctx.r9.u64 = ctx.r10.u64 | 27195;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82555558:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lis r8,-16744
	ctx.r8.s64 = -1097334784;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// ld r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r11,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// rldimi r7,r4,8,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r7.u64 & 0xFFFFFF00000000FF);
	// rldicl r11,r11,8,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r4,r10,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// rldicl r6,r6,8,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFF;
	// rldicr r11,r11,0,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r31,r5,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rldicr r6,r6,0,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r4,r9,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rldicl r30,r10,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rldicr r4,r11,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// rlwinm r11,r5,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// rldicl r29,r5,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r9,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwimi r26,r30,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r28,r10,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldicl r30,r10,32,40
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// rldicl r11,r5,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFF;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rldicr r30,r30,0,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// rlwimi r23,r31,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r25,r29,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r5,r5,16,48
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFF;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r31,r9,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// lis r29,12176
	ctx.r29.s64 = 797966336;
	// rlwinm r28,r9,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// rldicr r6,r6,16,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// lis r24,-19310
	ctx.r24.s64 = -1265500160;
	// lis r22,-25887
	ctx.r22.s64 = -1696530432;
	// rotlwi r21,r3,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r30,r25,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// ori r5,r29,16463
	ctx.r5.u64 = ctx.r29.u64 | 16463;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// ori r8,r8,62067
	ctx.r8.u64 = ctx.r8.u64 | 62067;
	// ori r24,r24,46703
	ctx.r24.u64 = ctx.r24.u64 | 46703;
	// ori r29,r22,27195
	ctx.r29.u64 = ctx.r22.u64 | 27195;
	// rlwimi r21,r3,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// rldicl r10,r10,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 | ctx.r9.u64;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// rldimi r8,r24,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r23,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldimi r5,r29,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// rldicl r31,r3,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rlwinm r30,r21,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 | ctx.r28.u64;
	// rldicl r6,r9,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldimi r9,r30,8,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r30.u64, 8) & 0xFFFFFFFF00) | (ctx.r9.u64 & 0xFFFFFF00000000FF);
	// rlwinm r11,r3,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// lis r12,-14007
	ctx.r12.s64 = -917962752;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r12,r12,55239
	ctx.r12.u64 = ctx.r12.u64 | 55239;
	// rlwimi r30,r31,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r3,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF000000;
	// rldicr r11,r11,16,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r31,r3,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// mulld r11,r10,r8
	ctx.r11.s64 = ctx.r10.s64 * ctx.r8.s64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r3,r3,16,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// oris r12,r12,20638
	ctx.r12.u64 = ctx.r12.u64 | 1352531968;
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r7,r30,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// lis r29,-26677
	ctx.r29.s64 = -1748303872;
	// lis r28,-15451
	ctx.r28.s64 = -1012596736;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// ori r12,r12,25943
	ctx.r12.u64 = ctx.r12.u64 | 25943;
	// mulld r5,r4,r5
	ctx.r5.s64 = ctx.r4.s64 * ctx.r5.s64;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// ori r10,r28,51292
	ctx.r10.u64 = ctx.r28.u64 | 51292;
	// ori r31,r29,12583
	ctx.r31.u64 = ctx.r29.u64 | 12583;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rldicl r6,r3,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// xor r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r12.u64;
	// clrldi r3,r27,32
	ctx.r3.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rldimi r31,r10,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// rldicr r10,r5,34,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r4,21,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// subf r7,r5,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rldicr r8,r8,44,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r4,-5320
	ctx.r4.s64 = -348651520;
	// mulld r10,r6,r31
	ctx.r10.s64 = ctx.r6.s64 * ctx.r31.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r30,-25121
	ctx.r30.s64 = -1646329856;
	// ori r5,r4,11625
	ctx.r5.u64 = ctx.r4.u64 | 11625;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r4,r30,59912
	ctx.r4.u64 = ctx.r30.u64 | 59912;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// xor r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mulld r10,r3,r5
	ctx.r10.s64 = ctx.r3.s64 * ctx.r5.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulld r6,r7,r5
	ctx.r6.s64 = ctx.r7.s64 * ctx.r5.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r31
	ctx.r3.s64 = ctx.r4.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82555798:
	// cmplwi cr6,r27,64
	cr6.compare<uint32_t>(ctx.r27.u32, 64, xer);
	// bgt cr6,0x82555c20
	if (cr6.gt) goto loc_82555C20;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// ld r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// lis r6,-26677
	ctx.r6.s64 = -1748303872;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ld r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// rlwimi r3,r7,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// ld r29,-32(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r28,r9,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r26,r9,32,32
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r5,r5,8,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r25,r9,0,0,7
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicr r5,r5,0,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | ctx.r28.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwimi r28,r26,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r26.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// rldicl r26,r9,32,40
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rlwinm r24,r10,0,8,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r22,r7,0,8,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF0000;
	// rldicr r26,r26,0,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// rldicl r23,r10,32,32
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// or r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 | ctx.r24.u64;
	// rlwinm r28,r28,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 | ctx.r22.u64;
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | ctx.r28.u64;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r26,r10,0,0,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rldicl r28,r9,56,8
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lis r24,-15451
	ctx.r24.s64 = -1012596736;
	// rldicl r25,r7,32,32
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r21,r7,0,0,7
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF000000;
	// rlwimi r22,r23,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// or r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 | ctx.r26.u64;
	// rldicl r23,r10,32,40
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// or r8,r5,r28
	ctx.r8.u64 = ctx.r5.u64 | ctx.r28.u64;
	// ori r6,r6,12583
	ctx.r6.u64 = ctx.r6.u64 | 12583;
	// ori r24,r24,51292
	ctx.r24.u64 = ctx.r24.u64 | 51292;
	// or r5,r3,r21
	ctx.r5.u64 = ctx.r3.u64 | ctx.r21.u64;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// rldicl r3,r7,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFF;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// rldicr r23,r23,0,47
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldimi r6,r24,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rldicr r28,r26,8,55
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwimi r20,r25,16,0,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r20.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r7,r7,16,48
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFF;
	// or r26,r23,r10
	ctx.r26.u64 = ctx.r23.u64 | ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r6,r20,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r27,r22,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 | ctx.r27.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rldicl r28,r26,56,8
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mulld r7,r9,r10
	ctx.r7.s64 = ctx.r9.s64 * ctx.r10.s64;
	// rldicl r6,r5,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// ld r27,-16(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwimi r5,r4,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rotlwi r6,r31,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 | ctx.r28.u64;
	// ld r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// rldicl r5,r5,8,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFF;
	// ld r28,-24(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// rlwinm r11,r4,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// rldicr r5,r5,0,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwimi r6,r31,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r25,r4,0,0,7
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldimi r11,r6,8,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFF00) | (ctx.r11.u64 & 0xFFFFFF00000000FF);
	// rlwinm r6,r31,0,8,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r26,r4,32,32
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r6,r5,r25
	ctx.r6.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicl r5,r4,32,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// rldicl r4,r4,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rlwimi r24,r26,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r26.u32, 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r5,r5,0,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r23,r31,32,32
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// rlwinm r26,r31,0,0,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF000000;
	// rldicr r11,r11,16,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 | ctx.r26.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// rldicl r11,r31,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFF;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r24,r24,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r25,r23,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r31,r31,16,48
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFF;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 | ctx.r24.u64;
	// rldicl r5,r5,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r25,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rotlwi r26,r29,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// or r6,r4,r25
	ctx.r6.u64 = ctx.r4.u64 | ctx.r25.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rldicl r4,r31,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r26,r29,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r5,r9,27,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r4,r26,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r6,r11,57,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// rldicl r4,r4,8,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFF;
	// rotlwi r31,r30,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rldicr r4,r4,0,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r26,r29,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// rlwimi r31,r30,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r7,r7,12,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 12) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r11,33,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 | ctx.r26.u64;
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rldicr r4,r4,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r24,r29,0,0,7
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF000000;
	// rldicl r26,r29,32,32
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF;
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r25,r28,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// rldicl r31,r31,8,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// or r6,r4,r24
	ctx.r6.u64 = ctx.r4.u64 | ctx.r24.u64;
	// rlwimi r7,r3,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r25,r28,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r24,r30,0,8,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// rldicr r31,r31,0,55
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r22,r7,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r11,r6,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r8,r31,r24
	ctx.r8.u64 = ctx.r31.u64 | ctx.r24.u64;
	// rotlwi r6,r27,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwimi r4,r26,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r26.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r27,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r24,r30,0,0,7
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF000000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r25,r25,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// li r26,0
	ctx.r26.s64 = 0;
	// rldimi r5,r22,8,24
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r22.u64, 8) & 0xFFFFFFFF00) | (ctx.r5.u64 & 0xFFFFFF00000000FF);
	// or r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 | ctx.r24.u64;
	// rlwinm r31,r3,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rldimi r26,r25,8,24
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r25.u64, 8) & 0xFFFFFFFF00) | (ctx.r26.u64 & 0xFFFFFF00000000FF);
	// rldicl r23,r30,32,32
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// rldicl r24,r30,32,40
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFF;
	// rlwinm r25,r28,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// rldicl r20,r29,32,40
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFF;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rldicl r6,r6,8,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFF;
	// rldicl r31,r28,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF;
	// rldicr r24,r24,0,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// rldicl r30,r30,16,48
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFF;
	// or r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 | ctx.r25.u64;
	// rldicl r29,r29,16,48
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 16) & 0xFFFF;
	// rldicr r20,r20,0,47
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r21,r3,32,32
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rldicr r6,r6,0,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r27,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000;
	// rlwimi r22,r23,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// or r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 | ctx.r30.u64;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r24,r3,32,40
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFF;
	// or r29,r20,r29
	ctx.r29.u64 = ctx.r20.u64 | ctx.r29.u64;
	// rlwinm r23,r3,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF000000;
	// or r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 | ctx.r25.u64;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r18,r28,0,0,7
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF000000;
	// rldicr r26,r26,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r25,r22,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r17,r31,16,0,15
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r17.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r31,r28,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFF;
	// rldicl r11,r29,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r24,r24,0,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r3,r3,16,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// or r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 | ctx.r23.u64;
	// rldicl r16,r27,32,32
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF;
	// rlwimi r19,r21,16,0,15
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF0000) | (ctx.r19.u64 & 0xFFFFFFFF0000FFFF);
	// or r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 | ctx.r18.u64;
	// or r29,r8,r25
	ctx.r29.u64 = ctx.r8.u64 | ctx.r25.u64;
	// or r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldicl r28,r28,16,48
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 16) & 0xFFFF;
	// rldicl r30,r30,56,8
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 | ctx.r3.u64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r23,r27,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF000000;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// rldicr r6,r6,16,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r19,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r26,r26,8,55
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r24,r17,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r4,r27,32,40
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFF;
	// or r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 | ctx.r28.u64;
	// or r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 | ctx.r30.u64;
	// rlwimi r22,r16,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r16.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r4,r4,0,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 | ctx.r23.u64;
	// rldicl r28,r27,16,48
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u64, 16) & 0xFFFF;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicl r3,r3,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r30,r26,r24
	ctx.r30.u64 = ctx.r26.u64 | ctx.r24.u64;
	// rldicl r31,r31,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// rlwinm r29,r22,8,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 | ctx.r31.u64;
	// or r31,r6,r29
	ctx.r31.u64 = ctx.r6.u64 | ctx.r29.u64;
	// rldicl r4,r4,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r3,r11,27,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// or r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 | ctx.r4.u64;
	// rldicr r4,r11,57,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rldicr r5,r6,12,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 12) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r11,33,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lis r31,12176
	ctx.r31.s64 = 797966336;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lis r30,-25887
	ctx.r30.s64 = -1696530432;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r5,r31,16463
	ctx.r5.u64 = ctx.r31.u64 | 16463;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ori r31,r30,27195
	ctx.r31.u64 = ctx.r30.u64 | 27195;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldimi r5,r31,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mulld r8,r4,r10
	ctx.r8.s64 = ctx.r4.s64 * ctx.r10.s64;
	// mulld r11,r3,r5
	ctx.r11.s64 = ctx.r3.s64 * ctx.r5.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r8,12176
	ctx.r8.s64 = 797966336;
	// rldicl r7,r11,17,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// lis r6,-25887
	ctx.r6.s64 = -1696530432;
	// xor r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// ori r3,r6,27195
	ctx.r3.u64 = ctx.r6.u64 | 27195;
	// mulld r11,r5,r10
	ctx.r11.s64 = ctx.r5.s64 * ctx.r10.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r4,r8,16463
	ctx.r4.u64 = ctx.r8.u64 | 16463;
	// rldicl r10,r11,17,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mulld r3,r9,r4
	ctx.r3.s64 = ctx.r9.s64 * ctx.r4.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82555C20:
	// add r26,r29,r27
	ctx.r26.u64 = ctx.r29.u64 + ctx.r27.u64;
	// ld r11,-16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -16);
	// ld r10,-56(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + -56);
	// ld r9,-40(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -40);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r6,-48(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + -48);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ld r4,-24(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + -24);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r8,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// rldimi r5,r3,8,24
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFF00) | (ctx.r5.u64 & 0xFFFFFF00000000FF);
	// rlwinm r3,r11,0,8,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r31,r10,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// rldicl r7,r7,8,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFF;
	// or r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rldicl r30,r11,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicl r28,r10,32,32
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rldicr r7,r7,0,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r9,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// or r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 | ctx.r25.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// rlwinm r25,r11,0,0,7
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwimi r24,r30,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r30,r11,32,40
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFF;
	// rlwimi r20,r8,16,0,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r20.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r28,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r8,r9,32,40
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicl r28,r10,32,40
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r23,r10,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rlwinm r21,r9,0,0,7
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicr r30,r30,0,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r8,r8,0,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r28,r28,0,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r25,r24,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | ctx.r21.u64;
	// rotlwi r31,r6,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// or r8,r5,r25
	ctx.r8.u64 = ctx.r5.u64 | ctx.r25.u64;
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// rldicl r5,r11,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r30,r22,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r28,r4,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwimi r31,r6,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r24,r20,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r10,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// rlwimi r28,r4,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 | ctx.r24.u64;
	// rldicl r9,r9,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r8,r6,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rldimi r5,r31,8,24
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFF00) | (ctx.r5.u64 & 0xFFFFFF00000000FF);
	// rlwinm r3,r28,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// or r25,r7,r9
	ctx.r25.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 | ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldimi r8,r3,8,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFF00) | (ctx.r8.u64 & 0xFFFFFF00000000FF);
	// rlwinm r7,r4,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// rldicl r10,r6,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwinm r3,r6,0,0,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicr r5,r9,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// or r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 | ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rldicl r3,r6,16,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// rldicl r5,r6,32,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r5,r5,0,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r4,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r11,r4,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rldicl r10,r4,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rldicl r7,r5,56,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 | ctx.r6.u64;
	// lis r8,-5320
	ctx.r8.s64 = -348651520;
	// rldicl r6,r10,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lis r4,-25121
	ctx.r4.s64 = -1646329856;
	// clrldi r5,r27,32
	ctx.r5.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// ori r31,r8,11625
	ctx.r31.u64 = ctx.r8.u64 | 11625;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r8,r4,59912
	ctx.r8.u64 = ctx.r4.u64 | 59912;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rldimi r31,r8,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// xor r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// mulld r6,r7,r31
	ctx.r6.s64 = ctx.r7.s64 * ctx.r31.s64;
	// rldicl r11,r6,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// mulld r23,r10,r31
	ctx.r23.s64 = ctx.r10.s64 * ctx.r31.s64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x82554f60
	ctx.lr = 0x82555E44;
	sub_82554F60(ctx, base);
	// lis r9,-16744
	ctx.r9.s64 = -1097334784;
	// lis r8,-19310
	ctx.r8.s64 = -1265500160;
	// ori r30,r9,62067
	ctx.r30.u64 = ctx.r9.u64 | 62067;
	// ori r7,r8,46703
	ctx.r7.u64 = ctx.r8.u64 | 46703;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rldimi r30,r7,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bl 0x82554f60
	ctx.lr = 0x82555E6C;
	sub_82554F60(ctx, base);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rldicl r10,r5,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,0,8,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// rlwinm r9,r4,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rldimi r7,r9,8,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFF00) | (ctx.r7.u64 & 0xFFFFFF00000000FF);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r6,r27,-1
	ctx.r6.s64 = ctx.r27.s64 + -1;
	// mulld r11,r25,r30
	ctx.r11.s64 = ctx.r25.s64 * ctx.r30.s64;
	// rlwinm r8,r5,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// rldicr r10,r3,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r5,32,40
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFF;
	// ld r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// ld r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r9,0,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFF0000;
	// ld r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicl r7,r5,16,48
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFF;
	// rldicr r5,r8,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rldicl r9,r3,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r24,r6,0,0,25
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82555EEC:
	// ld r9,-40(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + -40);
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mulld r5,r25,r30
	ctx.r5.s64 = ctx.r25.s64 * ctx.r30.s64;
	// ld r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r23,r9,0,8,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r8,r6,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rlwinm r23,r9,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rldicl r23,r9,32,40
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rlwinm r20,r6,0,8,15
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rldicl r22,r9,32,32
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r23,r23,0,47
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// or r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 | ctx.r20.u64;
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// rlwinm r23,r6,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwimi r21,r22,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r22.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 | ctx.r23.u64;
	// rldicl r22,r6,32,32
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rldicl r23,r6,32,40
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rotlwi r19,r4,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r21,r21,8,0,15
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r6,r6,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// rldicr r23,r23,0,47
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// or r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 | ctx.r21.u64;
	// rldicl r9,r9,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r19,r4,16,0,15
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r19.u64 & 0xFFFFFFFF0000FFFF);
	// or r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 | ctx.r6.u64;
	// rlwimi r20,r22,16,0,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r22.u32, 16) & 0xFFFF0000) | (ctx.r20.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r22,r19,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// li r23,0
	ctx.r23.s64 = 0;
	// rldicr r3,r8,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r8,r20,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// rldimi r23,r22,8,24
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r22.u64, 8) & 0xFFFFFFFF00) | (ctx.r23.u64 & 0xFFFFFF00000000FF);
	// rlwinm r22,r4,0,8,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// or r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicl r8,r6,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// or r6,r23,r22
	ctx.r6.u64 = ctx.r23.u64 | ctx.r22.u64;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rldicr r3,r6,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r6,r4,0,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r21,r4,32,32
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// add r10,r8,r25
	ctx.r10.u64 = ctx.r8.u64 + ctx.r25.u64;
	// or r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rldicl r6,r4,32,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// rldicl r4,r4,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rlwimi r23,r21,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r6,r6,0,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rldicr r10,r8,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r8,r23,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rldicr r4,r9,27,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicl r9,r6,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r3,r3,22,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 22) & 0xFFFFFFFFFFFFFFFF;
	// mulld r8,r4,r30
	ctx.r8.s64 = ctx.r4.s64 * ctx.r30.s64;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mulld r10,r3,r30
	ctx.r10.s64 = ctx.r3.s64 * ctx.r30.s64;
	// xor r22,r8,r27
	ctx.r22.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicr r7,r7,31,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 31) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mulld r23,r7,r30
	ctx.r23.s64 = ctx.r7.s64 * ctx.r30.s64;
	// bl 0x82554f60
	ctx.lr = 0x82556050;
	sub_82554F60(ctx, base);
	// ld r6,-32(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + -32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r11,r6,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r4,r6,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rldimi r8,r10,8,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFF00) | (ctx.r8.u64 & 0xFFFFFF00000000FF);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r4,r5,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r9,r6,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicl r11,r6,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicl r10,r6,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r7,r9,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r4,r6,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r5,r27,r23
	ctx.r5.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82554f60
	ctx.lr = 0x825560CC;
	sub_82554F60(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r24,r24,-64
	xer.ca = ctx.r24.u32 > 63;
	ctx.r24.s64 = ctx.r24.s64 + -64;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ld r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bne 0x82555eec
	if (!cr0.eq) goto loc_82555EEC;
	// xor r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// xor r8,r27,r25
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// mulld r7,r9,r31
	ctx.r7.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r6,r7,17,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// mulld r5,r8,r31
	ctx.r5.s64 = ctx.r8.s64 * ctx.r31.s64;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rldicl r3,r5,17,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 17) & 0x1FFFF;
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// mulld r8,r11,r31
	ctx.r8.s64 = ctx.r11.s64 * ctx.r31.s64;
	// xor r7,r9,r27
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r27.u64;
	// rldicl r5,r8,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// rldicl r6,r28,17,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 17) & 0x1FFFF;
	// mulld r4,r7,r31
	ctx.r4.s64 = ctx.r7.s64 * ctx.r31.s64;
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// rldicl r8,r4,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u64, 17) & 0x1FFFF;
	// mulld r11,r11,r31
	ctx.r11.s64 = ctx.r11.s64 * ctx.r31.s64;
	// mulld r9,r3,r30
	ctx.r9.s64 = ctx.r3.s64 * ctx.r30.s64;
	// xor r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulld r11,r7,r31
	ctx.r11.s64 = ctx.r7.s64 * ctx.r31.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r22
	ctx.r10.u64 = ctx.r9.u64 + ctx.r22.u64;
	// xor r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mulld r5,r6,r31
	ctx.r5.s64 = ctx.r6.s64 * ctx.r31.s64;
	// rldicl r4,r5,17,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 17) & 0x1FFFF;
	// xor r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulld r3,r8,r31
	ctx.r3.s64 = ctx.r8.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556174"))) PPC_WEAK_FUNC(sub_82556174);
PPC_FUNC_IMPL(__imp__sub_82556174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556178"))) PPC_WEAK_FUNC(sub_82556178);
PPC_FUNC_IMPL(__imp__sub_82556178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82556180;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgt cr6,0x82556650
	if (cr6.gt) goto loc_82556650;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bgt cr6,0x82556410
	if (cr6.gt) goto loc_82556410;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// ble cr6,0x825562c4
	if (!cr6.gt) goto loc_825562C4;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r9,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,-8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwinm r4,r8,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rldicl r8,r6,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r6,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// rlwimi r30,r8,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r31,r6,0,0,7
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rldicl r3,r6,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicr r8,r10,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rldicl r8,r6,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldimi r6,r4,8,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r6.u64 & 0xFFFFFF00000000FF);
	// rldicr r4,r10,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r10,r30,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rldicl r4,r8,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r3,r7,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r8,r9,0,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// or r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicl r3,r9,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// subfic r6,r26,64
	xer.ca = ctx.r26.u32 <= 64;
	ctx.r6.s64 = 64 - ctx.r26.s64;
	// rlwimi r7,r5,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 | ctx.r9.u64;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lis r8,-5320
	ctx.r8.s64 = -348651520;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r6,r26
	ctx.r6.s64 = ctx.r26.s32;
	// ori r31,r8,11625
	ctx.r31.u64 = ctx.r8.u64 | 11625;
	// lis r5,-25121
	ctx.r5.s64 = -1646329856;
	// srd r8,r11,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// or r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rldicl r3,r3,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// sld r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// ori r5,r5,59912
	ctx.r5.u64 = ctx.r5.u64 | 59912;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rldimi r31,r5,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// mulld r4,r5,r31
	ctx.r4.s64 = ctx.r5.s64 * ctx.r31.s64;
	// rldicl r3,r4,17,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 17) & 0x1FFFF;
	// xor r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// mulld r8,r9,r31
	ctx.r8.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r7,r8,17,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// mulld r5,r6,r31
	ctx.r5.s64 = ctx.r6.s64 * ctx.r31.s64;
	// xor r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825562C4:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// blt cr6,0x82556364
	if (cr6.lt) goto loc_82556364;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r29,r26
	ctx.r10.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lis r9,-5320
	ctx.r9.s64 = -348651520;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldicl r7,r11,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwinm r6,r11,0,8,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r3,r8,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r4,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r6,r5,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r7,r5,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// lis r4,-25121
	ctx.r4.s64 = -1646329856;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwimi r8,r5,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// ori r6,r4,59912
	ctx.r6.u64 = ctx.r4.u64 | 59912;
	// rldicr r10,r3,3,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0xFFFFFFFFFFFFFFF8;
	// rlwinm r5,r8,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r4,r7,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// ori r31,r9,11625
	ctx.r31.u64 = ctx.r9.u64 | 11625;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldimi r31,r6,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// mulld r6,r7,r31
	ctx.r6.s64 = ctx.r7.s64 * ctx.r31.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r31
	ctx.r3.s64 = ctx.r4.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82556364:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x825563f4
	if (cr6.eq) goto loc_825563F4;
	// rlwinm r10,r26,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// add r9,r29,r26
	ctx.r9.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lis r8,12176
	ctx.r8.s64 = 797966336;
	// lis r7,-25887
	ctx.r7.s64 = -1696530432;
	// lis r6,20638
	ctx.r6.s64 = 1352531968;
	// lbzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// lis r4,-14007
	ctx.r4.s64 = -917962752;
	// lbz r3,-1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// ori r7,r7,27195
	ctx.r7.u64 = ctx.r7.u64 | 27195;
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rotlwi r9,r3,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + ctx.r26.u64;
	// ori r8,r8,16463
	ctx.r8.u64 = ctx.r8.u64 | 16463;
	// ori r4,r4,55239
	ctx.r4.u64 = ctx.r4.u64 | 55239;
	// ori r6,r6,25943
	ctx.r6.u64 = ctx.r6.u64 | 25943;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulld r4,r10,r8
	ctx.r4.s64 = ctx.r10.s64 * ctx.r8.s64;
	// mulld r3,r9,r6
	ctx.r3.s64 = ctx.r9.s64 * ctx.r6.s64;
	// xor r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// lis r7,12176
	ctx.r7.s64 = 797966336;
	// lis r5,-25887
	ctx.r5.s64 = -1696530432;
	// ori r10,r7,16463
	ctx.r10.u64 = ctx.r7.u64 | 16463;
	// ori r9,r5,27195
	ctx.r9.u64 = ctx.r5.u64 | 27195;
	// rldicl r8,r11,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// mulld r3,r7,r10
	ctx.r3.s64 = ctx.r7.s64 * ctx.r10.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_825563F4:
	// lis r11,12176
	ctx.r11.s64 = 797966336;
	// lis r10,-25887
	ctx.r10.s64 = -1696530432;
	// ori r3,r11,16463
	ctx.r3.u64 = ctx.r11.u64 | 16463;
	// ori r9,r10,27195
	ctx.r9.u64 = ctx.r10.u64 | 27195;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82556410:
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lis r8,-16744
	ctx.r8.s64 = -1097334784;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// ld r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r11,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// rldimi r7,r4,8,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r7.u64 & 0xFFFFFF00000000FF);
	// rldicl r11,r11,8,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r4,r10,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// rldicl r6,r6,8,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFF;
	// rldicr r11,r11,0,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r31,r5,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rldicr r6,r6,0,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r4,r9,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rldicl r30,r10,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rldicr r4,r11,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// rlwinm r11,r5,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF000000;
	// rldicl r29,r5,32,32
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rldicl r31,r9,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwimi r27,r30,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r28,r10,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldicl r30,r10,32,40
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// rldicl r11,r5,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFF;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// or r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 | ctx.r28.u64;
	// rldicr r30,r30,0,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// rlwimi r23,r31,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r25,r29,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r5,r5,16,48
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFF;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r31,r9,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// lis r29,12176
	ctx.r29.s64 = 797966336;
	// rlwinm r28,r9,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// rldicr r6,r6,16,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// lis r24,-19310
	ctx.r24.s64 = -1265500160;
	// lis r22,-25887
	ctx.r22.s64 = -1696530432;
	// rotlwi r21,r3,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r27,r27,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r30,r25,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// ori r5,r29,16463
	ctx.r5.u64 = ctx.r29.u64 | 16463;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// ori r8,r8,62067
	ctx.r8.u64 = ctx.r8.u64 | 62067;
	// ori r24,r24,46703
	ctx.r24.u64 = ctx.r24.u64 | 46703;
	// ori r29,r22,27195
	ctx.r29.u64 = ctx.r22.u64 | 27195;
	// rlwimi r21,r3,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 | ctx.r27.u64;
	// rldicl r10,r10,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 | ctx.r9.u64;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// rldimi r8,r24,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r23,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldimi r5,r29,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// rldicl r31,r3,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rlwinm r30,r21,8,0,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 | ctx.r28.u64;
	// rldicl r6,r9,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldimi r9,r30,8,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r30.u64, 8) & 0xFFFFFFFF00) | (ctx.r9.u64 & 0xFFFFFF00000000FF);
	// rlwinm r11,r3,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// lis r12,-14007
	ctx.r12.s64 = -917962752;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r12,r12,55239
	ctx.r12.u64 = ctx.r12.u64 | 55239;
	// rlwimi r30,r31,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r3,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF000000;
	// rldicr r11,r11,16,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r31,r3,32,40
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// mulld r11,r10,r8
	ctx.r11.s64 = ctx.r10.s64 * ctx.r8.s64;
	// rldicr r31,r31,0,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r3,r3,16,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// oris r12,r12,20638
	ctx.r12.u64 = ctx.r12.u64 | 1352531968;
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r7,r30,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// lis r29,-26677
	ctx.r29.s64 = -1748303872;
	// lis r28,-15451
	ctx.r28.s64 = -1012596736;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// ori r12,r12,25943
	ctx.r12.u64 = ctx.r12.u64 | 25943;
	// mulld r5,r4,r5
	ctx.r5.s64 = ctx.r4.s64 * ctx.r5.s64;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// ori r10,r28,51292
	ctx.r10.u64 = ctx.r28.u64 | 51292;
	// ori r31,r29,12583
	ctx.r31.u64 = ctx.r29.u64 | 12583;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rldicl r6,r3,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// xor r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r12.u64;
	// clrldi r3,r26,32
	ctx.r3.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// rldimi r31,r10,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// rldicr r10,r5,34,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r4,21,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// subf r7,r5,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rldicr r8,r8,44,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r4,-5320
	ctx.r4.s64 = -348651520;
	// mulld r10,r6,r31
	ctx.r10.s64 = ctx.r6.s64 * ctx.r31.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r30,-25121
	ctx.r30.s64 = -1646329856;
	// ori r5,r4,11625
	ctx.r5.u64 = ctx.r4.u64 | 11625;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r4,r30,59912
	ctx.r4.u64 = ctx.r30.u64 | 59912;
	// xor r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mulld r10,r3,r5
	ctx.r10.s64 = ctx.r3.s64 * ctx.r5.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// mulld r6,r7,r5
	ctx.r6.s64 = ctx.r7.s64 * ctx.r5.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r31
	ctx.r3.s64 = ctx.r4.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82556650:
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(ctx.r26.u32, 64, xer);
	// bgt cr6,0x82556ad4
	if (cr6.gt) goto loc_82556AD4;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// ld r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// lis r6,-26677
	ctx.r6.s64 = -1748303872;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// rlwimi r3,r7,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// ld r30,-32(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r29,r9,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r28,r9,32,32
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r5,r5,8,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r27,r9,0,0,7
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicr r5,r5,0,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwimi r29,r28,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r28,r9,32,40
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// or r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r10,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// rldicr r28,r28,0,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r23,r7,0,8,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF0000;
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | ctx.r25.u64;
	// rlwinm r29,r29,8,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rldicl r24,r10,32,32
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r28,r10,0,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rldicl r29,r9,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r22,r7,0,0,7
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF000000;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// lis r25,-15451
	ctx.r25.s64 = -1012596736;
	// or r8,r5,r29
	ctx.r8.u64 = ctx.r5.u64 | ctx.r29.u64;
	// rldicl r27,r7,32,32
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// rlwimi r23,r24,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r24.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// or r5,r3,r22
	ctx.r5.u64 = ctx.r3.u64 | ctx.r22.u64;
	// rldicl r24,r10,32,40
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// ori r6,r6,12583
	ctx.r6.u64 = ctx.r6.u64 | 12583;
	// rldicl r3,r7,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFF;
	// ori r25,r25,51292
	ctx.r25.u64 = ctx.r25.u64 | 51292;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// clrldi r9,r26,32
	ctx.r9.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// rldicr r24,r24,0,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldimi r6,r25,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// rldicr r29,r28,8,55
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r7,r7,16,48
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwimi r21,r27,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r28,r23,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// or r27,r24,r10
	ctx.r27.u64 = ctx.r24.u64 | ctx.r10.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rldicl r29,r27,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u64, 56) & 0xFFFFFFFFFFFFFF;
	// mulld r7,r9,r10
	ctx.r7.s64 = ctx.r9.s64 * ctx.r10.s64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rldicl r6,r5,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 | ctx.r29.u64;
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// ld r29,-8(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// rotlwi r3,r31,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// ld r28,-24(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// rlwimi r5,r4,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// ld r27,-16(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r31,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rldimi r11,r6,8,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFF00) | (ctx.r11.u64 & 0xFFFFFF00000000FF);
	// rlwinm r6,r3,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r3,r4,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rlwinm r5,r4,0,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// rldicl r6,r6,8,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFF;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rldicr r6,r6,0,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r5,r31,0,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// rlwimi r25,r3,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r26,r4,0,0,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldicr r11,r11,16,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r3,r4,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 | ctx.r26.u64;
	// rldicl r11,r4,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicr r6,r6,16,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r4,r31,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF000000;
	// rldicl r24,r31,32,32
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// rldicl r6,r31,32,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFF;
	// rlwinm r25,r25,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwimi r26,r24,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r24.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r6,r6,0,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r4,r31,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFF;
	// rldicl r3,r3,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r24,r11,8,55
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rotlwi r25,r31,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r4,r24,r26
	ctx.r4.u64 = ctx.r24.u64 | ctx.r26.u64;
	// rldicl r3,r6,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r25,r31,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r5,r9,27,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r4,r25,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// rldicr r6,r11,57,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// rotlwi r26,r30,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rldimi r3,r4,8,24
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r3.u64 & 0xFFFFFF00000000FF);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r31,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// rlwimi r26,r30,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r7,r7,12,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 12) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r11,33,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r26,r26,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r24,r31,0,0,7
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF000000;
	// rldicl r25,r31,32,32
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF;
	// rotlwi r7,r28,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// rlwimi r4,r29,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r26,r26,8,24
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// or r6,r3,r24
	ctx.r6.u64 = ctx.r3.u64 | ctx.r24.u64;
	// rlwimi r7,r28,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r24,r30,0,8,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// rldicr r26,r26,0,55
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r22,r7,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r11,r6,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// or r8,r26,r24
	ctx.r8.u64 = ctx.r26.u64 | ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r5,r27,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// rldimi r6,r4,8,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r6.u64 & 0xFFFFFF00000000FF);
	// rlwimi r5,r27,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r24,r30,0,0,7
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF000000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r4,r29,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// li r26,0
	ctx.r26.s64 = 0;
	// or r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 | ctx.r24.u64;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwimi r3,r25,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r25.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r23,r30,32,32
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF;
	// rldicl r24,r30,32,40
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFF;
	// rldimi r26,r22,8,24
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r22.u64, 8) & 0xFFFFFFFF00) | (ctx.r26.u64 & 0xFFFFFF00000000FF);
	// rldicl r6,r28,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF;
	// rldicl r20,r31,32,40
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFF;
	// rlwinm r25,r28,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// rldicl r5,r5,8,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFF;
	// rldicr r24,r24,0,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// rldicl r30,r30,16,48
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 16) & 0xFFFF;
	// or r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 | ctx.r25.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// rldicl r31,r31,16,48
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFF;
	// rldicr r20,r20,0,47
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r21,r29,32,32
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r5,0,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r27,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF0000;
	// rlwimi r22,r23,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// or r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 | ctx.r30.u64;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r17,r6,16,0,15
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r17.u64 & 0xFFFFFFFF0000FFFF);
	// or r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 | ctx.r31.u64;
	// rldicl r24,r29,32,40
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFF;
	// rlwinm r23,r29,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF000000;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicr r4,r4,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r18,r28,0,0,7
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF000000;
	// rldicl r6,r28,32,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFF;
	// rldicr r26,r26,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r25,r22,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r11,r31,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r24,r24,0,47
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r29,r29,16,48
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 16) & 0xFFFF;
	// or r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 | ctx.r23.u64;
	// rldicl r16,r27,32,32
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF;
	// rldicr r6,r6,0,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r28,r28,16,48
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 16) & 0xFFFF;
	// rlwimi r19,r21,16,0,15
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF0000) | (ctx.r19.u64 & 0xFFFFFFFF0000FFFF);
	// or r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 | ctx.r18.u64;
	// or r31,r8,r25
	ctx.r31.u64 = ctx.r8.u64 | ctx.r25.u64;
	// or r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rldicl r30,r30,56,8
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 | ctx.r29.u64;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// rlwinm r23,r27,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFF000000;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r4,r4,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r19,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r26,r26,8,55
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r24,r17,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r3,r27,32,40
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFF;
	// or r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rlwimi r22,r16,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r16.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r3,r3,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 | ctx.r23.u64;
	// rldicl r28,r27,16,48
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u64, 16) & 0xFFFF;
	// or r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 | ctx.r25.u64;
	// rldicl r31,r29,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r30,r26,r24
	ctx.r30.u64 = ctx.r26.u64 | ctx.r24.u64;
	// rldicl r6,r6,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldicr r29,r5,8,55
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 | ctx.r28.u64;
	// rlwinm r27,r22,8,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 | ctx.r31.u64;
	// or r5,r30,r6
	ctx.r5.u64 = ctx.r30.u64 | ctx.r6.u64;
	// rldicl r31,r3,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 | ctx.r27.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r3,r11,27,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// or r5,r4,r31
	ctx.r5.u64 = ctx.r4.u64 | ctx.r31.u64;
	// rldicr r4,r11,57,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rldicr r5,r6,12,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 12) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r11,33,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r31,12176
	ctx.r31.s64 = 797966336;
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lis r30,-25887
	ctx.r30.s64 = -1696530432;
	// ori r5,r31,16463
	ctx.r5.u64 = ctx.r31.u64 | 16463;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ori r31,r30,27195
	ctx.r31.u64 = ctx.r30.u64 | 27195;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldimi r5,r31,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mulld r8,r8,r10
	ctx.r8.s64 = ctx.r8.s64 * ctx.r10.s64;
	// mulld r11,r4,r5
	ctx.r11.s64 = ctx.r4.s64 * ctx.r5.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r3,12176
	ctx.r3.s64 = 797966336;
	// rldicl r8,r11,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// lis r7,-25887
	ctx.r7.s64 = -1696530432;
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// ori r5,r3,16463
	ctx.r5.u64 = ctx.r3.u64 | 16463;
	// mulld r11,r6,r10
	ctx.r11.s64 = ctx.r6.s64 * ctx.r10.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r4,r7,27195
	ctx.r4.u64 = ctx.r7.u64 | 27195;
	// rldicl r3,r11,17,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// mulld r3,r11,r5
	ctx.r3.s64 = ctx.r11.s64 * ctx.r5.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82556AD4:
	// add r27,r29,r26
	ctx.r27.u64 = ctx.r29.u64 + ctx.r26.u64;
	// clrlwi r11,r27,29
	ctx.r11.u64 = ctx.r27.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ld r10,-56(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + -56);
	// ld r11,-16(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + -16);
	// ld r9,-40(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + -40);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r6,-48(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + -48);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ld r4,-24(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + -24);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r7,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// rldimi r5,r3,8,24
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFF00) | (ctx.r5.u64 & 0xFFFFFF00000000FF);
	// rlwinm r3,r10,0,8,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// rlwinm r31,r11,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// rldicl r28,r10,32,32
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rldicl r7,r7,8,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFF;
	// or r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rldicl r30,r11,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r9,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwinm r25,r9,0,8,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rldicr r7,r7,0,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// or r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 | ctx.r25.u64;
	// rlwimi r24,r28,16,0,15
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFFFF0000) | (ctx.r24.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r30,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r25,r10,0,0,7
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// rldicl r28,r10,32,40
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFF;
	// rldicr r5,r5,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r23,r11,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// rlwimi r20,r8,16,0,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r20.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r30,r11,32,40
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFF;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r21,r9,0,0,7
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicl r8,r9,32,40
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 | ctx.r25.u64;
	// rldicr r28,r28,0,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r10,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rldicr r30,r30,0,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rldicr r8,r8,0,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | ctx.r21.u64;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r25,r24,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r28,r22,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rotlwi r31,r6,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rotlwi r30,r4,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r24,r20,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r5,r25
	ctx.r8.u64 = ctx.r5.u64 | ctx.r25.u64;
	// or r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 | ctx.r28.u64;
	// rldicl r11,r11,56,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r5,r10,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r31,r6,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r30,r4,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// or r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 | ctx.r24.u64;
	// rldicl r9,r9,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r22,r7,r9
	ctx.r22.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r3,r30,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r6,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldimi r5,r31,8,24
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFF00) | (ctx.r5.u64 & 0xFFFFFF00000000FF);
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// bne cr6,0x82556d3c
	if (!cr6.eq) goto loc_82556D3C;
	// or r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 | ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r4,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// rldimi r8,r3,8,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFF00) | (ctx.r8.u64 & 0xFFFFFF00000000FF);
	// rldicl r10,r6,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rldicr r5,r9,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r3,r6,0,0,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 | ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rldicl r3,r6,16,48
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// rldicl r5,r6,32,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r5,r5,0,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r10,r4,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r11,r4,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r10,r4,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rldicl r7,r5,56,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 | ctx.r6.u64;
	// lis r8,-5320
	ctx.r8.s64 = -348651520;
	// rldicl r6,r10,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lis r4,-25121
	ctx.r4.s64 = -1646329856;
	// clrldi r5,r26,32
	ctx.r5.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// ori r31,r8,11625
	ctx.r31.u64 = ctx.r8.u64 | 11625;
	// or r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r8,r4,59912
	ctx.r8.u64 = ctx.r4.u64 | 59912;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rldimi r31,r8,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// mulld r8,r9,r31
	ctx.r8.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r7,r8,17,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulld r23,r8,r31
	ctx.r23.s64 = ctx.r8.s64 * ctx.r31.s64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x82555110
	ctx.lr = 0x82556D04;
	sub_82555110(ctx, base);
	// lis r7,-16744
	ctx.r7.s64 = -1097334784;
	// lis r6,-19310
	ctx.r6.s64 = -1265500160;
	// ld r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ori r30,r7,62067
	ctx.r30.u64 = ctx.r7.u64 | 62067;
	// ori r5,r6,46703
	ctx.r5.u64 = ctx.r6.u64 | 46703;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rldimi r30,r5,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82555110
	ctx.lr = 0x82556D38;
	sub_82555110(ctx, base);
	// b 0x82556e48
	goto loc_82556E48;
loc_82556D3C:
	// li r9,0
	ctx.r9.s64 = 0;
	// or r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rldimi r9,r3,8,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFF00) | (ctx.r9.u64 & 0xFFFFFF00000000FF);
	// rlwinm r8,r4,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// rldicr r7,r10,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r6,0,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicl r31,r6,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r6,32,40
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rldicl r7,r6,16,48
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// rldicr r8,r8,0,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r5,r10,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r6,r4,0,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// rlwimi r3,r31,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rldicl r6,r4,32,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r5,r4,16,48
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rldicr r6,r6,0,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lis r4,-5320
	ctx.r4.s64 = -348651520;
	// rlwinm r3,r10,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lis r11,-25121
	ctx.r11.s64 = -1646329856;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rldicl r8,r8,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// ori r31,r4,11625
	ctx.r31.u64 = ctx.r4.u64 | 11625;
	// ori r6,r11,59912
	ctx.r6.u64 = ctx.r11.u64 | 59912;
	// or r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 | ctx.r3.u64;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rldicl r3,r10,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r5,r26,32
	ctx.r5.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rldimi r31,r6,32,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r31.u64 & 0xFFFFFFFF);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// addi r4,r27,-64
	ctx.r4.s64 = ctx.r27.s64 + -64;
	// mulld r8,r9,r31
	ctx.r8.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r7,r8,17,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulld r23,r8,r31
	ctx.r23.s64 = ctx.r8.s64 * ctx.r31.s64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x82554f60
	ctx.lr = 0x82556E14;
	sub_82554F60(ctx, base);
	// lis r7,-16744
	ctx.r7.s64 = -1097334784;
	// lis r6,-19310
	ctx.r6.s64 = -1265500160;
	// ld r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ori r30,r7,62067
	ctx.r30.u64 = ctx.r7.u64 | 62067;
	// ori r5,r6,46703
	ctx.r5.u64 = ctx.r6.u64 | 46703;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rldimi r30,r5,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82554f60
	ctx.lr = 0x82556E48;
	sub_82554F60(ctx, base);
loc_82556E48:
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// ld r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mulld r10,r22,r30
	ctx.r10.s64 = ctx.r22.s64 * ctx.r30.s64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicl r5,r9,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r9,0,8,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r3,r9,0,0,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldimi r7,r4,8,24
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFF00) | (ctx.r7.u64 & 0xFFFFFF00000000FF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r5,r9,32,40
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rldicr r6,r7,16,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// or r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rldicr r5,r5,0,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r6,r4,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rldicr r4,r7,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r7,r3,56,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r26,r8,0,0,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82556EC0:
	// ld r9,-40(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + -40);
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mulld r5,r24,r30
	ctx.r5.s64 = ctx.r24.s64 * ctx.r30.s64;
	// ld r4,-8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + -8);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r23,r9,0,8,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r8,r6,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r3,r3,8,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFF;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rldicr r3,r3,0,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// rldicl r8,r8,8,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFF;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rlwinm r23,r9,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF000000;
	// rldicr r3,r3,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r8,r8,0,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFF00;
	// or r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 | ctx.r23.u64;
	// rldicl r23,r9,32,40
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFF;
	// rlwinm r20,r6,0,8,15
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rldicl r22,r9,32,32
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicr r23,r23,0,47
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rldicl r9,r9,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFF;
	// or r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 | ctx.r20.u64;
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// rlwinm r23,r6,0,0,7
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicr r8,r8,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwimi r21,r22,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r22.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 | ctx.r23.u64;
	// rldicl r22,r6,32,32
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rldicl r23,r6,32,40
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicr r3,r3,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rotlwi r19,r4,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r21,r21,8,0,15
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// rldicl r6,r6,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// rldicr r23,r23,0,47
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 0) & 0xFFFFFFFFFFFF0000;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// or r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 | ctx.r21.u64;
	// rldicl r9,r9,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwimi r19,r4,16,0,15
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r19.u64 & 0xFFFFFFFF0000FFFF);
	// or r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 | ctx.r6.u64;
	// rlwimi r20,r22,16,0,15
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r22.u32, 16) & 0xFFFF0000) | (ctx.r20.u64 & 0xFFFFFFFF0000FFFF);
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r22,r19,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// li r23,0
	ctx.r23.s64 = 0;
	// rldicr r3,r8,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r8,r20,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// rldimi r23,r22,8,24
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r22.u64, 8) & 0xFFFFFFFF00) | (ctx.r23.u64 & 0xFFFFFF00000000FF);
	// rlwinm r22,r4,0,8,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF0000;
	// or r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicl r8,r6,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// or r6,r23,r22
	ctx.r6.u64 = ctx.r23.u64 | ctx.r22.u64;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rldicr r3,r6,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r6,r4,0,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r21,r4,32,32
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// or r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rldicl r6,r4,32,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFF;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// rldicl r4,r4,16,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// rlwimi r23,r21,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r21.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r6,r6,0,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rldicr r10,r8,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r8,r23,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rldicr r4,r9,27,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 27) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicl r9,r6,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r3,r3,22,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 22) & 0xFFFFFFFFFFFFFFFF;
	// mulld r8,r4,r30
	ctx.r8.s64 = ctx.r4.s64 * ctx.r30.s64;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mulld r10,r3,r30
	ctx.r10.s64 = ctx.r3.s64 * ctx.r30.s64;
	// xor r22,r8,r27
	ctx.r22.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicr r7,r7,31,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 31) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r28,r10,r25
	ctx.r28.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mulld r23,r7,r30
	ctx.r23.s64 = ctx.r7.s64 * ctx.r30.s64;
	// bl 0x82555110
	ctx.lr = 0x82557024;
	sub_82555110(ctx, base);
	// ld r6,-32(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + -32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rldicl r11,r6,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r4,r6,0,8,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// rldimi r8,r10,8,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFF00) | (ctx.r8.u64 & 0xFFFFFF00000000FF);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// or r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r4,r5,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rlwinm r9,r6,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF000000;
	// rldicl r11,r6,32,40
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFF;
	// rldicl r10,r6,16,48
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFF;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rldicr r11,r11,0,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r7,r9,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r4,r6,56,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r5,r27,r23
	ctx.r5.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// bl 0x82555110
	ctx.lr = 0x825570A0;
	sub_82555110(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r26,r26,-64
	xer.ca = ctx.r26.u32 > 63;
	ctx.r26.s64 = ctx.r26.s64 + -64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ld r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bne 0x82556ec0
	if (!cr0.eq) goto loc_82556EC0;
	// xor r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// xor r8,r27,r24
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r24.u64;
	// mulld r7,r9,r31
	ctx.r7.s64 = ctx.r9.s64 * ctx.r31.s64;
	// rldicl r6,r7,17,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// mulld r5,r8,r31
	ctx.r5.s64 = ctx.r8.s64 * ctx.r31.s64;
	// xor r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// rldicl r3,r5,17,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 17) & 0x1FFFF;
	// xor r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// xor r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r27.u64;
	// mulld r8,r11,r31
	ctx.r8.s64 = ctx.r11.s64 * ctx.r31.s64;
	// xor r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rldicl r6,r8,17,47
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// rldicl r5,r28,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 17) & 0x1FFFF;
	// mulld r4,r7,r31
	ctx.r4.s64 = ctx.r7.s64 * ctx.r31.s64;
	// xor r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// xor r11,r5,r28
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// rldicl r8,r4,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u64, 17) & 0x1FFFF;
	// mulld r11,r11,r30
	ctx.r11.s64 = ctx.r11.s64 * ctx.r30.s64;
	// mulld r9,r3,r31
	ctx.r9.s64 = ctx.r3.s64 * ctx.r31.s64;
	// xor r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulld r11,r7,r31
	ctx.r11.s64 = ctx.r7.s64 * ctx.r31.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r22
	ctx.r10.u64 = ctx.r9.u64 + ctx.r22.u64;
	// xor r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// mulld r5,r6,r31
	ctx.r5.s64 = ctx.r6.s64 * ctx.r31.s64;
	// rldicl r4,r5,17,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 17) & 0x1FFFF;
	// xor r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// mulld r10,r11,r31
	ctx.r10.s64 = ctx.r11.s64 * ctx.r31.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulld r3,r8,r31
	ctx.r3.s64 = ctx.r8.s64 * ctx.r31.s64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557148"))) PPC_WEAK_FUNC(sub_82557148);
PPC_FUNC_IMPL(__imp__sub_82557148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82557150;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x825552c0
	ctx.lr = 0x82557164;
	sub_825552C0(ctx, base);
	// lis r11,-12177
	ctx.r11.s64 = -798031872;
	// lis r10,25886
	ctx.r10.s64 = 1696464896;
	// ori r9,r11,49073
	ctx.r9.u64 = ctx.r11.u64 | 49073;
	// ori r8,r10,38340
	ctx.r8.u64 = ctx.r10.u64 | 38340;
	// lis r7,-5320
	ctx.r7.s64 = -348651520;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r6,-25121
	ctx.r6.s64 = -1646329856;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// ori r5,r6,59912
	ctx.r5.u64 = ctx.r6.u64 | 59912;
	// ori r11,r7,11625
	ctx.r11.u64 = ctx.r7.u64 | 11625;
	// xor r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// rldimi r11,r5,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mulld r10,r3,r11
	ctx.r10.s64 = ctx.r3.s64 * ctx.r11.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// mulld r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r11
	ctx.r3.s64 = ctx.r4.s64 * ctx.r11.s64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825571CC"))) PPC_WEAK_FUNC(sub_825571CC);
PPC_FUNC_IMPL(__imp__sub_825571CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825571D0"))) PPC_WEAK_FUNC(sub_825571D0);
PPC_FUNC_IMPL(__imp__sub_825571D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825571D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82556178
	ctx.lr = 0x825571EC;
	sub_82556178(ctx, base);
	// lis r11,-12177
	ctx.r11.s64 = -798031872;
	// lis r10,25886
	ctx.r10.s64 = 1696464896;
	// ori r9,r11,49073
	ctx.r9.u64 = ctx.r11.u64 | 49073;
	// ori r8,r10,38340
	ctx.r8.u64 = ctx.r10.u64 | 38340;
	// lis r7,-5320
	ctx.r7.s64 = -348651520;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lis r6,-25121
	ctx.r6.s64 = -1646329856;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// ori r5,r6,59912
	ctx.r5.u64 = ctx.r6.u64 | 59912;
	// ori r11,r7,11625
	ctx.r11.u64 = ctx.r7.u64 | 11625;
	// xor r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// rldimi r11,r5,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mulld r10,r3,r11
	ctx.r10.s64 = ctx.r3.s64 * ctx.r11.s64;
	// rldicl r9,r10,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 17) & 0x1FFFF;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// mulld r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 * ctx.r11.s64;
	// rldicl r5,r6,17,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 17) & 0x1FFFF;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// mulld r3,r4,r11
	ctx.r3.s64 = ctx.r4.s64 * ctx.r11.s64;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557254"))) PPC_WEAK_FUNC(sub_82557254);
PPC_FUNC_IMPL(__imp__sub_82557254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557258"))) PPC_WEAK_FUNC(sub_82557258);
PPC_FUNC_IMPL(__imp__sub_82557258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82557260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825572bc
	if (!cr6.eq) goto loc_825572BC;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rldicr r10,r8,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x825572b0
	if (cr6.eq) goto loc_825572B0;
	// bl 0x82557148
	ctx.lr = 0x825572A8;
	sub_82557148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825572B0:
	// bl 0x825571d0
	ctx.lr = 0x825572B4;
	sub_825571D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825572BC:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82534518
	ctx.lr = 0x825572C8;
	sub_82534518(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x825572D8;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// clrlwi r9,r31,29
	ctx.r9.u64 = ctx.r31.u32 & 0x7;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rldicr r11,r7,16,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82557318
	if (cr6.eq) goto loc_82557318;
	// bl 0x82557148
	ctx.lr = 0x82557314;
	sub_82557148(ctx, base);
	// b 0x8255731c
	goto loc_8255731C;
loc_82557318:
	// bl 0x825571d0
	ctx.lr = 0x8255731C;
	sub_825571D0(ctx, base);
loc_8255731C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8386d088
	ctx.lr = 0x82557328;
	sub_8386D088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557334"))) PPC_WEAK_FUNC(sub_82557334);
PPC_FUNC_IMPL(__imp__sub_82557334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557338"))) PPC_WEAK_FUNC(sub_82557338);
PPC_FUNC_IMPL(__imp__sub_82557338) {
	PPC_FUNC_PROLOGUE();
	// b 0x82557258
	sub_82557258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255733C"))) PPC_WEAK_FUNC(sub_8255733C);
PPC_FUNC_IMPL(__imp__sub_8255733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557340"))) PPC_WEAK_FUNC(sub_82557340);
PPC_FUNC_IMPL(__imp__sub_82557340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82557344:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82557344
	if (!cr6.eq) goto loc_82557344;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82557258
	sub_82557258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557364"))) PPC_WEAK_FUNC(sub_82557364);
PPC_FUNC_IMPL(__imp__sub_82557364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557368"))) PPC_WEAK_FUNC(sub_82557368);
PPC_FUNC_IMPL(__imp__sub_82557368) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x825573b4
	if (!cr6.eq) goto loc_825573B4;
	// addi r10,r10,16108
	ctx.r10.s64 = ctx.r10.s64 + 16108;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r10,-36
	ctx.r4.s64 = ctx.r10.s64 + -36;
	// bl 0x82541118
	ctx.lr = 0x825573B0;
	sub_82541118(ctx, base);
	// b 0x825573c0
	goto loc_825573C0;
loc_825573B4:
	// addi r4,r10,16108
	ctx.r4.s64 = ctx.r10.s64 + 16108;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bl 0x82541118
	ctx.lr = 0x825573C0;
	sub_82541118(ctx, base);
loc_825573C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825536a0
	ctx.lr = 0x825573D0;
	sub_825536A0(ctx, base);
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

__attribute__((alias("__imp__sub_825573E4"))) PPC_WEAK_FUNC(sub_825573E4);
PPC_FUNC_IMPL(__imp__sub_825573E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825573E8"))) PPC_WEAK_FUNC(sub_825573E8);
PPC_FUNC_IMPL(__imp__sub_825573E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825573F0;
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x82557418
	if (!cr6.eq) goto loc_82557418;
	// bl 0x82554de0
	ctx.lr = 0x82557410;
	sub_82554DE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82557418:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x82557454
	if (!cr6.eq) goto loc_82557454;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82553610
	ctx.lr = 0x8255742C;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x82557440;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x8255744C;
	sub_82553758(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82557454:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82553610
	ctx.lr = 0x8255745C;
	sub_82553610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x8255746C;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,16056
	ctx.r11.s64 = ctx.r11.s64 + 16056;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82541118
	ctx.lr = 0x8255748C;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82557498;
	sub_82553758(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825574A0"))) PPC_WEAK_FUNC(sub_825574A0);
PPC_FUNC_IMPL(__imp__sub_825574A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825574A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x825574e8
	if (cr6.eq) goto loc_825574E8;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x82553610
	ctx.lr = 0x825574C8;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x825574DC;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x825574E8;
	sub_82553758(ctx, base);
loc_825574E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x825574F4;
	sub_82554DE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255d610
	ctx.lr = 0x82557500;
	sub_8255D610(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557520"))) PPC_WEAK_FUNC(sub_82557520);
PPC_FUNC_IMPL(__imp__sub_82557520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82557528;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// ble cr6,0x8255757c
	if (!cr6.gt) goto loc_8255757C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r7,32767
	ctx.r7.s64 = 32767;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r8,r11,16192
	ctx.r8.s64 = ctx.r11.s64 + 16192;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825533e8
	ctx.lr = 0x82557578;
	sub_825533E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255757C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x825575b4
	if (!cr6.lt) goto loc_825575B4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82557598:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x82557598
	if (cr6.lt) goto loc_82557598;
loc_825575B4:
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r27.u32);
	// lbz r6,5(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82557600
	if (cr6.eq) goto loc_82557600;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557600
	if (cr6.eq) goto loc_82557600;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825435e0
	ctx.lr = 0x82557600;
	sub_825435E0(ctx, base);
loc_82557600:
	// lhz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 48);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,48(r28)
	PPC_STORE_U16(ctx.r28.u32 + 48, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557618"))) PPC_WEAK_FUNC(sub_82557618);
PPC_FUNC_IMPL(__imp__sub_82557618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82557620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x8255765c
	if (!cr6.gt) goto loc_8255765C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r5,r11,16220
	ctx.r5.s64 = ctx.r11.s64 + 16220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557368
	ctx.lr = 0x8255765C;
	sub_82557368(ctx, base);
loc_8255765C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557520
	ctx.lr = 0x82557668;
	sub_82557520(ctx, base);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557684"))) PPC_WEAK_FUNC(sub_82557684);
PPC_FUNC_IMPL(__imp__sub_82557684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557688"))) PPC_WEAK_FUNC(sub_82557688);
PPC_FUNC_IMPL(__imp__sub_82557688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_825576A4:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bdnz 0x825576a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825576A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825576E4"))) PPC_WEAK_FUNC(sub_825576E4);
PPC_FUNC_IMPL(__imp__sub_825576E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825576E8"))) PPC_WEAK_FUNC(sub_825576E8);
PPC_FUNC_IMPL(__imp__sub_825576E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825576F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82557758
	if (!cr6.gt) goto loc_82557758;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
loc_82557728:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82557744
	if (!cr6.eq) goto loc_82557744;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8255788c
	if (cr6.eq) goto loc_8255788C;
loc_82557744:
	// lbz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// blt cr6,0x82557728
	if (cr6.lt) goto loc_82557728;
loc_82557758:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// ble cr6,0x825577b0
	if (!cr6.gt) goto loc_825577B0;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82557790
	if (!cr6.eq) goto loc_82557790;
	// addi r11,r11,16108
	ctx.r11.s64 = ctx.r11.s64 + 16108;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x82541118
	ctx.lr = 0x8255778C;
	sub_82541118(ctx, base);
	// b 0x825577a0
	goto loc_825577A0;
loc_82557790:
	// addi r4,r11,16108
	ctx.r4.s64 = ctx.r11.s64 + 16108;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r7,r4,128
	ctx.r7.s64 = ctx.r4.s64 + 128;
	// bl 0x82541118
	ctx.lr = 0x825577A0;
	sub_82541118(ctx, base);
loc_825577A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825536a0
	ctx.lr = 0x825577B0;
	sub_825536A0(ctx, base);
loc_825577B0:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x825577ec
	if (!cr6.gt) goto loc_825577EC;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,-19441
	ctx.r8.s64 = ctx.r11.s64 + -19441;
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825533e8
	ctx.lr = 0x825577E8;
	sub_825533E8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_825577EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x82557818
	if (!cr6.lt) goto loc_82557818;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_825577FC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x825577fc
	if (cr6.lt) goto loc_825577FC;
loc_82557818:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u32);
	// lbz r8,5(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 5);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82557858
	if (cr6.eq) goto loc_82557858;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557858
	if (cr6.eq) goto loc_82557858;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825435e0
	ctx.lr = 0x82557858;
	sub_825435E0(ctx, base);
loc_82557858:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,51(r8)
	PPC_STORE_U8(ctx.r8.u32 + 51, ctx.r10.u8);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r6,r11,26
	ctx.r6.s64 = ctx.r11.s64 + 26;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r7,r5,r30
	PPC_STORE_U8(ctx.r5.u32 + ctx.r30.u32, ctx.r7.u8);
	// lbz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_8255788C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557894"))) PPC_WEAK_FUNC(sub_82557894);
PPC_FUNC_IMPL(__imp__sub_82557894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557898"))) PPC_WEAK_FUNC(sub_82557898);
PPC_FUNC_IMPL(__imp__sub_82557898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825578A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825578e0
	if (!cr6.eq) goto loc_825578E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825578E0:
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addic. r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x8255792c
	if (cr0.lt) goto loc_8255792C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r8,86
	ctx.r9.s64 = ctx.r8.s64 + 86;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82557900:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// beq cr6,0x82557950
	if (cr6.eq) goto loc_82557950;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bge 0x82557900
	if (!cr0.lt) goto loc_82557900;
loc_8255792C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82557898
	ctx.lr = 0x82557940;
	sub_82557898(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x825579bc
	if (!cr6.eq) goto loc_825579BC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82557950:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8255792c
	if (cr6.lt) goto loc_8255792C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x825579b0
	if (!cr6.eq) goto loc_825579B0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825579b0
	if (cr6.eq) goto loc_825579B0;
loc_82557984:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x825579a8
	if (!cr6.gt) goto loc_825579A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82557984
	if (!cr6.eq) goto loc_82557984;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825579A8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
loc_825579B0:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825579BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825576e8
	ctx.lr = 0x825579CC;
	sub_825576E8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825579E4"))) PPC_WEAK_FUNC(sub_825579E4);
PPC_FUNC_IMPL(__imp__sub_825579E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825579E8"))) PPC_WEAK_FUNC(sub_825579E8);
PPC_FUNC_IMPL(__imp__sub_825579E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825579F0;
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
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x82557a30
	if (cr6.eq) goto loc_82557A30;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x82553610
	ctx.lr = 0x82557A10;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x82557A24;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82557A30;
	sub_82553758(ctx, base);
loc_82557A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x82557A3C;
	sub_82554DE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557898
	ctx.lr = 0x82557A54;
	sub_82557898(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x82557a6c
	if (!cr6.eq) goto loc_82557A6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d610
	ctx.lr = 0x82557A68;
	sub_8255D610(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
loc_82557A6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557A74"))) PPC_WEAK_FUNC(sub_82557A74);
PPC_FUNC_IMPL(__imp__sub_82557A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557A78"))) PPC_WEAK_FUNC(sub_82557A78);
PPC_FUNC_IMPL(__imp__sub_82557A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82557A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r31,r5,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82557ae4
	if (cr6.eq) goto loc_82557AE4;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x82557ae4
	if (cr6.eq) goto loc_82557AE4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82557ab4
	if (cr6.eq) goto loc_82557AB4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x82557AB4;
	sub_8255E1C8(ctx, base);
loc_82557AB4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x82557b18
	if (!cr6.gt) goto loc_82557B18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d458
	ctx.lr = 0x82557ACC;
	sub_8255D458(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255db20
	ctx.lr = 0x82557ADC;
	sub_8255DB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82557AE4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8255d680
	ctx.lr = 0x82557B04;
	sub_8255D680(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// ble cr6,0x82557b18
	if (!cr6.gt) goto loc_82557B18;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d458
	ctx.lr = 0x82557B18;
	sub_8255D458(ctx, base);
loc_82557B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557B20"))) PPC_WEAK_FUNC(sub_82557B20);
PPC_FUNC_IMPL(__imp__sub_82557B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// ble cr6,0x82557ba4
	if (!cr6.gt) goto loc_82557BA4;
loc_82557B5C:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// addi r5,r10,86
	ctx.r5.s64 = ctx.r10.s64 + 86;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bgt cr6,0x82557b5c
	if (cr6.gt) goto loc_82557B5C;
loc_82557BA4:
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82557bc8
	if (cr6.eq) goto loc_82557BC8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255da30
	ctx.lr = 0x82557BC8;
	sub_8255DA30(ctx, base);
loc_82557BC8:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8255dce0
	ctx.lr = 0x82557BDC;
	sub_8255DCE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557BF4"))) PPC_WEAK_FUNC(sub_82557BF4);
PPC_FUNC_IMPL(__imp__sub_82557BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557BF8"))) PPC_WEAK_FUNC(sub_82557BF8);
PPC_FUNC_IMPL(__imp__sub_82557BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82557C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r27,r28,52
	ctx.r27.s64 = ctx.r28.s64 + 52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// ble cr6,0x82557c58
	if (!cr6.gt) goto loc_82557C58;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r8,r11,16284
	ctx.r8.s64 = ctx.r11.s64 + 16284;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825533e8
	ctx.lr = 0x82557C54;
	sub_825533E8(ctx, base);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
loc_82557C58:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x82557c88
	if (!cr6.lt) goto loc_82557C88;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82557C6C:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82557c6c
	if (cr6.lt) goto loc_82557C6C;
loc_82557C88:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r7.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r6,5(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi r4,r6,30
	ctx.r4.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82557cd8
	if (cr6.eq) goto loc_82557CD8;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82557cd8
	if (cr6.eq) goto loc_82557CD8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// bl 0x825435e0
	ctx.lr = 0x82557CD8;
	sub_825435E0(ctx, base);
loc_82557CD8:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255da58
	ctx.lr = 0x82557CF0;
	sub_8255DA58(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82557d5c
	if (cr6.eq) goto loc_82557D5C;
	// addi r30,r26,50
	ctx.r30.s64 = ctx.r26.s64 + 50;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82557D20:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzu r6,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 & ctx.r28.u64;
	// bl 0x8255da30
	ctx.lr = 0x82557D48;
	sub_8255DA30(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82557d20
	if (cr6.lt) goto loc_82557D20;
loc_82557D5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557D64"))) PPC_WEAK_FUNC(sub_82557D64);
PPC_FUNC_IMPL(__imp__sub_82557D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557D68"))) PPC_WEAK_FUNC(sub_82557D68);
PPC_FUNC_IMPL(__imp__sub_82557D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82557D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825499b0
	ctx.lr = 0x82557D88;
	sub_825499B0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// sth r11,48(r28)
	PPC_STORE_U16(ctx.r28.u32 + 48, ctx.r11.u16);
	// stb r11,50(r28)
	PPC_STORE_U8(ctx.r28.u32 + 50, ctx.r11.u8);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r7,64(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// stb r8,75(r30)
	PPC_STORE_U8(ctx.r30.u32 + 75, ctx.r8.u8);
	// bl 0x82548ac8
	ctx.lr = 0x82557DF0;
	sub_82548AC8(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bgt cr6,0x82557e24
	if (cr6.gt) goto loc_82557E24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547268
	ctx.lr = 0x82557E24;
	sub_82547268(ctx, base);
loc_82557E24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,16
	cr6.compare<int32_t>(ctx.r7.s32, 16, xer);
	// bgt cr6,0x82557e5c
	if (cr6.gt) goto loc_82557E5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547268
	ctx.lr = 0x82557E5C;
	sub_82547268(ctx, base);
loc_82557E5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557E70"))) PPC_WEAK_FUNC(sub_82557E70);
PPC_FUNC_IMPL(__imp__sub_82557E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82557E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82557ee0
	if (cr6.eq) goto loc_82557EE0;
loc_82557E98:
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// addi r7,r11,86
	ctx.r7.s64 = ctx.r11.s64 + 86;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lbz r3,50(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82557e98
	if (!cr6.eq) goto loc_82557E98;
loc_82557EE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dc30
	ctx.lr = 0x82557EF0;
	sub_8255DC30(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82557f24
	if (cr6.gt) goto loc_82557F24;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x82557F20;
	sub_82553380(ctx, base);
	// b 0x82557f28
	goto loc_82557F28;
loc_82557F24:
	// bl 0x82553350
	ctx.lr = 0x82557F28;
	sub_82553350(ctx, base);
loc_82557F28:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82557f64
	if (cr6.gt) goto loc_82557F64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x82557F60;
	sub_82553380(ctx, base);
	// b 0x82557f68
	goto loc_82557F68;
loc_82557F64:
	// bl 0x82553350
	ctx.lr = 0x82557F68;
	sub_82553350(ctx, base);
loc_82557F68:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82557fa8
	if (cr6.gt) goto loc_82557FA8;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82553380
	ctx.lr = 0x82557FA4;
	sub_82553380(ctx, base);
	// b 0x82557fac
	goto loc_82557FAC;
loc_82557FA8:
	// bl 0x82553350
	ctx.lr = 0x82557FAC;
	sub_82553350(ctx, base);
loc_82557FAC:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82557fe4
	if (cr6.gt) goto loc_82557FE4;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x82557FE0;
	sub_82553380(ctx, base);
	// b 0x82557fe8
	goto loc_82557FE8;
loc_82557FE4:
	// bl 0x82553350
	ctx.lr = 0x82557FE8;
	sub_82553350(ctx, base);
loc_82557FE8:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lhz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8255803c
	if (cr6.gt) goto loc_8255803C;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x82558038;
	sub_82553380(ctx, base);
	// b 0x82558040
	goto loc_82558040;
loc_8255803C:
	// bl 0x82553350
	ctx.lr = 0x82558040;
	sub_82553350(ctx, base);
loc_82558040:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// lhz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
	// bgt cr6,0x8255807c
	if (cr6.gt) goto loc_8255807C;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x82558078;
	sub_82553380(ctx, base);
	// b 0x82558080
	goto loc_82558080;
loc_8255807C:
	// bl 0x82553350
	ctx.lr = 0x82558080;
	sub_82553350(ctx, base);
loc_82558080:
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r10.u32);
	// beq cr6,0x825580a8
	if (cr6.eq) goto loc_825580A8;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(ctx.r11.s32, 286, xer);
	// bne cr6,0x825580bc
	if (!cr6.eq) goto loc_825580BC;
loc_825580A8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82553760
	ctx.lr = 0x825580BC;
	sub_82553760(ctx, base);
loc_825580BC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825580D0"))) PPC_WEAK_FUNC(sub_825580D0);
PPC_FUNC_IMPL(__imp__sub_825580D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82554de0
	ctx.lr = 0x825580F0;
	sub_82554DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82558100;
	sub_82558F60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e2f8
	ctx.lr = 0x8255810C;
	sub_8255E2F8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(ctx.r11.s32, 93, xer);
	// beq cr6,0x82558144
	if (cr6.eq) goto loc_82558144;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82558124;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x82558138;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82558144;
	sub_82553758(ctx, base);
loc_82558144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255814C;
	sub_82554DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558164"))) PPC_WEAK_FUNC(sub_82558164);
PPC_FUNC_IMPL(__imp__sub_82558164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558168"))) PPC_WEAK_FUNC(sub_82558168);
PPC_FUNC_IMPL(__imp__sub_82558168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82558170;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,16056
	ctx.r28.s64 = ctx.r11.s64 + 16056;
	// cmpwi cr6,r10,285
	cr6.compare<int32_t>(ctx.r10.s32, 285, xer);
	// lwz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bne cr6,0x825581c8
	if (!cr6.eq) goto loc_825581C8;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// ori r4,r11,65533
	ctx.r4.u64 = ctx.r11.u64 | 65533;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x825581b8
	if (!cr6.gt) goto loc_825581B8;
	// addi r5,r28,252
	ctx.r5.s64 = ctx.r28.s64 + 252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x825581B8;
	sub_82557368(ctx, base);
loc_825581B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825574a0
	ctx.lr = 0x825581C4;
	sub_825574A0(ctx, base);
	// b 0x825581d4
	goto loc_825581D4;
loc_825581C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825580d0
	ctx.lr = 0x825581D4;
	sub_825580D0(ctx, base);
loc_825581D4:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,61
	cr6.compare<int32_t>(ctx.r10.s32, 61, xer);
	// beq cr6,0x82558214
	if (cr6.eq) goto loc_82558214;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x825581F8;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82558208;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82558214;
	sub_82553758(ctx, base);
loc_82558214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255821C;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e310
	ctx.lr = 0x82558228;
	sub_8255E310(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x8255823C;
	sub_82558F60(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e310
	ctx.lr = 0x82558248;
	sub_8255E310(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8255da30
	ctx.lr = 0x82558264;
	sub_8255DA30(ctx, base);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558270"))) PPC_WEAK_FUNC(sub_82558270);
PPC_FUNC_IMPL(__imp__sub_82558270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82558f60
	ctx.lr = 0x82558294;
	sub_82558F60(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r4,r11,65533
	ctx.r4.u64 = ctx.r11.u64 | 65533;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x825582b8
	if (!cr6.gt) goto loc_825582B8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r5,r11,16332
	ctx.r5.s64 = ctx.r11.s64 + 16332;
	// bl 0x82557368
	ctx.lr = 0x825582B8;
	sub_82557368(ctx, base);
loc_825582B8:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825582E8"))) PPC_WEAK_FUNC(sub_825582E8);
PPC_FUNC_IMPL(__imp__sub_825582E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825582F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255da30
	ctx.lr = 0x8255831C;
	sub_8255DA30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e1c8
	ctx.lr = 0x82558368;
	sub_8255E1C8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpwi cr6,r9,123
	cr6.compare<int32_t>(ctx.r9.s32, 123, xer);
	// addi r27,r11,16056
	ctx.r27.s64 = ctx.r11.s64 + 16056;
	// beq cr6,0x825583a4
	if (cr6.eq) goto loc_825583A4;
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82558388;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82558398;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x825583A4;
	sub_82553758(ctx, base);
loc_825583A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825583AC;
	sub_82554DE0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r28,r11,65533
	ctx.r28.u64 = ctx.r11.u64 | 65533;
loc_825583B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(ctx.r11.s32, 125, xer);
	// beq cr6,0x825584b4
	if (cr6.eq) goto loc_825584B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82558404
	if (cr6.eq) goto loc_82558404;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x825583D8;
	sub_8255E1C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// bne cr6,0x82558404
	if (!cr6.eq) goto loc_82558404;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8255da78
	ctx.lr = 0x82558400;
	sub_8255DA78(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_82558404:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// beq cr6,0x82558480
	if (cr6.eq) goto loc_82558480;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x82558460
	if (cr6.eq) goto loc_82558460;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82558f60
	ctx.lr = 0x82558428;
	sub_82558F60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// ble cr6,0x82558444
	if (!cr6.gt) goto loc_82558444;
	// addi r5,r27,276
	ctx.r5.s64 = ctx.r27.s64 + 276;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82557368
	ctx.lr = 0x82558444;
	sub_82557368(ctx, base);
loc_82558444:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// b 0x82558488
	goto loc_82558488;
loc_82558460:
	// bl 0x82554e60
	ctx.lr = 0x82558464;
	sub_82554E60(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82558484
	if (cr6.eq) goto loc_82558484;
	// bl 0x82558270
	ctx.lr = 0x8255847C;
	sub_82558270(ctx, base);
	// b 0x82558488
	goto loc_82558488;
loc_82558480:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82558484:
	// bl 0x82558168
	ctx.lr = 0x82558488;
	sub_82558168(ctx, base);
loc_82558488:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x825584a0
	if (!cr6.eq) goto loc_825584A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255849C;
	sub_82554DE0(ctx, base);
	// b 0x825583b4
	goto loc_825583B4;
loc_825584A0:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// bne cr6,0x825584b4
	if (!cr6.eq) goto loc_825584B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825584B0;
	sub_82554DE0(ctx, base);
	// b 0x825583b4
	goto loc_825583B4;
loc_825584B4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x825584C8;
	sub_825573E8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255854c
	if (cr6.eq) goto loc_8255854C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82558518
	if (cr6.eq) goto loc_82558518;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x82558518
	if (cr6.eq) goto loc_82558518;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825584fc
	if (cr6.eq) goto loc_825584FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x825584FC;
	sub_8255E1C8(ctx, base);
loc_825584FC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8255da78
	ctx.lr = 0x82558514;
	sub_8255DA78(ctx, base);
	// b 0x8255854c
	goto loc_8255854C;
loc_82558518:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255d680
	ctx.lr = 0x82558528;
	sub_8255D680(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8255da78
	ctx.lr = 0x82558540;
	sub_8255DA78(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_8255854C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82540c18
	ctx.lr = 0x82558560;
	sub_82540C18(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwimi r10,r3,23,0,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 23) & 0xFF800000) | (ctx.r10.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82540c18
	ctx.lr = 0x8255857C;
	sub_82540C18(ctx, base);
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwimi r8,r3,14,9,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 14) & 0x7FC000) | (ctx.r8.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r8,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558590"))) PPC_WEAK_FUNC(sub_82558590);
PPC_FUNC_IMPL(__imp__sub_82558590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82558598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stb r29,74(r26)
	PPC_STORE_U8(ctx.r26.u32 + 74, ctx.r29.u8);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// beq cr6,0x82558704
	if (cr6.eq) goto loc_82558704;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r25,7
	ctx.r25.s64 = 7;
	// addi r27,r11,16056
	ctx.r27.s64 = ctx.r11.s64 + 16056;
loc_825585C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,279
	cr6.compare<int32_t>(ctx.r11.s32, 279, xer);
	// beq cr6,0x82558640
	if (cr6.eq) goto loc_82558640;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x825585ec
	if (cr6.eq) goto loc_825585EC;
	// addi r4,r27,304
	ctx.r4.s64 = ctx.r27.s64 + 304;
	// bl 0x82553758
	ctx.lr = 0x825585E8;
	sub_82553758(ctx, base);
	// b 0x825586e0
	goto loc_825586E0;
loc_825585EC:
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x825585F4;
	sub_82554DE0(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x8255861c
	if (!cr6.gt) goto loc_8255861C;
	// addi r5,r27,164
	ctx.r5.s64 = ctx.r27.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x8255861C;
	sub_82557368(ctx, base);
loc_8255861C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82558628;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
	// b 0x825586dc
	goto loc_825586DC;
loc_82558640:
	// bl 0x82554de0
	ctx.lr = 0x82558644;
	sub_82554DE0(ctx, base);
	// addi r4,r27,300
	ctx.r4.s64 = ctx.r27.s64 + 300;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553760
	ctx.lr = 0x82558654;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x825586b8
	if (!cr6.gt) goto loc_825586B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82558698
	if (!cr6.eq) goto loc_82558698;
	// addi r6,r27,164
	ctx.r6.s64 = ctx.r27.s64 + 164;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x82558694;
	sub_82541118(ctx, base);
	// b 0x825586a8
	goto loc_825586A8;
loc_82558698:
	// addi r7,r27,164
	ctx.r7.s64 = ctx.r27.s64 + 164;
	// addi r4,r27,52
	ctx.r4.s64 = ctx.r27.s64 + 52;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x825586A8;
	sub_82541118(ctx, base);
loc_825586A8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825536a0
	ctx.lr = 0x825586B8;
	sub_825536A0(ctx, base);
loc_825586B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x825586C4;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
	// stb r25,74(r26)
	PPC_STORE_U8(ctx.r26.u32 + 74, ctx.r25.u8);
loc_825586DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_825586E0:
	// lbz r11,74(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82558704
	if (!cr6.eq) goto loc_82558704;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x82558704
	if (!cr6.eq) goto loc_82558704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558700;
	sub_82554DE0(ctx, base);
	// b 0x825585c8
	goto loc_825585C8;
loc_82558704:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557688
	ctx.lr = 0x82558710;
	sub_82557688(ctx, base);
	// lbz r11,74(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 74);
	// lbz r10,50(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 50);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r8,73(r26)
	PPC_STORE_U8(ctx.r26.u32 + 73, ctx.r8.u8);
	// lbz r4,50(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 50);
	// bl 0x8255d458
	ctx.lr = 0x82558730;
	sub_8255D458(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558738"))) PPC_WEAK_FUNC(sub_82558738);
PPC_FUNC_IMPL(__imp__sub_82558738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82558740;
	__savegprlr_27(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82557d68
	ctx.lr = 0x8255875C;
	sub_82557D68(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r30,r11,16056
	ctx.r30.s64 = ctx.r11.s64 + 16056;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,40
	cr6.compare<int32_t>(ctx.r10.s32, 40, xer);
	// beq cr6,0x825587a0
	if (cr6.eq) goto loc_825587A0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82558784;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82558794;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x825587A0;
	sub_82553758(ctx, base);
loc_825587A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825587A8;
	sub_82554DE0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x82558810
	if (cr6.eq) goto loc_82558810;
	// addi r4,r30,332
	ctx.r4.s64 = ctx.r30.s64 + 332;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553760
	ctx.lr = 0x825587C0;
	sub_82553760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82557618
	ctx.lr = 0x825587D0;
	sub_82557618(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,50(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 50);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,50(r9)
	PPC_STORE_U8(ctx.r9.u32 + 50, ctx.r11.u8);
	// addi r5,r11,85
	ctx.r5.s64 = ctx.r11.s64 + 85;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82558810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558590
	ctx.lr = 0x82558818;
	sub_82558590(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// beq cr6,0x8255884c
	if (cr6.eq) goto loc_8255884C;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82558830;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82558840;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x8255884C;
	sub_82553758(ctx, base);
loc_8255884C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558854;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a760
	ctx.lr = 0x8255885C;
	sub_8255A760(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,265
	ctx.r5.s64 = 265;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// bl 0x825573e8
	ctx.lr = 0x8255887C;
	sub_825573E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557e70
	ctx.lr = 0x82558884;
	sub_82557E70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557bf8
	ctx.lr = 0x82558894;
	sub_82557BF8(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255889C"))) PPC_WEAK_FUNC(sub_8255889C);
PPC_FUNC_IMPL(__imp__sub_8255889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825588A0"))) PPC_WEAK_FUNC(sub_825588A0);
PPC_FUNC_IMPL(__imp__sub_825588A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825588A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82558f60
	ctx.lr = 0x825588C0;
	sub_82558F60(ctx, base);
loc_825588C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x825588f8
	if (!cr6.eq) goto loc_825588F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825588D4;
	sub_82554DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e1c8
	ctx.lr = 0x825588E0;
	sub_8255E1C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x825588F0;
	sub_82558F60(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x825588c0
	goto loc_825588C0;
loc_825588F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558904"))) PPC_WEAK_FUNC(sub_82558904);
PPC_FUNC_IMPL(__imp__sub_82558904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558908"))) PPC_WEAK_FUNC(sub_82558908);
PPC_FUNC_IMPL(__imp__sub_82558908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82558910;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// beq cr6,0x82558994
	if (cr6.eq) goto loc_82558994;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(ctx.r11.s32, 123, xer);
	// beq cr6,0x82558984
	if (cr6.eq) goto loc_82558984;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(ctx.r11.s32, 286, xer);
	// beq cr6,0x82558958
	if (cr6.eq) goto loc_82558958;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// bl 0x82553758
	ctx.lr = 0x82558950;
	sub_82553758(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82558958:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8255d610
	ctx.lr = 0x82558964;
	sub_8255D610(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82554de0
	ctx.lr = 0x82558980;
	sub_82554DE0(ctx, base);
	// b 0x82558a04
	goto loc_82558A04;
loc_82558984:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825582e8
	ctx.lr = 0x82558990;
	sub_825582E8(ctx, base);
	// b 0x82558a04
	goto loc_82558A04;
loc_82558994:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// beq cr6,0x825589b4
	if (cr6.eq) goto loc_825589B4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x82553758
	ctx.lr = 0x825589B4;
	sub_82553758(ctx, base);
loc_825589B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825589BC;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(ctx.r11.s32, 41, xer);
	// bne cr6,0x825589d4
	if (!cr6.eq) goto loc_825589D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x825589f0
	goto loc_825589F0;
loc_825589D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825588a0
	ctx.lr = 0x825589E0;
	sub_825588A0(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d680
	ctx.lr = 0x825589F0;
	sub_8255D680(ctx, base);
loc_825589F0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x82558A04;
	sub_825573E8(ctx, base);
loc_82558A04:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82558a40
	if (cr6.eq) goto loc_82558A40;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x82558a40
	if (cr6.eq) goto loc_82558A40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82558a30
	if (cr6.eq) goto loc_82558A30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x82558A30;
	sub_8255E1C8(ctx, base);
loc_82558A30:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82558a44
	goto loc_82558A44;
loc_82558A40:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82558A44:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255da30
	ctx.lr = 0x82558A5C;
	sub_8255DA30(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8255d928
	ctx.lr = 0x82558A7C;
	sub_8255D928(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558A8C"))) PPC_WEAK_FUNC(sub_82558A8C);
PPC_FUNC_IMPL(__imp__sub_82558A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558A90"))) PPC_WEAK_FUNC(sub_82558A90);
PPC_FUNC_IMPL(__imp__sub_82558A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82558A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// beq cr6,0x82558ad8
	if (cr6.eq) goto loc_82558AD8;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x82558acc
	if (cr6.eq) goto loc_82558ACC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,16476
	ctx.r4.s64 = ctx.r11.s64 + 16476;
	// bl 0x82553758
	ctx.lr = 0x82558AC8;
	sub_82553758(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558ACC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825579e8
	ctx.lr = 0x82558AD4;
	sub_825579E8(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558AD8:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82554de0
	ctx.lr = 0x82558AE0;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82558AF0;
	sub_82558F60(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x82558B04;
	sub_825573E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255dcf8
	ctx.lr = 0x82558B10;
	sub_8255DCF8(ctx, base);
loc_82558B10:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// bgt cr6,0x82558bd0
	if (cr6.gt) goto loc_82558BD0;
	// beq cr6,0x82558ba4
	if (cr6.eq) goto loc_82558BA4;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// beq cr6,0x82558be0
	if (cr6.eq) goto loc_82558BE0;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x82558b6c
	if (cr6.eq) goto loc_82558B6C;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// bne cr6,0x82558bfc
	if (!cr6.eq) goto loc_82558BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558B40;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825574a0
	ctx.lr = 0x82558B4C;
	sub_825574A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e590
	ctx.lr = 0x82558B5C;
	sub_8255E590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558908
	ctx.lr = 0x82558B68;
	sub_82558908(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558B6C:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8255e270
	ctx.lr = 0x82558B7C;
	sub_8255E270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558B84;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825574a0
	ctx.lr = 0x82558B90;
	sub_825574A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8255e990
	ctx.lr = 0x82558BA0;
	sub_8255E990(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558BA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e270
	ctx.lr = 0x82558BB0;
	sub_8255E270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825580d0
	ctx.lr = 0x82558BBC;
	sub_825580D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e990
	ctx.lr = 0x82558BCC;
	sub_8255E990(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558BD0:
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(ctx.r11.s32, 123, xer);
	// beq cr6,0x82558be0
	if (cr6.eq) goto loc_82558BE0;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(ctx.r11.s32, 286, xer);
	// bne cr6,0x82558bfc
	if (!cr6.eq) goto loc_82558BFC;
loc_82558BE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x82558BEC;
	sub_8255E1C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558908
	ctx.lr = 0x82558BF8;
	sub_82558908(ctx, base);
	// b 0x82558b10
	goto loc_82558B10;
loc_82558BFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558C04"))) PPC_WEAK_FUNC(sub_82558C04);
PPC_FUNC_IMPL(__imp__sub_82558C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558C08"))) PPC_WEAK_FUNC(sub_82558C08);
PPC_FUNC_IMPL(__imp__sub_82558C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82558C10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,275
	cr6.compare<int32_t>(ctx.r11.s32, 275, xer);
	// bgt cr6,0x82558cc4
	if (cr6.gt) goto loc_82558CC4;
	// beq cr6,0x82558cb0
	if (cr6.eq) goto loc_82558CB0;
	// cmpwi cr6,r11,265
	cr6.compare<int32_t>(ctx.r11.s32, 265, xer);
	// bgt cr6,0x82558c94
	if (cr6.gt) goto loc_82558C94;
	// beq cr6,0x82558c70
	if (cr6.eq) goto loc_82558C70;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(ctx.r11.s32, 123, xer);
	// beq cr6,0x82558c5c
	if (cr6.eq) goto loc_82558C5C;
	// cmpwi cr6,r11,263
	cr6.compare<int32_t>(ctx.r11.s32, 263, xer);
	// bne cr6,0x82558cdc
	if (!cr6.eq) goto loc_82558CDC;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// b 0x82558d98
	goto loc_82558D98;
loc_82558C5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825582e8
	ctx.lr = 0x82558C68;
	sub_825582E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82558C70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558C78;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82558738
	ctx.lr = 0x82558C8C;
	sub_82558738(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82558C94:
	// cmpwi cr6,r11,269
	cr6.compare<int32_t>(ctx.r11.s32, 269, xer);
	// bne cr6,0x82558cdc
	if (!cr6.eq) goto loc_82558CDC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82558d98
	goto loc_82558D98;
loc_82558CB0:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82558d98
	goto loc_82558D98;
loc_82558CC4:
	// cmpwi cr6,r11,279
	cr6.compare<int32_t>(ctx.r11.s32, 279, xer);
	// beq cr6,0x82558d3c
	if (cr6.eq) goto loc_82558D3C;
	// cmpwi cr6,r11,284
	cr6.compare<int32_t>(ctx.r11.s32, 284, xer);
	// beq cr6,0x82558d08
	if (cr6.eq) goto loc_82558D08;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(ctx.r11.s32, 286, xer);
	// beq cr6,0x82558cf0
	if (cr6.eq) goto loc_82558CF0;
loc_82558CDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82558a90
	ctx.lr = 0x82558CE8;
	sub_82558A90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82558CF0:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x8255d610
	ctx.lr = 0x82558CFC;
	sub_8255D610(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82558d94
	goto loc_82558D94;
loc_82558D08:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfd f0,24(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// stfd f0,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f0.u64);
	// bl 0x82554de0
	ctx.lr = 0x82558D34;
	sub_82554DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82558D3C:
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82558d60
	if (!cr6.eq) goto loc_82558D60;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16496
	ctx.r4.s64 = ctx.r11.s64 + 16496;
	// bl 0x82553758
	ctx.lr = 0x82558D60;
	sub_82553758(ctx, base);
loc_82558D60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r9.u8);
	// bl 0x8255da30
	ctx.lr = 0x82558D8C;
	sub_8255DA30(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82558D94:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82558D98:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82554de0
	ctx.lr = 0x82558DAC;
	sub_82554DE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558DB4"))) PPC_WEAK_FUNC(sub_82558DB4);
PPC_FUNC_IMPL(__imp__sub_82558DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558DB8"))) PPC_WEAK_FUNC(sub_82558DB8);
PPC_FUNC_IMPL(__imp__sub_82558DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// bgt cr6,0x82558e90
	if (cr6.gt) goto loc_82558E90;
	// beq cr6,0x82558e88
	if (cr6.eq) goto loc_82558E88;
	// addi r11,r3,-37
	ctx.r11.s64 = ctx.r3.s64 + -37;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgt cr6,0x82558f58
	if (cr6.gt) goto loc_82558F58;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29208
	ctx.r12.s64 = ctx.r12.s64 + -29208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82558E70;
	case 1:
		goto loc_82558F58;
	case 2:
		goto loc_82558F58;
	case 3:
		goto loc_82558F58;
	case 4:
		goto loc_82558F58;
	case 5:
		goto loc_82558E60;
	case 6:
		goto loc_82558E50;
	case 7:
		goto loc_82558F58;
	case 8:
		goto loc_82558E58;
	case 9:
		goto loc_82558F58;
	case 10:
		goto loc_82558E68;
	case 11:
		goto loc_82558F58;
	case 12:
		goto loc_82558F58;
	case 13:
		goto loc_82558F58;
	case 14:
		goto loc_82558F58;
	case 15:
		goto loc_82558F58;
	case 16:
		goto loc_82558F58;
	case 17:
		goto loc_82558F58;
	case 18:
		goto loc_82558F58;
	case 19:
		goto loc_82558F58;
	case 20:
		goto loc_82558F58;
	case 21:
		goto loc_82558F58;
	case 22:
		goto loc_82558F58;
	case 23:
		goto loc_82558E78;
	case 24:
		goto loc_82558F58;
	case 25:
		goto loc_82558E80;
	default:
		return;
	}
	// lwz r18,-29072(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29072);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-29088(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29088);
	// lwz r18,-29104(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29104);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-29096(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29096);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-29080(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29080);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-29064(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29064);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-29056(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -29056);
loc_82558E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82558E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82558E60:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82558E68:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82558E70:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82558E78:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82558E80:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_82558E88:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82558E90:
	// addi r11,r3,-257
	ctx.r11.s64 = ctx.r3.s64 + -257;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x82558f58
	if (cr6.gt) goto loc_82558F58;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29004
	ctx.r12.s64 = ctx.r12.s64 + -29004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82558F48;
	case 1:
		goto loc_82558F58;
	case 2:
		goto loc_82558F58;
	case 3:
		goto loc_82558F58;
	case 4:
		goto loc_82558F58;
	case 5:
		goto loc_82558F58;
	case 6:
		goto loc_82558F58;
	case 7:
		goto loc_82558F58;
	case 8:
		goto loc_82558F58;
	case 9:
		goto loc_82558F58;
	case 10:
		goto loc_82558F58;
	case 11:
		goto loc_82558F58;
	case 12:
		goto loc_82558F58;
	case 13:
		goto loc_82558F58;
	case 14:
		goto loc_82558F50;
	case 15:
		goto loc_82558F58;
	case 16:
		goto loc_82558F58;
	case 17:
		goto loc_82558F58;
	case 18:
		goto loc_82558F58;
	case 19:
		goto loc_82558F58;
	case 20:
		goto loc_82558F58;
	case 21:
		goto loc_82558F20;
	case 22:
		goto loc_82558F58;
	case 23:
		goto loc_82558F30;
	case 24:
		goto loc_82558F40;
	case 25:
		goto loc_82558F38;
	case 26:
		goto loc_82558F28;
	default:
		return;
	}
	// lwz r18,-28856(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28856);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28848(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28848);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28896(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28896);
	// lwz r18,-28840(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28840);
	// lwz r18,-28880(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28880);
	// lwz r18,-28864(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28864);
	// lwz r18,-28872(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28872);
	// lwz r18,-28888(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -28888);
loc_82558F20:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82558F28:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82558F30:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82558F38:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82558F40:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82558F48:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82558F50:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_82558F58:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558F60"))) PPC_WEAK_FUNC(sub_82558F60);
PPC_FUNC_IMPL(__imp__sub_82558F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82558F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// cmplwi cr6,r9,200
	cr6.compare<uint32_t>(ctx.r9.u32, 200, xer);
	// ble cr6,0x82558fa4
	if (!cr6.gt) goto loc_82558FA4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16248
	ctx.r4.s64 = ctx.r11.s64 + 16248;
	// bl 0x825536a0
	ctx.lr = 0x82558FA4;
	sub_825536A0(ctx, base);
loc_82558FA4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x82558fd0
	if (cr6.eq) goto loc_82558FD0;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x82558fc8
	if (cr6.eq) goto loc_82558FC8;
	// cmpwi cr6,r11,270
	cr6.compare<int32_t>(ctx.r11.s32, 270, xer);
	// bne cr6,0x82559000
	if (!cr6.eq) goto loc_82559000;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82558fd4
	goto loc_82558FD4;
loc_82558FC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82558fd4
	goto loc_82558FD4;
loc_82558FD0:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82558FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82558FDC;
	sub_82554DE0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82558FEC;
	sub_82558F60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255ec18
	ctx.lr = 0x82558FFC;
	sub_8255EC18(ctx, base);
	// b 0x8255900c
	goto loc_8255900C;
loc_82559000:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558c08
	ctx.lr = 0x8255900C;
	sub_82558C08(ctx, base);
loc_8255900C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82558db8
	ctx.lr = 0x82559014;
	sub_82558DB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,15
	cr6.compare<int32_t>(ctx.r3.s32, 15, xer);
	// beq cr6,0x82559084
	if (cr6.eq) goto loc_82559084;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,1860
	ctx.r28.s64 = ctx.r11.s64 + 1860;
loc_82559028:
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x82559084
	if (!cr6.gt) goto loc_82559084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559040;
	sub_82554DE0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255ece8
	ctx.lr = 0x82559050;
	sub_8255ECE8(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82558f60
	ctx.lr = 0x82559064;
	sub_82558F60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255ee48
	ctx.lr = 0x8255907C;
	sub_8255EE48(ctx, base);
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(ctx.r30.s32, 15, xer);
	// bne cr6,0x82559028
	if (!cr6.eq) goto loc_82559028;
loc_82559084:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825590A4"))) PPC_WEAK_FUNC(sub_825590A4);
PPC_FUNC_IMPL(__imp__sub_825590A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825590A8"))) PPC_WEAK_FUNC(sub_825590A8);
PPC_FUNC_IMPL(__imp__sub_825590A8) {
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
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x8255a760
	ctx.lr = 0x825590EC;
	sub_8255A760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x825590F4;
	sub_82557B20(ctx, base);
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

__attribute__((alias("__imp__sub_82559108"))) PPC_WEAK_FUNC(sub_82559108);
PPC_FUNC_IMPL(__imp__sub_82559108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82559110;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,16056
	ctx.r27.s64 = ctx.r11.s64 + 16056;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r26,r4,8
	ctx.r26.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x82559140
	if (cr6.lt) goto loc_82559140;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// ble cr6,0x8255914c
	if (!cr6.gt) goto loc_8255914C;
loc_82559140:
	// addi r4,r27,484
	ctx.r4.s64 = ctx.r27.s64 + 484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x8255914C;
	sub_82553758(ctx, base);
loc_8255914C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x82559234
	if (!cr6.eq) goto loc_82559234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559160;
	sub_82554DE0(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558a90
	ctx.lr = 0x82559170;
	sub_82558A90(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82559200
	if (!cr6.eq) goto loc_82559200;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
loc_8255918C:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r8,9
	cr6.compare<int32_t>(ctx.r8.s32, 9, xer);
	// bne cr6,0x825591c8
	if (!cr6.eq) goto loc_825591C8;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x825591b0
	if (!cr6.eq) goto loc_825591B0;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_825591B0:
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x825591c8
	if (!cr6.eq) goto loc_825591C8;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_825591C8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255918c
	if (!cr6.eq) goto loc_8255918C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82559200
	if (cr6.eq) goto loc_82559200;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255da30
	ctx.lr = 0x825591F4;
	sub_8255DA30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255d458
	ctx.lr = 0x82559200;
	sub_8255D458(ctx, base);
loc_82559200:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// subfic r4,r10,200
	xer.ca = ctx.r10.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r10.s64;
	// cmpw cr6,r28,r4
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, xer);
	// ble cr6,0x82559220
	if (!cr6.gt) goto loc_82559220;
	// addi r5,r27,500
	ctx.r5.s64 = ctx.r27.s64 + 500;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82557368
	ctx.lr = 0x82559220;
	sub_82557368(ctx, base);
loc_82559220:
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559108
	ctx.lr = 0x82559230;
	sub_82559108(ctx, base);
	// b 0x825592b4
	goto loc_825592B4;
loc_82559234:
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// beq cr6,0x82559264
	if (cr6.eq) goto loc_82559264;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559248;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82559258;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559264;
	sub_82553758(ctx, base);
loc_82559264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255926C;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825588a0
	ctx.lr = 0x82559278;
	sub_825588A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// beq cr6,0x825592ec
	if (cr6.eq) goto loc_825592EC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557a78
	ctx.lr = 0x82559298;
	sub_82557A78(ctx, base);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// ble cr6,0x825592b4
	if (!cr6.gt) goto loc_825592B4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
loc_825592B4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8255e438
	ctx.lr = 0x825592E4;
	sub_8255E438(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825592EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255d710
	ctx.lr = 0x825592F8;
	sub_8255D710(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e438
	ctx.lr = 0x82559308;
	sub_8255E438(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559310"))) PPC_WEAK_FUNC(sub_82559310);
PPC_FUNC_IMPL(__imp__sub_82559310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82559318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82559350
	if (cr6.eq) goto loc_82559350;
loc_82559330:
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255935c
	if (!cr6.eq) goto loc_8255935C;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82559330
	if (!cr6.eq) goto loc_82559330;
loc_82559350:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,16580
	ctx.r4.s64 = ctx.r11.s64 + 16580;
	// bl 0x82553758
	ctx.lr = 0x8255935C;
	sub_82553758(ctx, base);
loc_8255935C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8255937c
	if (cr6.eq) goto loc_8255937C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255da30
	ctx.lr = 0x8255937C;
	sub_8255DA30(ctx, base);
loc_8255937C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x82559384;
	sub_8255DBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255d390
	ctx.lr = 0x82559394;
	sub_8255D390(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255939C"))) PPC_WEAK_FUNC(sub_8255939C);
PPC_FUNC_IMPL(__imp__sub_8255939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825593A0"))) PPC_WEAK_FUNC(sub_825593A0);
PPC_FUNC_IMPL(__imp__sub_825593A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825593A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82554de0
	ctx.lr = 0x825593BC;
	sub_82554DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d0b8
	ctx.lr = 0x825593C4;
	sub_8255D0B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x825593D8;
	sub_82558F60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825593ec
	if (!cr6.eq) goto loc_825593EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_825593EC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e778
	ctx.lr = 0x825593F8;
	sub_8255E778(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r7,259
	cr6.compare<int32_t>(ctx.r7.s32, 259, xer);
	// beq cr6,0x82559464
	if (cr6.eq) goto loc_82559464;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559444;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x82559458;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559464;
	sub_82553758(ctx, base);
loc_82559464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255946C;
	sub_82554DE0(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r10,50(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 50);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r29.u8);
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// bl 0x8255a760
	ctx.lr = 0x8255949C;
	sub_8255A760(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82557b20
	ctx.lr = 0x825594A4;
	sub_82557B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x825594AC;
	sub_8255DBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8255f110
	ctx.lr = 0x825594BC;
	sub_8255F110(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,277
	ctx.r5.s64 = 277;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x825594D0;
	sub_825573E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557b20
	ctx.lr = 0x825594D8;
	sub_82557B20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dce0
	ctx.lr = 0x825594E4;
	sub_8255DCE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825594EC"))) PPC_WEAK_FUNC(sub_825594EC);
PPC_FUNC_IMPL(__imp__sub_825594EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825594F0"))) PPC_WEAK_FUNC(sub_825594F0);
PPC_FUNC_IMPL(__imp__sub_825594F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825594F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d0b8
	ctx.lr = 0x82559510;
	sub_8255D0B8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r9,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r9.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbz r7,50(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// lbz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// bl 0x82554de0
	ctx.lr = 0x82559570;
	sub_82554DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a760
	ctx.lr = 0x82559578;
	sub_8255A760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,276
	ctx.r4.s64 = 276;
	// bl 0x825573e8
	ctx.lr = 0x8255958C;
	sub_825573E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82558f60
	ctx.lr = 0x8255959C;
	sub_82558F60(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825595b0
	if (!cr6.eq) goto loc_825595B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_825595B0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8255e778
	ctx.lr = 0x825595BC;
	sub_8255E778(ctx, base);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x825595dc
	if (!cr6.eq) goto loc_825595DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x825595D4;
	sub_82557B20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82559604
	goto loc_82559604;
loc_825595DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82559310
	ctx.lr = 0x825595E4;
	sub_82559310(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8255dce0
	ctx.lr = 0x825595F0;
	sub_8255DCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x825595F8;
	sub_82557B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x82559600;
	sub_8255DBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82559604:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x8255f110
	ctx.lr = 0x82559610;
	sub_8255F110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x82559618;
	sub_82557B20(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559620"))) PPC_WEAK_FUNC(sub_82559620);
PPC_FUNC_IMPL(__imp__sub_82559620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82559628;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r10.u8);
loc_8255965C:
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// bdnz 0x8255965c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255965C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(ctx.r11.s32, 259, xer);
	// beq cr6,0x825596d0
	if (cr6.eq) goto loc_825596D0;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553610
	ctx.lr = 0x825596B0;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x825596C4;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553758
	ctx.lr = 0x825596D0;
	sub_82553758(ctx, base);
loc_825596D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82554de0
	ctx.lr = 0x825596D8;
	sub_82554DE0(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825596fc
	if (cr6.eq) goto loc_825596FC;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8255da58
	ctx.lr = 0x825596F8;
	sub_8255DA58(ctx, base);
	// b 0x82559700
	goto loc_82559700;
loc_825596FC:
	// bl 0x8255dbc8
	ctx.lr = 0x82559700;
	sub_8255DBC8(ctx, base);
loc_82559700:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82557688
	ctx.lr = 0x8255973C;
	sub_82557688(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d458
	ctx.lr = 0x82559748;
	sub_8255D458(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// lwz r30,48(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lbz r7,50(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r29.u8);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// bl 0x8255a760
	ctx.lr = 0x82559778;
	sub_8255A760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557b20
	ctx.lr = 0x82559780;
	sub_82557B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x82559788;
	sub_82557B20(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dce0
	ctx.lr = 0x82559794;
	sub_8255DCE0(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825597b8
	if (cr6.eq) goto loc_825597B8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,31
	ctx.r4.s64 = 31;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// bl 0x8255da58
	ctx.lr = 0x825597B4;
	sub_8255DA58(ctx, base);
	// b 0x825597c8
	goto loc_825597C8;
loc_825597B8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x8255da30
	ctx.lr = 0x825597C8;
	sub_8255DA30(ctx, base);
loc_825597C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d928
	ctx.lr = 0x825597D8;
	sub_8255D928(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x825597f8
	if (cr6.eq) goto loc_825597F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f110
	ctx.lr = 0x825597F0;
	sub_8255F110(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_825597F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x82559800;
	sub_8255DBC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255f110
	ctx.lr = 0x82559810;
	sub_8255F110(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559818"))) PPC_WEAK_FUNC(sub_82559818);
PPC_FUNC_IMPL(__imp__sub_82559818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82559820;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r11,16056
	ctx.r29.s64 = ctx.r11.s64 + 16056;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r29,544
	ctx.r4.s64 = ctx.r29.s64 + 544;
	// lwz r24,36(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82553760
	ctx.lr = 0x8255984C;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x82559874
	if (!cr6.gt) goto loc_82559874;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559874;
	sub_82557368(ctx, base);
loc_82559874:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559880;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// addi r4,r29,556
	ctx.r4.s64 = ctx.r29.s64 + 556;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// bl 0x82553760
	ctx.lr = 0x825598A4;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x825598cc
	if (!cr6.gt) goto loc_825598CC;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x825598CC;
	sub_82557368(ctx, base);
loc_825598CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x825598D8;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,87
	ctx.r9.s64 = ctx.r11.s64 + 87;
	// addi r4,r29,568
	ctx.r4.s64 = ctx.r29.s64 + 568;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// bl 0x82553760
	ctx.lr = 0x825598FC;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x82559924
	if (!cr6.gt) goto loc_82559924;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559924;
	sub_82557368(ctx, base);
loc_82559924:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559930;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x82559964
	if (!cr6.gt) goto loc_82559964;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559964;
	sub_82557368(ctx, base);
loc_82559964:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559970;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r9,r11,89
	ctx.r9.s64 = ctx.r11.s64 + 89;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r7,61
	cr6.compare<int32_t>(ctx.r7.s32, 61, xer);
	// beq cr6,0x825599b4
	if (cr6.eq) goto loc_825599B4;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559998;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x825599A8;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x825599B4;
	sub_82553758(ctx, base);
loc_825599B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x825599BC;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x825599CC;
	sub_82558F60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e1c8
	ctx.lr = 0x825599D8;
	sub_8255E1C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// beq cr6,0x82559a0c
	if (cr6.eq) goto loc_82559A0C;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x825599F0;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82559A00;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559A0C;
	sub_82553758(ctx, base);
loc_82559A0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559A14;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82559A24;
	sub_82558F60(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e1c8
	ctx.lr = 0x82559A30;
	sub_8255E1C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x82559a64
	if (!cr6.eq) goto loc_82559A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559A44;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82559A54;
	sub_82558F60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e1c8
	ctx.lr = 0x82559A60;
	sub_8255E1C8(ctx, base);
	// b 0x82559a94
	goto loc_82559A94;
loc_82559A64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x8255d648
	ctx.lr = 0x82559A74;
	sub_8255D648(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,36(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8255da58
	ctx.lr = 0x82559A88;
	sub_8255DA58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8255d458
	ctx.lr = 0x82559A94;
	sub_8255D458(ctx, base);
loc_82559A94:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559620
	ctx.lr = 0x82559AAC;
	sub_82559620(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559AB4"))) PPC_WEAK_FUNC(sub_82559AB4);
PPC_FUNC_IMPL(__imp__sub_82559AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559AB8"))) PPC_WEAK_FUNC(sub_82559AB8);
PPC_FUNC_IMPL(__imp__sub_82559AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82559AC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r29,r11,16056
	ctx.r29.s64 = ctx.r11.s64 + 16056;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r29,580
	ctx.r4.s64 = ctx.r29.s64 + 580;
	// lwz r25,36(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82553760
	ctx.lr = 0x82559AE8;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x82559b10
	if (!cr6.gt) goto loc_82559B10;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559B10;
	sub_82557368(ctx, base);
loc_82559B10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559B1C;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// addi r4,r29,596
	ctx.r4.s64 = ctx.r29.s64 + 596;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// bl 0x82553760
	ctx.lr = 0x82559B40;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x82559b68
	if (!cr6.gt) goto loc_82559B68;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559B68;
	sub_82557368(ctx, base);
loc_82559B68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559B74;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,87
	ctx.r9.s64 = ctx.r11.s64 + 87;
	// addi r4,r29,608
	ctx.r4.s64 = ctx.r29.s64 + 608;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// bl 0x82553760
	ctx.lr = 0x82559B98;
	sub_82553760(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x82559bc0
	if (!cr6.gt) goto loc_82559BC0;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559BC0;
	sub_82557368(ctx, base);
loc_82559BC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559BCC;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x82559c00
	if (!cr6.gt) goto loc_82559C00;
	// addi r5,r29,164
	ctx.r5.s64 = ctx.r29.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557368
	ctx.lr = 0x82559C00;
	sub_82557368(ctx, base);
loc_82559C00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559C0C;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r9,r11,89
	ctx.r9.s64 = ctx.r11.s64 + 89;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u16);
loc_82559C20:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x82559d00
	if (!cr6.eq) goto loc_82559D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559C34;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x82559c68
	if (cr6.eq) goto loc_82559C68;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559C4C;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82559C5C;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559C68;
	sub_82553758(ctx, base);
loc_82559C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x82559C74;
	sub_82554DE0(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x82559cd4
	if (!cr6.gt) goto loc_82559CD4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82559cb4
	if (!cr6.eq) goto loc_82559CB4;
	// addi r6,r29,164
	ctx.r6.s64 = ctx.r29.s64 + 164;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x82559CB0;
	sub_82541118(ctx, base);
	// b 0x82559cc4
	goto loc_82559CC4;
loc_82559CB4:
	// addi r7,r29,164
	ctx.r7.s64 = ctx.r29.s64 + 164;
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x82559CC4;
	sub_82541118(ctx, base);
loc_82559CC4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825536a0
	ctx.lr = 0x82559CD4;
	sub_825536A0(ctx, base);
loc_82559CD4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557520
	ctx.lr = 0x82559CE0;
	sub_82557520(ctx, base);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u16);
	// b 0x82559c20
	goto loc_82559C20;
loc_82559D00:
	// cmpwi cr6,r11,267
	cr6.compare<int32_t>(ctx.r11.s32, 267, xer);
	// beq cr6,0x82559d30
	if (cr6.eq) goto loc_82559D30;
	// li r4,267
	ctx.r4.s64 = 267;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559D14;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82559D24;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559D30;
	sub_82553758(ctx, base);
loc_82559D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559D38;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825588a0
	ctx.lr = 0x82559D48;
	sub_825588A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82557a78
	ctx.lr = 0x82559D5C;
	sub_82557A78(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8255d3f0
	ctx.lr = 0x82559D68;
	sub_8255D3F0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r28,-3
	ctx.r6.s64 = ctx.r28.s64 + -3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559620
	ctx.lr = 0x82559D80;
	sub_82559620(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559D88"))) PPC_WEAK_FUNC(sub_82559D88);
PPC_FUNC_IMPL(__imp__sub_82559D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82559D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r7,50(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// bl 0x82554de0
	ctx.lr = 0x82559DD4;
	sub_82554DE0(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpwi cr6,r5,285
	cr6.compare<int32_t>(ctx.r5.s32, 285, xer);
	// addi r28,r11,16056
	ctx.r28.s64 = ctx.r11.s64 + 16056;
	// beq cr6,0x82559e10
	if (cr6.eq) goto loc_82559E10;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559DF4;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x82559E04;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559E10;
	sub_82553758(ctx, base);
loc_82559E10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x82559E1C;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// beq cr6,0x82559e5c
	if (cr6.eq) goto loc_82559E5C;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// beq cr6,0x82559e48
	if (cr6.eq) goto loc_82559E48;
	// cmpwi cr6,r11,267
	cr6.compare<int32_t>(ctx.r11.s32, 267, xer);
	// beq cr6,0x82559e5c
	if (cr6.eq) goto loc_82559E5C;
	// addi r4,r28,624
	ctx.r4.s64 = ctx.r28.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559E44;
	sub_82553758(ctx, base);
	// b 0x82559e68
	goto loc_82559E68;
loc_82559E48:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559818
	ctx.lr = 0x82559E58;
	sub_82559818(ctx, base);
	// b 0x82559e68
	goto loc_82559E68;
loc_82559E5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559ab8
	ctx.lr = 0x82559E68;
	sub_82559AB8(ctx, base);
loc_82559E68:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x82559E7C;
	sub_825573E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557b20
	ctx.lr = 0x82559E84;
	sub_82557B20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559E8C"))) PPC_WEAK_FUNC(sub_82559E8C);
PPC_FUNC_IMPL(__imp__sub_82559E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559E90"))) PPC_WEAK_FUNC(sub_82559E90);
PPC_FUNC_IMPL(__imp__sub_82559E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x82554de0
	ctx.lr = 0x82559EAC;
	sub_82554DE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558f60
	ctx.lr = 0x82559EBC;
	sub_82558F60(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82559ed0
	if (!cr6.eq) goto loc_82559ED0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82559ED0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e778
	ctx.lr = 0x82559EDC;
	sub_8255E778(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,274
	cr6.compare<int32_t>(ctx.r11.s32, 274, xer);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// beq cr6,0x82559f18
	if (cr6.eq) goto loc_82559F18;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x82559EF8;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x82559F0C;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x82559F18;
	sub_82553758(ctx, base);
loc_82559F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x82559F20;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x8255a760
	ctx.lr = 0x82559F58;
	sub_8255A760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557b20
	ctx.lr = 0x82559F60;
	sub_82557B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82559F7C"))) PPC_WEAK_FUNC(sub_82559F7C);
PPC_FUNC_IMPL(__imp__sub_82559F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82559F80"))) PPC_WEAK_FUNC(sub_82559F80);
PPC_FUNC_IMPL(__imp__sub_82559F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82559F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82559e90
	ctx.lr = 0x82559FA4;
	sub_82559E90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,261
	cr6.compare<int32_t>(ctx.r11.s32, 261, xer);
	// bne cr6,0x82559ff0
	if (!cr6.eq) goto loc_82559FF0;
loc_82559FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x82559FBC;
	sub_8255DBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d390
	ctx.lr = 0x82559FCC;
	sub_8255D390(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dce0
	ctx.lr = 0x82559FD8;
	sub_8255DCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559e90
	ctx.lr = 0x82559FE0;
	sub_82559E90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,261
	cr6.compare<int32_t>(ctx.r11.s32, 261, xer);
	// beq cr6,0x82559fb4
	if (cr6.eq) goto loc_82559FB4;
loc_82559FF0:
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(ctx.r11.s32, 260, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8255a030
	if (!cr6.eq) goto loc_8255A030;
	// bl 0x8255dbc8
	ctx.lr = 0x8255A000;
	sub_8255DBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255A010;
	sub_8255D390(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dce0
	ctx.lr = 0x8255A01C;
	sub_8255DCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A024;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825590a8
	ctx.lr = 0x8255A02C;
	sub_825590A8(ctx, base);
	// b 0x8255a03c
	goto loc_8255A03C;
loc_8255A030:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255d390
	ctx.lr = 0x8255A03C;
	sub_8255D390(ctx, base);
loc_8255A03C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8255dce0
	ctx.lr = 0x8255A048;
	sub_8255DCE0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,266
	ctx.r5.s64 = 266;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x8255A05C;
	sub_825573E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A064"))) PPC_WEAK_FUNC(sub_8255A064);
PPC_FUNC_IMPL(__imp__sub_8255A064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A068"))) PPC_WEAK_FUNC(sub_8255A068);
PPC_FUNC_IMPL(__imp__sub_8255A068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255A070;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,285
	cr6.compare<int32_t>(ctx.r10.s32, 285, xer);
	// addi r27,r11,16056
	ctx.r27.s64 = ctx.r11.s64 + 16056;
	// beq cr6,0x8255a0b4
	if (cr6.eq) goto loc_8255A0B4;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x82553610
	ctx.lr = 0x8255A098;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x8255A0A8;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553758
	ctx.lr = 0x8255A0B4;
	sub_82553758(ctx, base);
loc_8255A0B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x8255A0C0;
	sub_82554DE0(ctx, base);
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lbz r11,50(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 50);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x8255a0e4
	if (!cr6.gt) goto loc_8255A0E4;
	// addi r5,r27,164
	ctx.r5.s64 = ctx.r27.s64 + 164;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82557368
	ctx.lr = 0x8255A0E4;
	sub_82557368(ctx, base);
loc_8255A0E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557520
	ctx.lr = 0x8255A0F0;
	sub_82557520(ctx, base);
	// lbz r11,50(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 50);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,86
	ctx.r8.s64 = ctx.r11.s64 + 86;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r9,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + ctx.r29.u32, ctx.r9.u16);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x8255d458
	ctx.lr = 0x8255A12C;
	sub_8255D458(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,50(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 50);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,50(r9)
	PPC_STORE_U8(ctx.r9.u32 + 50, ctx.r11.u8);
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82558738
	ctx.lr = 0x8255A180;
	sub_82558738(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e438
	ctx.lr = 0x8255A190;
	sub_8255E438(ctx, base);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,85
	ctx.r10.s64 = ctx.r11.s64 + 85;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A1C8"))) PPC_WEAK_FUNC(sub_8255A1C8);
PPC_FUNC_IMPL(__imp__sub_8255A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255A1D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,16056
	ctx.r27.s64 = ctx.r11.s64 + 16056;
loc_8255A1E4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x8255a218
	if (cr6.eq) goto loc_8255A218;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553610
	ctx.lr = 0x8255A1FC;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x8255A20C;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82553758
	ctx.lr = 0x8255A218;
	sub_82553758(ctx, base);
loc_8255A218:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x8255A224;
	sub_82554DE0(ctx, base);
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// ble cr6,0x8255a284
	if (!cr6.gt) goto loc_8255A284;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8255a264
	if (!cr6.eq) goto loc_8255A264;
	// addi r6,r27,164
	ctx.r6.s64 = ctx.r27.s64 + 164;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x8255A260;
	sub_82541118(ctx, base);
	// b 0x8255a274
	goto loc_8255A274;
loc_8255A264:
	// addi r7,r27,164
	ctx.r7.s64 = ctx.r27.s64 + 164;
	// addi r4,r27,52
	ctx.r4.s64 = ctx.r27.s64 + 52;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82541118
	ctx.lr = 0x8255A274;
	sub_82541118(ctx, base);
loc_8255A274:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825536a0
	ctx.lr = 0x8255A284;
	sub_825536A0(ctx, base);
loc_8255A284:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557520
	ctx.lr = 0x8255A290;
	sub_82557520(ctx, base);
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r9,r11,86
	ctx.r9.s64 = ctx.r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r3.u16);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8255a2c0
	if (!cr6.eq) goto loc_8255A2C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A2BC;
	sub_82554DE0(ctx, base);
	// b 0x8255a1e4
	goto loc_8255A1E4;
loc_8255A2C0:
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// bne cr6,0x8255a2e4
	if (!cr6.eq) goto loc_8255A2E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A2D0;
	sub_82554DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825588a0
	ctx.lr = 0x8255A2DC;
	sub_825588A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8255a2f0
	goto loc_8255A2F0;
loc_8255A2E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8255A2F0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557a78
	ctx.lr = 0x8255A300;
	sub_82557A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82557688
	ctx.lr = 0x8255A30C;
	sub_82557688(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A314"))) PPC_WEAK_FUNC(sub_8255A314);
PPC_FUNC_IMPL(__imp__sub_8255A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A318"))) PPC_WEAK_FUNC(sub_8255A318);
PPC_FUNC_IMPL(__imp__sub_8255A318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8255A320;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x825579e8
	ctx.lr = 0x8255A334;
	sub_825579E8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// bne cr6,0x8255a3e0
	if (!cr6.eq) goto loc_8255A3E0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r26,r11,16056
	ctx.r26.s64 = ctx.r11.s64 + 16056;
loc_8255A350:
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255A360;
	sub_8255E270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A368;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(ctx.r11.s32, 285, xer);
	// beq cr6,0x8255a39c
	if (cr6.eq) goto loc_8255A39C;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x8255A380;
	sub_82553610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82541118
	ctx.lr = 0x8255A390;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553758
	ctx.lr = 0x8255A39C;
	sub_82553758(ctx, base);
loc_8255A39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82554de0
	ctx.lr = 0x8255A3A8;
	sub_82554DE0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255d610
	ctx.lr = 0x8255A3B4;
	sub_8255D610(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e990
	ctx.lr = 0x8255A3D4;
	sub_8255E990(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x8255a350
	if (cr6.eq) goto loc_8255A350;
loc_8255A3E0:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// bne cr6,0x8255a42c
	if (!cr6.eq) goto loc_8255A42C;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255A3FC;
	sub_8255E270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A404;
	sub_82554DE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825574a0
	ctx.lr = 0x8255A410;
	sub_825574A0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8255e990
	ctx.lr = 0x8255A420;
	sub_8255E990(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8255A42C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A438"))) PPC_WEAK_FUNC(sub_8255A438);
PPC_FUNC_IMPL(__imp__sub_8255A438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A458;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,276
	cr6.compare<int32_t>(ctx.r11.s32, 276, xer);
	// bgt cr6,0x8255a4a4
	if (cr6.gt) goto loc_8255A4A4;
	// beq cr6,0x8255a478
	if (cr6.eq) goto loc_8255A478;
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(ctx.r11.s32, 260, xer);
	// blt cr6,0x8255a4ac
	if (cr6.lt) goto loc_8255A4AC;
	// cmpwi cr6,r11,262
	cr6.compare<int32_t>(ctx.r11.s32, 262, xer);
	// bgt cr6,0x8255a4ac
	if (cr6.gt) goto loc_8255A4AC;
loc_8255A478:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8255A480:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dc30
	ctx.lr = 0x8255A48C;
	sub_8255DC30(ctx, base);
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
loc_8255A4A4:
	// cmpwi cr6,r11,287
	cr6.compare<int32_t>(ctx.r11.s32, 287, xer);
	// beq cr6,0x8255a478
	if (cr6.eq) goto loc_8255A478;
loc_8255A4AC:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// beq cr6,0x8255a478
	if (cr6.eq) goto loc_8255A478;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825588a0
	ctx.lr = 0x8255A4C0;
	sub_825588A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x8255a500
	if (cr6.eq) goto loc_8255A500;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x8255a500
	if (cr6.eq) goto loc_8255A500;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8255a4f4
	if (!cr6.eq) goto loc_8255A4F4;
	// bl 0x8255e270
	ctx.lr = 0x8255A4EC;
	sub_8255E270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8255a480
	goto loc_8255A480;
loc_8255A4F4:
	// bl 0x8255e1c8
	ctx.lr = 0x8255A4F8;
	sub_8255E1C8(ctx, base);
	// lbz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// b 0x8255a480
	goto loc_8255A480;
loc_8255A500:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d680
	ctx.lr = 0x8255A510;
	sub_8255D680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x8255a544
	if (!cr6.eq) goto loc_8255A544;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x8255a544
	if (!cr6.eq) goto loc_8255A544;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,29
	ctx.r9.s64 = 29;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8255A544:
	// lbz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x8255a480
	goto loc_8255A480;
}

__attribute__((alias("__imp__sub_8255A550"))) PPC_WEAK_FUNC(sub_8255A550);
PPC_FUNC_IMPL(__imp__sub_8255A550) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-258
	ctx.r11.s64 = ctx.r11.s64 + -258;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x8255a6ec
	if (cr6.gt) goto loc_8255A6EC;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23148
	ctx.r12.s64 = ctx.r12.s64 + -23148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8255A6D4;
	case 1:
		goto loc_8255A604;
	case 2:
		goto loc_8255A6EC;
	case 3:
		goto loc_8255A6EC;
	case 4:
		goto loc_8255A6EC;
	case 5:
		goto loc_8255A6EC;
	case 6:
		goto loc_8255A62C;
	case 7:
		goto loc_8255A64C;
	case 8:
		goto loc_8255A5E4;
	case 9:
		goto loc_8255A6EC;
	case 10:
		goto loc_8255A694;
	case 11:
		goto loc_8255A6EC;
	case 12:
		goto loc_8255A6EC;
	case 13:
		goto loc_8255A6EC;
	case 14:
		goto loc_8255A63C;
	case 15:
		goto loc_8255A6C4;
	case 16:
		goto loc_8255A6EC;
	case 17:
		goto loc_8255A6EC;
	case 18:
		goto loc_8255A6EC;
	case 19:
		goto loc_8255A5F4;
	default:
		return;
	}
	// lwz r18,-22828(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22828);
	// lwz r18,-23036(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -23036);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22996(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22996);
	// lwz r18,-22964(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22964);
	// lwz r18,-23068(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -23068);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22892(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22892);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22980(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22980);
	// lwz r18,-22844(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22844);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-22804(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -22804);
	// lwz r18,-23052(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -23052);
loc_8255A5E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559f80
	ctx.lr = 0x8255A5F0;
	sub_82559F80(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A5F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825593a0
	ctx.lr = 0x8255A600;
	sub_825593A0(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A60C;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825590a8
	ctx.lr = 0x8255A614;
	sub_825590A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825573e8
	ctx.lr = 0x8255A628;
	sub_825573E8(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A62C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559d88
	ctx.lr = 0x8255A638;
	sub_82559D88(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A63C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825594f0
	ctx.lr = 0x8255A648;
	sub_825594F0(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A64C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A654;
	sub_82554DE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a318
	ctx.lr = 0x8255A660;
	sub_8255A318(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558738
	ctx.lr = 0x8255A674;
	sub_82558738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255e438
	ctx.lr = 0x8255A684;
	sub_8255E438(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8255d928
	ctx.lr = 0x8255A690;
	sub_8255D928(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A69C;
	sub_82554DE0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,265
	cr6.compare<int32_t>(ctx.r11.s32, 265, xer);
	// bne cr6,0x8255a6bc
	if (!cr6.eq) goto loc_8255A6BC;
	// bl 0x82554de0
	ctx.lr = 0x8255A6B0;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a068
	ctx.lr = 0x8255A6B8;
	sub_8255A068(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A6BC:
	// bl 0x8255a1c8
	ctx.lr = 0x8255A6C0;
	sub_8255A1C8(ctx, base);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A6C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a438
	ctx.lr = 0x8255A6CC;
	sub_8255A438(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255a748
	goto loc_8255A748;
loc_8255A6D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A6DC;
	sub_82554DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559310
	ctx.lr = 0x8255A6E4;
	sub_82559310(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255a748
	goto loc_8255A748;
loc_8255A6EC:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558a90
	ctx.lr = 0x8255A6FC;
	sub_82558A90(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x8255a72c
	if (!cr6.eq) goto loc_8255A72C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,14,9,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x7FC000) | (ctx.r7.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x8255a744
	goto loc_8255A744;
loc_8255A72C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559108
	ctx.lr = 0x8255A744;
	sub_82559108(ctx, base);
loc_8255A744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255A748:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A760"))) PPC_WEAK_FUNC(sub_8255A760);
PPC_FUNC_IMPL(__imp__sub_8255A760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// cmplwi cr6,r9,200
	cr6.compare<uint32_t>(ctx.r9.u32, 200, xer);
	// ble cr6,0x8255a7a4
	if (!cr6.gt) goto loc_8255A7A4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16248
	ctx.r4.s64 = ctx.r11.s64 + 16248;
	// bl 0x825536a0
	ctx.lr = 0x8255A7A4;
	sub_825536A0(ctx, base);
loc_8255A7A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,276
	cr6.compare<int32_t>(ctx.r11.s32, 276, xer);
	// bgt cr6,0x8255a7c8
	if (cr6.gt) goto loc_8255A7C8;
	// beq cr6,0x8255a804
	if (cr6.eq) goto loc_8255A804;
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(ctx.r11.s32, 260, xer);
	// blt cr6,0x8255a7d0
	if (cr6.lt) goto loc_8255A7D0;
	// cmpwi cr6,r11,262
	cr6.compare<int32_t>(ctx.r11.s32, 262, xer);
	// ble cr6,0x8255a804
	if (!cr6.gt) goto loc_8255A804;
	// b 0x8255a7d0
	goto loc_8255A7D0;
loc_8255A7C8:
	// cmpwi cr6,r11,287
	cr6.compare<int32_t>(ctx.r11.s32, 287, xer);
	// beq cr6,0x8255a804
	if (cr6.eq) goto loc_8255A804;
loc_8255A7D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a550
	ctx.lr = 0x8255A7D8;
	sub_8255A550(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// bne cr6,0x8255a7f0
	if (!cr6.eq) goto loc_8255A7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82554de0
	ctx.lr = 0x8255A7F0;
	sub_82554DE0(ctx, base);
loc_8255A7F0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// beq cr6,0x8255a7a4
	if (cr6.eq) goto loc_8255A7A4;
loc_8255A804:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A830"))) PPC_WEAK_FUNC(sub_8255A830);
PPC_FUNC_IMPL(__imp__sub_8255A830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8255A854:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255a854
	if (!cr6.eq) goto loc_8255A854;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825414d0
	ctx.lr = 0x8255A87C;
	sub_825414D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825538e8
	ctx.lr = 0x8255A890;
	sub_825538E8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82557d68
	ctx.lr = 0x8255A89C;
	sub_82557D68(ctx, base);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,74(r9)
	PPC_STORE_U8(ctx.r9.u32 + 74, ctx.r10.u8);
	// bl 0x82554de0
	ctx.lr = 0x8255A8B0;
	sub_82554DE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255a760
	ctx.lr = 0x8255A8B8;
	sub_8255A760(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r8,287
	cr6.compare<int32_t>(ctx.r8.s32, 287, xer);
	// beq cr6,0x8255a8f0
	if (cr6.eq) goto loc_8255A8F0;
	// li r4,287
	ctx.r4.s64 = 287;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553610
	ctx.lr = 0x8255A8D0;
	sub_82553610(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// bl 0x82541118
	ctx.lr = 0x8255A8E4;
	sub_82541118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553758
	ctx.lr = 0x8255A8F0;
	sub_82553758(ctx, base);
loc_8255A8F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82557e70
	ctx.lr = 0x8255A8F8;
	sub_82557E70(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255A914"))) PPC_WEAK_FUNC(sub_8255A914);
PPC_FUNC_IMPL(__imp__sub_8255A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A918"))) PPC_WEAK_FUNC(sub_8255A918);
PPC_FUNC_IMPL(__imp__sub_8255A918) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255A93C;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255a984
	if (cr6.eq) goto loc_8255A984;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16704
	ctx.r4.s64 = ctx.r11.s64 + 16704;
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// bl 0x82541118
	ctx.lr = 0x8255A95C;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255A968;
	sub_82547B68(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
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
loc_8255A984:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
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

__attribute__((alias("__imp__sub_8255A9A0"))) PPC_WEAK_FUNC(sub_8255A9A0);
PPC_FUNC_IMPL(__imp__sub_8255A9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255A9C8;
	sub_82549CF8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,16704
	ctx.r30.s64 = ctx.r11.s64 + 16704;
	// beq cr6,0x8255a9f8
	if (cr6.eq) goto loc_8255A9F8;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255A9EC;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255A9F8;
	sub_82547B68(ctx, base);
loc_8255A9F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8255aa28
	if (!cr6.lt) goto loc_8255AA28;
	// addi r6,r30,44
	ctx.r6.s64 = ctx.r30.s64 + 44;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255AA18;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255AA24;
	sub_82547B68(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8255AA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AA40"))) PPC_WEAK_FUNC(sub_8255AA40);
PPC_FUNC_IMPL(__imp__sub_8255AA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255AA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255AA60;
	sub_82549CF8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,16704
	ctx.r29.s64 = ctx.r11.s64 + 16704;
	// beq cr6,0x8255aa90
	if (cr6.eq) goto loc_8255AA90;
	// addi r6,r29,28
	ctx.r6.s64 = ctx.r29.s64 + 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255AA84;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255AA90;
	sub_82547B68(ctx, base);
loc_8255AA90:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8255aaa8
	if (!cr6.eq) goto loc_8255AAA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255AAA8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82549de8
	ctx.lr = 0x8255AAB4;
	sub_82549DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255AAC8;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255aaf0
	if (cr6.eq) goto loc_8255AAF0;
	// addi r6,r29,28
	ctx.r6.s64 = ctx.r29.s64 + 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255AAE4;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255AAF0;
	sub_82547B68(ctx, base);
loc_8255AAF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x825414d0
	ctx.lr = 0x8255AB04;
	sub_825414D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AB0C"))) PPC_WEAK_FUNC(sub_8255AB0C);
PPC_FUNC_IMPL(__imp__sub_8255AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AB10"))) PPC_WEAK_FUNC(sub_8255AB10);
PPC_FUNC_IMPL(__imp__sub_8255AB10) {
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
	ctx.lr = 0x8255AB18;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255AB28;
	sub_8255A9A0(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8255ab58
	if (cr6.gt) goto loc_8255AB58;
	// rlwinm r6,r31,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82553380
	ctx.lr = 0x8255AB54;
	sub_82553380(ctx, base);
	// b 0x8255ab5c
	goto loc_8255AB5C;
loc_8255AB58:
	// bl 0x82553350
	ctx.lr = 0x8255AB5C;
	sub_82553350(ctx, base);
loc_8255AB5C:
	// stw r31,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r31.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// ble cr6,0x8255acc4
	if (!cr6.gt) goto loc_8255ACC4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8255AB78:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// bdnz 0x8255ab78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255AB78;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8255acc4
	if (!cr6.gt) goto loc_8255ACC4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r22,3
	ctx.r22.s64 = 3;
	// li r24,4
	ctx.r24.s64 = 4;
	// addi r28,r11,16704
	ctx.r28.s64 = ctx.r11.s64 + 16704;
loc_8255ABB0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82549cf8
	ctx.lr = 0x8255ABC8;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255abf0
	if (cr6.eq) goto loc_8255ABF0;
	// addi r6,r28,28
	ctx.r6.s64 = ctx.r28.s64 + 28;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255ABE4;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255ABF0;
	sub_82547B68(ctx, base);
loc_8255ABF0:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8255ac98
	if (cr6.gt) goto loc_8255AC98;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255ac20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255AC20;
	// bdzf 4*cr6+eq,0x8255ac98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255AC98;
	// bdzf 4*cr6+eq,0x8255ac3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255AC3C;
	// bne cr6,0x8255ac84
	if (!cr6.eq) goto loc_8255AC84;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x8255acb8
	goto loc_8255ACB8;
loc_8255AC20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255a918
	ctx.lr = 0x8255AC28;
	sub_8255A918(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8255acb8
	goto loc_8255ACB8;
loc_8255AC3C:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82549cf8
	ctx.lr = 0x8255AC4C;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255ac74
	if (cr6.eq) goto loc_8255AC74;
	// addi r6,r28,28
	ctx.r6.s64 = ctx.r28.s64 + 28;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255AC68;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255AC74;
	sub_82547B68(ctx, base);
loc_8255AC74:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// b 0x8255acb8
	goto loc_8255ACB8;
loc_8255AC84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255aa40
	ctx.lr = 0x8255AC8C;
	sub_8255AA40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// b 0x8255acb8
	goto loc_8255ACB8;
loc_8255AC98:
	// addi r6,r28,56
	ctx.r6.s64 = ctx.r28.s64 + 56;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255ACAC;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255ACB8;
	sub_82547B68(ctx, base);
loc_8255ACB8:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x8255abb0
	if (!cr0.eq) goto loc_8255ABB0;
loc_8255ACC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255ACCC;
	sub_8255A9A0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8255acfc
	if (cr6.gt) goto loc_8255ACFC;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82553380
	ctx.lr = 0x8255ACF8;
	sub_82553380(ctx, base);
	// b 0x8255ad00
	goto loc_8255AD00;
loc_8255ACFC:
	// bl 0x82553350
	ctx.lr = 0x8255AD00;
	sub_82553350(ctx, base);
loc_8255AD00:
	// stw r31,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
	// ble cr6,0x8255ad50
	if (!cr6.gt) goto loc_8255AD50;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8255AD18:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8255ad18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255AD18;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8255ad50
	if (!cr6.gt) goto loc_8255AD50;
loc_8255AD30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x8255af38
	ctx.lr = 0x8255AD3C;
	sub_8255AF38(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8255ad30
	if (!cr0.eq) goto loc_8255AD30;
loc_8255AD50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AD58"))) PPC_WEAK_FUNC(sub_8255AD58);
PPC_FUNC_IMPL(__imp__sub_8255AD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8255AD60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255AD70;
	sub_8255A9A0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bgt cr6,0x8255ada0
	if (cr6.gt) goto loc_8255ADA0;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82553380
	ctx.lr = 0x8255AD9C;
	sub_82553380(ctx, base);
	// b 0x8255ada4
	goto loc_8255ADA4;
loc_8255ADA0:
	// bl 0x82553350
	ctx.lr = 0x8255ADA4;
	sub_82553350(ctx, base);
loc_8255ADA4:
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255ADBC;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255ade8
	if (cr6.eq) goto loc_8255ADE8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,16704
	ctx.r4.s64 = ctx.r11.s64 + 16704;
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// bl 0x82541118
	ctx.lr = 0x8255ADDC;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255ADE8;
	sub_82547B68(ctx, base);
loc_8255ADE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255ADF0;
	sub_8255A9A0(ctx, base);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,21845
	ctx.r9.u64 = ctx.r11.u64 | 21845;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8255ae28
	if (cr6.gt) goto loc_8255AE28;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82553380
	ctx.lr = 0x8255AE24;
	sub_82553380(ctx, base);
	// b 0x8255ae2c
	goto loc_8255AE2C;
loc_8255AE28:
	// bl 0x82553350
	ctx.lr = 0x8255AE2C;
	sub_82553350(ctx, base);
loc_8255AE2C:
	// stw r28,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// ble cr6,0x8255aea8
	if (!cr6.gt) goto loc_8255AEA8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_8255AE48:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8255ae48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255AE48;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8255aea8
	if (!cr6.gt) goto loc_8255AEA8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8255AE64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255aa40
	ctx.lr = 0x8255AE6C;
	sub_8255AA40(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255AE7C;
	sub_8255A9A0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255AE90;
	sub_8255A9A0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// bne 0x8255ae64
	if (!cr0.eq) goto loc_8255AE64;
loc_8255AEA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255AEB0;
	sub_8255A9A0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bgt cr6,0x8255aed8
	if (cr6.gt) goto loc_8255AED8;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82553380
	ctx.lr = 0x8255AED4;
	sub_82553380(ctx, base);
	// b 0x8255aedc
	goto loc_8255AEDC;
loc_8255AED8:
	// bl 0x82553350
	ctx.lr = 0x8255AEDC;
	sub_82553350(ctx, base);
loc_8255AEDC:
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// ble cr6,0x8255af2c
	if (!cr6.gt) goto loc_8255AF2C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8255AEF4:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8255aef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255AEF4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8255af2c
	if (!cr6.gt) goto loc_8255AF2C;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8255AF10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255aa40
	ctx.lr = 0x8255AF18;
	sub_8255AA40(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8255af10
	if (!cr0.eq) goto loc_8255AF10;
loc_8255AF2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AF34"))) PPC_WEAK_FUNC(sub_8255AF34);
PPC_FUNC_IMPL(__imp__sub_8255AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AF38"))) PPC_WEAK_FUNC(sub_8255AF38);
PPC_FUNC_IMPL(__imp__sub_8255AF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8255AF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r10,16704
	ctx.r28.s64 = ctx.r10.s64 + 16704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// cmplwi cr6,r9,200
	cr6.compare<uint32_t>(ctx.r9.u32, 200, xer);
	// ble cr6,0x8255af90
	if (!cr6.gt) goto loc_8255AF90;
	// addi r6,r28,72
	ctx.r6.s64 = ctx.r28.s64 + 72;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255AF84;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255AF90;
	sub_82547B68(ctx, base);
loc_8255AF90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825499b0
	ctx.lr = 0x8255AF98;
	sub_825499B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// bgt cr6,0x8255afd0
	if (cr6.gt) goto loc_8255AFD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82547268
	ctx.lr = 0x8255AFD0;
	sub_82547268(ctx, base);
loc_8255AFD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x8255aa40
	ctx.lr = 0x8255AFE8;
	sub_8255AA40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// bne cr6,0x8255aff8
	if (!cr6.eq) goto loc_8255AFF8;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_8255AFF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255B000;
	sub_8255A9A0(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a9a0
	ctx.lr = 0x8255B00C;
	sub_8255A9A0(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255a918
	ctx.lr = 0x8255B018;
	sub_8255A918(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r11.u8);
	// bl 0x8255a918
	ctx.lr = 0x8255B028;
	sub_8255A918(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,73(r30)
	PPC_STORE_U8(ctx.r30.u32 + 73, ctx.r10.u8);
	// bl 0x8255a918
	ctx.lr = 0x8255B038;
	sub_8255A918(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,74(r30)
	PPC_STORE_U8(ctx.r30.u32 + 74, ctx.r9.u8);
	// bl 0x8255a918
	ctx.lr = 0x8255B048;
	sub_8255A918(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,75(r30)
	PPC_STORE_U8(ctx.r30.u32 + 75, ctx.r8.u8);
	// bl 0x8255a9a0
	ctx.lr = 0x8255B058;
	sub_8255A9A0(ctx, base);
	// lis r7,16383
	ctx.r7.s64 = 1073676288;
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// ori r5,r7,65535
	ctx.r5.u64 = ctx.r7.u64 | 65535;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bgt cr6,0x8255b088
	if (cr6.gt) goto loc_8255B088;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82553380
	ctx.lr = 0x8255B084;
	sub_82553380(ctx, base);
	// b 0x8255b08c
	goto loc_8255B08C;
loc_8255B088:
	// bl 0x82553350
	ctx.lr = 0x8255B08C;
	sub_82553350(ctx, base);
loc_8255B08C:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82549cf8
	ctx.lr = 0x8255B0A4;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255b0cc
	if (cr6.eq) goto loc_8255B0CC;
	// addi r6,r28,28
	ctx.r6.s64 = ctx.r28.s64 + 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255B0C0;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255B0CC;
	sub_82547B68(ctx, base);
loc_8255B0CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255ab10
	ctx.lr = 0x8255B0D8;
	sub_8255AB10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255ad58
	ctx.lr = 0x8255B0E4;
	sub_8255AD58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82540250
	ctx.lr = 0x8255B0EC;
	sub_82540250(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255b114
	if (!cr6.eq) goto loc_8255B114;
	// addi r6,r28,88
	ctx.r6.s64 = ctx.r28.s64 + 88;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255B108;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255B114;
	sub_82547B68(ctx, base);
loc_8255B114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B144"))) PPC_WEAK_FUNC(sub_8255B144);
PPC_FUNC_IMPL(__imp__sub_8255B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B148"))) PPC_WEAK_FUNC(sub_8255B148);
PPC_FUNC_IMPL(__imp__sub_8255B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// li r8,81
	ctx.r8.s64 = 81;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,16844(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16844);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stbu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B188"))) PPC_WEAK_FUNC(sub_8255B188);
PPC_FUNC_IMPL(__imp__sub_8255B188) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r9,16704
	ctx.r30.s64 = ctx.r9.s64 + 16704;
	// li r9,81
	ctx.r9.s64 = 81;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// lwz r9,140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82549cf8
	ctx.lr = 0x8255B1F0;
	sub_82549CF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255b218
	if (cr6.eq) goto loc_8255B218;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255B20C;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255B218;
	sub_82547B68(ctx, base);
loc_8255B218:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
loc_8255B224:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8255b244
	if (!cr0.eq) goto loc_8255B244;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8255b224
	if (!cr6.eq) goto loc_8255B224;
loc_8255B244:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8255b26c
	if (cr6.eq) goto loc_8255B26C;
	// addi r6,r30,100
	ctx.r6.s64 = ctx.r30.s64 + 100;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82541118
	ctx.lr = 0x8255B260;
	sub_82541118(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82547b68
	ctx.lr = 0x8255B26C;
	sub_82547B68(ctx, base);
loc_8255B26C:
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

__attribute__((alias("__imp__sub_8255B284"))) PPC_WEAK_FUNC(sub_8255B284);
PPC_FUNC_IMPL(__imp__sub_8255B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B288"))) PPC_WEAK_FUNC(sub_8255B288);
PPC_FUNC_IMPL(__imp__sub_8255B288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r31,r10,16840
	ctx.r31.s64 = ctx.r10.s64 + 16840;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// beq cr6,0x8255b2e0
	if (cr6.eq) goto loc_8255B2E0;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// beq cr6,0x8255b2e0
	if (cr6.eq) goto loc_8255B2E0;
	// lbz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -24);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8255b2d8
	if (!cr6.eq) goto loc_8255B2D8;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// b 0x8255b2e4
	goto loc_8255B2E4;
loc_8255B2D8:
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// b 0x8255b2e8
	goto loc_8255B2E8;
loc_8255B2E0:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
loc_8255B2E4:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8255B2E8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x8255b188
	ctx.lr = 0x8255B2FC;
	sub_8255B188(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825414d0
	ctx.lr = 0x8255B30C;
	sub_825414D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255af38
	ctx.lr = 0x8255B318;
	sub_8255AF38(ctx, base);
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

__attribute__((alias("__imp__sub_8255B330"))) PPC_WEAK_FUNC(sub_8255B330);
PPC_FUNC_IMPL(__imp__sub_8255B330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255b3b8
	if (cr6.eq) goto loc_8255B3B8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255b3b8
	if (cr6.eq) goto loc_8255B3B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8255b36c
	if (cr6.eq) goto loc_8255B36C;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
loc_8255B36C:
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r9,r11,1328
	ctx.r9.s64 = ctx.r11.s64 + 1328;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ori r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 32768;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// stw r6,7104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7104, ctx.r6.u32);
	// stw r5,7108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7108, ctx.r5.u32);
	// blr 
	return;
loc_8255B3B8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B3C0"))) PPC_WEAK_FUNC(sub_8255B3C0);
PPC_FUNC_IMPL(__imp__sub_8255B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255b3e8
	if (cr6.eq) goto loc_8255B3E8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255b3e8
	if (cr6.eq) goto loc_8255B3E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// b 0x8255b330
	sub_8255B330(ctx, base);
	return;
loc_8255B3E8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B3F0"))) PPC_WEAK_FUNC(sub_8255B3F0);
PPC_FUNC_IMPL(__imp__sub_8255B3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255B3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255b4b8
	if (cr6.eq) goto loc_8255B4B8;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8255b4b8
	if (cr6.eq) goto loc_8255B4B8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8255b430
	if (!cr6.lt) goto loc_8255B430;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// neg r31,r31
	ctx.r31.s64 = -ctx.r31.s64;
	// b 0x8255b444
	goto loc_8255B444;
loc_8255B430:
	// srawi r11,r31,4
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 4;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(ctx.r31.s32, 48, xer);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// bge cr6,0x8255b444
	if (!cr6.lt) goto loc_8255B444;
	// clrlwi r31,r31,28
	ctx.r31.u64 = ctx.r31.u32 & 0xF;
loc_8255B444:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8255b45c
	if (cr6.eq) goto loc_8255B45C;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x8255b4b8
	if (cr6.lt) goto loc_8255B4B8;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(ctx.r31.s32, 15, xer);
	// bgt cr6,0x8255b4b8
	if (cr6.gt) goto loc_8255B4B8;
loc_8255B45C:
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255b488
	if (cr6.eq) goto loc_8255B488;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x8255b488
	if (cr6.eq) goto loc_8255B488;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
loc_8255B488:
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255b4b8
	if (cr6.eq) goto loc_8255B4B8;
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// stw r28,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// bl 0x8255b330
	ctx.lr = 0x8255B4B0;
	sub_8255B330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8255B4B8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B4C4"))) PPC_WEAK_FUNC(sub_8255B4C4);
PPC_FUNC_IMPL(__imp__sub_8255B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B4C8"))) PPC_WEAK_FUNC(sub_8255B4C8);
PPC_FUNC_IMPL(__imp__sub_8255B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8255B4D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255b5cc
	if (cr6.eq) goto loc_8255B5CC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lbz r11,16852(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16852);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x8255b5cc
	if (!cr6.eq) goto loc_8255B5CC;
	// cmpwi cr6,r6,56
	cr6.compare<int32_t>(ctx.r6.s32, 56, xer);
	// bne cr6,0x8255b5cc
	if (!cr6.eq) goto loc_8255B5CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255b51c
	if (!cr6.eq) goto loc_8255B51C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8255B51C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255b540
	if (!cr6.eq) goto loc_8255B540;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r10,r11,-3784
	ctx.r10.s64 = ctx.r11.s64 + -3784;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8255B540:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255b558
	if (!cr6.eq) goto loc_8255B558;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r10,r11,12832
	ctx.r10.s64 = ctx.r11.s64 + 12832;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_8255B558:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,7116
	ctx.r5.s64 = 7116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255b588
	if (!cr6.eq) goto loc_8255B588;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8255B588:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255b3f0
	ctx.lr = 0x8255B59C;
	sub_8255B3F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255b5c0
	if (cr6.eq) goto loc_8255B5C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B5BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_8255B5C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8255B5CC:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B5D8"))) PPC_WEAK_FUNC(sub_8255B5D8);
PPC_FUNC_IMPL(__imp__sub_8255B5D8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8255b4c8
	sub_8255B4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B5E8"))) PPC_WEAK_FUNC(sub_8255B5E8);
PPC_FUNC_IMPL(__imp__sub_8255B5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255B5F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255b648
	if (!cr6.eq) goto loc_8255B648;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// slw r4,r30,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8255B630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255b648
	if (!cr6.eq) goto loc_8255B648;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8255B648:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255b66c
	if (!cr6.eq) goto loc_8255B66C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_8255B66C:
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// blt cr6,0x8255b698
	if (cr6.lt) goto loc_8255B698;
	// subf r4,r5,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r5.s64;
	// bl 0x831ce980
	ctx.lr = 0x8255B680;
	sub_831CE980(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8255B698:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r30,r11,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// ble cr6,0x8255b6ac
	if (!cr6.gt) goto loc_8255B6AC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8255B6AC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r4,r29,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x8255B6BC;
	sub_831CE980(ctx, base);
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8255b6ec
	if (cr0.eq) goto loc_8255B6EC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r4,r29,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r29.s64;
	// bl 0x831ce980
	ctx.lr = 0x8255B6D4;
	sub_831CE980(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8255B6EC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255b708
	if (!cr6.eq) goto loc_8255B708;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
loc_8255B708:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8255b71c
	if (!cr6.lt) goto loc_8255B71C;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8255B71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B728"))) PPC_WEAK_FUNC(sub_8255B728);
PPC_FUNC_IMPL(__imp__sub_8255B728) {
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
	ctx.lr = 0x8255B730;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255cdd4
	if (cr6.eq) goto loc_8255CDD4;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8255cdd4
	if (cr6.eq) goto loc_8255CDD4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255cdd4
	if (cr6.eq) goto loc_8255CDD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255b778
	if (!cr6.eq) goto loc_8255B778;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255cdd4
	if (!cr6.eq) goto loc_8255CDD4;
loc_8255B778:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8255b78c
	if (!cr6.eq) goto loc_8255B78C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255B78C:
	// lwz r26,4(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r18,16(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// lwz r19,12(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bgt cr6,0x8255cdd4
	if (cr6.gt) goto loc_8255CDD4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r22,r11,17380
	ctx.r22.s64 = ctx.r11.s64 + 17380;
	// li r21,29
	ctx.r21.s64 = 29;
	// li r14,9
	ctx.r14.s64 = 9;
	// addi r17,r10,1896
	ctx.r17.s64 = ctx.r10.s64 + 1896;
	// b 0x8255b7e4
	goto loc_8255B7E4;
loc_8255B7E0:
	// lwz r27,284(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_8255B7E4:
	// li r6,20
	ctx.r6.s64 = 20;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18428
	ctx.r12.s64 = ctx.r12.s64 + -18428;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8255B880;
	case 1:
		goto loc_8255BA14;
	case 2:
		goto loc_8255BAD0;
	case 3:
		goto loc_8255BB64;
	case 4:
		goto loc_8255BBF4;
	case 5:
		goto loc_8255BC9C;
	case 6:
		goto loc_8255BD5C;
	case 7:
		goto loc_8255BE1C;
	case 8:
		goto loc_8255BED8;
	case 9:
		goto loc_8255BF80;
	case 10:
		goto loc_8255BFE8;
	case 11:
		goto loc_8255C014;
	case 12:
		goto loc_8255C024;
	case 13:
		goto loc_8255C11C;
	case 14:
		goto loc_8255C194;
	case 15:
		goto loc_8255C19C;
	case 16:
		goto loc_8255C204;
	case 17:
		goto loc_8255C28C;
	case 18:
		goto loc_8255C3B0;
	case 19:
		goto loc_8255C6E0;
	case 20:
		goto loc_8255C6EC;
	case 21:
		goto loc_8255C910;
	case 22:
		goto loc_8255C98C;
	case 23:
		goto loc_8255CB24;
	case 24:
		goto loc_8255CB98;
	case 25:
		goto loc_8255CC64;
	case 26:
		goto loc_8255CC88;
	case 27:
		goto loc_8255CD6C;
	case 28:
		goto loc_8255CE14;
	case 29:
		goto loc_8255CE1C;
	case 30:
		goto loc_8255CFA8;
	default:
		return;
	}
	// lwz r18,-18304(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -18304);
	// lwz r18,-17900(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17900);
	// lwz r18,-17712(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17712);
	// lwz r18,-17564(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17564);
	// lwz r18,-17420(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17420);
	// lwz r18,-17252(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17252);
	// lwz r18,-17060(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17060);
	// lwz r18,-16868(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16868);
	// lwz r18,-16680(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16680);
	// lwz r18,-16512(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16512);
	// lwz r18,-16408(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16408);
	// lwz r18,-16364(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16364);
	// lwz r18,-16348(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16348);
	// lwz r18,-16100(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -16100);
	// lwz r18,-15980(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15980);
	// lwz r18,-15972(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15972);
	// lwz r18,-15868(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15868);
	// lwz r18,-15732(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15732);
	// lwz r18,-15440(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -15440);
	// lwz r18,-14624(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -14624);
	// lwz r18,-14612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -14612);
	// lwz r18,-14064(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -14064);
	// lwz r18,-13940(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13940);
	// lwz r18,-13532(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13532);
	// lwz r18,-13416(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13416);
	// lwz r18,-13212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13212);
	// lwz r18,-13176(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13176);
	// lwz r18,-12948(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -12948);
	// lwz r18,-12780(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -12780);
	// lwz r18,-12772(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -12772);
	// lwz r18,-12376(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -12376);
loc_8255B880:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255b898
	if (!cr6.eq) goto loc_8255B898;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255B898:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8255b8c8
	if (!cr6.lt) goto loc_8255B8C8;
loc_8255B8A0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8255b8a0
	if (cr6.lt) goto loc_8255B8A0;
loc_8255B8C8:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255b924
	if (cr6.eq) goto loc_8255B924;
	// cmplwi cr6,r29,35615
	cr6.compare<uint32_t>(ctx.r29.u32, 35615, xer);
	// bne cr6,0x8255b924
	if (!cr6.eq) goto loc_8255B924;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825600e8
	ctx.lr = 0x8255B8EC;
	sub_825600E8(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,139
	ctx.r10.s64 = 139;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x825600e8
	ctx.lr = 0x8255B910;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255B924:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r20,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r20.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255b938
	if (cr6.eq) goto loc_8255B938;
	// stw r25,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
loc_8255B938:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255ba08
	if (cr6.eq) goto loc_8255BA08;
	// rlwinm r10,r29,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF00;
	// lis r9,2114
	ctx.r9.s64 = 138543104;
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// ori r8,r9,4229
	ctx.r8.u64 = ctx.r9.u64 | 4229;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8255ba08
	if (!cr0.eq) goto loc_8255BA08;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x8255b998
	if (cr6.eq) goto loc_8255B998;
	// addi r11,r22,-496
	ctx.r11.s64 = ctx.r22.s64 + -496;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255B998:
	// rlwinm r29,r29,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8255b9f4
	if (!cr6.eq) goto loc_8255B9F4;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8255B9B8:
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8255fa68
	ctx.lr = 0x8255B9D0;
	sub_8255FA68(ctx, base);
	// not r10,r29
	ctx.r10.u64 = ~ctx.r29.u64;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// rlwimi r9,r10,24,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255B9F4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255b9b8
	if (!cr6.gt) goto loc_8255B9B8;
	// addi r11,r22,-468
	ctx.r11.s64 = ctx.r22.s64 + -468;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255BA08:
	// addi r11,r22,-520
	ctx.r11.s64 = ctx.r22.s64 + -520;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255BA14:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8255ba44
	if (!cr6.lt) goto loc_8255BA44;
loc_8255BA1C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8255ba1c
	if (cr6.lt) goto loc_8255BA1C;
loc_8255BA44:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x8255ba60
	if (cr6.eq) goto loc_8255BA60;
	// addi r11,r22,-448
	ctx.r11.s64 = ctx.r22.s64 + -448;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255BA60:
	// rlwinm r11,r29,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xE000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255ba78
	if (cr6.eq) goto loc_8255BA78;
	// addi r11,r22,-420
	ctx.r11.s64 = ctx.r22.s64 + -420;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255BA78:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255ba8c
	if (cr6.eq) goto loc_8255BA8C;
	// rlwinm r10,r29,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8255BA8C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255babc
	if (cr6.eq) goto loc_8255BABC;
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x825600e8
	ctx.lr = 0x8255BAB8;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BABC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255bad8
	goto loc_8255BAD8;
loc_8255BAD0:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8255bb00
	if (!cr6.lt) goto loc_8255BB00;
loc_8255BAD8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8255bad8
	if (cr6.lt) goto loc_8255BAD8;
loc_8255BB00:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bb10
	if (cr6.eq) goto loc_8255BB10;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_8255BB10:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bb50
	if (cr6.eq) goto loc_8255BB50;
	// rlwinm r11,r29,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// rlwinm r9,r29,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r29,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x825600e8
	ctx.lr = 0x8255BB4C;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BB50:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255bb6c
	goto loc_8255BB6C;
loc_8255BB64:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8255bb94
	if (!cr6.lt) goto loc_8255BB94;
loc_8255BB6C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8255bb6c
	if (cr6.lt) goto loc_8255BB6C;
loc_8255BB94:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bbb4
	if (cr6.eq) goto loc_8255BBB4;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r9,r29,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
loc_8255BBB4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bbe4
	if (cr6.eq) goto loc_8255BBE4;
	// rlwinm r10,r29,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x825600e8
	ctx.lr = 0x8255BBE0;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BBE4:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255BBF4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bc84
	if (cr6.eq) goto loc_8255BC84;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8255bc34
	if (!cr6.lt) goto loc_8255BC34;
loc_8255BC0C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8255bc0c
	if (cr6.lt) goto loc_8255BC0C;
loc_8255BC34:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bc48
	if (cr6.eq) goto loc_8255BC48;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
loc_8255BC48:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bc78
	if (cr6.eq) goto loc_8255BC78;
	// rlwinm r11,r29,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x825600e8
	ctx.lr = 0x8255BC74;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BC78:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x8255bc94
	goto loc_8255BC94;
loc_8255BC84:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bc94
	if (cr6.eq) goto loc_8255BC94;
	// stw r20,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r20.u32);
loc_8255BC94:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255BC9C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bd50
	if (cr6.eq) goto loc_8255BD50;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, xer);
	// ble cr6,0x8255bcc0
	if (!cr6.gt) goto loc_8255BCC0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8255BCC0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8255bd44
	if (cr6.eq) goto loc_8255BD44;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bd0c
	if (cr6.eq) goto loc_8255BD0C;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8255bd0c
	if (cr6.eq) goto loc_8255BD0C;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r27,r11
	ctx.r6.u64 = ctx.r27.u64 + ctx.r11.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8255bd00
	if (cr6.gt) goto loc_8255BD00;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8255BD00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8255BD0C;
	sub_831CE980(ctx, base);
loc_8255BD0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bd30
	if (cr6.eq) goto loc_8255BD30;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825600e8
	ctx.lr = 0x8255BD2C;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BD30:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_8255BD44:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255ce20
	if (!cr6.eq) goto loc_8255CE20;
loc_8255BD50:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r20,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r20.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255BD5C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255be00
	if (cr6.eq) goto loc_8255BE00;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_8255BD78:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbzx r25,r27,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bdb8
	if (cr6.eq) goto loc_8255BDB8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255bdb8
	if (cr6.eq) goto loc_8255BDB8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8255bdb8
	if (!cr6.lt) goto loc_8255BDB8;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
loc_8255BDB8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8255bdc8
	if (cr6.eq) goto loc_8255BDC8;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x8255bd78
	if (cr6.lt) goto loc_8255BD78;
loc_8255BDC8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bdec
	if (cr6.eq) goto loc_8255BDEC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825600e8
	ctx.lr = 0x8255BDE8;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BDEC:
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8255ce20
	if (!cr6.eq) goto loc_8255CE20;
	// b 0x8255be10
	goto loc_8255BE10;
loc_8255BE00:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255be10
	if (cr6.eq) goto loc_8255BE10;
	// stw r20,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
loc_8255BE10:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r20,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r20.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255BE1C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bec0
	if (cr6.eq) goto loc_8255BEC0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_8255BE38:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbzx r25,r27,r28
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255be78
	if (cr6.eq) goto loc_8255BE78;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255be78
	if (cr6.eq) goto loc_8255BE78;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8255be78
	if (!cr6.lt) goto loc_8255BE78;
	// stbx r25,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
loc_8255BE78:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8255be88
	if (cr6.eq) goto loc_8255BE88;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x8255be38
	if (cr6.lt) goto loc_8255BE38;
loc_8255BE88:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255beac
	if (cr6.eq) goto loc_8255BEAC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825600e8
	ctx.lr = 0x8255BEA8;
	sub_825600E8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
loc_8255BEAC:
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8255ce20
	if (!cr6.eq) goto loc_8255CE20;
	// b 0x8255bed0
	goto loc_8255BED0;
loc_8255BEC0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bed0
	if (cr6.eq) goto loc_8255BED0;
	// stw r20,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r20.u32);
loc_8255BED0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255BED8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255bf38
	if (cr6.eq) goto loc_8255BF38;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// bge cr6,0x8255bf18
	if (!cr6.lt) goto loc_8255BF18;
loc_8255BEF0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x8255bef0
	if (cr6.lt) goto loc_8255BEF0;
loc_8255BF18:
	// lhz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8255bf30
	if (cr6.eq) goto loc_8255BF30;
	// addi r11,r22,-392
	ctx.r11.s64 = ctx.r22.s64 + -392;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255BF30:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8255BF38:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255bf5c
	if (cr6.eq) goto loc_8255BF5C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// srawi r9,r10,9
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 9;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r24,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r24.u32);
loc_8255BF5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825600e8
	ctx.lr = 0x8255BF6C;
	sub_825600E8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255BF80:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8255bfb0
	if (!cr6.lt) goto loc_8255BFB0;
loc_8255BF88:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8255bf88
	if (cr6.lt) goto loc_8255BF88;
loc_8255BFB0:
	// rlwinm r10,r29,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r29,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r29,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,10
	ctx.r8.s64 = 10;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8255BFE8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255cde0
	if (cr6.eq) goto loc_8255CDE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8255fa68
	ctx.lr = 0x8255C004;
	sub_8255FA68(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255C014:
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
loc_8255C024:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255c048
	if (cr6.eq) goto loc_8255C048;
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// li r10,26
	ctx.r10.s64 = 26;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C048:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x8255c078
	if (!cr6.lt) goto loc_8255C078;
loc_8255C050:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x8255c050
	if (cr6.lt) goto loc_8255C050;
loc_8255C078:
	// rlwinm r10,r29,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8255c110
	if (cr6.gt) goto loc_8255C110;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255c0bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255C0BC;
	// bdzf 4*cr6+eq,0x8255c0f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255C0F0;
	// bne cr6,0x8255c104
	if (!cr6.eq) goto loc_8255C104;
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C0BC:
	// addi r11,r17,2048
	ctx.r11.s64 = ctx.r17.s64 + 2048;
	// stw r17,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r17.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r14,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r14.u32);
	// li r7,19
	ctx.r7.s64 = 19;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r8,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r8.u32);
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// bne cr6,0x8255c110
	if (!cr6.eq) goto loc_8255C110;
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8255ce20
	goto loc_8255CE20;
loc_8255C0F0:
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C104:
	// addi r11,r22,-372
	ctx.r11.s64 = ctx.r22.s64 + -372;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
loc_8255C110:
	// rlwinm r29,r10,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,-2
	ctx.r31.s64 = ctx.r9.s64 + -2;
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C11C:
	// clrlwi r11,r31,29
	ctx.r11.u64 = ctx.r31.u32 & 0x7;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8255c158
	if (!cr6.lt) goto loc_8255C158;
loc_8255C130:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8255c130
	if (cr6.lt) goto loc_8255C130;
loc_8255C158:
	// not r10,r29
	ctx.r10.u64 = ~ctx.r29.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255c178
	if (cr6.eq) goto loc_8255C178;
	// addi r11,r22,-352
	ctx.r11.s64 = ctx.r22.s64 + -352;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C178:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
loc_8255C194:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255C19C:
	// lwz r27,64(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8255c1f8
	if (cr6.eq) goto loc_8255C1F8;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// ble cr6,0x8255c1b4
	if (!cr6.gt) goto loc_8255C1B4;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8255C1B4:
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, xer);
	// ble cr6,0x8255c1c0
	if (!cr6.gt) goto loc_8255C1C0;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_8255C1C0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831ce980
	ctx.lr = 0x8255C1D8;
	sub_831CE980(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r18,r27,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r27.s64;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// add r19,r27,r19
	ctx.r19.u64 = ctx.r27.u64 + ctx.r19.u64;
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C1F8:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C204:
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// bge cr6,0x8255c234
	if (!cr6.lt) goto loc_8255C234;
loc_8255C20C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// blt cr6,0x8255c20c
	if (cr6.lt) goto loc_8255C20C;
loc_8255C234:
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r11,257
	ctx.r8.s64 = ctx.r11.s64 + 257;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r7,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r7.u32);
	// rlwinm r29,r9,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// stw r5,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r5.u32);
	// cmplwi cr6,r6,286
	cr6.compare<uint32_t>(ctx.r6.u32, 286, xer);
	// bgt cr6,0x8255c398
	if (cr6.gt) goto loc_8255C398;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x8255c398
	if (cr6.gt) goto loc_8255C398;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r20,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r20.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255C28C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8255c310
	if (!cr6.lt) goto loc_8255C310;
loc_8255C29C:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x8255c2cc
	if (!cr6.lt) goto loc_8255C2CC;
loc_8255C2A4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x8255c2a4
	if (cr6.lt) goto loc_8255C2A4;
loc_8255C2CC:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r10,r17,2176
	ctx.r10.s64 = ctx.r17.s64 + 2176;
	// clrlwi r9,r29,29
	ctx.r9.u64 = ctx.r29.u32 & 0x7;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r29,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// lhzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,56
	ctx.r7.s64 = ctx.r11.s64 + 56;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r30
	PPC_STORE_U16(ctx.r6.u32 + ctx.r30.u32, ctx.r9.u16);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r5.u32);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x8255c29c
	if (cr6.lt) goto loc_8255C29C;
loc_8255C310:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bge cr6,0x8255c350
	if (!cr6.lt) goto loc_8255C350;
loc_8255C31C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r10,r17,2176
	ctx.r10.s64 = ctx.r17.s64 + 2176;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r20.u16);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r6.u32);
	// cmplwi cr6,r5,19
	cr6.compare<uint32_t>(ctx.r5.u32, 19, xer);
	// blt cr6,0x8255c31c
	if (cr6.lt) goto loc_8255C31C;
loc_8255C350:
	// addi r11,r30,1328
	ctx.r11.s64 = ctx.r30.s64 + 1328;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r6,r30,108
	ctx.r6.s64 = ctx.r30.s64 + 108;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// addi r7,r30,84
	ctx.r7.s64 = ctx.r30.s64 + 84;
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// addi r8,r30,752
	ctx.r8.s64 = ctx.r30.s64 + 752;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8255f5b8
	ctx.lr = 0x8255C380;
	sub_8255F5B8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255c3a4
	if (cr6.eq) goto loc_8255C3A4;
	// addi r11,r22,-284
	ctx.r11.s64 = ctx.r22.s64 + -284;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C398:
	// addi r11,r22,-320
	ctx.r11.s64 = ctx.r22.s64 + -320;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C3A4:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r20,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r20.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255C3B0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8255c5f4
	if (!cr6.lt) goto loc_8255C5F4;
loc_8255C3C8:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 & ctx.r29.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x8255c444
	if (!cr6.gt) goto loc_8255C444;
loc_8255C3F4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// slw r11,r24,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 & ctx.r29.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8255c3f4
	if (cr6.gt) goto loc_8255C3F4;
loc_8255C444:
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8255c47c
	if (!cr6.lt) goto loc_8255C47C;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u16);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r7.u32);
	// b 0x8255c5dc
	goto loc_8255C5DC;
loc_8255C47C:
	// bne cr6,0x8255c4e8
	if (!cr6.eq) goto loc_8255C4E8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x8255c4b4
	if (!cr6.lt) goto loc_8255C4B4;
loc_8255C48C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255c48c
	if (cr6.lt) goto loc_8255C48C;
loc_8255C4B4:
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255c618
	if (cr6.eq) goto loc_8255C618;
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// lhzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// b 0x8255c590
	goto loc_8255C590;
loc_8255C4E8:
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// bne cr6,0x8255c540
	if (!cr6.eq) goto loc_8255C540;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x8255c524
	if (!cr6.lt) goto loc_8255C524;
loc_8255C4FC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255c4fc
	if (cr6.lt) goto loc_8255C4FC;
loc_8255C524:
	// srw r7,r29,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,29
	ctx.r8.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r29,r7,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// addi r31,r9,-3
	ctx.r31.s64 = ctx.r9.s64 + -3;
	// b 0x8255c58c
	goto loc_8255C58C;
loc_8255C540:
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x8255c574
	if (!cr6.lt) goto loc_8255C574;
loc_8255C54C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255c54c
	if (cr6.lt) goto loc_8255C54C;
loc_8255C574:
	// srw r7,r29,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r8,r7,25
	ctx.r8.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r29,r7,25,7,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r8,11
	ctx.r11.s64 = ctx.r8.s64 + 11;
	// addi r31,r9,-7
	ctx.r31.s64 = ctx.r9.s64 + -7;
loc_8255C58C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8255C590:
	// lwz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8255c624
	if (cr6.gt) goto loc_8255C624;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255c5dc
	if (cr6.eq) goto loc_8255C5DC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8255C5BC:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r8.u32);
	// bdnz 0x8255c5bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255C5BC;
loc_8255C5DC:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8255c3c8
	if (cr6.lt) goto loc_8255C3C8;
loc_8255C5F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(ctx.r11.s32, 29, xer);
	// beq cr6,0x8255cdc8
	if (cr6.eq) goto loc_8255CDC8;
	// lhz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 624);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255c630
	if (!cr6.eq) goto loc_8255C630;
	// addi r11,r22,-200
	ctx.r11.s64 = ctx.r22.s64 + -200;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C618:
	// addi r11,r22,-256
	ctx.r11.s64 = ctx.r22.s64 + -256;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C624:
	// addi r11,r22,-228
	ctx.r11.s64 = ctx.r22.s64 + -228;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C630:
	// addi r11,r30,1328
	ctx.r11.s64 = ctx.r30.s64 + 1328;
	// stw r14,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r14.u32);
	// addi r27,r30,108
	ctx.r27.s64 = ctx.r30.s64 + 108;
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r25,r30,752
	ctx.r25.s64 = ctx.r30.s64 + 752;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// addi r7,r30,84
	ctx.r7.s64 = ctx.r30.s64 + 84;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8255f5b8
	ctx.lr = 0x8255C664;
	sub_8255F5B8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255c67c
	if (cr6.eq) goto loc_8255C67C;
	// addi r11,r22,-160
	ctx.r11.s64 = ctx.r22.s64 + -160;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C67C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r7,r30,88
	ctx.r7.s64 = ctx.r30.s64 + 88;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8255f5b8
	ctx.lr = 0x8255C6B4;
	sub_8255F5B8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255c6cc
	if (cr6.eq) goto loc_8255C6CC;
	// addi r11,r22,-132
	ctx.r11.s64 = ctx.r22.s64 + -132;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C6CC:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r10,19
	ctx.r10.s64 = 19;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
loc_8255C6E0:
	// li r6,20
	ctx.r6.s64 = 20;
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_8255C6EC:
	// cmplwi cr6,r26,6
	cr6.compare<uint32_t>(ctx.r26.u32, 6, xer);
	// blt cr6,0x8255c74c
	if (cr6.lt) goto loc_8255C74C;
	// cmplwi cr6,r18,258
	cr6.compare<uint32_t>(ctx.r18.u32, 258, xer);
	// blt cr6,0x8255c74c
	if (cr6.lt) goto loc_8255C74C;
	// stw r19,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r19.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r18,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r18.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// bl 0x8255f140
	ctx.lr = 0x8255C720;
	sub_8255F140(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// lwz r19,12(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r18,16(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r26,4(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bne cr6,0x8255cdc8
	if (!cr6.eq) goto loc_8255CDC8;
	// stw r25,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r25.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C74C:
	// stw r20,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r20.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x8255c7c8
	if (!cr6.gt) goto loc_8255C7C8;
loc_8255C77C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// slw r11,r24,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8255c77c
	if (cr6.gt) goto loc_8255C77C;
loc_8255C7C8:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255c898
	if (cr6.eq) goto loc_8255C898;
	// rlwinm r7,r9,0,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8255c898
	if (!cr6.eq) goto loc_8255C898;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// lbz r3,89(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// ble cr6,0x8255c88c
	if (!cr6.gt) goto loc_8255C88C;
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
loc_8255C82C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r24,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r4.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8255c82c
	if (cr6.gt) goto loc_8255C82C;
loc_8255C88C:
	// srw r29,r29,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r10.u32);
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8255C898:
	// lwz r9,7108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r9,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r7.u32);
	// bne cr6,0x8255c8cc
	if (!cr6.eq) goto loc_8255C8CC;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C8CC:
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255c8e8
	if (cr6.eq) goto loc_8255C8E8;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r25,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r25.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255C8E8:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255c900
	if (cr6.eq) goto loc_8255C900;
	// addi r11,r22,-108
	ctx.r11.s64 = ctx.r22.s64 + -108;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255C900:
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8255C910:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255c97c
	if (cr6.eq) goto loc_8255C97C;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8255c950
	if (!cr6.lt) goto loc_8255C950;
loc_8255C924:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255c924
	if (cr6.lt) goto loc_8255C924;
loc_8255C950:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,7108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r8,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r8.u32);
	// stw r7,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r7.u32);
loc_8255C97C:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,7112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7112, ctx.r11.u32);
loc_8255C98C:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x8255ca04
	if (!cr6.gt) goto loc_8255CA04;
loc_8255C9B8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// slw r11,r24,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8255c9b8
	if (cr6.gt) goto loc_8255C9B8;
loc_8255CA04:
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r5,r9,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8255cadc
	if (!cr6.eq) goto loc_8255CADC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 & ctx.r29.u64;
	// lbz r3,89(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// ble cr6,0x8255cac4
	if (!cr6.gt) goto loc_8255CAC4;
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
loc_8255CA64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r11,r24,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r4.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8255ca64
	if (cr6.gt) goto loc_8255CA64;
loc_8255CAC4:
	// lwz r8,7108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// srw r29,r29,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r8,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r8.u32);
loc_8255CADC:
	// lwz r10,7108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r7,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r7.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8255cb0c
	if (cr6.eq) goto loc_8255CB0C;
	// addi r11,r22,-80
	ctx.r11.s64 = ctx.r22.s64 + -80;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255CB0C:
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r8.u32);
loc_8255CB24:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255cb90
	if (cr6.eq) goto loc_8255CB90;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8255cb64
	if (!cr6.lt) goto loc_8255CB64;
loc_8255CB38:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x8255cb38
	if (cr6.lt) goto loc_8255CB38;
loc_8255CB64:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,7108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r29,r29,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r8,7108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7108, ctx.r8.u32);
	// stw r7,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r7.u32);
loc_8255CB90:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255CB98:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// subf r10,r18,r16
	ctx.r10.s64 = ctx.r16.s64 - ctx.r18.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cc14
	if (!cr6.gt) goto loc_8255CC14;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8255cbd8
	if (!cr6.gt) goto loc_8255CBD8;
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255cbd8
	if (cr6.eq) goto loc_8255CBD8;
	// addi r11,r22,-56
	ctx.r11.s64 = ctx.r22.s64 + -56;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255CBD8:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cbfc
	if (!cr6.gt) goto loc_8255CBFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8255cc04
	goto loc_8255CC04;
loc_8255CBFC:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8255CC04:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cc20
	if (!cr6.gt) goto loc_8255CC20;
	// b 0x8255cc1c
	goto loc_8255CC1C;
loc_8255CC14:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// subf r9,r11,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r11.s64;
loc_8255CC1C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8255CC20:
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// ble cr6,0x8255cc2c
	if (!cr6.gt) goto loc_8255CC2C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8255CC2C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r18,r11,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r11.s64;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// subf r10,r19,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r19.s64;
loc_8255CC3C:
	// lbzx r9,r10,r19
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r9,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r9.u8);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// bne 0x8255cc3c
	if (!cr0.eq) goto loc_8255CC3C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255cdc8
	if (!cr6.eq) goto loc_8255CDC8;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255CC64:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r10.u8);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// b 0x8255cdc8
	goto loc_8255CDC8;
loc_8255CC88:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255cd64
	if (cr6.eq) goto loc_8255CD64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8255ccc4
	if (!cr6.lt) goto loc_8255CCC4;
loc_8255CC9C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8255cc9c
	if (cr6.lt) goto loc_8255CC9C;
loc_8255CCC4:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// subf. r5,r18,r16
	ctx.r5.s64 = ctx.r16.s64 - ctx.r18.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// beq 0x8255cd0c
	if (cr0.eq) goto loc_8255CD0C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r4,r5,r19
	ctx.r4.s64 = ctx.r19.s64 - ctx.r5.s64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255cd00
	if (cr6.eq) goto loc_8255CD00;
	// bl 0x825600e8
	ctx.lr = 0x8255CCFC;
	sub_825600E8(ctx, base);
	// b 0x8255cd04
	goto loc_8255CD04;
loc_8255CD00:
	// bl 0x8255fa68
	ctx.lr = 0x8255CD04;
	sub_8255FA68(ctx, base);
loc_8255CD04:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
loc_8255CD0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255cd24
	if (cr6.eq) goto loc_8255CD24;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8255cd44
	goto loc_8255CD44;
loc_8255CD24:
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r29,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF00;
	// rlwinm r9,r29,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8255CD44:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8255cd5c
	if (cr6.eq) goto loc_8255CD5C;
	// addi r11,r22,-24
	ctx.r11.s64 = ctx.r22.s64 + -24;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// b 0x8255cdc4
	goto loc_8255CDC4;
loc_8255CD5C:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8255CD64:
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255CD6C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255ce0c
	if (cr6.eq) goto loc_8255CE0C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8255ce0c
	if (cr6.eq) goto loc_8255CE0C;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8255cdb4
	if (!cr6.lt) goto loc_8255CDB4;
loc_8255CD8C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8255ce20
	if (cr6.eq) goto loc_8255CE20;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8255cd8c
	if (cr6.lt) goto loc_8255CD8C;
loc_8255CDB4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8255ce04
	if (cr6.eq) goto loc_8255CE04;
	// stw r22,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r22.u32);
loc_8255CDC4:
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
loc_8255CDC8:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// ble cr6,0x8255b7e0
	if (!cr6.gt) goto loc_8255B7E0;
loc_8255CDD4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255CDE0:
	// stw r19,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r19.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r18,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r18.u32);
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255CE04:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_8255CE0C:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8255CE14:
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// b 0x8255ce20
	goto loc_8255CE20;
loc_8255CE1C:
	// li r15,-3
	ctx.r15.s64 = -3;
loc_8255CE20:
	// stw r19,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r19.u32);
	// stw r18,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r18.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255ce70
	if (!cr6.eq) goto loc_8255CE70;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// beq cr6,0x8255cea0
	if (cr6.eq) goto loc_8255CEA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(ctx.r11.s32, 29, xer);
	// bge cr6,0x8255cea0
	if (!cr6.lt) goto loc_8255CEA0;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// blt cr6,0x8255ce70
	if (cr6.lt) goto loc_8255CE70;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8255cea0
	if (cr6.eq) goto loc_8255CEA0;
loc_8255CE70:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,12(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// subf r5,r11,r16
	ctx.r5.s64 = ctx.r16.s64 - ctx.r11.s64;
	// bl 0x8255b5e8
	ctx.lr = 0x8255CE84;
	sub_8255B5E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255cea0
	if (cr6.eq) goto loc_8255CEA0;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255CEA0:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r29,r10,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,16(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// subf r31,r8,r16
	ctx.r31.s64 = ctx.r16.s64 - ctx.r8.s64;
	// stw r7,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r7.u32);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r6,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// beq cr6,0x8255cf1c
	if (cr6.eq) goto loc_8255CF1C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8255cf1c
	if (cr6.eq) goto loc_8255CF1C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// beq cr6,0x8255cf10
	if (cr6.eq) goto loc_8255CF10;
	// bl 0x825600e8
	ctx.lr = 0x8255CF0C;
	sub_825600E8(ctx, base);
	// b 0x8255cf14
	goto loc_8255CF14;
loc_8255CF10:
	// bl 0x8255fa68
	ctx.lr = 0x8255CF14;
	sub_8255FA68(ctx, base);
loc_8255CF14:
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// stw r3,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r3.u32);
loc_8255CF1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// beq cr6,0x8255cf34
	if (cr6.eq) goto loc_8255CF34;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// bne cr6,0x8255cf38
	if (!cr6.eq) goto loc_8255CF38;
loc_8255CF34:
	// li r8,256
	ctx.r8.s64 = 256;
loc_8255CF38:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r11,-11
	ctx.r7.s64 = ctx.r11.s64 + -11;
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// subfic r5,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// li r3,128
	ctx.r3.s64 = 128;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// and r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 & ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r5.u32);
	// bne cr6,0x8255cf84
	if (!cr6.eq) goto loc_8255CF84;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8255cf90
	if (cr6.eq) goto loc_8255CF90;
loc_8255CF84:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8255cf9c
	if (!cr6.eq) goto loc_8255CF9C;
loc_8255CF90:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne cr6,0x8255cf9c
	if (!cr6.eq) goto loc_8255CF9C;
	// li r15,-5
	ctx.r15.s64 = -5;
loc_8255CF9C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255CFA8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255CFB4"))) PPC_WEAK_FUNC(sub_8255CFB4);
PPC_FUNC_IMPL(__imp__sub_8255CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CFB8"))) PPC_WEAK_FUNC(sub_8255CFB8);
PPC_FUNC_IMPL(__imp__sub_8255CFB8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255d038
	if (cr6.eq) goto loc_8255D038;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255d038
	if (cr6.eq) goto loc_8255D038;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255d038
	if (cr6.eq) goto loc_8255D038;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d004
	if (cr6.eq) goto loc_8255D004;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255D004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255D004:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255D018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
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
loc_8255D038:
	// li r3,-2
	ctx.r3.s64 = -2;
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

__attribute__((alias("__imp__sub_8255D050"))) PPC_WEAK_FUNC(sub_8255D050);
PPC_FUNC_IMPL(__imp__sub_8255D050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8255D058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// srawi r8,r31,31
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r7,r31,r8
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, xer);
	// ble cr6,0x8255d09c
	if (!cr6.gt) goto loc_8255D09C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,17404
	ctx.r4.s64 = ctx.r11.s64 + 17404;
	// bl 0x82553758
	ctx.lr = 0x8255D09C;
	sub_82553758(ctx, base);
loc_8255D09C:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwimi r11,r10,14,0,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// stwx r11,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0B4"))) PPC_WEAK_FUNC(sub_8255D0B4);
PPC_FUNC_IMPL(__imp__sub_8255D0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D0B8"))) PPC_WEAK_FUNC(sub_8255D0B8);
PPC_FUNC_IMPL(__imp__sub_8255D0B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D0C8"))) PPC_WEAK_FUNC(sub_8255D0C8);
PPC_FUNC_IMPL(__imp__sub_8255D0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8255d14c
	if (cr6.eq) goto loc_8255D14C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,1820
	ctx.r8.s64 = ctx.r11.s64 + 1820;
loc_8255D0E8:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x8255d114
	if (cr6.lt) goto loc_8255D114;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r6,r3,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8255d118
	if (!cr6.eq) goto loc_8255D118;
loc_8255D114:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8255D118:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r6,27
	cr6.compare<uint32_t>(ctx.r6.u32, 27, xer);
	// bne cr6,0x8255d154
	if (!cr6.eq) goto loc_8255D154;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8255d14c
	if (cr6.eq) goto loc_8255D14C;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8255d0e8
	if (!cr6.eq) goto loc_8255D0E8;
loc_8255D14C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8255D154:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D15C"))) PPC_WEAK_FUNC(sub_8255D15C);
PPC_FUNC_IMPL(__imp__sub_8255D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D160"))) PPC_WEAK_FUNC(sub_8255D160);
PPC_FUNC_IMPL(__imp__sub_8255D160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8255d19c
	if (cr6.lt) goto loc_8255D19C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r7,r8,1820
	ctx.r7.s64 = ctx.r8.s64 + 1820;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r3,r4,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255d1a0
	if (!cr6.eq) goto loc_8255D1A0;
loc_8255D19C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8255D1A0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r9,27
	cr6.compare<int32_t>(ctx.r9.s32, 27, xer);
	// beq cr6,0x8255d1b8
	if (cr6.eq) goto loc_8255D1B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8255D1B8:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x8255d1dc
	if (cr6.eq) goto loc_8255D1DC;
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x8255d1dc
	if (cr6.eq) goto loc_8255D1DC;
	// rlwimi r11,r5,6,18,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0x3FC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC03F);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8255D1DC:
	// lis r12,-75
	ctx.r12.s64 = -4915200;
	// rlwinm r8,r11,0,9,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FC000;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// rlwinm r7,r9,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
	// ori r6,r7,26
	ctx.r6.u64 = ctx.r7.u64 | 26;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D204"))) PPC_WEAK_FUNC(sub_8255D204);
PPC_FUNC_IMPL(__imp__sub_8255D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D208"))) PPC_WEAK_FUNC(sub_8255D208);
PPC_FUNC_IMPL(__imp__sub_8255D208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
loc_8255D220:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8255d258
	if (cr6.lt) goto loc_8255D258;
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// clrlwi r5,r6,26
	ctx.r5.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r6,r5,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255d258
	if (cr6.eq) goto loc_8255D258;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8255D258:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r6,27
	cr6.compare<int32_t>(ctx.r6.s32, 27, xer);
	// bne cr6,0x8255d288
	if (!cr6.eq) goto loc_8255D288;
	// lis r12,-75
	ctx.r12.s64 = -4915200;
	// rlwinm r5,r10,0,9,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FC000;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r6,r10,r12
	ctx.r6.u64 = ctx.r10.u64 & ctx.r12.u64;
	// rlwinm r10,r6,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x7FFF;
	// ori r6,r10,26
	ctx.r6.u64 = ctx.r10.u64 | 26;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8255D288:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r6,r9,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8255d220
	if (!cr6.eq) goto loc_8255D220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D2B8"))) PPC_WEAK_FUNC(sub_8255D2B8);
PPC_FUNC_IMPL(__imp__sub_8255D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8255D2C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8255d388
	if (cr6.eq) goto loc_8255D388;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r23,r11,17404
	ctx.r23.s64 = ctx.r11.s64 + 17404;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
loc_8255D2F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r31,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d318
	if (!cr6.eq) goto loc_8255D318;
	// li r26,-1
	ctx.r26.s64 = -1;
	// b 0x8255d320
	goto loc_8255D320;
loc_8255D318:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_8255D320:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8255d160
	ctx.lr = 0x8255D330;
	sub_8255D160(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bne cr6,0x8255d348
	if (!cr6.eq) goto loc_8255D348;
	// subf r11,r30,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r30.s64;
loc_8255D348:
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// srawi r9,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// xor r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// ble cr6,0x8255d36c
	if (!cr6.gt) goto loc_8255D36C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82553758
	ctx.lr = 0x8255D36C;
	sub_82553758(ctx, base);
loc_8255D36C:
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// rlwimi r11,r10,14,0,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// stwx r11,r29,r27
	PPC_STORE_U32(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u32);
	// bne cr6,0x8255d2f0
	if (!cr6.eq) goto loc_8255D2F0;
loc_8255D388:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D390"))) PPC_WEAK_FUNC(sub_8255D390);
PPC_FUNC_IMPL(__imp__sub_8255D390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d3ac
	if (!cr6.eq) goto loc_8255D3AC;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8255D3AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_8255D3BC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r11,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8255d3e8
	if (cr6.eq) goto loc_8255D3E8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d3bc
	if (!cr6.eq) goto loc_8255D3BC;
loc_8255D3E8:
	// b 0x8255d050
	sub_8255D050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D3EC"))) PPC_WEAK_FUNC(sub_8255D3EC);
PPC_FUNC_IMPL(__imp__sub_8255D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D3F0"))) PPC_WEAK_FUNC(sub_8255D3F0);
PPC_FUNC_IMPL(__imp__sub_8255D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255d440
	if (!cr6.gt) goto loc_8255D440;
	// cmpwi cr6,r30,250
	cr6.compare<int32_t>(ctx.r30.s32, 250, xer);
	// blt cr6,0x8255d438
	if (cr6.lt) goto loc_8255D438;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82553758
	ctx.lr = 0x8255D438;
	sub_82553758(ctx, base);
loc_8255D438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r30.u8);
loc_8255D440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D458"))) PPC_WEAK_FUNC(sub_8255D458);
PPC_FUNC_IMPL(__imp__sub_8255D458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255D460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255d4a4
	if (!cr6.gt) goto loc_8255D4A4;
	// cmpwi cr6,r30,250
	cr6.compare<int32_t>(ctx.r30.s32, 250, xer);
	// blt cr6,0x8255d49c
	if (cr6.lt) goto loc_8255D49C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82553758
	ctx.lr = 0x8255D49C;
	sub_82553758(ctx, base);
loc_8255D49C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r30.u8);
loc_8255D4A4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D4B8"))) PPC_WEAK_FUNC(sub_8255D4B8);
PPC_FUNC_IMPL(__imp__sub_8255D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8255D4C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82548dd8
	ctx.lr = 0x8255D4E0;
	sub_82548DD8(ctx, base);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bne cr6,0x8255d510
	if (!cr6.eq) goto loc_8255D510;
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8255D510:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x8255d56c
	if (!cr6.gt) goto loc_8255D56C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r8,r11,17468
	ctx.r8.s64 = ctx.r11.s64 + 17468;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825533e8
	ctx.lr = 0x8255D568;
	sub_825533E8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
loc_8255D56C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x8255d5a0
	if (!cr6.lt) goto loc_8255D5A0;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8255D580:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x8255d580
	if (cr6.lt) goto loc_8255D580;
loc_8255D5A0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x8255d5fc
	if (cr6.lt) goto loc_8255D5FC;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,5(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255d5fc
	if (cr6.eq) goto loc_8255D5FC;
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255d5fc
	if (cr6.eq) goto loc_8255D5FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825435e0
	ctx.lr = 0x8255D5FC;
	sub_825435E0(ctx, base);
loc_8255D5FC:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D610"))) PPC_WEAK_FUNC(sub_8255D610);
PPC_FUNC_IMPL(__imp__sub_8255D610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255d4b8
	ctx.lr = 0x8255D634;
	sub_8255D4B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D644"))) PPC_WEAK_FUNC(sub_8255D644);
PPC_FUNC_IMPL(__imp__sub_8255D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D648"))) PPC_WEAK_FUNC(sub_8255D648);
PPC_FUNC_IMPL(__imp__sub_8255D648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255d4b8
	ctx.lr = 0x8255D66C;
	sub_8255D4B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D67C"))) PPC_WEAK_FUNC(sub_8255D67C);
PPC_FUNC_IMPL(__imp__sub_8255D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D680"))) PPC_WEAK_FUNC(sub_8255D680);
PPC_FUNC_IMPL(__imp__sub_8255D680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x8255d6b4
	if (!cr6.eq) goto loc_8255D6B4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,14,9,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x7FC000) | (ctx.r7.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// blr 
	return;
loc_8255D6B4:
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r6,r8,23,0,8
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 23) & 0xFF800000) | (ctx.r6.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,39(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rotlwi r7,r9,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r6,0,26,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFC03F;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x8255d458
	sub_8255D458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D70C"))) PPC_WEAK_FUNC(sub_8255D70C);
PPC_FUNC_IMPL(__imp__sub_8255D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D710"))) PPC_WEAK_FUNC(sub_8255D710);
PPC_FUNC_IMPL(__imp__sub_8255D710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x8255d744
	if (!cr6.eq) goto loc_8255D744;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r5,r6,26,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFF;
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_8255D744:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r7,11
	ctx.r7.s64 = 11;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r6,r9,24,0,8
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF800000) | (ctx.r6.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D778"))) PPC_WEAK_FUNC(sub_8255D778);
PPC_FUNC_IMPL(__imp__sub_8255D778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8255d7bc
	if (cr6.lt) goto loc_8255D7BC;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r7,r8,1820
	ctx.r7.s64 = ctx.r8.s64 + 1820;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r4,r5,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d7bc
	if (cr6.eq) goto loc_8255D7BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8255D7BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FC0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwimi r10,r7,6,18,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x3FC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC03F);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D7D8"))) PPC_WEAK_FUNC(sub_8255D7D8);
PPC_FUNC_IMPL(__imp__sub_8255D7D8) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// lfd f31,8(r5)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfd f30,8(r4)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8255d8f0
	if (cr6.gt) goto loc_8255D8F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255d890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D890;
	// bdzf 4*cr6+eq,0x8255d898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D898;
	// bdzf 4*cr6+eq,0x8255d8a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D8A0;
	// bdzf 4*cr6+eq,0x8255d8b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D8B8;
	// bdzf 4*cr6+eq,0x8255d8d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D8D8;
	// bdzf 4*cr6+eq,0x8255d8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D8E8;
	// bdzf 4*cr6+eq,0x8255d8f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255D8F0;
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// fadd f1,f31,f30
	ctx.f1.f64 = ctx.f31.f64 + ctx.f30.f64;
loc_8255D87C:
	// fcmpu cr6,f1,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f1.f64);
	// bne cr6,0x8255d904
	if (!cr6.eq) goto loc_8255D904;
	// stfd f1,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255d908
	goto loc_8255D908;
loc_8255D890:
	// fsub f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64 - ctx.f31.f64;
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D898:
	// fmul f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 * ctx.f30.f64;
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D8A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8255d904
	if (cr6.eq) goto loc_8255D904;
	// fdiv f1,f30,f31
	ctx.f1.f64 = ctx.f30.f64 / ctx.f31.f64;
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D8B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8255d904
	if (cr6.eq) goto loc_8255D904;
	// fdiv f1,f30,f31
	ctx.f1.f64 = ctx.f30.f64 / ctx.f31.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x8255D8D0;
	sub_831D1CA8(ctx, base);
	// fnmsub f1,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f31.f64 - ctx.f30.f64);
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D8D8:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8255D8E4;
	sub_831D20A0(ctx, base);
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D8E8:
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// b 0x8255d87c
	goto loc_8255D87C;
loc_8255D8F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f1,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f1.u64);
	// b 0x8255d908
	goto loc_8255D908;
loc_8255D904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255D908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D924"))) PPC_WEAK_FUNC(sub_8255D924);
PPC_FUNC_IMPL(__imp__sub_8255D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D928"))) PPC_WEAK_FUNC(sub_8255D928);
PPC_FUNC_IMPL(__imp__sub_8255D928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D944"))) PPC_WEAK_FUNC(sub_8255D944);
PPC_FUNC_IMPL(__imp__sub_8255D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D948"))) PPC_WEAK_FUNC(sub_8255D948);
PPC_FUNC_IMPL(__imp__sub_8255D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255D950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8255d2b8
	ctx.lr = 0x8255D978;
	sub_8255D2B8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r29,r11,17512
	ctx.r29.s64 = ctx.r11.s64 + 17512;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255d9c0
	if (!cr6.gt) goto loc_8255D9C0;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r29,-20
	ctx.r8.s64 = ctx.r29.s64 + -20;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825533e8
	ctx.lr = 0x8255D9BC;
	sub_825533E8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_8255D9C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x8255da08
	if (!cr6.gt) goto loc_8255DA08;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x825533e8
	ctx.lr = 0x8255DA04;
	sub_825533E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_8255DA08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DA2C"))) PPC_WEAK_FUNC(sub_8255DA2C);
PPC_FUNC_IMPL(__imp__sub_8255DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DA30"))) PPC_WEAK_FUNC(sub_8255DA30);
PPC_FUNC_IMPL(__imp__sub_8255DA30) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// b 0x8255d948
	sub_8255D948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DA54"))) PPC_WEAK_FUNC(sub_8255DA54);
PPC_FUNC_IMPL(__imp__sub_8255DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DA58"))) PPC_WEAK_FUNC(sub_8255DA58);
PPC_FUNC_IMPL(__imp__sub_8255DA58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// b 0x8255d948
	sub_8255D948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DA74"))) PPC_WEAK_FUNC(sub_8255DA74);
PPC_FUNC_IMPL(__imp__sub_8255DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DA78"))) PPC_WEAK_FUNC(sub_8255DA78);
PPC_FUNC_IMPL(__imp__sub_8255DA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255DA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// li r9,50
	ctx.r9.s64 = 50;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// divw r10,r10,r9
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r29,511
	cr6.compare<int32_t>(ctx.r29.s32, 511, xer);
	// li r4,34
	ctx.r4.s64 = 34;
	// bgt cr6,0x8255dae8
	if (cr6.gt) goto loc_8255DAE8;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// rlwimi r4,r7,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x8255d948
	ctx.lr = 0x8255DAD8;
	sub_8255D948(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255DAE8:
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwimi r4,r9,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x8255d948
	ctx.lr = 0x8255DAF8;
	sub_8255D948(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DB0C;
	sub_8255D948(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DB1C"))) PPC_WEAK_FUNC(sub_8255DB1C);
PPC_FUNC_IMPL(__imp__sub_8255DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DB20"))) PPC_WEAK_FUNC(sub_8255DB20);
PPC_FUNC_IMPL(__imp__sub_8255DB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255db48
	if (!cr6.gt) goto loc_8255DB48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8255db6c
	if (!cr6.eq) goto loc_8255DB6C;
	// lbz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_8255DB48:
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwimi r4,r6,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255d948
	sub_8255D948(ctx, base);
	return;
loc_8255DB6C:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x8255db48
	if (!cr6.eq) goto loc_8255DB48;
	// rlwinm r7,r11,26,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8255db48
	if (cr6.gt) goto loc_8255DB48;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8255db48
	if (cr6.gt) goto loc_8255DB48;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,23,0,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xFF800000) | (ctx.r11.u64 & 0xFFFFFFFF007FFFFF);
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DBC8"))) PPC_WEAK_FUNC(sub_8255DBC8);
PPC_FUNC_IMPL(__imp__sub_8255DBC8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DC00;
	sub_8255D948(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255DC14;
	sub_8255D390(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DC30"))) PPC_WEAK_FUNC(sub_8255DC30);
PPC_FUNC_IMPL(__imp__sub_8255DC30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r11,23,0,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r4,r7,30
	ctx.r4.u64 = ctx.r7.u64 | 30;
	// b 0x8255d948
	sub_8255D948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DC50"))) PPC_WEAK_FUNC(sub_8255DC50);
PPC_FUNC_IMPL(__imp__sub_8255DC50) {
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
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// bl 0x8255d948
	ctx.lr = 0x8255DC8C;
	sub_8255D948(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DCB0;
	sub_8255D948(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255DCC4;
	sub_8255D390(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DCE0"))) PPC_WEAK_FUNC(sub_8255DCE0);
PPC_FUNC_IMPL(__imp__sub_8255DCE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x8255d390
	sub_8255D390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DCF4"))) PPC_WEAK_FUNC(sub_8255DCF4);
PPC_FUNC_IMPL(__imp__sub_8255DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DCF8"))) PPC_WEAK_FUNC(sub_8255DCF8);
PPC_FUNC_IMPL(__imp__sub_8255DCF8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8255de6c
	if (cr6.gt) goto loc_8255DE6C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255dd60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DD60;
	// bdzf 4*cr6+eq,0x8255dd98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DD98;
	// bdzf 4*cr6+eq,0x8255ddd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DDD0;
	// bdzf 4*cr6+eq,0x8255de6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DE6C;
	// bdzf 4*cr6+eq,0x8255de6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DE6C;
	// bdzf 4*cr6+eq,0x8255de6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DE6C;
	// bdzf 4*cr6+eq,0x8255de64
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255DE64;
	// bne cr6,0x8255de64
	if (!cr6.eq) goto loc_8255DE64;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8255DD60:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r4,r11,23,0,8
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 23) & 0xFF800000) | (ctx.r4.u64 & 0xFFFFFFFF007FFFFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DD78;
	sub_8255D948(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_8255DD98:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r4,r11,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DDB0;
	sub_8255D948(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_8255DDD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255ddf8
	if (!cr6.eq) goto loc_8255DDF8;
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255ddf8
	if (cr6.lt) goto loc_8255DDF8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_8255DDF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255de20
	if (!cr6.eq) goto loc_8255DE20;
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255de20
	if (cr6.lt) goto loc_8255DE20;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
loc_8255DE20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r4,r8,14,0,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0xFFFFC000) | (ctx.r4.u64 & 0xFFFFFFFF00003FFF);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255DE44;
	sub_8255D948(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_8255DE64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8255d710
	ctx.lr = 0x8255DE6C;
	sub_8255D710(ctx, base);
loc_8255DE6C:
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

__attribute__((alias("__imp__sub_8255DE80"))) PPC_WEAK_FUNC(sub_8255DE80);
PPC_FUNC_IMPL(__imp__sub_8255DE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255DE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255DE9C;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bgt cr6,0x8255dfec
	if (cr6.gt) goto loc_8255DFEC;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8508
	ctx.r12.s64 = ctx.r12.s64 + -8508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8255DEF4;
	case 1:
		goto loc_8255DF18;
	case 2:
		goto loc_8255DF18;
	case 3:
		goto loc_8255DF34;
	case 4:
		goto loc_8255DF4C;
	case 5:
		goto loc_8255DFEC;
	case 6:
		goto loc_8255DFEC;
	case 7:
		goto loc_8255DFEC;
	case 8:
		goto loc_8255DFEC;
	case 9:
		goto loc_8255DFEC;
	case 10:
		goto loc_8255DF88;
	case 11:
		goto loc_8255DFB8;
	default:
		return;
	}
	// lwz r18,-8460(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8460);
	// lwz r18,-8424(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8424);
	// lwz r18,-8424(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8424);
	// lwz r18,-8396(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8396);
	// lwz r18,-8372(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8372);
	// lwz r18,-8212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8212);
	// lwz r18,-8212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8212);
	// lwz r18,-8212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8212);
	// lwz r18,-8212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8212);
	// lwz r18,-8212(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8212);
	// lwz r18,-8312(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8312);
	// lwz r18,-8264(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8264);
loc_8255DEF4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255db20
	ctx.lr = 0x8255DF04;
	sub_8255DB20(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255DF18:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r4,2
	ctx.r4.s64 = 2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,12,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x20000;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// rlwimi r4,r7,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255dfd0
	goto loc_8255DFD0;
loc_8255DF34:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255dfd0
	goto loc_8255DFD0;
loc_8255DF4C:
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d4b8
	ctx.lr = 0x8255DF6C;
	sub_8255D4B8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | ctx.r30.u64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255dfd8
	goto loc_8255DFD8;
loc_8255DF88:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r8,r30,6,18,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r30.u32, 6) & 0x3FC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC03F);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255DFB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// beq cr6,0x8255dfe0
	if (cr6.eq) goto loc_8255DFE0;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// rlwinm r4,r9,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_8255DFD0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8255DFD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d948
	ctx.lr = 0x8255DFE0;
	sub_8255D948(ctx, base);
loc_8255DFE0:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8255DFEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DFF4"))) PPC_WEAK_FUNC(sub_8255DFF4);
PPC_FUNC_IMPL(__imp__sub_8255DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DFF8"))) PPC_WEAK_FUNC(sub_8255DFF8);
PPC_FUNC_IMPL(__imp__sub_8255DFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255E000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x8255e06c
	if (cr6.eq) goto loc_8255E06C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255e050
	if (!cr6.gt) goto loc_8255E050;
	// cmpwi cr6,r30,250
	cr6.compare<int32_t>(ctx.r30.s32, 250, xer);
	// blt cr6,0x8255e048
	if (cr6.lt) goto loc_8255E048;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82553758
	ctx.lr = 0x8255E048;
	sub_82553758(ctx, base);
loc_8255E048:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r30.u8);
loc_8255E050:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x8255de80
	ctx.lr = 0x8255E06C;
	sub_8255DE80(ctx, base);
loc_8255E06C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E074"))) PPC_WEAK_FUNC(sub_8255E074);
PPC_FUNC_IMPL(__imp__sub_8255E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E078"))) PPC_WEAK_FUNC(sub_8255E078);
PPC_FUNC_IMPL(__imp__sub_8255E078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8255E080;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8255de80
	ctx.lr = 0x8255E094;
	sub_8255DE80(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x8255e0b0
	if (!cr6.eq) goto loc_8255E0B0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255E0B0;
	sub_8255D390(ctx, base);
loc_8255E0B0:
	// lwz r27,20(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r4,r27
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, xer);
	// beq cr6,0x8255e1a8
	if (cr6.eq) goto loc_8255E1A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x8255d0c8
	ctx.lr = 0x8255E0D4;
	sub_8255D0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255e0f0
	if (!cr6.eq) goto loc_8255E0F0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d0c8
	ctx.lr = 0x8255E0E8;
	sub_8255D0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255e170
	if (cr6.eq) goto loc_8255E170;
loc_8255E0F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x8255e104
	if (!cr6.eq) goto loc_8255E104;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x8255e110
	goto loc_8255E110;
loc_8255E104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dbc8
	ctx.lr = 0x8255E10C;
	sub_8255DBC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8255E110:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r29,r26,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r29,16386
	ctx.r4.u64 = ctx.r29.u64 | 16386;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255E130;
	sub_8255D948(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// oris r4,r29,128
	ctx.r4.u64 = ctx.r29.u64 | 8388608;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255E154;
	sub_8255D948(ctx, base);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255E170;
	sub_8255D390(ctx, base);
loc_8255E170:
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8255d2b8
	ctx.lr = 0x8255E190;
	sub_8255D2B8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d2b8
	ctx.lr = 0x8255E1A8;
	sub_8255D2B8(ctx, base);
loc_8255E1A8:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E1C4"))) PPC_WEAK_FUNC(sub_8255E1C4);
PPC_FUNC_IMPL(__imp__sub_8255E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E1C8"))) PPC_WEAK_FUNC(sub_8255E1C8);
PPC_FUNC_IMPL(__imp__sub_8255E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255E1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255E1E0;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e214
	if (!cr6.eq) goto loc_8255E214;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e214
	if (!cr6.eq) goto loc_8255E214;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e214
	if (cr6.lt) goto loc_8255E214;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E214:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x8255e24c
	if (!cr6.gt) goto loc_8255E24C;
	// cmpwi cr6,r30,250
	cr6.compare<int32_t>(ctx.r30.s32, 250, xer);
	// blt cr6,0x8255e244
	if (cr6.lt) goto loc_8255E244;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82553758
	ctx.lr = 0x8255E244;
	sub_82553758(ctx, base);
loc_8255E244:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r30.u8);
loc_8255E24C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x8255e078
	ctx.lr = 0x8255E268;
	sub_8255E078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E270"))) PPC_WEAK_FUNC(sub_8255E270);
PPC_FUNC_IMPL(__imp__sub_8255E270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255dcf8
	ctx.lr = 0x8255E290;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e2cc
	if (!cr6.eq) goto loc_8255E2CC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8255e2d8
	if (cr6.eq) goto loc_8255E2D8;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x8255e2cc
	if (cr6.lt) goto loc_8255E2CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e078
	ctx.lr = 0x8255E2C8;
	sub_8255E078(ctx, base);
	// b 0x8255e2d8
	goto loc_8255E2D8;
loc_8255E2CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x8255E2D8;
	sub_8255E1C8(ctx, base);
loc_8255E2D8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E2F4"))) PPC_WEAK_FUNC(sub_8255E2F4);
PPC_FUNC_IMPL(__imp__sub_8255E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E2F8"))) PPC_WEAK_FUNC(sub_8255E2F8);
PPC_FUNC_IMPL(__imp__sub_8255E2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8255e30c
	if (cr6.eq) goto loc_8255E30C;
	// b 0x8255e270
	sub_8255E270(ctx, base);
	return;
loc_8255E30C:
	// b 0x8255dcf8
	sub_8255DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E310"))) PPC_WEAK_FUNC(sub_8255E310);
PPC_FUNC_IMPL(__imp__sub_8255E310) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8255e344
	if (cr6.eq) goto loc_8255E344;
	// bl 0x8255e270
	ctx.lr = 0x8255E340;
	sub_8255E270(ctx, base);
	// b 0x8255e348
	goto loc_8255E348;
loc_8255E344:
	// bl 0x8255dcf8
	ctx.lr = 0x8255E348;
	sub_8255DCF8(ctx, base);
loc_8255E348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x8255e410
	if (cr6.gt) goto loc_8255E410;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255e370
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E370;
	// bdzf 4*cr6+eq,0x8255e370
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E370;
	// bdzf 4*cr6+eq,0x8255e3fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E3FC;
	// bne cr6,0x8255e370
	if (!cr6.eq) goto loc_8255E370;
loc_8255E370:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bgt cr6,0x8255e410
	if (cr6.gt) goto loc_8255E410;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8255e3a4
	if (!cr6.eq) goto loc_8255E3A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8255e3dc
	goto loc_8255E3DC;
loc_8255E3A4:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8255e3c4
	if (!cr6.eq) goto loc_8255E3C4;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8255e3dc
	goto loc_8255E3DC;
loc_8255E3C4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_8255E3DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d4b8
	ctx.lr = 0x8255E3E8;
	sub_8255D4B8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// ori r3,r3,256
	ctx.r3.u64 = ctx.r3.u64 | 256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8255e41c
	goto loc_8255E41C;
loc_8255E3FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bgt cr6,0x8255e410
	if (cr6.gt) goto loc_8255E410;
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// b 0x8255e41c
	goto loc_8255E41C;
loc_8255E410:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255E41C;
	sub_8255E270(ctx, base);
loc_8255E41C:
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

__attribute__((alias("__imp__sub_8255E434"))) PPC_WEAK_FUNC(sub_8255E434);
PPC_FUNC_IMPL(__imp__sub_8255E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E438"))) PPC_WEAK_FUNC(sub_8255E438);
PPC_FUNC_IMPL(__imp__sub_8255E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255E440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8255e554
	if (cr6.gt) goto loc_8255E554;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255e4c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E4C0;
	// bdzf 4*cr6+eq,0x8255e4ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E4EC;
	// bne cr6,0x8255e518
	if (!cr6.eq) goto loc_8255E518;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e4a8
	if (!cr6.eq) goto loc_8255E4A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e4a8
	if (!cr6.eq) goto loc_8255E4A8;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e4a8
	if (cr6.lt) goto loc_8255E4A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E4A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e078
	ctx.lr = 0x8255E4B8;
	sub_8255E078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255E4C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255E4CC;
	sub_8255E270(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255e54c
	goto loc_8255E54C;
loc_8255E4EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255E4F8;
	sub_8255E270(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x8255e54c
	goto loc_8255E54C;
loc_8255E518:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255E524;
	sub_8255E310(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
loc_8255E54C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d948
	ctx.lr = 0x8255E554;
	sub_8255D948(ctx, base);
loc_8255E554:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e588
	if (!cr6.eq) goto loc_8255E588;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e588
	if (!cr6.eq) goto loc_8255E588;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e588
	if (cr6.lt) goto loc_8255E588;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E590"))) PPC_WEAK_FUNC(sub_8255E590);
PPC_FUNC_IMPL(__imp__sub_8255E590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255E598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255E5AC;
	sub_8255E270(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e5e0
	if (!cr6.eq) goto loc_8255E5E0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e5e0
	if (!cr6.eq) goto loc_8255E5E0;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e5e0
	if (cr6.lt) goto loc_8255E5E0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E5E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// lbz r10,75(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 75);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x8255e618
	if (!cr6.gt) goto loc_8255E618;
	// cmpwi cr6,r30,250
	cr6.compare<int32_t>(ctx.r30.s32, 250, xer);
	// blt cr6,0x8255e610
	if (cr6.lt) goto loc_8255E610;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,17432
	ctx.r4.s64 = ctx.r11.s64 + 17432;
	// bl 0x82553758
	ctx.lr = 0x8255E610;
	sub_82553758(ctx, base);
loc_8255E610:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r30,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r30.u8);
loc_8255E618:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8255e310
	ctx.lr = 0x8255E630;
	sub_8255E310(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r8,r10,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// or r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 | ctx.r29.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// bl 0x8255d948
	ctx.lr = 0x8255E65C;
	sub_8255D948(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// bne cr6,0x8255e690
	if (!cr6.eq) goto loc_8255E690;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e690
	if (!cr6.eq) goto loc_8255E690;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e690
	if (cr6.lt) goto loc_8255E690;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E690:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E6A4"))) PPC_WEAK_FUNC(sub_8255E6A4);
PPC_FUNC_IMPL(__imp__sub_8255E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E6A8"))) PPC_WEAK_FUNC(sub_8255E6A8);
PPC_FUNC_IMPL(__imp__sub_8255E6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255E6B0;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8255e718
	if (!cr6.eq) goto loc_8255E718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r7,19
	cr6.compare<int32_t>(ctx.r7.s32, 19, xer);
	// bne cr6,0x8255e718
	if (!cr6.eq) goto loc_8255E718;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// rlwinm r5,r11,9,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x8255dc50
	ctx.lr = 0x8255E710;
	sub_8255DC50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255E718:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dff8
	ctx.lr = 0x8255E724;
	sub_8255DFF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e758
	if (!cr6.eq) goto loc_8255E758;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e758
	if (!cr6.eq) goto loc_8255E758;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e758
	if (cr6.lt) goto loc_8255E758;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255E758:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dc50
	ctx.lr = 0x8255E770;
	sub_8255DC50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E778"))) PPC_WEAK_FUNC(sub_8255E778);
PPC_FUNC_IMPL(__imp__sub_8255E778) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255E798;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8255e7ec
	if (cr6.gt) goto loc_8255E7EC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8255e7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7EC;
	// bdzf 4*cr6+eq,0x8255e7d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7D0;
	// bdzf 4*cr6+eq,0x8255e7d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7D0;
	// bdzf 4*cr6+eq,0x8255e7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7EC;
	// bdzf 4*cr6+eq,0x8255e7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7EC;
	// bdzf 4*cr6+eq,0x8255e7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7EC;
	// bdzf 4*cr6+eq,0x8255e7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8255E7EC;
	// bne cr6,0x8255e7d8
	if (!cr6.eq) goto loc_8255E7D8;
loc_8255E7D0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8255e800
	goto loc_8255E800;
loc_8255E7D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d778
	ctx.lr = 0x8255E7E4;
	sub_8255D778(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8255e800
	goto loc_8255E800;
loc_8255E7EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e6a8
	ctx.lr = 0x8255E7FC;
	sub_8255E6A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8255E800:
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255E80C;
	sub_8255D390(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8255d390
	ctx.lr = 0x8255E824;
	sub_8255D390(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E844"))) PPC_WEAK_FUNC(sub_8255E844);
PPC_FUNC_IMPL(__imp__sub_8255E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E848"))) PPC_WEAK_FUNC(sub_8255E848);
PPC_FUNC_IMPL(__imp__sub_8255E848) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255E868;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8255e950
	if (cr6.gt) goto loc_8255E950;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6000
	ctx.r12.s64 = ctx.r12.s64 + -6000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8255E8C0;
	case 1:
		goto loc_8255E8CC;
	case 2:
		goto loc_8255E8C0;
	case 3:
		goto loc_8255E8CC;
	case 4:
		goto loc_8255E8CC;
	case 5:
		goto loc_8255E950;
	case 6:
		goto loc_8255E950;
	case 7:
		goto loc_8255E950;
	case 8:
		goto loc_8255E950;
	case 9:
		goto loc_8255E8D8;
	case 10:
		goto loc_8255E8E8;
	case 11:
		goto loc_8255E8E8;
	default:
		return;
	}
	// lwz r18,-5952(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5952);
	// lwz r18,-5940(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5940);
	// lwz r18,-5952(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5952);
	// lwz r18,-5940(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5940);
	// lwz r18,-5940(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5940);
	// lwz r18,-5808(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5808);
	// lwz r18,-5808(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5808);
	// lwz r18,-5808(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5808);
	// lwz r18,-5808(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5808);
	// lwz r18,-5928(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5928);
	// lwz r18,-5912(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5912);
	// lwz r18,-5912(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -5912);
loc_8255E8C0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8255e950
	goto loc_8255E950;
loc_8255E8CC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8255e950
	goto loc_8255E950;
loc_8255E8D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d778
	ctx.lr = 0x8255E8E4;
	sub_8255D778(ctx, base);
	// b 0x8255e950
	goto loc_8255E950;
loc_8255E8E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dff8
	ctx.lr = 0x8255E8F4;
	sub_8255DFF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255e928
	if (!cr6.eq) goto loc_8255E928;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255e928
	if (!cr6.eq) goto loc_8255E928;
	// lbz r10,50(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255e928
	if (cr6.lt) goto loc_8255E928;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8255E928:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r11,23,0,8
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 23) & 0xFF800000) | (ctx.r4.u64 & 0xFFFFFFFF007FFFFF);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8255d948
	ctx.lr = 0x8255E944;
	sub_8255D948(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8255E950:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8255d208
	ctx.lr = 0x8255E96C;
	sub_8255D208(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8255d208
	ctx.lr = 0x8255E974;
	sub_8255D208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E98C"))) PPC_WEAK_FUNC(sub_8255E98C);
PPC_FUNC_IMPL(__imp__sub_8255E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E990"))) PPC_WEAK_FUNC(sub_8255E990);
PPC_FUNC_IMPL(__imp__sub_8255E990) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255E9AC;
	sub_8255E310(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8255E9CC"))) PPC_WEAK_FUNC(sub_8255E9CC);
PPC_FUNC_IMPL(__imp__sub_8255E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9D0"))) PPC_WEAK_FUNC(sub_8255E9D0);
PPC_FUNC_IMPL(__imp__sub_8255E9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8255E9D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8255d7d8
	ctx.lr = 0x8255E9FC;
	sub_8255D7D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255eb1c
	if (!cr6.eq) goto loc_8255EB1C;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(ctx.r27.s32, 18, xer);
	// beq cr6,0x8255ea28
	if (cr6.eq) goto loc_8255EA28;
	// cmpwi cr6,r27,20
	cr6.compare<int32_t>(ctx.r27.s32, 20, xer);
	// beq cr6,0x8255ea28
	if (cr6.eq) goto loc_8255EA28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255EA20;
	sub_8255E310(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8255ea2c
	goto loc_8255EA2C;
loc_8255EA28:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8255EA2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255EA38;
	sub_8255E310(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// ble cr6,0x8255ea88
	if (!cr6.gt) goto loc_8255EA88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255ea74
	if (!cr6.eq) goto loc_8255EA74;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255ea74
	if (!cr6.eq) goto loc_8255EA74;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255ea74
	if (cr6.lt) goto loc_8255EA74;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255EA74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255eaf0
	if (!cr6.eq) goto loc_8255EAF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8255eacc
	goto loc_8255EACC;
loc_8255EA88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255eabc
	if (!cr6.eq) goto loc_8255EABC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255eabc
	if (!cr6.eq) goto loc_8255EABC;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255eabc
	if (cr6.lt) goto loc_8255EABC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255EABC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255eaf0
	if (!cr6.eq) goto loc_8255EAF0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8255EACC:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255eaf0
	if (!cr6.eq) goto loc_8255EAF0;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255eaf0
	if (cr6.lt) goto loc_8255EAF0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255EAF0:
	// rlwinm r11,r3,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// rlwinm r8,r9,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// or r4,r8,r27
	ctx.r4.u64 = ctx.r8.u64 | ctx.r27.u64;
	// bl 0x8255d948
	ctx.lr = 0x8255EB10;
	sub_8255D948(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_8255EB1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255EB24"))) PPC_WEAK_FUNC(sub_8255EB24);
PPC_FUNC_IMPL(__imp__sub_8255EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EB28"))) PPC_WEAK_FUNC(sub_8255EB28);
PPC_FUNC_IMPL(__imp__sub_8255EB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8255EB30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255EB50;
	sub_8255E310(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255EB60;
	sub_8255E310(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255eb98
	if (!cr6.eq) goto loc_8255EB98;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255eb98
	if (!cr6.eq) goto loc_8255EB98;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255eb98
	if (cr6.lt) goto loc_8255EB98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255EB98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255ebcc
	if (!cr6.eq) goto loc_8255EBCC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255ebcc
	if (!cr6.eq) goto loc_8255EBCC;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8255ebcc
	if (cr6.lt) goto loc_8255EBCC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8255EBCC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8255ebec
	if (!cr6.eq) goto loc_8255EBEC;
	// cmpwi cr6,r26,23
	cr6.compare<int32_t>(ctx.r26.s32, 23, xer);
	// beq cr6,0x8255ebec
	if (cr6.eq) goto loc_8255EBEC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8255EBEC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255dc50
	ctx.lr = 0x8255EC00;
	sub_8255DC50(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255EC14"))) PPC_WEAK_FUNC(sub_8255EC14);
PPC_FUNC_IMPL(__imp__sub_8255EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EC18"))) PPC_WEAK_FUNC(sub_8255EC18);
PPC_FUNC_IMPL(__imp__sub_8255EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfd f0,9000(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9000);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// blt cr6,0x8255ec88
	if (cr6.lt) goto loc_8255EC88;
	// beq cr6,0x8255ec78
	if (cr6.eq) goto loc_8255EC78;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x8255eccc
	if (!cr6.lt) goto loc_8255ECCC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255EC70;
	sub_8255E270(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x8255ecbc
	goto loc_8255ECBC;
loc_8255EC78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e848
	ctx.lr = 0x8255EC84;
	sub_8255E848(ctx, base);
	// b 0x8255eccc
	goto loc_8255ECCC;
loc_8255EC88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8255ecac
	if (!cr6.eq) goto loc_8255ECAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255ecac
	if (!cr6.eq) goto loc_8255ECAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8255ecb8
	if (cr6.eq) goto loc_8255ECB8;
loc_8255ECAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e270
	ctx.lr = 0x8255ECB8;
	sub_8255E270(ctx, base);
loc_8255ECB8:
	// li r4,18
	ctx.r4.s64 = 18;
loc_8255ECBC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255ECCC;
	sub_8255E9D0(ctx, base);
loc_8255ECCC:
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

__attribute__((alias("__imp__sub_8255ECE4"))) PPC_WEAK_FUNC(sub_8255ECE4);
PPC_FUNC_IMPL(__imp__sub_8255ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ECE8"))) PPC_WEAK_FUNC(sub_8255ECE8);
PPC_FUNC_IMPL(__imp__sub_8255ECE8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	cr6.compare<uint32_t>(ctx.r4.u32, 14, xer);
	// bgt cr6,0x8255ee20
	if (cr6.gt) goto loc_8255EE20;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4828
	ctx.r12.s64 = ctx.r12.s64 + -4828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8255EDFC;
	case 1:
		goto loc_8255EDFC;
	case 2:
		goto loc_8255EDFC;
	case 3:
		goto loc_8255EDFC;
	case 4:
		goto loc_8255EDFC;
	case 5:
		goto loc_8255EDFC;
	case 6:
		goto loc_8255EDEC;
	case 7:
		goto loc_8255EE20;
	case 8:
		goto loc_8255EE20;
	case 9:
		goto loc_8255EE20;
	case 10:
		goto loc_8255EE20;
	case 11:
		goto loc_8255EE20;
	case 12:
		goto loc_8255EE20;
	case 13:
		goto loc_8255ED60;
	case 14:
		goto loc_8255ED70;
	default:
		return;
	}
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4612(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4612);
	// lwz r18,-4628(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4628);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4576(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4576);
	// lwz r18,-4768(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4768);
	// lwz r18,-4752(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4752);
loc_8255ED60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e778
	ctx.lr = 0x8255ED6C;
	sub_8255E778(ctx, base);
	// b 0x8255ee2c
	goto loc_8255EE2C;
loc_8255ED70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255ED7C;
	sub_8255DCF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8255edb8
	if (cr6.eq) goto loc_8255EDB8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8255edb8
	if (cr6.eq) goto loc_8255EDB8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8255edb0
	if (cr6.eq) goto loc_8255EDB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e6a8
	ctx.lr = 0x8255EDA8;
	sub_8255E6A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8255edbc
	goto loc_8255EDBC;
loc_8255EDB0:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8255edbc
	goto loc_8255EDBC;
loc_8255EDB8:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8255EDBC:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d390
	ctx.lr = 0x8255EDC8;
	sub_8255D390(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// bl 0x8255d390
	ctx.lr = 0x8255EDE0;
	sub_8255D390(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8255ee2c
	goto loc_8255EE2C;
loc_8255EDEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x8255EDF8;
	sub_8255E1C8(ctx, base);
	// b 0x8255ee2c
	goto loc_8255EE2C;
loc_8255EDFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8255ee20
	if (!cr6.eq) goto loc_8255EE20;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8255ee20
	if (!cr6.eq) goto loc_8255EE20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8255ee2c
	if (cr6.eq) goto loc_8255EE2C;
loc_8255EE20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255e310
	ctx.lr = 0x8255EE2C;
	sub_8255E310(ctx, base);
loc_8255EE2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EE44"))) PPC_WEAK_FUNC(sub_8255EE44);
PPC_FUNC_IMPL(__imp__sub_8255EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EE48"))) PPC_WEAK_FUNC(sub_8255EE48);
PPC_FUNC_IMPL(__imp__sub_8255EE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8255EE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,14
	cr6.compare<uint32_t>(ctx.r4.u32, 14, xer);
	// bgt cr6,0x8255f108
	if (cr6.gt) goto loc_8255F108;
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4480
	ctx.r12.s64 = ctx.r12.s64 + -4480;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8255F014;
	case 1:
		goto loc_8255F030;
	case 2:
		goto loc_8255F04C;
	case 3:
		goto loc_8255F068;
	case 4:
		goto loc_8255F084;
	case 5:
		goto loc_8255F0A0;
	case 6:
		goto loc_8255EF34;
	case 7:
		goto loc_8255F0C8;
	case 8:
		goto loc_8255F0BC;
	case 9:
		goto loc_8255F0D0;
	case 10:
		goto loc_8255F0DC;
	case 11:
		goto loc_8255F0E8;
	case 12:
		goto loc_8255F0F0;
	case 13:
		goto loc_8255EEBC;
	case 14:
		goto loc_8255EEF8;
	default:
		return;
	}
	// lwz r18,-4076(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4076);
	// lwz r18,-4048(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4048);
	// lwz r18,-4020(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4020);
	// lwz r18,-3992(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3992);
	// lwz r18,-3964(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3964);
	// lwz r18,-3936(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3936);
	// lwz r18,-4300(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4300);
	// lwz r18,-3896(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3896);
	// lwz r18,-3908(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3908);
	// lwz r18,-3888(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3888);
	// lwz r18,-3876(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3876);
	// lwz r18,-3864(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3864);
	// lwz r18,-3856(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3856);
	// lwz r18,-4420(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4420);
	// lwz r18,-4360(r21)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4360);
loc_8255EEBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255EEC8;
	sub_8255DCF8(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8255d390
	ctx.lr = 0x8255EED8;
	sub_8255D390(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255EEF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255dcf8
	ctx.lr = 0x8255EF04;
	sub_8255DCF8(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8255d390
	ctx.lr = 0x8255EF14;
	sub_8255D390(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r9,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r9.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255EF34:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8255ef54
	if (cr6.eq) goto loc_8255EF54;
	// bl 0x8255e270
	ctx.lr = 0x8255EF50;
	sub_8255E270(ctx, base);
	// b 0x8255ef58
	goto loc_8255EF58;
loc_8255EF54:
	// bl 0x8255dcf8
	ctx.lr = 0x8255EF58;
	sub_8255DCF8(ctx, base);
loc_8255EF58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8255efec
	if (!cr6.eq) goto loc_8255EFEC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// cmpwi cr6,r6,21
	cr6.compare<int32_t>(ctx.r6.s32, 21, xer);
	// bne cr6,0x8255efec
	if (!cr6.eq) goto loc_8255EFEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8255efb8
	if (!cr6.eq) goto loc_8255EFB8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8255efb8
	if (!cr6.eq) goto loc_8255EFB8;
	// lbz r9,50(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 50);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8255efb8
	if (cr6.lt) goto loc_8255EFB8;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_8255EFB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,11
	ctx.r9.s64 = 11;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r8,23,0,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 23) & 0xFF800000) | (ctx.r7.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255EFEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e1c8
	ctx.lr = 0x8255EFF8;
	sub_8255E1C8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F00C;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F014:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F028;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F030:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F044;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F04C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F060;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F068:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F07C;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F084:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F098;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F0A0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255e9d0
	ctx.lr = 0x8255F0B4;
	sub_8255E9D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8255F0BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x8255f0f8
	goto loc_8255F0F8;
loc_8255F0C8:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x8255f0f4
	goto loc_8255F0F4;
loc_8255F0D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x8255f0f8
	goto loc_8255F0F8;
loc_8255F0DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x8255f0f8
	goto loc_8255F0F8;
loc_8255F0E8:
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x8255f0f4
	goto loc_8255F0F4;
loc_8255F0F0:
	// li r4,25
	ctx.r4.s64 = 25;
loc_8255F0F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8255F0F8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8255eb28
	ctx.lr = 0x8255F108;
	sub_8255EB28(ctx, base);
loc_8255F108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F110"))) PPC_WEAK_FUNC(sub_8255F110);
PPC_FUNC_IMPL(__imp__sub_8255F110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bne cr6,0x8255f12c
	if (!cr6.eq) goto loc_8255F12C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// b 0x8255d390
	sub_8255D390(ctx, base);
	return;
loc_8255F12C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x8255d2b8
	sub_8255D2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F138"))) PPC_WEAK_FUNC(sub_8255F138);
PPC_FUNC_IMPL(__imp__sub_8255F138) {
	PPC_FUNC_PROLOGUE();
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// b 0x831d2bf8
	sub_831D2BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F140"))) PPC_WEAK_FUNC(sub_8255F140);
PPC_FUNC_IMPL(__imp__sub_8255F140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x8255F148;
	__savegprlr_16(ctx, base);
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r17,3
	ctx.r17.s64 = 3;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r8,r4,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// slw r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r20,44(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// slw r5,r29,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r21,r9,-5
	ctx.r21.s64 = ctx.r9.s64 + -5;
	// lwz r19,52(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r24,r8,r7
	ctx.r24.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r18,r11,-257
	ctx.r18.s64 = ctx.r11.s64 + -257;
	// lwz r26,76(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r22,r6,-1
	ctx.r22.s64 = ctx.r6.s64 + -1;
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r23,r5,-1
	ctx.r23.s64 = ctx.r5.s64 + -1;
loc_8255F1BC:
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// bge cr6,0x8255f1e4
	if (!cr6.lt) goto loc_8255F1E4;
	// lbzu r8,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_8255F1E4:
	// and r11,r22,r10
	ctx.r11.u64 = ctx.r22.u64 & ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8255f268
	if (cr6.eq) goto loc_8255F268;
loc_8255F20C:
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255f274
	if (!cr6.eq) goto loc_8255F274;
	// rlwinm r8,r11,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255f530
	if (!cr6.eq) goto loc_8255F530;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// and r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 & ctx.r10.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// lbz r6,-144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// lbz r8,-143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bne cr6,0x8255f20c
	if (!cr6.eq) goto loc_8255F20C;
loc_8255F268:
	// lhz r11,-142(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// b 0x8255f500
	goto loc_8255F500;
loc_8255F274:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lhz r5,-142(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255f2b4
	if (cr6.eq) goto loc_8255F2B4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8255f29c
	if (!cr6.lt) goto loc_8255F29C;
	// lbzu r8,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8255F29C:
	// slw r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
loc_8255F2B4:
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// bge cr6,0x8255f2dc
	if (!cr6.lt) goto loc_8255F2DC;
	// lbzu r8,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzu r6,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_8255F2DC:
	// and r11,r23,r10
	ctx.r11.u64 = ctx.r23.u64 & ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// stw r6,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r6.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// lbz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255f354
	if (!cr6.eq) goto loc_8255F354;
loc_8255F308:
	// rlwinm r8,r11,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8255f520
	if (!cr6.eq) goto loc_8255F520;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r8,-142(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// lbz r6,-143(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -143);
	// lbz r11,-144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -144);
	// rlwinm r4,r11,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255f308
	if (cr6.eq) goto loc_8255F308;
loc_8255F354:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lhz r6,-142(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -142);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8255f38c
	if (!cr6.lt) goto loc_8255F38C;
	// lbzu r8,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8255f38c
	if (!cr6.lt) goto loc_8255F38C;
	// lbzu r8,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
loc_8255F38C:
	// slw r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r11,r24,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r24.s64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x8255f4b8
	if (!cr6.gt) goto loc_8255F4B8;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r20
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, xer);
	// ble cr6,0x8255f3c8
	if (!cr6.gt) goto loc_8255F3C8;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8255f514
	if (!cr6.eq) goto loc_8255F514;
loc_8255F3C8:
	// addi r6,r19,-1
	ctx.r6.s64 = ctx.r19.s64 + -1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// bne cr6,0x8255f3fc
	if (!cr6.eq) goto loc_8255F3FC;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bge cr6,0x8255f47c
	if (!cr6.lt) goto loc_8255F47C;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8255F3E8:
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8255f3e8
	if (!cr0.eq) goto loc_8255F3E8;
	// b 0x8255f478
	goto loc_8255F478;
loc_8255F3FC:
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bge cr6,0x8255f45c
	if (!cr6.lt) goto loc_8255F45C;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bge cr6,0x8255f47c
	if (!cr6.lt) goto loc_8255F47C;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_8255F420:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lbzx r16,r11,r7
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r16,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r16.u8);
	// bne 0x8255f420
	if (!cr0.eq) goto loc_8255F420;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, xer);
	// bge cr6,0x8255f47c
	if (!cr6.lt) goto loc_8255F47C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
loc_8255F448:
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8255f448
	if (!cr0.eq) goto loc_8255F448;
	// b 0x8255f478
	goto loc_8255F478;
loc_8255F45C:
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bge cr6,0x8255f47c
	if (!cr6.lt) goto loc_8255F47C;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_8255F468:
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// bne 0x8255f468
	if (!cr0.eq) goto loc_8255F468;
loc_8255F478:
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8255F47C:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// ble cr6,0x8255f4e0
	if (!cr6.gt) goto loc_8255F4E0;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// divwu r8,r8,r17
	ctx.r8.u32 = PPCDivide(ctx.r8.u32, ctx.r17.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8255F494:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8255f494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255F494;
	// b 0x8255f4e0
	goto loc_8255F4E0;
loc_8255F4B8:
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
loc_8255F4BC:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r5,r5,-3
	ctx.r5.s64 = ctx.r5.s64 + -3;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r7.u32 = ea;
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r7.u32 = ea;
	// bgt cr6,0x8255f4bc
	if (cr6.gt) goto loc_8255F4BC;
loc_8255F4E0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255f500
	if (cr6.eq) goto loc_8255F500;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// stbu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r7.u32 = ea;
	// ble cr6,0x8255f500
	if (!cr6.gt) goto loc_8255F500;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
loc_8255F500:
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bge cr6,0x8255f560
	if (!cr6.lt) goto loc_8255F560;
	// cmplw cr6,r7,r18
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, xer);
	// blt cr6,0x8255f1bc
	if (cr6.lt) goto loc_8255F1BC;
	// b 0x8255f560
	goto loc_8255F560;
loc_8255F514:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r6,r11,17668
	ctx.r6.s64 = ctx.r11.s64 + 17668;
	// b 0x8255f554
	goto loc_8255F554;
loc_8255F520:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r11,r11,17668
	ctx.r11.s64 = ctx.r11.s64 + 17668;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// b 0x8255f554
	goto loc_8255F554;
loc_8255F530:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255f548
	if (cr6.eq) goto loc_8255F548;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8255f560
	goto loc_8255F560;
loc_8255F548:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r11,r11,17668
	ctx.r11.s64 = ctx.r11.s64 + 17668;
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
loc_8255F554:
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8255F560:
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// slw r9,r29,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r7,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r7.s64;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// cmplw cr6,r7,r18
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r18.u32, xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255F5B8"))) PPC_WEAK_FUNC(sub_8255F5B8);
PPC_FUNC_IMPL(__imp__sub_8255F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8255F5C0;
	__savegprlr_14(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8255F5DC:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8255f5dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255F5DC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255f614
	if (cr6.eq) goto loc_8255F614;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_8255F5F4:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sthx r31,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u16);
	// bdnz 0x8255f5f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255F5F4;
loc_8255F614:
	// lwz r14,0(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r18,15
	ctx.r18.s64 = 15;
	// addi r11,r1,-194
	ctx.r11.s64 = ctx.r1.s64 + -194;
loc_8255F620:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255f63c
	if (!cr6.eq) goto loc_8255F63C;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(ctx.r18.u32, 1, xer);
	// bge cr6,0x8255f620
	if (!cr6.lt) goto loc_8255F620;
loc_8255F63C:
	// cmplw cr6,r14,r18
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r18.u32, xer);
	// ble cr6,0x8255f648
	if (!cr6.gt) goto loc_8255F648;
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
loc_8255F648:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// bne cr6,0x8255f698
	if (!cr6.eq) goto loc_8255F698;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r22,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r22.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255F698:
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(ctx.r18.u32, 1, xer);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// ble cr6,0x8255f6c4
	if (!cr6.gt) goto loc_8255F6C4;
	// addi r11,r1,-222
	ctx.r11.s64 = ctx.r1.s64 + -222;
loc_8255F6A8:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255f6c4
	if (!cr6.eq) goto loc_8255F6C4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, xer);
	// blt cr6,0x8255f6a8
	if (cr6.lt) goto loc_8255F6A8;
loc_8255F6C4:
	// cmplw cr6,r14,r28
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r28.u32, xer);
	// bge cr6,0x8255f6d0
	if (!cr6.lt) goto loc_8255F6D0;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_8255F6D0:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r11,r1,-222
	ctx.r11.s64 = ctx.r1.s64 + -222;
loc_8255F6DC:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8255f7e4
	if (cr0.lt) goto loc_8255F7E4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// ble cr6,0x8255f6dc
	if (!cr6.gt) goto loc_8255F6DC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8255f714
	if (!cr6.gt) goto loc_8255F714;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255f7e4
	if (cr6.eq) goto loc_8255F7E4;
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(ctx.r18.u32, 1, xer);
	// bne cr6,0x8255f7e4
	if (!cr6.eq) goto loc_8255F7E4;
loc_8255F714:
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r7,-190(r1)
	PPC_STORE_U16(ctx.r1.u32 + -190, ctx.r7.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-224
	ctx.r30.s64 = ctx.r1.s64 + -224;
	// addi r29,r1,-190
	ctx.r29.s64 = ctx.r1.s64 + -190;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8255F730:
	// lhzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// addi r27,r1,-222
	ctx.r27.s64 = ctx.r1.s64 + -222;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// addi r26,r1,-188
	ctx.r26.s64 = ctx.r1.s64 + -188;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r10,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r10,r11,r26
	PPC_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8255f730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255F730;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255f7c0
	if (cr6.eq) goto loc_8255F7C0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_8255F778:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255f7b4
	if (cr6.eq) goto loc_8255F7B4;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// lhzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// sthx r31,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthx r5,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u16);
loc_8255F7B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8255f778
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255F778;
loc_8255F7C0:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8255f804
	if (cr6.lt) goto loc_8255F804;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,4392
	ctx.r11.s64 = ctx.r11.s64 + 4392;
	// beq cr6,0x8255f7ec
	if (cr6.eq) goto loc_8255F7EC;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r15,r11,-64
	ctx.r15.s64 = ctx.r11.s64 + -64;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// b 0x8255f810
	goto loc_8255F810;
loc_8255F7E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255F7EC:
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// li r21,256
	ctx.r21.s64 = 256;
	// addi r15,r10,-514
	ctx.r15.s64 = ctx.r10.s64 + -514;
	// addi r16,r11,-514
	ctx.r16.s64 = ctx.r11.s64 + -514;
	// b 0x8255f810
	goto loc_8255F810;
loc_8255F804:
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// li r21,19
	ctx.r21.s64 = 19;
loc_8255F810:
	// slw r11,r22,r14
	ctx.r11.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r14.u8 & 0x3F));
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// addi r19,r11,-1
	ctx.r19.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8255f840
	if (!cr6.eq) goto loc_8255F840;
	// cmplwi cr6,r11,852
	cr6.compare<uint32_t>(ctx.r11.u32, 852, xer);
	// b 0x8255f84c
	goto loc_8255F84C;
loc_8255F840:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8255f850
	if (!cr6.eq) goto loc_8255F850;
	// cmplwi cr6,r23,592
	cr6.compare<uint32_t>(ctx.r23.u32, 592, xer);
loc_8255F84C:
	// bgt cr6,0x8255fa5c
	if (cr6.gt) goto loc_8255FA5C;
loc_8255F850:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r17,96
	ctx.r17.s64 = 96;
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
loc_8255F860:
	// subf r9,r26,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r26.s64;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bge cr6,0x8255f888
	if (!cr6.lt) goto loc_8255F888;
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// stb r7,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r7.u8);
	// b 0x8255f8b0
	goto loc_8255F8B0;
loc_8255F888:
	// ble cr6,0x8255f8a8
	if (!cr6.gt) goto loc_8255F8A8;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r8,r10,r16
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r16.u32);
	// lhzx r11,r10,r15
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r15.u32);
	// stb r8,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r8.u8);
	// sth r11,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r11.u16);
	// b 0x8255f8b0
	goto loc_8255F8B0;
loc_8255F8A8:
	// stb r17,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r17.u8);
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
loc_8255F8B0:
	// slw r10,r22,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,-240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// srw r9,r25,r26
	ctx.r9.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r26.u8 & 0x3F));
loc_8255F8C0:
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
	// bne 0x8255f8c0
	if (!cr0.eq) goto loc_8255F8C0;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255f8f8
	if (cr6.eq) goto loc_8255F8F8;
loc_8255F8E8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255f8e8
	if (!cr6.eq) goto loc_8255F8E8;
loc_8255F8F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8255f910
	if (cr6.eq) goto loc_8255F910;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8255f914
	goto loc_8255F914;
loc_8255F910:
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_8255F914:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r9,r20
	ctx.r8.u64 = ctx.r9.u64 + ctx.r20.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255f94c
	if (!cr6.eq) goto loc_8255F94C;
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, xer);
	// beq cr6,0x8255fa18
	if (cr6.eq) goto loc_8255FA18;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r28,r10,r4
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
loc_8255F94C:
	// cmplw cr6,r28,r14
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r14.u32, xer);
	// ble cr6,0x8255f860
	if (!cr6.gt) goto loc_8255F860;
	// and r31,r19,r25
	ctx.r31.u64 = ctx.r19.u64 & ctx.r25.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8255f860
	if (cr6.eq) goto loc_8255F860;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8255f96c
	if (!cr6.eq) goto loc_8255F96C;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_8255F96C:
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// slw r8,r22,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r18
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, xer);
	// bge cr6,0x8255f9b8
	if (!cr6.lt) goto loc_8255F9B8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,-224
	ctx.r5.s64 = ctx.r1.s64 + -224;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_8255F994:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8255f9b8
	if (!cr0.gt) goto loc_8255F9B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r18
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, xer);
	// blt cr6,0x8255f994
	if (cr6.lt) goto loc_8255F994;
loc_8255F9B8:
	// slw r30,r22,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// add r23,r30,r23
	ctx.r23.u64 = ctx.r30.u64 + ctx.r23.u64;
	// bne cr6,0x8255f9d0
	if (!cr6.eq) goto loc_8255F9D0;
	// cmplwi cr6,r23,852
	cr6.compare<uint32_t>(ctx.r23.u32, 852, xer);
	// b 0x8255f9dc
	goto loc_8255F9DC;
loc_8255F9D0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8255f9e0
	if (!cr6.eq) goto loc_8255F9E0;
	// cmplwi cr6,r23,592
	cr6.compare<uint32_t>(ctx.r23.u32, 592, xer);
loc_8255F9DC:
	// bgt cr6,0x8255fa5c
	if (cr6.gt) goto loc_8255FA5C;
loc_8255F9E0:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r14,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r14.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// b 0x8255f860
	goto loc_8255F860;
loc_8255FA18:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8255fa3c
	if (cr6.eq) goto loc_8255FA3C;
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r5,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r5.u8);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r7,-238(r1)
	PPC_STORE_U16(ctx.r1.u32 + -238, ctx.r7.u16);
	// stb r10,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r10.u8);
	// lwz r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stwx r9,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u32);
loc_8255FA3C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r14,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8255FA5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255FA64"))) PPC_WEAK_FUNC(sub_8255FA64);
PPC_FUNC_IMPL(__imp__sub_8255FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FA68"))) PPC_WEAK_FUNC(sub_8255FA68);
PPC_FUNC_IMPL(__imp__sub_8255FA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8255FA70;
	__savegprlr_23(ctx, base);
	// rlwinm r10,r3,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x8255fab8
	if (!cr6.eq) goto loc_8255FAB8;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r24,r8,65521
	ctx.r24.u64 = ctx.r8.u64 | 65521;
	// cmplwi cr6,r11,65521
	cr6.compare<uint32_t>(ctx.r11.u32, 65521, xer);
	// blt cr6,0x8255fa9c
	if (cr6.lt) goto loc_8255FA9C;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8255FA9C:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65521
	cr6.compare<uint32_t>(ctx.r10.u32, 65521, xer);
	// blt cr6,0x8255fd68
	if (cr6.lt) goto loc_8255FD68;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r24.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8255FAB8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8255fac8
	if (!cr6.eq) goto loc_8255FAC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8255FAC8:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x8255fb28
	if (!cr6.lt) goto loc_8255FB28;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255faf0
	if (cr6.eq) goto loc_8255FAF0;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8255FAE0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8255fae0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255FAE0;
loc_8255FAF0:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,65521
	cr6.compare<uint32_t>(ctx.r11.u32, 65521, xer);
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// blt cr6,0x8255fb04
	if (cr6.lt) goto loc_8255FB04;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8255FB04:
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// ori r8,r9,32881
	ctx.r8.u64 = ctx.r9.u64 | 32881;
	// mulhwu r7,r10,r8
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r7,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r6,r24
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r3,r4,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8255FB28:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32761
	ctx.r8.s64 = -2147024896;
	// ori r24,r9,65521
	ctx.r24.u64 = ctx.r9.u64 | 65521;
	// ori r23,r8,32881
	ctx.r23.u64 = ctx.r8.u64 | 32881;
	// cmplwi cr6,r5,5552
	cr6.compare<uint32_t>(ctx.r5.u32, 5552, xer);
	// blt cr6,0x8255fc44
	if (cr6.lt) goto loc_8255FC44;
	// li r9,5552
	ctx.r9.s64 = 5552;
	// divwu r25,r5,r9
	ctx.r25.u32 = PPCDivide(ctx.r5.u32, ctx.r9.u32);
loc_8255FB48:
	// li r9,347
	ctx.r9.s64 = 347;
	// addi r5,r5,-5552
	ctx.r5.s64 = ctx.r5.s64 + -5552;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8255FB54:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8255fb54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255FB54;
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r3,r7,r24
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r9,r6,r24
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bne 0x8255fb48
	if (!cr0.eq) goto loc_8255FB48;
loc_8255FC44:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255fd68
	if (cr6.eq) goto loc_8255FD68;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8255fd28
	if (cr6.lt) goto loc_8255FD28;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8255FC5C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r26,5(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r27,6(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r28,7(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r30,9(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r31,10(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r3,11(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,13(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r8,14(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r9,15(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8255fc5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255FC5C;
loc_8255FD28:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8255fd48
	if (cr6.eq) goto loc_8255FD48;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_8255FD38:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8255fd38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255FD38;
loc_8255FD48:
	// mulhwu r9,r11,r23
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// mulhwu r8,r10,r23
	ctx.r8.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r23.u32)) >> 32;
	// rlwinm r7,r9,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r6,r8,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r7,r24
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r24.s32);
	// mullw r4,r6,r24
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
loc_8255FD68:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255FD74"))) PPC_WEAK_FUNC(sub_8255FD74);
PPC_FUNC_IMPL(__imp__sub_8255FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FD78"))) PPC_WEAK_FUNC(sub_8255FD78);
PPC_FUNC_IMPL(__imp__sub_8255FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8255FD80;
	__savegprlr_19(ctx, base);
	// rlwinm r10,r3,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r3,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r3,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r8,4456
	ctx.r11.s64 = ctx.r8.s64 + 4456;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// beq cr6,0x8255fdec
	if (cr6.eq) goto loc_8255FDEC;
loc_8255FDB4:
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8255fdec
	if (cr6.eq) goto loc_8255FDEC;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x8255fdb4
	if (!cr0.eq) goto loc_8255FDB4;
loc_8255FDEC:
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// blt cr6,0x82560028
	if (cr6.lt) goto loc_82560028;
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8255FE00:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// rlwinm r8,r4,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r9,r4,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// lwzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r30,r4,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r8,r11,5120
	ctx.r8.s64 = ctx.r11.s64 + 5120;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// lwzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// addi r30,r11,7168
	ctx.r30.s64 = ctx.r11.s64 + 7168;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// lwzu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r29,r11,4096
	ctx.r29.s64 = ctx.r11.s64 + 4096;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r9,r11,6144
	ctx.r9.s64 = ctx.r11.s64 + 6144;
	// xor r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// lwzu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// rlwinm r27,r4,18,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r26,r4,26,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r25,r4,10,22,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// lwzu r24,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r24.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r23,r11,4096
	ctx.r23.s64 = ctx.r11.s64 + 4096;
	// lwzx r7,r27,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r8,r26,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// lwzx r30,r25,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// addi r25,r11,7168
	ctx.r25.s64 = ctx.r11.s64 + 7168;
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// addi r8,r11,4096
	ctx.r8.s64 = ctx.r11.s64 + 4096;
	// lwzu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// addi r30,r11,6144
	ctx.r30.s64 = ctx.r11.s64 + 6144;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r7,r11,5120
	ctx.r7.s64 = ctx.r11.s64 + 5120;
	// xor r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// lwzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r22,r11,7168
	ctx.r22.s64 = ctx.r11.s64 + 7168;
	// rlwinm r21,r6,18,22,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r20,r6,26,22,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r19,r6,10,22,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r21,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// lwzx r3,r20,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r3.u32);
	// lwzx r31,r19,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r31.u32);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// lwzx r6,r6,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// xor r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// xor r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// xor r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rlwinm r3,r6,18,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC;
	// rlwinm r9,r6,26,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r6,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3FC;
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lwzx r31,r31,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// xor r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r3,r6,r24
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r24.u64;
	// rlwinm r9,r3,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r8,r3,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r6,r3,10,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r3,r3,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r11,4096
	ctx.r7.s64 = ctx.r11.s64 + 4096;
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r31,r11,6144
	ctx.r31.s64 = ctx.r11.s64 + 6144;
	// xor r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// addi r30,r11,4096
	ctx.r30.s64 = ctx.r11.s64 + 4096;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// addi r6,r11,6144
	ctx.r6.s64 = ctx.r11.s64 + 6144;
	// xor r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// addi r29,r11,5120
	ctx.r29.s64 = ctx.r11.s64 + 5120;
	// rlwinm r28,r7,18,22,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FC;
	// rlwinm r27,r7,26,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FC;
	// rlwinm r26,r7,10,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FC;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// addi r25,r11,7168
	ctx.r25.s64 = ctx.r11.s64 + 7168;
	// lwzx r31,r28,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r28,r11,4096
	ctx.r28.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r27,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r27,r11,6144
	ctx.r27.s64 = ctx.r11.s64 + 6144;
	// lwzx r3,r26,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// addi r26,r11,5120
	ctx.r26.s64 = ctx.r11.s64 + 5120;
	// xor r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r31,r11,7168
	ctx.r31.s64 = ctx.r11.s64 + 7168;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r9,r11,4096
	ctx.r9.s64 = ctx.r11.s64 + 4096;
	// xor r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// xor r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// rlwinm r3,r4,18,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r7,r4,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r30,r4,10,22,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r6,r30,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwzx r7,r4,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// xor r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// rlwinm r8,r3,18,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x3FC;
	// rlwinm r7,r3,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FC;
	// rlwinm r6,r3,10,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r3,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r3,r8,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r8,r7,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// xor r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bdnz 0x8255fe00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255FE00;
loc_82560028:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x82560084
	if (cr6.lt) goto loc_82560084;
	// rlwinm r8,r5,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82560038:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,6144
	ctx.r7.s64 = ctx.r11.s64 + 6144;
	// addi r6,r11,5120
	ctx.r6.s64 = ctx.r11.s64 + 5120;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// rlwinm r9,r4,18,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FC;
	// rlwinm r8,r4,26,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FC;
	// rlwinm r31,r4,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x3FC;
	// rlwinm r4,r4,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// addi r30,r11,4096
	ctx.r30.s64 = ctx.r11.s64 + 4096;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r7,r31,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// bdnz 0x82560038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82560038;
loc_82560084:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825600bc
	if (cr6.eq) goto loc_825600BC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82560094:
	// lbzu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// xor r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwzx r7,r8,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// xor r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// bne 0x82560094
	if (!cr0.eq) goto loc_82560094;
loc_825600BC:
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r10,r8,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r9,r8,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825600E4"))) PPC_WEAK_FUNC(sub_825600E4);
PPC_FUNC_IMPL(__imp__sub_825600E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825600E8"))) PPC_WEAK_FUNC(sub_825600E8);
PPC_FUNC_IMPL(__imp__sub_825600E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825600f8
	if (!cr6.eq) goto loc_825600F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825600F8:
	// b 0x8255fd78
	sub_8255FD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825600FC"))) PPC_WEAK_FUNC(sub_825600FC);
PPC_FUNC_IMPL(__imp__sub_825600FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560100"))) PPC_WEAK_FUNC(sub_82560100);
PPC_FUNC_IMPL(__imp__sub_82560100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82560108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573108
	ctx.lr = 0x82560138;
	sub_82573108(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82560148;
	sub_831CE7D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560154"))) PPC_WEAK_FUNC(sub_82560154);
PPC_FUNC_IMPL(__imp__sub_82560154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560158"))) PPC_WEAK_FUNC(sub_82560158);
PPC_FUNC_IMPL(__imp__sub_82560158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// stw r3,-19436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19436, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560164"))) PPC_WEAK_FUNC(sub_82560164);
PPC_FUNC_IMPL(__imp__sub_82560164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560168"))) PPC_WEAK_FUNC(sub_82560168);
PPC_FUNC_IMPL(__imp__sub_82560168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// stw r3,-19432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19432, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560174"))) PPC_WEAK_FUNC(sub_82560174);
PPC_FUNC_IMPL(__imp__sub_82560174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560178"))) PPC_WEAK_FUNC(sub_82560178);
PPC_FUNC_IMPL(__imp__sub_82560178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825601A0;
	sub_8257EFD8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825601b0
	if (cr6.eq) goto loc_825601B0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825749e0
	ctx.lr = 0x825601B0;
	sub_825749E0(ctx, base);
loc_825601B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825601B8;
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

__attribute__((alias("__imp__sub_825601D0"))) PPC_WEAK_FUNC(sub_825601D0);
PPC_FUNC_IMPL(__imp__sub_825601D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825601D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31766
	ctx.r27.s64 = -2081816576;
	// li r26,40
	ctx.r26.s64 = 40;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,-19416(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19416);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r29,r8,r26
	ctx.r29.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x82560248
	if (cr0.eq) goto loc_82560248;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8256021c
	goto loc_8256021C;
loc_82560218:
	// lwz r11,-19416(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19416);
loc_8256021C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x825750f8
	ctx.lr = 0x8256022C;
	sub_825750F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82560270
	if (!cr6.eq) goto loc_82560270;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82560218
	if (cr6.lt) goto loc_82560218;
loc_82560248:
	// lis r27,-31766
	ctx.r27.s64 = -2081816576;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r11,-19412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19412);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r29,r8,r26
	ctx.r29.s32 = PPCDivide(ctx.r8.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x825602b4
	if (cr0.eq) goto loc_825602B4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82560288
	goto loc_82560288;
loc_82560270:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r25,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82560284:
	// lwz r11,-19412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19412);
loc_82560288:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x825750f8
	ctx.lr = 0x82560298;
	sub_825750F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82560308
	if (!cr6.eq) goto loc_82560308;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82560284
	if (cr6.lt) goto loc_82560284;
loc_825602B4:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lbz r10,-19404(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19404);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825602f4
	if (cr6.eq) goto loc_825602F4;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x825602f4
	if (cr6.lt) goto loc_825602F4;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82575258
	ctx.lr = 0x825602DC;
	sub_82575258(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(ctx.r11.s32, 117, xer);
	// bne cr6,0x825602f4
	if (!cr6.eq) goto loc_825602F4;
	// addi r4,r31,-2
	ctx.r4.s64 = ctx.r31.s64 + -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82575258
	ctx.lr = 0x825602F4;
	sub_82575258(ctx, base);
loc_825602F4:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r25,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82560308:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560320"))) PPC_WEAK_FUNC(sub_82560320);
PPC_FUNC_IMPL(__imp__sub_82560320) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// li r9,40
	ctx.r9.s64 = 40;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82560398
	if (cr6.eq) goto loc_82560398;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// lwz r10,-19412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19412);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x825603d8
	if (!cr6.lt) goto loc_825603D8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825603d8
	if (cr6.eq) goto loc_825603D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82560398:
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// lwz r10,-19416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19416);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x825603d8
	if (!cr6.lt) goto loc_825603D8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825603dc
	if (!cr6.eq) goto loc_825603DC;
loc_825603D8:
	// bl 0x82576c28
	ctx.lr = 0x825603DC;
	sub_82576C28(ctx, base);
loc_825603DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825603EC"))) PPC_WEAK_FUNC(sub_825603EC);
PPC_FUNC_IMPL(__imp__sub_825603EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825603F0"))) PPC_WEAK_FUNC(sub_825603F0);
PPC_FUNC_IMPL(__imp__sub_825603F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825603F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8256042c
	if (cr6.lt) goto loc_8256042C;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82560430
	goto loc_82560430;
loc_8256042C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82560430:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82573108
	ctx.lr = 0x82560448;
	sub_82573108(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82560458;
	sub_831CE7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560464"))) PPC_WEAK_FUNC(sub_82560464);
PPC_FUNC_IMPL(__imp__sub_82560464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560468"))) PPC_WEAK_FUNC(sub_82560468);
PPC_FUNC_IMPL(__imp__sub_82560468) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82560490;
	sub_8257EFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82560320
	ctx.lr = 0x82560498;
	sub_82560320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825604A4;
	sub_8257EFC8(ctx, base);
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

__attribute__((alias("__imp__sub_825604C0"))) PPC_WEAK_FUNC(sub_825604C0);
PPC_FUNC_IMPL(__imp__sub_825604C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,15840
	ctx.r9.s64 = ctx.r11.s64 + 15840;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257e578
	ctx.lr = 0x825604FC;
	sub_8257E578(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256050c
	if (cr6.eq) goto loc_8256050C;
	// addic. r10,r3,-20
	xer.ca = ctx.r3.u32 > 19;
	ctx.r10.s64 = ctx.r3.s64 + -20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82560510
	if (!cr0.eq) goto loc_82560510;
loc_8256050C:
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_82560510:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560548"))) PPC_WEAK_FUNC(sub_82560548);
PPC_FUNC_IMPL(__imp__sub_82560548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82560550;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19400
	ctx.r31.s64 = ctx.r11.s64 + -19400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8256056C;
	sub_8257EFD8(ctx, base);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lis r28,-31766
	ctx.r28.s64 = -2081816576;
	// clrldi r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-19424(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19424);
	// bl 0x825604c0
	ctx.lr = 0x8256058C;
	sub_825604C0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,-19424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19424);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x825605cc
	if (cr6.eq) goto loc_825605CC;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x825749e0
	ctx.lr = 0x825605B8;
	sub_825749E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825605C0;
	sub_8257EFC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825605CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825605D4;
	sub_8257EFC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825605E0"))) PPC_WEAK_FUNC(sub_825605E0);
PPC_FUNC_IMPL(__imp__sub_825605E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19424);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_825605F8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825605f8
	if (!cr6.eq) goto loc_825605F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560608"))) PPC_WEAK_FUNC(sub_82560608);
PPC_FUNC_IMPL(__imp__sub_82560608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82560610;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82560714
	if (cr6.eq) goto loc_82560714;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82574b18
	ctx.lr = 0x8256062C;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82560714
	if (!cr6.eq) goto loc_82560714;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,-19420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// bl 0x83b3a970
	ctx.lr = 0x82560650;
	sub_83B3A970(ctx, base);
	// lwz r11,-19420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825606cc
	if (cr6.eq) goto loc_825606CC;
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82560670;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825606cc
	if (!cr6.eq) goto loc_825606CC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825606a0
	if (cr6.eq) goto loc_825606A0;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x82560690;
	sub_82573040(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x825606A0;
	sub_82573040(ctx, base);
loc_825606A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,-19420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// addi r9,r11,16740
	ctx.r9.s64 = ctx.r11.s64 + 16740;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8257eea0
	ctx.lr = 0x825606C0;
	sub_8257EEA0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r8,12040
	ctx.r7.s64 = ctx.r8.s64 + 12040;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_825606CC:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x825606DC;
	sub_82573040(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x825606EC;
	sub_82573040(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r9,r11,15840
	ctx.r9.s64 = ctx.r11.s64 + 15840;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// ld r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r3,-19424(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19424);
	// bl 0x8257eea0
	ctx.lr = 0x82560714;
	sub_8257EEA0(ctx, base);
loc_82560714:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256071C"))) PPC_WEAK_FUNC(sub_8256071C);
PPC_FUNC_IMPL(__imp__sub_8256071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560720"))) PPC_WEAK_FUNC(sub_82560720);
PPC_FUNC_IMPL(__imp__sub_82560720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82560728;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31766
	ctx.r25.s64 = -2081816576;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r26,r11,2
	ctx.r26.u64 = ctx.r11.u64 | 2;
	// ori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 | 1;
	// lwz r3,-19420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82560798
	if (cr6.eq) goto loc_82560798;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82560790
	if (cr6.eq) goto loc_82560790;
loc_8256075C:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82560780
	if (cr6.eq) goto loc_82560780;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82573040
	ctx.lr = 0x82560774;
	sub_82573040(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573040
	ctx.lr = 0x82560780;
	sub_82573040(ctx, base);
loc_82560780:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x8256075c
	if (!cr6.eq) goto loc_8256075C;
	// lwz r3,-19420(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19420);
loc_82560790:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8247e950
	ctx.lr = 0x82560798;
	sub_8247E950(ctx, base);
loc_82560798:
	// lis r28,-31766
	ctx.r28.s64 = -2081816576;
	// lwz r3,-19424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825607f4
	if (cr6.eq) goto loc_825607F4;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825607ec
	if (cr6.eq) goto loc_825607EC;
loc_825607B8:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825607dc
	if (cr6.eq) goto loc_825607DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82573040
	ctx.lr = 0x825607D0;
	sub_82573040(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573040
	ctx.lr = 0x825607DC;
	sub_82573040(ctx, base);
loc_825607DC:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x825607b8
	if (!cr6.eq) goto loc_825607B8;
	// lwz r3,-19424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19424);
loc_825607EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82573568
	ctx.lr = 0x825607F4;
	sub_82573568(ctx, base);
loc_825607F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-19424(r28)
	PPC_STORE_U32(ctx.r28.u32 + -19424, ctx.r10.u32);
	// stw r11,-19420(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19420, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256080C"))) PPC_WEAK_FUNC(sub_8256080C);
PPC_FUNC_IMPL(__imp__sub_8256080C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560810"))) PPC_WEAK_FUNC(sub_82560810);
PPC_FUNC_IMPL(__imp__sub_82560810) {
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
	// bl 0x82560720
	ctx.lr = 0x82560820;
	sub_82560720(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-19404(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19404, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256083C"))) PPC_WEAK_FUNC(sub_8256083C);
PPC_FUNC_IMPL(__imp__sub_8256083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560840"))) PPC_WEAK_FUNC(sub_82560840);
PPC_FUNC_IMPL(__imp__sub_82560840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82560848;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-19424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825608bc
	if (cr6.eq) goto loc_825608BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825608bc
	if (cr6.eq) goto loc_825608BC;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8256087C;
	sub_8257EFD8(ctx, base);
	// clrldi r11,r29,16
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,-19424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825604c0
	ctx.lr = 0x82560894;
	sub_825604C0(ctx, base);
	// lwz r11,-19424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825608b4
	if (cr6.eq) goto loc_825608B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82560608
	ctx.lr = 0x825608B4;
	sub_82560608(ctx, base);
loc_825608B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825608BC;
	sub_8257EFC8(ctx, base);
loc_825608BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825608C4"))) PPC_WEAK_FUNC(sub_825608C4);
PPC_FUNC_IMPL(__imp__sub_825608C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825608C8"))) PPC_WEAK_FUNC(sub_825608C8);
PPC_FUNC_IMPL(__imp__sub_825608C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825608D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-19424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82560938
	if (cr6.eq) goto loc_82560938;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825608F8;
	sub_8257EFD8(ctx, base);
	// clrldi r11,r29,16
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,-19424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825604c0
	ctx.lr = 0x82560910;
	sub_825604C0(ctx, base);
	// lwz r11,-19424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82560930
	if (cr6.eq) goto loc_82560930;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82560608
	ctx.lr = 0x82560930;
	sub_82560608(ctx, base);
loc_82560930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82560938;
	sub_8257EFC8(ctx, base);
loc_82560938:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560940"))) PPC_WEAK_FUNC(sub_82560940);
PPC_FUNC_IMPL(__imp__sub_82560940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82560968;
	sub_8257EFD8(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r11,-19408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x825609c4
	if (cr6.eq) goto loc_825609C4;
loc_82560980:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x8256099c
	if (cr6.eq) goto loc_8256099C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82560980
	if (!cr6.eq) goto loc_82560980;
	// b 0x825609c4
	goto loc_825609C4;
loc_8256099C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x825609B8;
	sub_831CE420(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_825609C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825609CC;
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

__attribute__((alias("__imp__sub_825609E4"))) PPC_WEAK_FUNC(sub_825609E4);
PPC_FUNC_IMPL(__imp__sub_825609E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825609E8"))) PPC_WEAK_FUNC(sub_825609E8);
PPC_FUNC_IMPL(__imp__sub_825609E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825609F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825767c8
	ctx.lr = 0x82560A04;
	sub_825767C8(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82576cb0
	ctx.lr = 0x82560A0C;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r11.u8);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r30.u8);
	// bl 0x825766d0
	ctx.lr = 0x82560A24;
	sub_825766D0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82576cb0
	ctx.lr = 0x82560A2C;
	sub_82576CB0(ctx, base);
	// stb r30,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r30.u8);
	// stb r30,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// sth r30,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r30.u16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// sth r30,290(r1)
	PPC_STORE_U16(ctx.r1.u32 + 290, ctx.r30.u16);
	// bl 0x82561750
	ctx.lr = 0x82560A48;
	sub_82561750(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82562f20
	ctx.lr = 0x82560A50;
	sub_82562F20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,12680
	ctx.r28.s64 = ctx.r11.s64 + 12680;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82560a88
	if (cr6.eq) goto loc_82560A88;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575258
	ctx.lr = 0x82560A70;
	sub_82575258(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x82560a88
	if (!cr6.eq) goto loc_82560A88;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825618e0
	ctx.lr = 0x82560A88;
	sub_825618E0(ctx, base);
loc_82560A88:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82561e48
	ctx.lr = 0x82560A94;
	sub_82561E48(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82560aa8
	if (cr6.lt) goto loc_82560AA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82560AA8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82576848
	ctx.lr = 0x82560AB4;
	sub_82576848(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824200a8
	ctx.lr = 0x82560ABC;
	sub_824200A8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82561f48
	ctx.lr = 0x82560AC8;
	sub_82561F48(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82560ae0
	if (cr6.eq) goto loc_82560AE0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825618e0
	ctx.lr = 0x82560AE0;
	sub_825618E0(ctx, base);
loc_82560AE0:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82561fc8
	ctx.lr = 0x82560AEC;
	sub_82561FC8(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82560b00
	if (cr6.lt) goto loc_82560B00;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82560B00:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825618e0
	ctx.lr = 0x82560B08;
	sub_825618E0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824200a8
	ctx.lr = 0x82560B10;
	sub_824200A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x825601d0
	ctx.lr = 0x82560B28;
	sub_825601D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82560b40
	if (!cr6.eq) goto loc_82560B40;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82561c68
	ctx.lr = 0x82560B40;
	sub_82561C68(ctx, base);
loc_82560B40:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,312(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82560b54
	if (!cr6.lt) goto loc_82560B54;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
loc_82560B54:
	// bl 0x82574c60
	ctx.lr = 0x82560B58;
	sub_82574C60(ctx, base);
	// clrldi r11,r3,16
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFFFFFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r7,r7,0,28,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF800F;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// beq cr6,0x82560b9c
	if (cr6.eq) goto loc_82560B9C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// b 0x82560ba4
	goto loc_82560BA4;
loc_82560B9C:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_82560BA4:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x824200a8
	ctx.lr = 0x82560BAC;
	sub_824200A8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82560bc0
	if (cr6.lt) goto loc_82560BC0;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8386d088
	ctx.lr = 0x82560BC0;
	sub_8386D088(ctx, base);
loc_82560BC0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x824200a8
	ctx.lr = 0x82560BD8;
	sub_824200A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560BE4"))) PPC_WEAK_FUNC(sub_82560BE4);
PPC_FUNC_IMPL(__imp__sub_82560BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560BE8"))) PPC_WEAK_FUNC(sub_82560BE8);
PPC_FUNC_IMPL(__imp__sub_82560BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825608c8
	sub_825608C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82560BEC"))) PPC_WEAK_FUNC(sub_82560BEC);
PPC_FUNC_IMPL(__imp__sub_82560BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560BF0"))) PPC_WEAK_FUNC(sub_82560BF0);
PPC_FUNC_IMPL(__imp__sub_82560BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8257ec20
	ctx.lr = 0x82560C20;
	sub_8257EC20(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r9,r10,23972
	ctx.r9.s64 = ctx.r10.s64 + 23972;
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// blt cr6,0x82560c64
	if (cr6.lt) goto loc_82560C64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82560C64:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne cr6,0x82560c7c
	if (!cr6.eq) goto loc_82560C7C;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_82560C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560C94"))) PPC_WEAK_FUNC(sub_82560C94);
PPC_FUNC_IMPL(__imp__sub_82560C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560C98"))) PPC_WEAK_FUNC(sub_82560C98);
PPC_FUNC_IMPL(__imp__sub_82560C98) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560CA4"))) PPC_WEAK_FUNC(sub_82560CA4);
PPC_FUNC_IMPL(__imp__sub_82560CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560CA8"))) PPC_WEAK_FUNC(sub_82560CA8);
PPC_FUNC_IMPL(__imp__sub_82560CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8257ec20
	ctx.lr = 0x82560CD8;
	sub_8257EC20(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r9,r10,23956
	ctx.r9.s64 = ctx.r10.s64 + 23956;
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// blt cr6,0x82560d1c
	if (cr6.lt) goto loc_82560D1C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82560D1C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne cr6,0x82560d34
	if (!cr6.eq) goto loc_82560D34;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_82560D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82560D4C"))) PPC_WEAK_FUNC(sub_82560D4C);
PPC_FUNC_IMPL(__imp__sub_82560D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560D50"))) PPC_WEAK_FUNC(sub_82560D50);
PPC_FUNC_IMPL(__imp__sub_82560D50) {
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
	// lwz r9,-12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// addi r11,r4,-20
	ctx.r11.s64 = ctx.r4.s64 + -20;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r5,-20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	// lwz r9,-12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r8,-20(r4)
	PPC_STORE_U32(ctx.r4.u32 + -20, ctx.r8.u32);
	// stw r10,-12(r4)
	PPC_STORE_U32(ctx.r4.u32 + -12, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r7,-20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blt cr6,0x82560dcc
	if (cr6.lt) goto loc_82560DCC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_82560DCC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82560ddc
	if (!cr6.gt) goto loc_82560DDC;
	// bl 0x8258e8e0
	ctx.lr = 0x82560DDC;
	sub_8258E8E0(ctx, base);
loc_82560DDC:
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

__attribute__((alias("__imp__sub_82560DF0"))) PPC_WEAK_FUNC(sub_82560DF0);
PPC_FUNC_IMPL(__imp__sub_82560DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82560DF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-19400
	ctx.r27.s64 = ctx.r11.s64 + -19400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82560E14;
	sub_8257EFD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825767c8
	ctx.lr = 0x82560E20;
	sub_825767C8(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82576cb0
	ctx.lr = 0x82560E28;
	sub_82576CB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r11,325(r1)
	PPC_STORE_U8(ctx.r1.u32 + 325, ctx.r11.u8);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stb r29,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r29.u8);
	// bl 0x825766d0
	ctx.lr = 0x82560E40;
	sub_825766D0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82576cb0
	ctx.lr = 0x82560E48;
	sub_82576CB0(ctx, base);
	// stb r29,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r29.u8);
	// stb r29,397(r1)
	PPC_STORE_U8(ctx.r1.u32 + 397, ctx.r29.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// sth r29,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r29.u16);
	// sth r29,402(r1)
	PPC_STORE_U16(ctx.r1.u32 + 402, ctx.r29.u16);
	// bl 0x82562f20
	ctx.lr = 0x82560E60;
	sub_82562F20(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82560e94
	if (cr6.eq) goto loc_82560E94;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575258
	ctx.lr = 0x82560E78;
	sub_82575258(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x82560e94
	if (!cr6.eq) goto loc_82560E94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// bl 0x825618e0
	ctx.lr = 0x82560E94;
	sub_825618E0(ctx, base);
loc_82560E94:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x825609e8
	ctx.lr = 0x82560EA0;
	sub_825609E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lwz r4,-19424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// bl 0x825604c0
	ctx.lr = 0x82560EC8;
	sub_825604C0(ctx, base);
	// lwz r11,-19424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82561118
	if (!cr6.eq) goto loc_82561118;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82561f48
	ctx.lr = 0x82560EE8;
	sub_82561F48(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82560efc
	if (cr6.lt) goto loc_82560EFC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82560EFC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82576848
	ctx.lr = 0x82560F04;
	sub_82576848(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824200a8
	ctx.lr = 0x82560F0C;
	sub_824200A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825766d0
	ctx.lr = 0x82560F14;
	sub_825766D0(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r28,15
	ctx.r28.s64 = 15;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82560f78
	if (!cr6.eq) goto loc_82560F78;
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82560f78
	if (!cr6.eq) goto loc_82560F78;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82561ec8
	ctx.lr = 0x82560F40;
	sub_82561EC8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82560f54
	if (cr6.lt) goto loc_82560F54;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82560F54:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82576848
	ctx.lr = 0x82560F60;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82576490
	ctx.lr = 0x82560F6C;
	sub_82576490(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241ff70
	ctx.lr = 0x82560F74;
	sub_8241FF70(ctx, base);
	// b 0x82560fd0
	goto loc_82560FD0;
loc_82560F78:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82561fc8
	ctx.lr = 0x82560F84;
	sub_82561FC8(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82560f98
	if (cr6.lt) goto loc_82560F98;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82560F98:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82576848
	ctx.lr = 0x82560FA4;
	sub_82576848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82576490
	ctx.lr = 0x82560FB0;
	sub_82576490(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82560fc4
	if (cr6.lt) goto loc_82560FC4;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8386d088
	ctx.lr = 0x82560FC4;
	sub_8386D088(ctx, base);
loc_82560FC4:
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// stb r29,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r29.u8);
loc_82560FD0:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824200a8
	ctx.lr = 0x82560FD8;
	sub_824200A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825752a0
	ctx.lr = 0x82560FE0;
	sub_825752A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x825730a8
	ctx.lr = 0x82560FF8;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82561014
	if (cr6.eq) goto loc_82561014;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825603f0
	ctx.lr = 0x8256100C;
	sub_825603F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82561018
	goto loc_82561018;
loc_82561014:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82561018:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-19424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19424);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832e6248
	ctx.lr = 0x8256103C;
	sub_832E6248(ctx, base);
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-19420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// bl 0x83b3a970
	ctx.lr = 0x82561050;
	sub_83B3A970(ctx, base);
	// lwz r11,-19420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825610c8
	if (!cr6.eq) goto loc_825610C8;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x825730a8
	ctx.lr = 0x82561078;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825610a4
	if (cr6.eq) goto loc_825610A4;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82561094
	if (!cr6.lt) goto loc_82561094;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
loc_82561094:
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82560100
	ctx.lr = 0x8256109C;
	sub_82560100(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x825610a8
	goto loc_825610A8;
loc_825610A4:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_825610A8:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,-19420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247ea28
	ctx.lr = 0x825610C4;
	sub_8247EA28(ctx, base);
	// b 0x825610d4
	goto loc_825610D4;
loc_825610C8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x825610D4;
	sub_825749E0(ctx, base);
loc_825610D4:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825610e8
	if (cr6.lt) goto loc_825610E8;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8386d088
	ctx.lr = 0x825610E8;
	sub_8386D088(ctx, base);
loc_825610E8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r29.u8);
	// blt cr6,0x82561108
	if (cr6.lt) goto loc_82561108;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x82561108;
	sub_8386D088(ctx, base);
loc_82561108:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// b 0x82561124
	goto loc_82561124;
loc_82561118:
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825749e0
	ctx.lr = 0x82561124;
	sub_825749E0(ctx, base);
loc_82561124:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x824200a8
	ctx.lr = 0x8256112C;
	sub_824200A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82561134;
	sub_8257EFC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561140"))) PPC_WEAK_FUNC(sub_82561140);
PPC_FUNC_IMPL(__imp__sub_82561140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82561148;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561178
	if (!cr6.eq) goto loc_82561178;
	// bl 0x82576c28
	ctx.lr = 0x82561164;
	sub_82576C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82576490
	ctx.lr = 0x82561170;
	sub_82576490(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82561178:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-19420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// bl 0x8247ea28
	ctx.lr = 0x82561198;
	sub_8247EA28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x824209f8
	ctx.lr = 0x825611AC;
	sub_824209F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825768c0
	ctx.lr = 0x825611B8;
	sub_825768C0(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x825611cc
	if (cr6.lt) goto loc_825611CC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x825611CC;
	sub_8386D088(ctx, base);
loc_825611CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// beq cr6,0x82561210
	if (cr6.eq) goto loc_82561210;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575258
	ctx.lr = 0x825611F8;
	sub_82575258(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x82561210
	if (cr6.eq) goto loc_82561210;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825762b0
	ctx.lr = 0x82561210;
	sub_825762B0(ctx, base);
loc_82561210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82576620
	ctx.lr = 0x8256121C;
	sub_82576620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82560320
	ctx.lr = 0x82561224;
	sub_82560320(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825765c8
	ctx.lr = 0x82561230;
	sub_825765C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561238"))) PPC_WEAK_FUNC(sub_82561238);
PPC_FUNC_IMPL(__imp__sub_82561238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82561240;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82561274
	if (!cr6.eq) goto loc_82561274;
	// bl 0x82576c28
	ctx.lr = 0x8256125C;
	sub_82576C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825767c8
	ctx.lr = 0x82561268;
	sub_825767C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82561274:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r31,r11,-19400
	ctx.r31.s64 = ctx.r11.s64 + -19400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82561284;
	sub_8257EFD8(ctx, base);
	// bl 0x82576c28
	ctx.lr = 0x82561288;
	sub_82576C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825767c8
	ctx.lr = 0x82561294;
	sub_825767C8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82561140
	ctx.lr = 0x825612A4;
	sub_82561140(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825767c8
	ctx.lr = 0x825612B0;
	sub_825767C8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x825612c4
	if (cr6.lt) goto loc_825612C4;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x825612C4;
	sub_8386D088(ctx, base);
loc_825612C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x8257efc8
	ctx.lr = 0x825612E0;
	sub_8257EFC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825612EC"))) PPC_WEAK_FUNC(sub_825612EC);
PPC_FUNC_IMPL(__imp__sub_825612EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825612F0"))) PPC_WEAK_FUNC(sub_825612F0);
PPC_FUNC_IMPL(__imp__sub_825612F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825612F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31766
	ctx.r25.s64 = -2081816576;
	// lwz r11,-19424(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82561488
	if (!cr6.eq) goto loc_82561488;
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r26,r11,-19248
	ctx.r26.s64 = ctx.r11.s64 + -19248;
	// lwz r11,-19184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19184);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82561358
	if (!cr6.eq) goto loc_82561358;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stw r11,-19184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19184, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82560bf0
	ctx.lr = 0x82561348;
	sub_82560BF0(ctx, base);
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// bl 0x831cdcc8
	ctx.lr = 0x82561354;
	sub_831CDCC8(ctx, base);
	// lwz r11,-19184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19184);
loc_82561358:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r27,r10,-19312
	ctx.r27.s64 = ctx.r10.s64 + -19312;
	// bne cr6,0x8256139c
	if (!cr6.eq) goto loc_8256139C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// stw r11,-19184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19184, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82560ca8
	ctx.lr = 0x8256138C;
	sub_82560CA8(ctx, base);
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// bl 0x831cdcc8
	ctx.lr = 0x82561398;
	sub_831CDCC8(ctx, base);
	// lwz r11,-19184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19184);
loc_8256139C:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r28,r10,-19328
	ctx.r28.s64 = ctx.r10.s64 + -19328;
	// bne cr6,0x825613e0
	if (!cr6.eq) goto loc_825613E0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-19184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19184, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r3,r10,11816
	ctx.r3.s64 = ctx.r10.s64 + 11816;
	// bl 0x831cdcc8
	ctx.lr = 0x825613DC;
	sub_831CDCC8(ctx, base);
	// lwz r11,-19184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19184);
loc_825613E0:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r29,r10,-19344
	ctx.r29.s64 = ctx.r10.s64 + -19344;
	// bne cr6,0x82561424
	if (!cr6.eq) goto loc_82561424;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-19184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19184, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r3,r10,11712
	ctx.r3.s64 = ctx.r10.s64 + 11712;
	// bl 0x831cdcc8
	ctx.lr = 0x82561420;
	sub_831CDCC8(ctx, base);
	// lwz r11,-19184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19184);
loc_82561424:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r10,-19360
	ctx.r30.s64 = ctx.r10.s64 + -19360;
	// bne cr6,0x82561464
	if (!cr6.eq) goto loc_82561464;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-19184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19184, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r3,r10,11592
	ctx.r3.s64 = ctx.r10.s64 + 11592;
	// bl 0x831cdcc8
	ctx.lr = 0x82561464;
	sub_831CDCC8(ctx, base);
loc_82561464:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// stw r26,-19424(r25)
	PPC_STORE_U32(ctx.r25.u32 + -19424, ctx.r26.u32);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// stw r27,-19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19420, ctx.r27.u32);
	// stw r28,-19416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19416, ctx.r28.u32);
	// stw r29,-19412(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19412, ctx.r29.u32);
	// stw r30,-19408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19408, ctx.r30.u32);
loc_82561488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82561490"))) PPC_WEAK_FUNC(sub_82561490);
PPC_FUNC_IMPL(__imp__sub_82561490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82561498;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x825612f0
	ctx.lr = 0x825614A0;
	sub_825612F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,12668
	ctx.r4.s64 = ctx.r11.s64 + 12668;
	// bl 0x82576848
	ctx.lr = 0x825614B0;
	sub_82576848(ctx, base);
	// lis r29,-31766
	ctx.r29.s64 = -2081816576;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// lwz r11,-19436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82561548
	if (cr6.eq) goto loc_82561548;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82561548
	if (cr6.eq) goto loc_82561548;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lis r28,-31766
	ctx.r28.s64 = -2081816576;
loc_825614DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825766d0
	ctx.lr = 0x825614E4;
	sub_825766D0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825614fc
	if (cr6.eq) goto loc_825614FC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576490
	ctx.lr = 0x825614FC;
	sub_82576490(ctx, base);
loc_825614FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82576620
	ctx.lr = 0x82561508;
	sub_82576620(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-19416(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19416);
	// bl 0x82562728
	ctx.lr = 0x82561514;
	sub_82562728(ctx, base);
	// lwz r11,-19436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19436);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// blt cr6,0x82561534
	if (cr6.lt) goto loc_82561534;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x82561534;
	sub_8386D088(ctx, base);
loc_82561534:
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r27.u8);
	// bne cr6,0x825614dc
	if (!cr6.eq) goto loc_825614DC;
loc_82561548:
	// lis r28,-31766
	ctx.r28.s64 = -2081816576;
	// lwz r11,-19432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825615c4
	if (cr6.eq) goto loc_825615C4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825615c4
	if (cr6.eq) goto loc_825615C4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lis r29,-31766
	ctx.r29.s64 = -2081816576;
loc_8256156C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825767c8
	ctx.lr = 0x82561578;
	sub_825767C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82576620
	ctx.lr = 0x82561584;
	sub_82576620(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,-19412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19412);
	// bl 0x82562728
	ctx.lr = 0x82561590;
	sub_82562728(ctx, base);
	// lwz r11,-19432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19432);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// blt cr6,0x825615b0
	if (cr6.lt) goto loc_825615B0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8386d088
	ctx.lr = 0x825615B0;
	sub_8386D088(ctx, base);
loc_825615B0:
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// bne cr6,0x8256156c
	if (!cr6.eq) goto loc_8256156C;
loc_825615C4:
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,-19404(r9)
	PPC_STORE_U8(ctx.r9.u32 + -19404, ctx.r10.u8);
	// lwz r10,-19428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19428);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82561600
	if (cr6.eq) goto loc_82561600;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r31,-31766
	ctx.r31.s64 = -2081816576;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r3,-19408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19408);
	// bctrl 
	ctx.lr = 0x825615F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19408);
	// bl 0x825896c8
	ctx.lr = 0x82561600;
	sub_825896C8(ctx, base);
loc_82561600:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82561614
	if (cr6.lt) goto loc_82561614;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x8386d088
	ctx.lr = 0x82561614;
	sub_8386D088(ctx, base);
loc_82561614:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256161C"))) PPC_WEAK_FUNC(sub_8256161C);
PPC_FUNC_IMPL(__imp__sub_8256161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561620"))) PPC_WEAK_FUNC(sub_82561620);
PPC_FUNC_IMPL(__imp__sub_82561620) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-19400
	ctx.r30.s64 = ctx.r11.s64 + -19400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8256164C;
	sub_8257EFD8(ctx, base);
	// bl 0x825612f0
	ctx.lr = 0x82561650;
	sub_825612F0(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r3,-19408(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19408);
	// bl 0x82589920
	ctx.lr = 0x82561660;
	sub_82589920(ctx, base);
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,-19428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19428, ctx.r31.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82561670;
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

__attribute__((alias("__imp__sub_82561688"))) PPC_WEAK_FUNC(sub_82561688);
PPC_FUNC_IMPL(__imp__sub_82561688) {
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
	// bne cr6,0x825616ac
	if (!cr6.eq) goto loc_825616AC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_825616AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,12856
	ctx.r4.s64 = ctx.r11.s64 + 12856;
	// bl 0x831cef50
	ctx.lr = 0x825616BC;
	sub_831CEF50(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825616D4"))) PPC_WEAK_FUNC(sub_825616D4);
PPC_FUNC_IMPL(__imp__sub_825616D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825616D8"))) PPC_WEAK_FUNC(sub_825616D8);
PPC_FUNC_IMPL(__imp__sub_825616D8) {
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
	// bl 0x82575868
	ctx.lr = 0x825616F0;
	sub_82575868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82575a40
	ctx.lr = 0x825616F8;
	sub_82575A40(ctx, base);
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

__attribute__((alias("__imp__sub_8256170C"))) PPC_WEAK_FUNC(sub_8256170C);
PPC_FUNC_IMPL(__imp__sub_8256170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561710"))) PPC_WEAK_FUNC(sub_82561710);
PPC_FUNC_IMPL(__imp__sub_82561710) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82533420
	ctx.lr = 0x8256172C;
	sub_82533420(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8256174C"))) PPC_WEAK_FUNC(sub_8256174C);
PPC_FUNC_IMPL(__imp__sub_8256174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

