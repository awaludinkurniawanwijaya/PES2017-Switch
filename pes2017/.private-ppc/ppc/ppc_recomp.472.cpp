#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83910D88"))) PPC_WEAK_FUNC(sub_83910D88);
PPC_FUNC_IMPL(__imp__sub_83910D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83910D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83910db0
	if (!cr6.eq) goto loc_83910DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x83910DB0;
	sub_825AB6C8(ctx, base);
loc_83910DB0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83910dcc
	if (!cr6.eq) goto loc_83910DCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_83910DCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83910de8
	if (cr6.eq) goto loc_83910DE8;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83910dec
	if (cr6.eq) goto loc_83910DEC;
loc_83910DE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83910DEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83910e00
	if (cr6.eq) goto loc_83910E00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83910E00:
	// bl 0x830ff290
	ctx.lr = 0x83910E04;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83910E08;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x83910ec4
	if (cr6.eq) goto loc_83910EC4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83910ec4
	if (cr6.eq) goto loc_83910EC4;
	// lwz r31,260(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x837d59a0
	ctx.lr = 0x83910E24;
	sub_837D59A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837d5cf8
	ctx.lr = 0x83910E2C;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83910ec4
	if (!cr6.eq) goto loc_83910EC4;
	// lbz r11,857(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 857);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83910ec4
	if (!cr6.eq) goto loc_83910EC4;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x83910E50;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83910ec4
	if (cr6.eq) goto loc_83910EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83910E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83910ec4
	if (cr6.eq) goto loc_83910EC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83910E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83910eb8
	if (cr6.eq) goto loc_83910EB8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83910eb8
	if (cr6.eq) goto loc_83910EB8;
	// lbz r4,843(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 843);
	// bl 0x82a56520
	ctx.lr = 0x83910EB8;
	sub_82A56520(ctx, base);
loc_83910EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83910EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83910ED0"))) PPC_WEAK_FUNC(sub_83910ED0);
PPC_FUNC_IMPL(__imp__sub_83910ED0) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83910ef4
	if (!cr6.eq) goto loc_83910EF4;
	// bl 0x8390e428
	ctx.lr = 0x83910EF4;
	sub_8390E428(ctx, base);
loc_83910EF4:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83910fbc
	if (cr6.gt) goto loc_83910FBC;
	// lis r12,-31855
	ctx.r12.s64 = -2087649280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3868
	ctx.r12.s64 = ctx.r12.s64 + 3868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83910F4C;
	case 1:
		goto loc_83910F68;
	case 2:
		goto loc_83910F68;
	case 3:
		goto loc_83910F68;
	case 4:
		goto loc_83910F68;
	case 5:
		goto loc_83910F84;
	case 6:
		goto loc_83910F84;
	case 7:
		goto loc_83910F84;
	case 8:
		goto loc_83910FBC;
	case 9:
		goto loc_83910FBC;
	case 10:
		goto loc_83910FBC;
	case 11:
		goto loc_83910FA0;
	default:
		return;
	}
	// lwz r28,3916(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3916);
	// lwz r28,3944(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3944);
	// lwz r28,3944(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3944);
	// lwz r28,3944(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3944);
	// lwz r28,3944(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3944);
	// lwz r28,3972(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3972);
	// lwz r28,3972(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3972);
	// lwz r28,3972(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3972);
	// lwz r28,4028(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4028);
	// lwz r28,4028(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4028);
	// lwz r28,4028(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4028);
	// lwz r28,4000(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4000);
loc_83910F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839105f0
	ctx.lr = 0x83910F54;
	sub_839105F0(ctx, base);
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
loc_83910F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8390f4c8
	ctx.lr = 0x83910F70;
	sub_8390F4C8(ctx, base);
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
loc_83910F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8390fa30
	ctx.lr = 0x83910F8C;
	sub_8390FA30(ctx, base);
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
loc_83910FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83910a28
	ctx.lr = 0x83910FA8;
	sub_83910A28(ctx, base);
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
loc_83910FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83910030
	ctx.lr = 0x83910FC4;
	sub_83910030(ctx, base);
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

__attribute__((alias("__imp__sub_83910FD8"))) PPC_WEAK_FUNC(sub_83910FD8);
PPC_FUNC_IMPL(__imp__sub_83910FD8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83911004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8391109c
	if (cr6.gt) goto loc_8391109C;
	// lis r12,-31855
	ctx.r12.s64 = -2087649280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4140
	ctx.r12.s64 = ctx.r12.s64 + 4140;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8391105C;
	case 1:
		goto loc_8391106C;
	case 2:
		goto loc_8391106C;
	case 3:
		goto loc_8391106C;
	case 4:
		goto loc_8391106C;
	case 5:
		goto loc_8391107C;
	case 6:
		goto loc_8391107C;
	case 7:
		goto loc_8391107C;
	case 8:
		goto loc_8391109C;
	case 9:
		goto loc_8391109C;
	case 10:
		goto loc_8391109C;
	case 11:
		goto loc_8391108C;
	default:
		return;
	}
	// lwz r28,4188(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4188);
	// lwz r28,4204(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4204);
	// lwz r28,4204(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4204);
	// lwz r28,4204(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4204);
	// lwz r28,4204(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4204);
	// lwz r28,4220(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4220);
	// lwz r28,4220(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4220);
	// lwz r28,4220(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4220);
	// lwz r28,4252(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4252);
	// lwz r28,4252(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4252);
	// lwz r28,4252(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4252);
	// lwz r28,4236(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4236);
loc_8391105C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839106f0
	ctx.lr = 0x83911068;
	sub_839106F0(ctx, base);
	// b 0x839110a8
	goto loc_839110A8;
loc_8391106C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8390f878
	ctx.lr = 0x83911078;
	sub_8390F878(ctx, base);
	// b 0x839110a8
	goto loc_839110A8;
loc_8391107C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8390fe78
	ctx.lr = 0x83911088;
	sub_8390FE78(ctx, base);
	// b 0x839110a8
	goto loc_839110A8;
loc_8391108C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8390f168
	ctx.lr = 0x83911098;
	sub_8390F168(ctx, base);
	// b 0x839110a8
	goto loc_839110A8;
loc_8391109C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83910470
	ctx.lr = 0x839110A8;
	sub_83910470(ctx, base);
loc_839110A8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lfs f1,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839110c4
	if (cr6.eq) goto loc_839110C4;
	// bl 0x837f9820
	ctx.lr = 0x839110C0;
	sub_837F9820(ctx, base);
	// b 0x839110dc
	goto loc_839110DC;
loc_839110C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x839d85e0
	ctx.lr = 0x839110D0;
	sub_839D85E0(ctx, base);
	// lfs f1,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x837a4490
	ctx.lr = 0x839110DC;
	sub_837A4490(ctx, base);
loc_839110DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83910d88
	ctx.lr = 0x839110E4;
	sub_83910D88(ctx, base);
	// stb r3,856(r31)
	PPC_STORE_U8(ctx.r31.u32 + 856, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_83911104"))) PPC_WEAK_FUNC(sub_83911104);
PPC_FUNC_IMPL(__imp__sub_83911104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911108"))) PPC_WEAK_FUNC(sub_83911108);
PPC_FUNC_IMPL(__imp__sub_83911108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bgt cr6,0x83911434
	if (cr6.gt) goto loc_83911434;
	// lis r12,-31855
	ctx.r12.s64 = -2087649280;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4392
	ctx.r12.s64 = ctx.r12.s64 + 4392;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83911168;
	case 1:
		goto loc_83911170;
	case 2:
		goto loc_839111B0;
	case 3:
		goto loc_839111CC;
	case 4:
		goto loc_83911330;
	case 5:
		goto loc_839113BC;
	case 6:
		goto loc_839111E8;
	case 7:
		goto loc_83911364;
	case 8:
		goto loc_8391121C;
	case 9:
		goto loc_83911240;
	case 10:
		goto loc_839112A0;
	case 11:
		goto loc_83911300;
	case 12:
		goto loc_8391131C;
	case 13:
		goto loc_839113A8;
	case 14:
		goto loc_839113F0;
	case 15:
		goto loc_83911350;
	default:
		return;
	}
	// lwz r28,4456(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4456);
	// lwz r28,4464(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4464);
	// lwz r28,4528(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4528);
	// lwz r28,4556(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4556);
	// lwz r28,4912(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4912);
	// lwz r28,5052(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5052);
	// lwz r28,4584(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4584);
	// lwz r28,4964(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4964);
	// lwz r28,4636(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4636);
	// lwz r28,4672(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4672);
	// lwz r28,4768(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4768);
	// lwz r28,4864(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4864);
	// lwz r28,4892(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4892);
	// lwz r28,5032(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5032);
	// lwz r28,5104(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5104);
	// lwz r28,4944(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4944);
loc_83911168:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83911170:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83911434
	if (!cr6.gt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83911434
	if (!cr6.gt) goto loc_83911434;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,11260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839111B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839111CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839111E8:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19840);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83911434
	if (cr6.gt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8391121C:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83911240:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x83911264
	if (cr6.lt) goto loc_83911264;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-18168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8391126c
	goto loc_8391126C;
loc_83911264:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f0.f64 = double(temp.f32);
loc_8391126C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,11264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11264);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839112A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x839112c4
	if (cr6.lt) goto loc_839112C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-18168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x839112cc
	goto loc_839112CC;
loc_839112C4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f0.f64 = double(temp.f32);
loc_839112CC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,19832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19832);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83911300:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x83911314
	if (cr6.eq) goto loc_83911314;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x83911434
	if (!cr6.eq) goto loc_83911434;
loc_83911314:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8391131C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x83911330
	if (cr6.eq) goto loc_83911330;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x83911434
	if (!cr6.eq) goto loc_83911434;
loc_83911330:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83911350:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x83911364
	if (cr6.eq) goto loc_83911364;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x83911434
	if (!cr6.eq) goto loc_83911434;
loc_83911364:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19840);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83911434
	if (!cr6.gt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,19828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19828);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83911434
	if (!cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839113A8:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x839113bc
	if (cr6.eq) goto loc_839113BC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x83911434
	if (!cr6.eq) goto loc_83911434;
loc_839113BC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839113F0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x83911404
	if (cr6.eq) goto loc_83911404;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x83911434
	if (!cr6.eq) goto loc_83911434;
loc_83911404:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,19844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83911434
	if (cr6.lt) goto loc_83911434;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,19840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19840);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_83911434:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391143C"))) PPC_WEAK_FUNC(sub_8391143C);
PPC_FUNC_IMPL(__imp__sub_8391143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911440"))) PPC_WEAK_FUNC(sub_83911440);
PPC_FUNC_IMPL(__imp__sub_83911440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83911448;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r29,r5,30
	ctx.r29.s64 = ctx.r5.s64 * 30;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r28,r29,r3
	ctx.r28.u64 = ctx.r29.u64 + ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
loc_8391148C:
	// lbz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83911514
	if (cr6.eq) goto loc_83911514;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x839114cc
	if (!cr6.eq) goto loc_839114CC;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// bl 0x83911108
	ctx.lr = 0x839114BC;
	sub_83911108(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83911504
	if (cr6.eq) goto loc_83911504;
	// b 0x839114ec
	goto loc_839114EC;
loc_839114CC:
	// lbz r11,-1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// lbz r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83911514
	if (!cr6.eq) goto loc_83911514;
loc_839114EC:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833eab80
	ctx.lr = 0x839114FC;
	sub_833EAB80(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83911504:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,30
	cr6.compare<uint32_t>(ctx.r31.u32, 30, xer);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// blt cr6,0x8391148c
	if (cr6.lt) goto loc_8391148C;
loc_83911514:
	// subf r3,r27,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r27.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x8391156c
	if (cr6.lt) goto loc_8391156C;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
loc_83911538:
	// lbzx r7,r27,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// lbz r7,92(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 92);
	// lbz r8,92(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 92);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blt cr6,0x83911538
	if (cr6.lt) goto loc_83911538;
loc_8391156C:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bge cr6,0x83911584
	if (!cr6.lt) goto loc_83911584;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
loc_83911584:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x839115b0
	if (!cr0.gt) goto loc_839115B0;
	// rotlwi r10,r22,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r22.u32, 1);
	// divw r9,r22,r11
	ctx.r9.s32 = PPCDivide(ctx.r22.s32, ctx.r11.s32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	// subf r11,r7,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r7.s64;
	// twlgei r6,-1
loc_839115B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839115ec
	if (cr6.eq) goto loc_839115EC;
loc_839115C0:
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lbz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 92);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x839115e8
	if (!cr0.gt) goto loc_839115E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x839115c0
	if (cr6.lt) goto loc_839115C0;
	// b 0x839115ec
	goto loc_839115EC;
loc_839115E8:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_839115EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83911608
	if (cr6.eq) goto loc_83911608;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83911608;
	sub_825952B8(ctx, base);
loc_83911608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83911614"))) PPC_WEAK_FUNC(sub_83911614);
PPC_FUNC_IMPL(__imp__sub_83911614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911618"))) PPC_WEAK_FUNC(sub_83911618);
PPC_FUNC_IMPL(__imp__sub_83911618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r9,56(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 56);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r7,r6,24
	ctx.r7.s64 = ctx.r6.s64 + 24;
	// bne cr6,0x83911638
	if (!cr6.eq) goto loc_83911638;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// b 0x83911440
	sub_83911440(ctx, base);
	return;
loc_83911638:
	// addi r6,r8,36
	ctx.r6.s64 = ctx.r8.s64 + 36;
	// b 0x83911440
	sub_83911440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83911640"))) PPC_WEAK_FUNC(sub_83911640);
PPC_FUNC_IMPL(__imp__sub_83911640) {
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
	// bl 0x831156e8
	ctx.lr = 0x83911650;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x83911660;
	sub_83123778(ctx, base);
	// bl 0x83740bd8
	ctx.lr = 0x83911664;
	sub_83740BD8(ctx, base);
	// cmpwi cr6,r3,84
	cr6.compare<int32_t>(ctx.r3.s32, 84, xer);
	// bgt cr6,0x83911694
	if (cr6.gt) goto loc_83911694;
	// beq cr6,0x83911680
	if (cr6.eq) goto loc_83911680;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// blt cr6,0x8391169c
	if (cr6.lt) goto loc_8391169C;
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// bgt cr6,0x8391169c
	if (cr6.gt) goto loc_8391169C;
loc_83911680:
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
loc_83911694:
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x83911680
	if (cr6.eq) goto loc_83911680;
loc_8391169C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,32492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32492);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83911730
	if (cr6.gt) goto loc_83911730;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839116e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839116E0;
	// bdzf 4*cr6+eq,0x839116f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839116F4;
	// bdzf 4*cr6+eq,0x83911708
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911708;
	// bdzf 4*cr6+eq,0x8391171c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8391171C;
	// bdzf 4*cr6+eq,0x83911730
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911730;
	// bne cr6,0x83911730
	if (!cr6.eq) goto loc_83911730;
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
loc_839116E0:
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
loc_839116F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83911708:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8391171C:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83911730:
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

__attribute__((alias("__imp__sub_83911744"))) PPC_WEAK_FUNC(sub_83911744);
PPC_FUNC_IMPL(__imp__sub_83911744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911748"))) PPC_WEAK_FUNC(sub_83911748);
PPC_FUNC_IMPL(__imp__sub_83911748) {
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
	// bl 0x83911640
	ctx.lr = 0x83911764;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839117b0
	if (!cr6.eq) goto loc_839117B0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,6460(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6460);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83911788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839117b0
	if (cr6.eq) goto loc_839117B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x8391179C;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x839117B0;
	sub_83545640(ctx, base);
loc_839117B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839117C8"))) PPC_WEAK_FUNC(sub_839117C8);
PPC_FUNC_IMPL(__imp__sub_839117C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x830ff290
	ctx.lr = 0x839117E0;
	sub_830FF290(ctx, base);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lfs f13,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f11
	cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bge cr6,0x83911820
	if (!cr6.lt) goto loc_83911820;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83911820:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x8391184c
	if (!cr6.gt) goto loc_8391184C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8391184C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911868"))) PPC_WEAK_FUNC(sub_83911868);
PPC_FUNC_IMPL(__imp__sub_83911868) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x830ff290
	ctx.lr = 0x83911888;
	sub_830FF290(ctx, base);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,20944(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f8,f13,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f13,-29652(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29652);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f10,f8,f13,f6
	ctx.f10.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f6.f64)));
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fsubs f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839118e4
	if (!cr6.lt) goto loc_839118E4;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x839118f0
	goto loc_839118F0;
loc_839118E4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x839118f0
	if (!cr6.gt) goto loc_839118F0;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_839118F0:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x83911904
	if (!cr6.lt) goto loc_83911904;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x83911910
	goto loc_83911910;
loc_83911904:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x83911910
	if (!cr6.gt) goto loc_83911910;
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83911910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911928"))) PPC_WEAK_FUNC(sub_83911928);
PPC_FUNC_IMPL(__imp__sub_83911928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83911974
	if (cr6.gt) {
		sub_83911974(ctx, base);
		return;
	}
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83911958
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911958;
	// bdzf 4*cr6+eq,0x83911968
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911968;
	// bne cr6,0x83911948
	if (!cr6.eq) goto loc_83911948;
loc_83911948:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,20848
	ctx.r10.s64 = ctx.r11.s64 + 20848;
	// lfs f1,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83911958:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,20848
	ctx.r10.s64 = ctx.r11.s64 + 20848;
	// lfs f1,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_83911968:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f1,20848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20848);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911974"))) PPC_WEAK_FUNC(sub_83911974);
PPC_FUNC_IMPL(__imp__sub_83911974) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911980"))) PPC_WEAK_FUNC(sub_83911980);
PPC_FUNC_IMPL(__imp__sub_83911980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839119cc
	if (cr6.gt) goto loc_839119CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839119b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119B4;
	// bdzf 4*cr6+eq,0x839119bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119BC;
	// bdzf 4*cr6+eq,0x839119bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119BC;
	// bdzf 4*cr6+eq,0x839119c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119C4;
	// bdzf 4*cr6+eq,0x839119c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119C4;
	// bdzf 4*cr6+eq,0x839119cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119CC;
	// bdzf 4*cr6+eq,0x839119cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839119CC;
	// bne cr6,0x839119c4
	if (!cr6.eq) goto loc_839119C4;
loc_839119B4:
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
loc_839119BC:
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
loc_839119C4:
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
loc_839119CC:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839119D4"))) PPC_WEAK_FUNC(sub_839119D4);
PPC_FUNC_IMPL(__imp__sub_839119D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839119D8"))) PPC_WEAK_FUNC(sub_839119D8);
PPC_FUNC_IMPL(__imp__sub_839119D8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a290c8
	ctx.lr = 0x83911A00;
	sub_82A290C8(ctx, base);
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83911a4c
	if (cr6.gt) goto loc_83911A4C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83911a28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911A28;
	// bdzf 4*cr6+eq,0x83911a34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911A34;
	// bdzf 4*cr6+eq,0x83911a34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911A34;
	// bdzf 4*cr6+eq,0x83911a40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911A40;
	// bne cr6,0x83911a40
	if (!cr6.eq) goto loc_83911A40;
loc_83911A28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x83911a48
	goto loc_83911A48;
loc_83911A34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// b 0x83911a48
	goto loc_83911A48;
loc_83911A40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,105
	ctx.r11.s64 = ctx.r11.s64 + 105;
loc_83911A48:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83911A4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911A64"))) PPC_WEAK_FUNC(sub_83911A64);
PPC_FUNC_IMPL(__imp__sub_83911A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911A68"))) PPC_WEAK_FUNC(sub_83911A68);
PPC_FUNC_IMPL(__imp__sub_83911A68) {
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
	ctx.lr = 0x83911A78;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83911A7C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// blt cr6,0x83911aa8
	if (cr6.lt) goto loc_83911AA8;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// ble cr6,0x83911a94
	if (!cr6.gt) goto loc_83911A94;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x83911aa8
	if (!cr6.eq) goto loc_83911AA8;
loc_83911A94:
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
loc_83911AA8:
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

__attribute__((alias("__imp__sub_83911ABC"))) PPC_WEAK_FUNC(sub_83911ABC);
PPC_FUNC_IMPL(__imp__sub_83911ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911AC0"))) PPC_WEAK_FUNC(sub_83911AC0);
PPC_FUNC_IMPL(__imp__sub_83911AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911AD4"))) PPC_WEAK_FUNC(sub_83911AD4);
PPC_FUNC_IMPL(__imp__sub_83911AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911AD8"))) PPC_WEAK_FUNC(sub_83911AD8);
PPC_FUNC_IMPL(__imp__sub_83911AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83911AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x83911AF4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83911b38
	if (cr6.eq) goto loc_83911B38;
	// bl 0x831156e8
	ctx.lr = 0x83911B00;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// addi r4,r4,24068
	ctx.r4.s64 = ctx.r4.s64 + 24068;
	// bl 0x831ce980
	ctx.lr = 0x83911B1C;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83911b2c
	if (!cr6.eq) goto loc_83911B2C;
	// lbz r29,90(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// b 0x83911b38
	goto loc_83911B38;
loc_83911B2C:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83911b38
	if (!cr6.eq) goto loc_83911B38;
	// lbz r29,91(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
loc_83911B38:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83911bec
	if (!cr6.eq) goto loc_83911BEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83151198
	ctx.lr = 0x83911B6C;
	sub_83151198(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-26260(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,21700(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83911BEC:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 & ctx.r29.u64;
	// bl 0x83151088
	ctx.lr = 0x83911C04;
	sub_83151088(ctx, base);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83911C1C"))) PPC_WEAK_FUNC(sub_83911C1C);
PPC_FUNC_IMPL(__imp__sub_83911C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911C20"))) PPC_WEAK_FUNC(sub_83911C20);
PPC_FUNC_IMPL(__imp__sub_83911C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83911C28;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x83911c8c
	if (cr6.lt) goto loc_83911C8C;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// beq cr6,0x83911c74
	if (cr6.eq) goto loc_83911C74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x83911C70;
	sub_82CD6C48(ctx, base);
	// b 0x83911d54
	goto loc_83911D54;
loc_83911C74:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f3,-2072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2072);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x83911C88;
	sub_82CD6C48(ctx, base);
	// b 0x83911d54
	goto loc_83911D54;
loc_83911C8C:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,17288
	ctx.r31.s64 = ctx.r11.s64 + 17288;
	// lwz r11,17304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17304);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83911d48
	if (!cr6.eq) goto loc_83911D48;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lfs f31,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,-4720(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4720);
	ctx.f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f29,21204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21204);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f1,20968(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20968);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r11,17304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17304, ctx.r11.u32);
	// bl 0x82cd6c48
	ctx.lr = 0x83911CE4;
	sub_82CD6C48(ctx, base);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lfs f3,20964(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20964);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20960(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20960);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x83911D04;
	sub_82CD6C48(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f3,-8312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8312);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,20956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20956);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x83911D24;
	sub_82CD6C48(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lfs f3,20952(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20952);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20948);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,14196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14196);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x83911D48;
	sub_82CD6C48(ctx, base);
loc_83911D48:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_83911D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83911D6C"))) PPC_WEAK_FUNC(sub_83911D6C);
PPC_FUNC_IMPL(__imp__sub_83911D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911D70"))) PPC_WEAK_FUNC(sub_83911D70);
PPC_FUNC_IMPL(__imp__sub_83911D70) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83911c20
	ctx.lr = 0x83911D8C;
	sub_83911C20(ctx, base);
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

__attribute__((alias("__imp__sub_83911DA4"))) PPC_WEAK_FUNC(sub_83911DA4);
PPC_FUNC_IMPL(__imp__sub_83911DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83911DA8"))) PPC_WEAK_FUNC(sub_83911DA8);
PPC_FUNC_IMPL(__imp__sub_83911DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83911e00
	if (cr6.gt) goto loc_83911E00;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83911df0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911DF0;
	// bdzf 4*cr6+eq,0x83911df0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911DF0;
	// bdzf 4*cr6+eq,0x83911df8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911DF8;
	// bne cr6,0x83911df8
	if (!cr6.eq) goto loc_83911DF8;
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_83911DF0:
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
loc_83911DF8:
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
loc_83911E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911E08"))) PPC_WEAK_FUNC(sub_83911E08);
PPC_FUNC_IMPL(__imp__sub_83911E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83911e70
	if (cr6.gt) goto loc_83911E70;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83911e58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E58;
	// bdzf 4*cr6+eq,0x83911e60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E60;
	// bdzf 4*cr6+eq,0x83911e60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E60;
	// bdzf 4*cr6+eq,0x83911e68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E68;
	// bdzf 4*cr6+eq,0x83911e68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E68;
	// bdzf 4*cr6+eq,0x83911e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E70;
	// bdzf 4*cr6+eq,0x83911e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911E70;
	// bne cr6,0x83911e68
	if (!cr6.eq) goto loc_83911E68;
loc_83911E58:
	// li r3,90
	ctx.r3.s64 = 90;
	// blr 
	return;
loc_83911E60:
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
loc_83911E68:
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
loc_83911E70:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911E78"))) PPC_WEAK_FUNC(sub_83911E78);
PPC_FUNC_IMPL(__imp__sub_83911E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83911eb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911EB0;
	// bdzf 4*cr6+eq,0x83911eb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911EB4;
	// bdzf 4*cr6+eq,0x83911eb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911EB4;
	// bdzf 4*cr6+eq,0x83911eb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83911EB0;
	// bne cr6,0x83911eb0
	if (!cr6.eq) goto loc_83911EB0;
loc_83911EB0:
	// subfic r3,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r3.s64;
loc_83911EB4:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83911EB8"))) PPC_WEAK_FUNC(sub_83911EB8);
PPC_FUNC_IMPL(__imp__sub_83911EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83911EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x83912014
	if (!cr6.lt) goto loc_83912014;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x83911EDC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x83911ef0
	if (cr6.eq) goto loc_83911EF0;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bne cr6,0x83911ef4
	if (!cr6.eq) goto loc_83911EF4;
loc_83911EF0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83911EF4:
	// bl 0x831156e8
	ctx.lr = 0x83911EF8;
	sub_831156E8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b850
	ctx.lr = 0x83911F00;
	sub_8312B850(ctx, base);
	// bl 0x83740bd8
	ctx.lr = 0x83911F04;
	sub_83740BD8(ctx, base);
	// bl 0x83741af0
	ctx.lr = 0x83911F08;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// bgt cr6,0x83911f28
	if (cr6.gt) goto loc_83911F28;
	// beq cr6,0x83911f30
	if (cr6.eq) goto loc_83911F30;
	// cmpwi cr6,r3,66
	cr6.compare<int32_t>(ctx.r3.s32, 66, xer);
	// beq cr6,0x83911f30
	if (cr6.eq) goto loc_83911F30;
	// cmpwi cr6,r3,69
	cr6.compare<int32_t>(ctx.r3.s32, 69, xer);
	// beq cr6,0x83911f30
	if (cr6.eq) goto loc_83911F30;
	// b 0x83911f34
	goto loc_83911F34;
loc_83911F28:
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// bne cr6,0x83911f34
	if (!cr6.eq) goto loc_83911F34;
loc_83911F30:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83911F34:
	// bl 0x831156e8
	ctx.lr = 0x83911F38;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
	// beq cr6,0x83911ff8
	if (cr6.eq) goto loc_83911FF8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,20496
	ctx.r29.s64 = ctx.r11.s64 + 20496;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83911F60:
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x83911F6C;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8314e2f0
	ctx.lr = 0x83911F80;
	sub_8314E2F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83911fdc
	if (cr6.eq) goto loc_83911FDC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,40
	cr6.compare<uint32_t>(ctx.r30.u32, 40, xer);
	// blt cr6,0x83911f60
	if (cr6.lt) goto loc_83911F60;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x83911FA8;
	sub_83123A08(ctx, base);
	// addi r4,r3,74
	ctx.r4.s64 = ctx.r3.s64 + 74;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83911FB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83911fb0
	if (!cr6.eq) goto loc_83911FB0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83911FD4;
	sub_8259CC28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83911FDC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d042a8
	ctx.lr = 0x83911FF0;
	sub_82D042A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83911FF8:
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x83912004;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,74
	ctx.r4.s64 = ctx.r11.s64 + 74;
	// bl 0x8259d6c0
	ctx.lr = 0x83912014;
	sub_8259D6C0(ctx, base);
loc_83912014:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391201C"))) PPC_WEAK_FUNC(sub_8391201C);
PPC_FUNC_IMPL(__imp__sub_8391201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912020"))) PPC_WEAK_FUNC(sub_83912020);
PPC_FUNC_IMPL(__imp__sub_83912020) {
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
	// bl 0x83911640
	ctx.lr = 0x83912038;
	sub_83911640(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839120ac
	if (cr6.gt) goto loc_839120AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83912070
	if (cr6.eq) goto loc_83912070;
	// bdz 0x8391207c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8391207C;
	// bdz 0x83912088
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83912088;
	// bdz 0x83912064
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83912064;
	// bdz 0x83912094
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83912094;
	// b 0x839120a0
	goto loc_839120A0;
loc_83912064:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// b 0x839120b4
	goto loc_839120B4;
loc_83912070:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6940
	ctx.r9.s64 = ctx.r11.s64 + 6940;
	// b 0x839120b4
	goto loc_839120B4;
loc_8391207C:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6912
	ctx.r9.s64 = ctx.r11.s64 + 6912;
	// b 0x839120b4
	goto loc_839120B4;
loc_83912088:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6884
	ctx.r9.s64 = ctx.r11.s64 + 6884;
	// b 0x839120b4
	goto loc_839120B4;
loc_83912094:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6856
	ctx.r9.s64 = ctx.r11.s64 + 6856;
	// b 0x839120b4
	goto loc_839120B4;
loc_839120A0:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6828
	ctx.r9.s64 = ctx.r11.s64 + 6828;
	// b 0x839120b4
	goto loc_839120B4;
loc_839120AC:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r11,6800
	ctx.r9.s64 = ctx.r11.s64 + 6800;
loc_839120B4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
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

__attribute__((alias("__imp__sub_839120D0"))) PPC_WEAK_FUNC(sub_839120D0);
PPC_FUNC_IMPL(__imp__sub_839120D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839120D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839120E4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35220
	ctx.r9.u64 = ctx.r11.u64 | 35220;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// beq cr6,0x839122ac
	if (cr6.eq) goto loc_839122AC;
	// bl 0x830ff290
	ctx.lr = 0x83912100;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83912104;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x8391216c
	if (cr6.eq) goto loc_8391216C;
	// addi r30,r31,2324
	ctx.r30.s64 = ctx.r31.s64 + 2324;
	// addi r29,r31,1868
	ctx.r29.s64 = ctx.r31.s64 + 1868;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83926990
	ctx.lr = 0x83912120;
	sub_83926990(ctx, base);
	// stw r3,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83925f10
	ctx.lr = 0x8391212C;
	sub_83925F10(ctx, base);
	// stw r3,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83925650
	ctx.lr = 0x8391213C;
	sub_83925650(ctx, base);
	// stw r3,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83924d18
	ctx.lr = 0x8391214C;
	sub_83924D18(ctx, base);
	// stw r3,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83923a68
	ctx.lr = 0x8391215C;
	sub_83923A68(ctx, base);
	// stw r3,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83922a30
	ctx.lr = 0x83912168;
	sub_83922A30(ctx, base);
	// stw r3,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r3.u32);
loc_8391216C:
	// bl 0x82e6e978
	ctx.lr = 0x83912170;
	sub_82E6E978(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8391218C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839121dc
	if (cr6.eq) goto loc_839121DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839121dc
	if (cr6.eq) goto loc_839121DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839121bc
	if (!cr6.eq) goto loc_839121BC;
	// addi r3,r31,2324
	ctx.r3.s64 = ctx.r31.s64 + 2324;
	// bl 0x83922198
	ctx.lr = 0x839121B8;
	sub_83922198(ctx, base);
	// stw r3,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r3.u32);
loc_839121BC:
	// bl 0x830ff290
	ctx.lr = 0x839121C0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839121C4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x839121dc
	if (cr6.eq) goto loc_839121DC;
	// addi r4,r31,2324
	ctx.r4.s64 = ctx.r31.s64 + 2324;
	// addi r3,r31,1868
	ctx.r3.s64 = ctx.r31.s64 + 1868;
	// bl 0x83921c38
	ctx.lr = 0x839121D8;
	sub_83921C38(ctx, base);
	// stw r3,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r3.u32);
loc_839121DC:
	// bl 0x830ff290
	ctx.lr = 0x839121E0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839121E4;
	sub_830FFAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x8391221c
	if (!cr6.eq) goto loc_8391221C;
	// addi r30,r31,2324
	ctx.r30.s64 = ctx.r31.s64 + 2324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83921578
	ctx.lr = 0x839121FC;
	sub_83921578(ctx, base);
	// stw r3,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83921060
	ctx.lr = 0x83912208;
	sub_83921060(ctx, base);
	// stw r3,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391f440
	ctx.lr = 0x83912214;
	sub_8391F440(ctx, base);
	// stw r3,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r3.u32);
	// b 0x83912254
	goto loc_83912254;
loc_8391221C:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// beq cr6,0x83912254
	if (cr6.eq) goto loc_83912254;
	// addi r30,r31,2324
	ctx.r30.s64 = ctx.r31.s64 + 2324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391f440
	ctx.lr = 0x83912230;
	sub_8391F440(ctx, base);
	// stw r3,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r3.u32);
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// beq cr6,0x83912248
	if (cr6.eq) goto loc_83912248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391e3b8
	ctx.lr = 0x83912244;
	sub_8391E3B8(ctx, base);
	// stw r3,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r3.u32);
loc_83912248:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391dd18
	ctx.lr = 0x83912250;
	sub_8391DD18(ctx, base);
	// stw r3,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r3.u32);
loc_83912254:
	// addi r29,r31,2324
	ctx.r29.s64 = ctx.r31.s64 + 2324;
	// addi r28,r31,1868
	ctx.r28.s64 = ctx.r31.s64 + 1868;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,1788
	ctx.r31.s64 = ctx.r31.s64 + 1788;
loc_83912264:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391d368
	ctx.lr = 0x83912274;
	sub_8391D368(ctx, base);
	// stw r3,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391cd90
	ctx.lr = 0x83912288;
	sub_8391CD90(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391c800
	ctx.lr = 0x8391229C;
	sub_8391C800(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x83912264
	if (cr6.lt) goto loc_83912264;
loc_839122AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839122B8"))) PPC_WEAK_FUNC(sub_839122B8);
PPC_FUNC_IMPL(__imp__sub_839122B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839122C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839122CC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,35220
	ctx.r9.u64 = ctx.r11.u64 | 35220;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// beq cr6,0x839123cc
	if (cr6.eq) goto loc_839123CC;
	// lwz r11,1648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912304
	if (cr6.eq) goto loc_83912304;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83912304:
	// addi r31,r29,1816
	ctx.r31.s64 = ctx.r29.s64 + 1816;
	// li r30,13
	ctx.r30.s64 = 13;
loc_8391230C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391232c
	if (cr6.eq) goto loc_8391232C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391232C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8391232C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8391230c
	if (!cr0.eq) goto loc_8391230C;
	// lwz r11,1732(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912358
	if (cr6.eq) goto loc_83912358;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83912358:
	// addi r31,r29,1784
	ctx.r31.s64 = ctx.r29.s64 + 1784;
	// li r30,2
	ctx.r30.s64 = 2;
loc_83912360:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912380
	if (cr6.eq) goto loc_83912380;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83912380:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839123a0
	if (cr6.eq) goto loc_839123A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839123A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839123A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839123c0
	if (cr6.eq) goto loc_839123C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839123C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839123C0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83912360
	if (!cr0.eq) goto loc_83912360;
loc_839123CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839123D8"))) PPC_WEAK_FUNC(sub_839123D8);
PPC_FUNC_IMPL(__imp__sub_839123D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839123E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,6628
	ctx.r28.s64 = ctx.r11.s64 + 6628;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r28,-20
	ctx.r29.s64 = ctx.r28.s64 + -20;
loc_839123FC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d12d18
	ctx.lr = 0x83912404;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912520
	if (cr6.eq) goto loc_83912520;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x839123fc
	if (cr6.lt) goto loc_839123FC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83912424:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83912020
	ctx.lr = 0x8391242C;
	sub_83912020(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912444
	if (cr6.eq) goto loc_83912444;
	// bl 0x82d12d18
	ctx.lr = 0x83912438;
	sub_82D12D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912520
	if (cr6.eq) goto loc_83912520;
loc_83912444:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x83912424
	if (cr6.lt) goto loc_83912424;
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// bl 0x83815a48
	ctx.lr = 0x83912458;
	sub_83815A48(ctx, base);
	// stw r3,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r3.u32);
	// bl 0x82d4b8e0
	ctx.lr = 0x83912460;
	sub_82D4B8E0(ctx, base);
	// stw r3,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r3.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83815a48
	ctx.lr = 0x8391246C;
	sub_83815A48(ctx, base);
	// stw r3,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r3.u32);
	// bl 0x82d4b8e0
	ctx.lr = 0x83912474;
	sub_82D4B8E0(ctx, base);
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// stw r3,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912514
	if (cr6.eq) goto loc_83912514;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912514
	if (cr6.eq) goto loc_83912514;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d2bbb8
	ctx.lr = 0x83912494;
	sub_82D2BBB8(ctx, base);
	// lwz r3,1640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// bl 0x82d2bbb8
	ctx.lr = 0x8391249C;
	sub_82D2BBB8(ctx, base);
	// addi r30,r31,1868
	ctx.r30.s64 = ctx.r31.s64 + 1868;
	// lwz r4,1632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83928430
	ctx.lr = 0x839124AC;
	sub_83928430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// bl 0x83928510
	ctx.lr = 0x839124B8;
	sub_83928510(ctx, base);
	// lwz r3,1632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839124d0
	if (cr6.eq) goto loc_839124D0;
	// bl 0x82d49a78
	ctx.lr = 0x839124C8;
	sub_82D49A78(ctx, base);
	// stw r27,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r27.u32);
	// stw r27,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r27.u32);
loc_839124D0:
	// lwz r3,1640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839124e8
	if (cr6.eq) goto loc_839124E8;
	// bl 0x82d49a78
	ctx.lr = 0x839124E0;
	sub_82D49A78(ctx, base);
	// stw r27,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r27.u32);
	// stw r27,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r27.u32);
loc_839124E8:
	// lwz r3,-20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	// bl 0x82d12668
	ctx.lr = 0x839124F0;
	sub_82D12668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83912020
	ctx.lr = 0x839124F8;
	sub_83912020(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912504
	if (cr6.eq) goto loc_83912504;
	// bl 0x82d12668
	ctx.lr = 0x83912504;
	sub_82D12668(ctx, base);
loc_83912504:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839120d0
	ctx.lr = 0x8391250C;
	sub_839120D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839122b8
	ctx.lr = 0x83912514;
	sub_839122B8(ctx, base);
loc_83912514:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83912520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391252C"))) PPC_WEAK_FUNC(sub_8391252C);
PPC_FUNC_IMPL(__imp__sub_8391252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912530"))) PPC_WEAK_FUNC(sub_83912530);
PPC_FUNC_IMPL(__imp__sub_83912530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83912538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,2324
	ctx.r3.s64 = ctx.r3.s64 + 2324;
	// bl 0x8391b1c0
	ctx.lr = 0x83912548;
	sub_8391B1C0(ctx, base);
	// lwz r3,1648(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391256c
	if (cr6.eq) goto loc_8391256C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912568;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r27.u32);
loc_8391256C:
	// lwz r3,1652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391258c
	if (cr6.eq) goto loc_8391258C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r27.u32);
loc_8391258C:
	// addi r31,r30,1684
	ctx.r31.s64 = ctx.r30.s64 + 1684;
	// li r29,21
	ctx.r29.s64 = 21;
loc_83912594:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839125b4
	if (cr6.eq) goto loc_839125B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839125B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_839125B4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83912594
	if (!cr0.eq) goto loc_83912594;
	// li r28,442
	ctx.r28.s64 = 442;
loc_839125C4:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_839125C8:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839125f0
	if (cr6.eq) goto loc_839125F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839125EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
loc_839125F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x839125c8
	if (cr6.lt) goto loc_839125C8;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r28,454
	cr6.compare<uint32_t>(ctx.r28.u32, 454, xer);
	// blt cr6,0x839125c4
	if (cr6.lt) goto loc_839125C4;
	// addi r31,r30,1816
	ctx.r31.s64 = ctx.r30.s64 + 1816;
	// li r29,13
	ctx.r29.s64 = 13;
loc_83912610:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912624
	if (cr6.eq) goto loc_83912624;
	// bl 0x83928b90
	ctx.lr = 0x83912620;
	sub_83928B90(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83912624:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83912610
	if (!cr0.eq) goto loc_83912610;
	// lwz r3,1632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912648
	if (cr6.eq) goto loc_83912648;
	// bl 0x82d49a78
	ctx.lr = 0x83912640;
	sub_82D49A78(ctx, base);
	// stw r27,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r27.u32);
	// stw r27,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r27.u32);
loc_83912648:
	// lwz r3,1640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912660
	if (cr6.eq) goto loc_83912660;
	// bl 0x82d49a78
	ctx.lr = 0x83912658;
	sub_82D49A78(ctx, base);
	// stw r27,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r27.u32);
	// stw r27,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r27.u32);
loc_83912660:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r11,r11,6608
	ctx.r11.s64 = ctx.r11.s64 + 6608;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83912670:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d12668
	ctx.lr = 0x83912678;
	sub_82D12668(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83912670
	if (!cr0.eq) goto loc_83912670;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83912684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83912020
	ctx.lr = 0x8391268C;
	sub_83912020(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912698
	if (cr6.eq) goto loc_83912698;
	// bl 0x82d12668
	ctx.lr = 0x83912698;
	sub_82D12668(ctx, base);
loc_83912698:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x83912684
	if (cr6.lt) goto loc_83912684;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839126B0"))) PPC_WEAK_FUNC(sub_839126B0);
PPC_FUNC_IMPL(__imp__sub_839126B0) {
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
	// lwz r11,1656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x839126dc
	if (!cr6.eq) goto loc_839126DC;
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
loc_839126DC:
	// bl 0x83912530
	ctx.lr = 0x839126E0;
	sub_83912530(ctx, base);
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

__attribute__((alias("__imp__sub_839126FC"))) PPC_WEAK_FUNC(sub_839126FC);
PPC_FUNC_IMPL(__imp__sub_839126FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912700"))) PPC_WEAK_FUNC(sub_83912700);
PPC_FUNC_IMPL(__imp__sub_83912700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912738
	if (cr6.eq) goto loc_83912738;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,3528
	ctx.r9.s64 = ctx.r3.s64 + 3528;
	// stb r11,5973(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5973, ctx.r11.u8);
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83912728:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83912728
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83912728;
	// blr 
	return;
loc_83912738:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5973(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5973, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83912744"))) PPC_WEAK_FUNC(sub_83912744);
PPC_FUNC_IMPL(__imp__sub_83912744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912748"))) PPC_WEAK_FUNC(sub_83912748);
PPC_FUNC_IMPL(__imp__sub_83912748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8391275c
	if (!cr6.eq) goto loc_8391275C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8391275C:
	// stb r11,1679(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1679, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83912764"))) PPC_WEAK_FUNC(sub_83912764);
PPC_FUNC_IMPL(__imp__sub_83912764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912768"))) PPC_WEAK_FUNC(sub_83912768);
PPC_FUNC_IMPL(__imp__sub_83912768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83912770;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1656(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,1677(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1677, ctx.r11.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x839127e0
	if (cr6.lt) goto loc_839127E0;
	// addi r29,r3,2324
	ctx.r29.s64 = ctx.r3.s64 + 2324;
	// addi r28,r3,1868
	ctx.r28.s64 = ctx.r3.s64 + 1868;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392abc8
	ctx.lr = 0x839127A0;
	sub_8392ABC8(ctx, base);
	// stw r3,1704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1704, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8392a848
	ctx.lr = 0x839127B0;
	sub_8392A848(ctx, base);
	// stw r3,1700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1700, ctx.r3.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r30,1804
	ctx.r27.s64 = ctx.r30.s64 + 1804;
loc_839127BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839297c0
	ctx.lr = 0x839127CC;
	sub_839297C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839127bc
	if (cr6.lt) goto loc_839127BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839127E0:
	// stb r11,1676(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1676, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839127EC"))) PPC_WEAK_FUNC(sub_839127EC);
PPC_FUNC_IMPL(__imp__sub_839127EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839127F0"))) PPC_WEAK_FUNC(sub_839127F0);
PPC_FUNC_IMPL(__imp__sub_839127F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839127F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1704);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r28,1677(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1677, ctx.r28.u8);
	// beq cr6,0x83912828
	if (cr6.eq) goto loc_83912828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912824;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,1704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1704, ctx.r28.u32);
loc_83912828:
	// lwz r3,1700(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912848
	if (cr6.eq) goto loc_83912848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,1700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1700, ctx.r28.u32);
loc_83912848:
	// addi r31,r30,1808
	ctx.r31.s64 = ctx.r30.s64 + 1808;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83912850:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912870
	if (cr6.eq) goto loc_83912870;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391286C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_83912870:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83912850
	if (!cr0.eq) goto loc_83912850;
	// lwz r3,1688(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391289c
	if (cr6.eq) goto loc_8391289C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,1688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1688, ctx.r28.u32);
loc_8391289C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x839128A4;
	sub_82D17AA0(ctx, base);
	// bl 0x83911640
	ctx.lr = 0x839128A8;
	sub_83911640(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8391291c
	if (cr6.gt) goto loc_8391291C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839128e0
	if (cr6.eq) goto loc_839128E0;
	// bdz 0x839128ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839128EC;
	// bdz 0x839128f8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839128F8;
	// bdz 0x839128d4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839128D4;
	// bdz 0x83912904
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83912904;
	// b 0x83912910
	goto loc_83912910;
loc_839128D4:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// b 0x83912924
	goto loc_83912924;
loc_839128E0:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6940
	ctx.r10.s64 = ctx.r11.s64 + 6940;
	// b 0x83912924
	goto loc_83912924;
loc_839128EC:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6912
	ctx.r10.s64 = ctx.r11.s64 + 6912;
	// b 0x83912924
	goto loc_83912924;
loc_839128F8:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6884
	ctx.r10.s64 = ctx.r11.s64 + 6884;
	// b 0x83912924
	goto loc_83912924;
loc_83912904:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6856
	ctx.r10.s64 = ctx.r11.s64 + 6856;
	// b 0x83912924
	goto loc_83912924;
loc_83912910:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6828
	ctx.r10.s64 = ctx.r11.s64 + 6828;
	// b 0x83912924
	goto loc_83912924;
loc_8391291C:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6800
	ctx.r10.s64 = ctx.r11.s64 + 6800;
loc_83912924:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912934
	if (cr6.eq) goto loc_83912934;
	// bl 0x82d12668
	ctx.lr = 0x83912934;
	sub_82D12668(ctx, base);
loc_83912934:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r10,r11,6608
	ctx.r10.s64 = ctx.r11.s64 + 6608;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82d12668
	ctx.lr = 0x83912944;
	sub_82D12668(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391294C"))) PPC_WEAK_FUNC(sub_8391294C);
PPC_FUNC_IMPL(__imp__sub_8391294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912950"))) PPC_WEAK_FUNC(sub_83912950);
PPC_FUNC_IMPL(__imp__sub_83912950) {
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
	// lwz r11,1688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83912990
	if (!cr6.eq) goto loc_83912990;
	// bl 0x8392b4f0
	ctx.lr = 0x83912974;
	sub_8392B4F0(ctx, base);
	// stw r3,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83912990
	if (cr6.eq) goto loc_83912990;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83912990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83912990:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17aa0
	ctx.lr = 0x83912998;
	sub_82D17AA0(ctx, base);
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

__attribute__((alias("__imp__sub_839129AC"))) PPC_WEAK_FUNC(sub_839129AC);
PPC_FUNC_IMPL(__imp__sub_839129AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839129B0"))) PPC_WEAK_FUNC(sub_839129B0);
PPC_FUNC_IMPL(__imp__sub_839129B0) {
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
	// lbz r11,137(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 137);
	// addi r31,r4,112
	ctx.r31.s64 = ctx.r4.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839129dc
	if (cr6.eq) goto loc_839129DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// b 0x839129f0
	goto loc_839129F0;
loc_839129DC:
	// addi r3,r3,2324
	ctx.r3.s64 = ctx.r3.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x839129E4;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839129f4
	if (!cr6.eq) goto loc_839129F4;
loc_839129F0:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_839129F4:
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

__attribute__((alias("__imp__sub_83912A08"))) PPC_WEAK_FUNC(sub_83912A08);
PPC_FUNC_IMPL(__imp__sub_83912A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addis r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 65536;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r8,r8,20120
	ctx.r8.s64 = ctx.r8.s64 + 20120;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,255
	cr6.compare<int32_t>(ctx.r6.s32, 255, xer);
	// beq cr6,0x83912a88
	if (cr6.eq) goto loc_83912A88;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x83912a34
	if (cr6.lt) goto loc_83912A34;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83912a38
	if (cr6.lt) goto loc_83912A38;
loc_83912A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83912A38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912a4c
	if (cr6.eq) goto loc_83912A4C;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 178);
loc_83912A4C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83912a74
	if (!cr6.lt) goto loc_83912A74;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x83912a74
	if (!cr6.lt) goto loc_83912A74;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x83912a78
	goto loc_83912A78;
loc_83912A74:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83912A78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x83912a88
	if (cr6.eq) goto loc_83912A88;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_83912A88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83912A8C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83912ab0
	if (!cr6.lt) goto loc_83912AB0;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x83912ab0
	if (!cr6.lt) goto loc_83912AB0;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x83912ab4
	goto loc_83912AB4;
loc_83912AB0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83912AB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// bne cr6,0x83912ad0
	if (!cr6.eq) goto loc_83912AD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x83912a8c
	if (cr6.lt) goto loc_83912A8C;
	// blr 
	return;
loc_83912AD0:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83912b00
	if (cr6.eq) goto loc_83912B00;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f0,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_83912B00:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83912B08"))) PPC_WEAK_FUNC(sub_83912B08);
PPC_FUNC_IMPL(__imp__sub_83912B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// blt cr6,0x83912b28
	if (cr6.lt) goto loc_83912B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_83912B28:
	// addi r11,r5,118
	ctx.r11.s64 = ctx.r5.s64 + 118;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83912B58"))) PPC_WEAK_FUNC(sub_83912B58);
PPC_FUNC_IMPL(__imp__sub_83912B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83912B60;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// addi r26,r3,2480
	ctx.r26.s64 = ctx.r3.s64 + 2480;
	// lwz r20,292(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r25,6132(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// stb r6,2480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2480, ctx.r6.u8);
	// stb r7,2481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2481, ctx.r7.u8);
	// bl 0x831156e8
	ctx.lr = 0x83912B98;
	sub_831156E8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r8,r10,24076
	ctx.r8.u64 = ctx.r10.u64 | 24076;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x83912bec
	if (cr6.eq) goto loc_83912BEC;
	// addi r3,r31,2324
	ctx.r3.s64 = ctx.r31.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83912BBC;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83912bd4
	if (!cr6.eq) goto loc_83912BD4;
	// lbz r11,5973(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5973);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912bec
	if (cr6.eq) goto loc_83912BEC;
loc_83912BD4:
	// lwz r11,4456(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83912bec
	if (cr6.eq) goto loc_83912BEC;
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83912bf0
	if (!cr6.eq) goto loc_83912BF0;
loc_83912BEC:
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
loc_83912BF0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a269f8
	ctx.lr = 0x83912BF8;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r27,r10,36400
	ctx.r27.u64 = ctx.r10.u64 | 36400;
	// ori r28,r9,7264
	ctx.r28.u64 = ctx.r9.u64 | 7264;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912c70
	if (cr6.eq) goto loc_83912C70;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stb r21,13(r26)
	PPC_STORE_U8(ctx.r26.u32 + 13, ctx.r21.u8);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 + 12;
loc_83912C28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x83912C30;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x83912C3C;
	sub_82919698(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a287a8
	ctx.lr = 0x83912C4C;
	sub_82A287A8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83912c28
	if (cr6.lt) goto loc_83912C28;
	// b 0x83912c74
	goto loc_83912C74;
loc_83912C70:
	// stb r22,13(r26)
	PPC_STORE_U8(ctx.r26.u32 + 13, ctx.r22.u8);
loc_83912C74:
	// lfs f31,4464(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4464);
	ctx.f31.f64 = double(temp.f32);
	// stb r23,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r23.u8);
	// stfs f31,8(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// lwz r11,4456(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4456);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83912c98
	if (!cr6.gt) goto loc_83912C98;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_83912C98:
	// bl 0x82a28f20
	ctx.lr = 0x83912C9C;
	sub_82A28F20(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x83912ca8
	if (cr6.lt) goto loc_83912CA8;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_83912CA8:
	// stb r31,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r31.u8);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r29,r26,3
	ctx.r29.s64 = ctx.r26.s64 + 3;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_83912CB8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a225d0
	ctx.lr = 0x83912CC0;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x83912CCC;
	sub_82919698(ctx, base);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stbx r3,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x83912cb8
	if (cr6.lt) goto loc_83912CB8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a290c8
	ctx.lr = 0x83912CF0;
	sub_82A290C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83912d1c
	if (!cr6.lt) goto loc_83912D1C;
	// lwz r11,40(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83912d0c
	if (!cr6.eq) goto loc_83912D0C;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
loc_83912D0C:
	// lwz r11,5356(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83912d1c
	if (!cr6.eq) goto loc_83912D1C;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
loc_83912D1C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83912D24;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912d38
	if (cr6.eq) goto loc_83912D38;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
	// stb r21,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r21.u8);
loc_83912D38:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83912D44"))) PPC_WEAK_FUNC(sub_83912D44);
PPC_FUNC_IMPL(__imp__sub_83912D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83912D48"))) PPC_WEAK_FUNC(sub_83912D48);
PPC_FUNC_IMPL(__imp__sub_83912D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83912D50;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r22,292(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r25,232(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x830ff290
	ctx.lr = 0x83912D74;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83912D78;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x83913134
	if (cr6.eq) goto loc_83913134;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x83913134
	if (cr6.eq) goto loc_83913134;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r31,r26,2504
	ctx.r31.s64 = ctx.r26.s64 + 2504;
	// li r23,7
	ctx.r23.s64 = 7;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,2524(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2524, ctx.r11.u32);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r10,2528(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2528, ctx.r10.u32);
	// lwz r9,60(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r9,2532(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2532, ctx.r9.u32);
	// lbz r8,64(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 64);
	// stb r8,2536(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2536, ctx.r8.u8);
	// lwz r11,1556(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1556);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x83912e68
	if (!cr6.lt) goto loc_83912E68;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,1720(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1720);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83912e68
	if (cr6.eq) goto loc_83912E68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a170f8
	ctx.lr = 0x83912DDC;
	sub_82A170F8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83912e5c
	if (cr6.gt) goto loc_83912E5C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83912e08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83912E08;
	// bdzf 4*cr6+eq,0x83912e34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83912E34;
	// bne cr6,0x83912e48
	if (!cr6.eq) goto loc_83912E48;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912E08:
	// bl 0x831156e8
	ctx.lr = 0x83912E0C;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24082
	ctx.r9.u64 = ctx.r11.u64 | 24082;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83912f84
	if (cr6.eq) goto loc_83912F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912E34:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912E48:
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912E5C:
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912E68:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a170f8
	ctx.lr = 0x83912E70;
	sub_82A170F8(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x83912ea0
	if (!cr6.eq) goto loc_83912EA0;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83530640
	ctx.lr = 0x83912E8C;
	sub_83530640(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912EA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x83912f00
	if (!cr6.eq) goto loc_83912F00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a170f8
	ctx.lr = 0x83912EB4;
	sub_82A170F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83912ecc
	if (!cr6.eq) goto loc_83912ECC;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912ECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83530640
	ctx.lr = 0x83912ED8;
	sub_83530640(ctx, base);
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
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
	// beq cr6,0x83912f84
	if (cr6.eq) goto loc_83912F84;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912F00:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83912f34
	if (cr6.eq) goto loc_83912F34;
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// stb r29,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r29.u8);
	// stw r23,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r23.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stb r29,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r29.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r30,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r30.u8);
	// stb r29,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r29.u8);
	// bl 0x831ce980
	ctx.lr = 0x83912F30;
	sub_831CE980(ctx, base);
	// b 0x83912f84
	goto loc_83912F84;
loc_83912F34:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lbz r9,37(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 37);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// lwz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lbz r7,48(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// stb r7,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r7.u8);
	// lbz r6,65(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 65);
	// stb r6,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r6.u8);
	// lbz r5,66(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 66);
	// stb r5,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r5.u8);
	// lbz r4,67(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 67);
	// stb r4,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r4.u8);
	// lbz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// stb r3,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r3.u8);
	// lbz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 76);
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
loc_83912F84:
	// lwz r11,4456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4456);
	// li r27,9
	ctx.r27.s64 = 9;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83913030
	if (cr6.eq) goto loc_83913030;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a23768
	ctx.lr = 0x83912FA4;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, xer);
	// bne cr6,0x83912fcc
	if (!cr6.eq) goto loc_83912FCC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r29,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r29.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// b 0x83913014
	goto loc_83913014;
loc_83912FCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a23768
	ctx.lr = 0x83912FDC;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// bne cr6,0x83913030
	if (!cr6.eq) goto loc_83913030;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83913030
	if (!cr6.eq) goto loc_83913030;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83913030
	if (cr6.eq) goto loc_83913030;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stb r29,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r29.u8);
	// stw r27,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r27.u32);
loc_83913014:
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r30,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r30.u8);
	// stb r30,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r30.u8);
	// stb r30,48(r28)
	PPC_STORE_U8(ctx.r28.u32 + 48, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x83913030;
	sub_831CE980(ctx, base);
loc_83913030:
	// lwz r11,5356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5356);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x839130a0
	if (!cr6.eq) goto loc_839130A0;
	// lwz r11,4456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4456);
	// lwz r10,1680(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1680);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x839130a0
	if (cr6.eq) goto loc_839130A0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x839130a0
	if (cr6.eq) goto loc_839130A0;
	// lwz r11,5180(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839130a0
	if (!cr6.eq) goto loc_839130A0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83913068;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839130a0
	if (!cr6.eq) goto loc_839130A0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4456);
	// stw r11,1680(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1680, ctx.r11.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// stb r29,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r29.u8);
	// bl 0x831ce980
	ctx.lr = 0x839130A0;
	sub_831CE980(ctx, base);
loc_839130A0:
	// lbz r11,1678(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1678);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839130c4
	if (!cr6.eq) goto loc_839130C4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a170f8
	ctx.lr = 0x839130B4;
	sub_82A170F8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x839130c4
	if (!cr6.eq) goto loc_839130C4;
	// stb r30,1678(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1678, ctx.r30.u8);
	// b 0x839130fc
	goto loc_839130FC;
loc_839130C4:
	// lbz r11,1678(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1678);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839130fc
	if (cr6.eq) goto loc_839130FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a170f8
	ctx.lr = 0x839130D8;
	sub_82A170F8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x839130fc
	if (cr6.eq) goto loc_839130FC;
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// stb r29,1678(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1678, ctx.r29.u8);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r23,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r23.u32);
	// stb r29,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r29.u8);
	// bl 0x831ce980
	ctx.lr = 0x839130FC;
	sub_831CE980(ctx, base);
loc_839130FC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83913104;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913134
	if (cr6.eq) goto loc_83913134;
	// addi r4,r28,36
	ctx.r4.s64 = ctx.r28.s64 + 36;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r23,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r23.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stb r29,36(r28)
	PPC_STORE_U8(ctx.r28.u32 + 36, ctx.r29.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r30,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r30.u8);
	// stb r29,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r29.u8);
	// bl 0x831ce980
	ctx.lr = 0x83913134;
	sub_831CE980(ctx, base);
loc_83913134:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391313C"))) PPC_WEAK_FUNC(sub_8391313C);
PPC_FUNC_IMPL(__imp__sub_8391313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83913140"))) PPC_WEAK_FUNC(sub_83913140);
PPC_FUNC_IMPL(__imp__sub_83913140) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lbz r10,5973(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5973);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,412(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// beq cr6,0x83913184
	if (cr6.eq) goto loc_83913184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52c88
	ctx.lr = 0x83913178;
	sub_82A52C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839131c4
	if (cr6.eq) goto loc_839131C4;
loc_83913184:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52c38
	ctx.lr = 0x8391318C;
	sub_82A52C38(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x839131c4
	if (cr6.gt) goto loc_839131C4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839131ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839131AC;
	// bdzf 4*cr6+eq,0x839131b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839131B4;
	// bne cr6,0x839131b4
	if (!cr6.eq) goto loc_839131B4;
loc_839131AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839131c8
	goto loc_839131C8;
loc_839131B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,2552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2552, ctx.r10.u8);
	// b 0x839131cc
	goto loc_839131CC;
loc_839131C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839131C8:
	// stb r11,2552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2552, ctx.r11.u8);
loc_839131CC:
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839131E8"))) PPC_WEAK_FUNC(sub_839131E8);
PPC_FUNC_IMPL(__imp__sub_839131E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839131F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// lfs f31,4464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x83913224
	if (!cr6.gt) goto loc_83913224;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83913224:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a28f20
	ctx.lr = 0x8391322C;
	sub_82A28F20(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8391325c
	if (cr6.lt) goto loc_8391325C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,2560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2560, ctx.r11.u8);
	// lfs f0,4468(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2564, temp.u32);
	// lfs f31,4464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a28f20
	ctx.lr = 0x83913250;
	sub_82A28F20(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// stfs f13,2568(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2568, temp.u32);
	// b 0x83913260
	goto loc_83913260;
loc_8391325C:
	// stb r28,2560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2560, ctx.r28.u8);
loc_83913260:
	// lfs f0,4468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,2324
	ctx.r3.s64 = ctx.r31.s64 + 2324;
	// stfs f0,2564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2564, temp.u32);
	// bl 0x8391b328
	ctx.lr = 0x83913270;
	sub_8391B328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913280
	if (!cr6.eq) goto loc_83913280;
	// stb r28,2560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2560, ctx.r28.u8);
loc_83913280:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83913288;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913298
	if (cr6.eq) goto loc_83913298;
	// stb r28,2560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2560, ctx.r28.u8);
loc_83913298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839132A4"))) PPC_WEAK_FUNC(sub_839132A4);
PPC_FUNC_IMPL(__imp__sub_839132A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839132A8"))) PPC_WEAK_FUNC(sub_839132A8);
PPC_FUNC_IMPL(__imp__sub_839132A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839132B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a225d0
	ctx.lr = 0x839132C4;
	sub_82A225D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8291ad98
	ctx.lr = 0x839132CC;
	sub_8291AD98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x839132D8;
	sub_82A225D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8291ad98
	ctx.lr = 0x839132E0;
	sub_8291AD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a23768
	ctx.lr = 0x839132F4;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x83913304;
	sub_831CE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x83913308;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8391330C;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913498
	if (!cr6.eq) goto loc_83913498;
	// addi r28,r29,2324
	ctx.r28.s64 = ctx.r29.s64 + 2324;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b400
	ctx.lr = 0x83913324;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913498
	if (cr6.eq) goto loc_83913498;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x83913340;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83913498
	if (!cr6.eq) goto loc_83913498;
	// lbz r11,2492(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2492);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913498
	if (!cr6.eq) goto loc_83913498;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83913400
	if (!cr6.eq) goto loc_83913400;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8391b0c8
	ctx.lr = 0x8391336C;
	sub_8391B0C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8391b0c8
	ctx.lr = 0x83913374;
	sub_8391B0C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829194e8
	ctx.lr = 0x8391338C;
	sub_829194E8(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x839133A0;
	sub_829194E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r7,r10,26215
	ctx.r7.u64 = ctx.r10.u64 | 26215;
	// mulhw r6,r11,r7
	ctx.r6.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r10,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83913498
	if (!cr0.eq) goto loc_83913498;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913498
	if (cr6.eq) goto loc_83913498;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x83913490
	goto loc_83913490;
loc_83913400:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83913498
	if (!cr6.eq) goto loc_83913498;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83913410;
	sub_8391B0C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83913418;
	sub_8391B0C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829194e8
	ctx.lr = 0x83913430;
	sub_829194E8(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829194e8
	ctx.lr = 0x83913444;
	sub_829194E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// srawi r7,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83913498
	if (!cr0.eq) goto loc_83913498;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913498
	if (cr6.eq) goto loc_83913498;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_83913490:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391bdd8
	ctx.lr = 0x83913498;
	sub_8391BDD8(ctx, base);
loc_83913498:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83102db0
	ctx.lr = 0x839134A0;
	sub_83102DB0(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839134A8"))) PPC_WEAK_FUNC(sub_839134A8);
PPC_FUNC_IMPL(__imp__sub_839134A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839134B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r29,r3,2572
	ctx.r29.s64 = ctx.r3.s64 + 2572;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,352(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825832e0
	ctx.lr = 0x839134D0;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// bne cr6,0x8391356c
	if (!cr6.eq) goto loc_8391356C;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r23,r29,1
	ctx.r23.s64 = ctx.r29.s64 + 1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_839134F4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_839134F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2bb60
	ctx.lr = 0x83913508;
	sub_82A2BB60(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x83913534
	if (cr6.eq) goto loc_83913534;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8391352c
	if (cr6.eq) goto loc_8391352C;
	// stwx r26,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u32);
	// b 0x83913538
	goto loc_83913538;
loc_8391352C:
	// stwx r24,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r24.u32);
	// b 0x83913538
	goto loc_83913538;
loc_83913534:
	// stwx r25,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u32);
loc_83913538:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x839134f8
	if (cr6.lt) goto loc_839134F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2b648
	ctx.lr = 0x83913550;
	sub_82A2B648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// stbx r11,r23,r28
	PPC_STORE_U8(ctx.r23.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// blt cr6,0x839134f4
	if (cr6.lt) goto loc_839134F4;
	// b 0x83913570
	goto loc_83913570;
loc_8391356C:
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
loc_83913570:
	// addi r3,r22,2324
	ctx.r3.s64 = ctx.r22.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83913578;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913588
	if (!cr6.eq) goto loc_83913588;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
loc_83913588:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83913590"))) PPC_WEAK_FUNC(sub_83913590);
PPC_FUNC_IMPL(__imp__sub_83913590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83913598;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r10,-3564(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// li r22,24
	ctx.r22.s64 = 24;
	// lwz r24,292(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r23,192(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r20,432(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_839135D8:
	// subfc r10,r22,r27
	xer.ca = ctx.r27.u32 >= ctx.r22.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r22.s64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r11,2656
	ctx.r30.s64 = ctx.r11.s64 + 2656;
	// bl 0x82a1aaa8
	ctx.lr = 0x83913604;
	sub_82A1AAA8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83913630
	if (cr6.eq) goto loc_83913630;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// bge cr6,0x83913944
	if (!cr6.lt) goto loc_83913944;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x83913624;
	sub_82A0C7B0(ctx, base);
	// bl 0x82a36648
	ctx.lr = 0x83913628;
	sub_82A36648(ctx, base);
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// b 0x83913908
	goto loc_83913908;
loc_83913630:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x83913640
	if (cr6.lt) goto loc_83913640;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83913640:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8391365c
	if (!cr6.eq) goto loc_8391365C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83913664
	goto loc_83913664;
loc_8391365C:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83913664:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x83913678
	if (cr6.lt) goto loc_83913678;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83913678:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x83913698
	if (cr6.eq) goto loc_83913698;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
loc_83913698:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// bl 0x831f81f8
	ctx.lr = 0x839136A8;
	sub_831F81F8(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stb r9,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r9.u8);
	// blt cr6,0x839136cc
	if (cr6.lt) goto loc_839136CC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839136d0
	if (cr6.lt) goto loc_839136D0;
loc_839136CC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_839136D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913940
	if (cr6.eq) goto loc_83913940;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x839136f4
	if (cr6.lt) goto loc_839136F4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839136f8
	if (cr6.lt) goto loc_839136F8;
loc_839136F4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_839136F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913718
	if (cr6.eq) goto loc_83913718;
	// add r11,r4,r24
	ctx.r11.u64 = ctx.r4.u64 + ctx.r24.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8391371c
	goto loc_8391371C;
loc_83913718:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8391371C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913774
	if (!cr6.eq) goto loc_83913774;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8391373c
	if (cr6.lt) goto loc_8391373C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83913740
	if (cr6.lt) goto loc_83913740;
loc_8391373C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83913740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913760
	if (cr6.eq) goto loc_83913760;
	// add r11,r4,r24
	ctx.r11.u64 = ctx.r4.u64 + ctx.r24.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83913764
	goto loc_83913764;
loc_83913760:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83913764:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913774
	if (!cr6.eq) goto loc_83913774;
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
loc_83913774:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913944
	if (cr6.eq) goto loc_83913944;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x83913788;
	sub_82A0C7B0(ctx, base);
	// bl 0x82a36648
	ctx.lr = 0x8391378C;
	sub_82A36648(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83913904
	if (!cr6.lt) goto loc_83913904;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x839137A4;
	sub_82A0C710(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,84(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// blt cr6,0x839137c0
	if (cr6.lt) goto loc_839137C0;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x839137ec
	goto loc_839137EC;
loc_839137C0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,3740(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3740);
	// lwz r8,3744(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3744);
	// lwz r7,3748(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3748);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_839137EC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83913808
	if (cr6.eq) goto loc_83913808;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x83913808
	if (cr6.eq) goto loc_83913808;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x83913810
	goto loc_83913810;
loc_83913808:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83913810:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x83913904
	if (!cr6.gt) goto loc_83913904;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x8391385c
	if (cr6.lt) goto loc_8391385C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8391385C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83913878
	if (cr6.eq) goto loc_83913878;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x83913898
	goto loc_83913898;
loc_83913878:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83913890
	if (cr6.lt) goto loc_83913890;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83913894
	if (cr6.lt) goto loc_83913894;
loc_83913890:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83913894:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83913898:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913904
	if (cr6.eq) goto loc_83913904;
	// lwz r11,4460(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83913904
	if (!cr6.eq) goto loc_83913904;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x839138c8
	if (cr6.eq) goto loc_839138C8;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x839138c8
	if (cr6.eq) goto loc_839138C8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x839138d0
	goto loc_839138D0;
loc_839138C8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_839138D0:
	// addi r4,r28,2324
	ctx.r4.s64 = ctx.r28.s64 + 2324;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83912b08
	ctx.lr = 0x839138DC;
	sub_83912B08(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmsubs f11,f31,f0,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// b 0x83913908
	goto loc_83913908;
loc_83913904:
	// stfs f30,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_83913908:
	// addi r3,r28,2324
	ctx.r3.s64 = ctx.r28.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83913910;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913940
	if (cr6.eq) goto loc_83913940;
	// bl 0x830ff290
	ctx.lr = 0x83913920;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83913924;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x83913944
	if (!cr6.eq) goto loc_83913944;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a18500
	ctx.lr = 0x83913934;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913944
	if (cr6.eq) goto loc_83913944;
loc_83913940:
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
loc_83913944:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839135d8
	if (cr6.lt) goto loc_839135D8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83913968"))) PPC_WEAK_FUNC(sub_83913968);
PPC_FUNC_IMPL(__imp__sub_83913968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83913970;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r31,r3,2540
	ctx.r31.s64 = ctx.r3.s64 + 2540;
	// lwz r20,192(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r19,292(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,432(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r29,472(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r24,6112(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// stw r21,2544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2544, ctx.r21.u32);
	// stb r21,2549(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2549, ctx.r21.u8);
	// bl 0x831156e8
	ctx.lr = 0x839139BC;
	sub_831156E8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r10,24079
	ctx.r8.u64 = ctx.r10.u64 | 24079;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83913cf4
	if (!cr6.eq) goto loc_83913CF4;
	// lbz r11,112(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913cf4
	if (!cr6.eq) goto loc_83913CF4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a18500
	ctx.lr = 0x839139E8;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913c64
	if (!cr6.eq) goto loc_83913C64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83930ac8
	ctx.lr = 0x839139FC;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913c64
	if (!cr6.eq) goto loc_83913C64;
	// addi r3,r30,2324
	ctx.r3.s64 = ctx.r30.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83913A10;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 & ctx.r28.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83913cf4
	if (cr6.eq) goto loc_83913CF4;
	// bl 0x830ff290
	ctx.lr = 0x83913A34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83913A38;
	sub_830FFAA8(ctx, base);
	// lwz r11,4460(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4460);
	// lwz r30,5360(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5360);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83913a7c
	if (!cr6.eq) goto loc_83913A7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22b40
	ctx.lr = 0x83913A58;
	sub_82A22B40(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83913a7c
	if (cr6.eq) goto loc_83913A7C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83913a7c
	if (cr6.eq) goto loc_83913A7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22b40
	ctx.lr = 0x83913A78;
	sub_82A22B40(ctx, base);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83913A7C:
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// beq cr6,0x83913b14
	if (cr6.eq) goto loc_83913B14;
	// cmplwi cr6,r29,15
	cr6.compare<uint32_t>(ctx.r29.u32, 15, xer);
	// beq cr6,0x83913b14
	if (cr6.eq) goto loc_83913B14;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x83913b64
	if (!cr6.lt) goto loc_83913B64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a33820
	ctx.lr = 0x83913AA4;
	sub_82A33820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913ad0
	if (cr6.eq) goto loc_83913AD0;
	// lbz r11,240(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 240);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lfs f0,5172(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 5172);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// b 0x83913b64
	goto loc_83913B64;
loc_83913AD0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83913ae8
	if (cr6.eq) goto loc_83913AE8;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83913ae8
	if (cr6.eq) goto loc_83913AE8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// b 0x83913af0
	goto loc_83913AF0;
loc_83913AE8:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_83913AF0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a32ec0
	ctx.lr = 0x83913AF8;
	sub_82A32EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913b64
	if (cr6.eq) goto loc_83913B64;
	// lbz r11,240(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 240);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x83913b64
	goto loc_83913B64;
loc_83913B14:
	// lbz r11,240(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 240);
	// cmplwi cr6,r29,15
	cr6.compare<uint32_t>(ctx.r29.u32, 15, xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// beq cr6,0x83913b64
	if (cr6.eq) goto loc_83913B64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a33718
	ctx.lr = 0x83913B34;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82a40900
	ctx.lr = 0x83913B50;
	sub_82A40900(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
loc_83913B64:
	// lwz r11,5356(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5356);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83913cf8
	if (cr6.gt) goto loc_83913CF8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83913b9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83913B9C;
	// bdzf 4*cr6+eq,0x83913bac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83913BAC;
	// bdzf 4*cr6+eq,0x83913bd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83913BD0;
	// bne cr6,0x83913c54
	if (!cr6.eq) goto loc_83913C54;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913B9C:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913BAC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbz r8,251(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 251);
	// stb r8,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913BD0:
	// lbz r11,251(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 251);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// lbz r10,250(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 250);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83913bf4
	if (cr6.eq) goto loc_83913BF4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913BF4:
	// lwz r11,4460(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83913c34
	if (!cr6.eq) goto loc_83913C34;
	// lwz r3,5408(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5408);
	// bl 0x82a29f20
	ctx.lr = 0x83913C08;
	sub_82A29F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83913c34
	if (!cr6.eq) goto loc_83913C34;
	// lbz r11,252(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 252);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913C34:
	// lbz r11,252(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 252);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913C54:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83913C64:
	// bl 0x830ff290
	ctx.lr = 0x83913C68;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83913C6C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x83913c7c
	if (!cr6.eq) goto loc_83913C7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83913c94
	goto loc_83913C94;
loc_83913C7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8332f198
	ctx.lr = 0x83913C84;
	sub_8332F198(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83913C94:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83913ca8
	if (cr6.eq) goto loc_83913CA8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_83913CA8:
	// lfs f13,8148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,8144(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8152(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8152);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// fmadds f8,f10,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// lbz r8,5973(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5973);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83913cf8
	if (cr6.eq) goto loc_83913CF8;
loc_83913CF4:
	// stb r21,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r21.u8);
loc_83913CF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83913D00"))) PPC_WEAK_FUNC(sub_83913D00);
PPC_FUNC_IMPL(__imp__sub_83913D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83913D08;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x82a0c710
	ctx.lr = 0x83913D30;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x83913D44;
	sub_82A0C738(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r11,r5,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r27,r11,3232
	ctx.r27.s64 = ctx.r11.s64 + 3232;
	// stw r31,3236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3236, ctx.r31.u32);
	// lbz r3,253(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 253);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83913e48
	if (cr6.eq) goto loc_83913E48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x83913D9C;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x83913e04
	if (!cr6.eq) goto loc_83913E04;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83913dd0
	if (cr6.lt) goto loc_83913DD0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83913dd0
	if (!cr6.lt) goto loc_83913DD0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83913dd0
	if (cr6.lt) goto loc_83913DD0;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83913dd4
	if (cr6.lt) goto loc_83913DD4;
loc_83913DD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83913DD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83913df0
	if (cr6.eq) goto loc_83913DF0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16440
	ctx.lr = 0x83913DE8;
	sub_82A16440(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// b 0x83913f3c
	goto loc_83913F3C;
loc_83913DF0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,20424
	ctx.r10.u64 = ctx.r11.u64 | 20424;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// b 0x83913f3c
	goto loc_83913F3C;
loc_83913E04:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x83913f3c
	if (cr6.eq) goto loc_83913F3C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83913e2c
	if (!cr6.eq) goto loc_83913E2C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83913f3c
	if (cr6.lt) goto loc_83913F3C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x83913f38
	if (cr6.lt) goto loc_83913F38;
	// b 0x83913f3c
	goto loc_83913F3C;
loc_83913E2C:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83913f3c
	if (!cr6.eq) goto loc_83913F3C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x83913f3c
	if (cr6.lt) goto loc_83913F3C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x83913f3c
	if (!cr6.lt) goto loc_83913F3C;
	// b 0x83913f38
	goto loc_83913F38;
loc_83913E48:
	// lwz r11,2544(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2544);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83913eac
	if (!cr6.eq) goto loc_83913EAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x83913E60;
	sub_82A0C710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83913E64:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83913e8c
	if (cr6.eq) goto loc_83913E8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83913e64
	if (cr6.lt) goto loc_83913E64;
	// li r11,255
	ctx.r11.s64 = 255;
loc_83913E8C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16188
	ctx.lr = 0x83913E98;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16440
	ctx.lr = 0x83913EA4;
	sub_82A16440(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// b 0x83913f3c
	goto loc_83913F3C;
loc_83913EAC:
	// lwz r11,5356(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83913edc
	if (cr6.lt) goto loc_83913EDC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x83913edc
	if (cr6.gt) goto loc_83913EDC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83912a08
	ctx.lr = 0x83913ED4;
	sub_83912A08(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// b 0x83913f3c
	goto loc_83913F3C;
loc_83913EDC:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-26424
	ctx.r11.s64 = ctx.r11.s64 + -26424;
loc_83913EE8:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x83913efc
	if (!cr6.lt) goto loc_83913EFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,60
	cr6.compare<int32_t>(ctx.r10.s32, 60, xer);
	// beq cr6,0x83913f10
	if (cr6.eq) goto loc_83913F10;
loc_83913EFC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x83913ee8
	if (cr6.lt) goto loc_83913EE8;
	// b 0x83913f28
	goto loc_83913F28;
loc_83913F10:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16188
	ctx.lr = 0x83913F18;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a16440
	ctx.lr = 0x83913F24;
	sub_82A16440(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
loc_83913F28:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x83913f3c
	if (!cr6.eq) goto loc_83913F3C;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
loc_83913F38:
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_83913F3C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x83913f4c
	if (!cr6.lt) goto loc_83913F4C;
	// stb r23,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r23.u8);
loc_83913F4C:
	// addi r3,r24,2324
	ctx.r3.s64 = ctx.r24.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83913F54;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83913f64
	if (!cr6.eq) goto loc_83913F64;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_83913F64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83913F6C"))) PPC_WEAK_FUNC(sub_83913F6C);
PPC_FUNC_IMPL(__imp__sub_83913F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83913F70"))) PPC_WEAK_FUNC(sub_83913F70);
PPC_FUNC_IMPL(__imp__sub_83913F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83913F78;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-31763
	ctx.r17.s64 = -2081619968;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r8,495(r1)
	PPC_STORE_U8(ctx.r1.u32 + 495, ctx.r8.u8);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-3564(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r19,192(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r15,292(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x83913FB0;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x83913FC4;
	sub_82A0C738(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r22,r11,3280
	ctx.r22.s64 = ctx.r11.s64 + 3280;
	// bl 0x82a22c10
	ctx.lr = 0x83913FEC;
	sub_82A22C10(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
	// bl 0x831156e8
	ctx.lr = 0x83913FF4;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addis r4,r9,6
	ctx.r4.s64 = ctx.r9.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x83914010;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b64ac0
	ctx.lr = 0x8391401C;
	sub_82B64AC0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r20,24
	ctx.r20.s64 = 24;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, xer);
	// bne cr6,0x839140b8
	if (!cr6.eq) goto loc_839140B8;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839140b8
	if (!cr6.eq) goto loc_839140B8;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a33718
	ctx.lr = 0x83914050;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839140b8
	if (!cr6.eq) goto loc_839140B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83914088
	if (cr6.lt) goto loc_83914088;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83914088
	if (!cr6.lt) goto loc_83914088;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83914088
	if (cr6.lt) goto loc_83914088;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8391408c
	if (cr6.lt) goto loc_8391408C;
loc_83914088:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8391408C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839140a8
	if (cr6.eq) goto loc_839140A8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16440
	ctx.lr = 0x839140A0;
	sub_82A16440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8391439c
	goto loc_8391439C;
loc_839140A8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,20424
	ctx.r10.u64 = ctx.r11.u64 | 20424;
	// lwzx r31,r23,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// b 0x8391439c
	goto loc_8391439C;
loc_839140B8:
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x83914138
	if (cr6.eq) goto loc_83914138;
	// lbz r11,253(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914138
	if (cr6.eq) goto loc_83914138;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914138
	if (!cr6.eq) goto loc_83914138;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a33718
	ctx.lr = 0x839140EC;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914138
	if (!cr6.eq) goto loc_83914138;
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83914118
	if (!cr6.eq) goto loc_83914118;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8391439c
	if (cr6.lt) goto loc_8391439C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x83914130
	if (cr6.lt) goto loc_83914130;
	// b 0x8391439c
	goto loc_8391439C;
loc_83914118:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x8391439c
	if (!cr6.eq) goto loc_8391439C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8391439c
	if (cr6.lt) goto loc_8391439C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x8391439c
	if (!cr6.lt) goto loc_8391439C;
loc_83914130:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8391439c
	goto loc_8391439C;
loc_83914138:
	// addis r26,r23,1
	ctx.r26.s64 = ctx.r23.s64 + 65536;
	// li r31,255
	ctx.r31.s64 = 255;
	// li r25,255
	ctx.r25.s64 = 255;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// addi r26,r26,20120
	ctx.r26.s64 = ctx.r26.s64 + 20120;
	// lis r24,-31778
	ctx.r24.s64 = -2082603008;
loc_83914150:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x83914174
	if (!cr6.lt) goto loc_83914174;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x83914174
	if (!cr6.lt) goto loc_83914174;
	// mulli r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 * 11;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x83914178
	goto loc_83914178;
loc_83914174:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83914178:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
loc_83914184:
	// subfc r10,r20,r9
	xer.ca = ctx.r9.u32 >= ctx.r20.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r20.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r11,r6,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r4,2656(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2656);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83914218
	if (cr6.eq) goto loc_83914218;
	// lwz r10,2660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2660);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x83914218
	if (!cr6.eq) goto loc_83914218;
	// lwz r10,2664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2664);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x83914218
	if (cr6.eq) goto loc_83914218;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839141dc
	if (cr6.lt) goto loc_839141DC;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839141e0
	if (cr6.lt) goto loc_839141E0;
loc_839141DC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_839141E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914200
	if (cr6.eq) goto loc_83914200;
	// add r11,r10,r15
	ctx.r11.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lbz r8,5768(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83914204
	goto loc_83914204;
loc_83914200:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83914204:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914218
	if (cr6.eq) goto loc_83914218;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x83914230
	if (cr6.eq) goto loc_83914230;
loc_83914218:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83914184
	if (cr6.lt) goto loc_83914184;
	// b 0x83914288
	goto loc_83914288;
loc_83914230:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// bne cr6,0x8391423c
	if (!cr6.eq) goto loc_8391423C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8391423C:
	// lwz r3,2056(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2056);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// blt cr6,0x83914250
	if (cr6.lt) goto loc_83914250;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83914250:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r14,76(r8)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// bctrl 
	ctx.lr = 0x8391426C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r14,r7
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r7.u32, xer);
	// beq cr6,0x83914284
	if (cr6.eq) goto loc_83914284;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x83914284
	if (!cr6.eq) goto loc_83914284;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83914284:
	// lwz r14,460(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
loc_83914288:
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x83914298
	if (cr6.eq) goto loc_83914298;
	// cmpwi cr6,r25,255
	cr6.compare<int32_t>(ctx.r25.s32, 255, xer);
	// bne cr6,0x839142a4
	if (!cr6.eq) goto loc_839142A4;
loc_83914298:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x83914150
	if (cr6.lt) goto loc_83914150;
loc_839142A4:
	// stw r25,28(r22)
	PPC_STORE_U32(ctx.r22.u32 + 28, ctx.r25.u32);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// bne cr6,0x8391439c
	if (!cr6.eq) goto loc_8391439C;
	// lwz r11,2544(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2544);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83914314
	if (!cr6.eq) goto loc_83914314;
	// lbz r11,253(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914314
	if (!cr6.eq) goto loc_83914314;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_839142CC:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r18
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x839142f4
	if (cr6.eq) goto loc_839142F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839142cc
	if (cr6.lt) goto loc_839142CC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_839142F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16188
	ctx.lr = 0x83914300;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16440
	ctx.lr = 0x8391430C;
	sub_82A16440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8391439c
	goto loc_8391439C;
loc_83914314:
	// lwz r11,5356(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83914344
	if (cr6.lt) goto loc_83914344;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x83914344
	if (cr6.gt) goto loc_83914344;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,16(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83912a08
	ctx.lr = 0x8391433C;
	sub_83912A08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8391439c
	goto loc_8391439C;
loc_83914344:
	// addis r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 65536;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r11,r11,-26424
	ctx.r11.s64 = ctx.r11.s64 + -26424;
	// cmpwi cr6,r16,11
	cr6.compare<int32_t>(ctx.r16.s32, 11, xer);
	// bge cr6,0x83914364
	if (!cr6.lt) goto loc_83914364;
loc_83914358:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,60
	cr6.compare<int32_t>(ctx.r10.s32, 60, xer);
	// beq cr6,0x83914378
	if (cr6.eq) goto loc_83914378;
loc_83914364:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x83914358
	if (cr6.lt) goto loc_83914358;
	// b 0x83914398
	goto loc_83914398;
loc_83914378:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16188
	ctx.lr = 0x83914380;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a16440
	ctx.lr = 0x8391438C;
	sub_82A16440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bne cr6,0x8391439c
	if (!cr6.eq) goto loc_8391439C;
loc_83914398:
	// lwz r31,44(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
loc_8391439C:
	// bl 0x830ff290
	ctx.lr = 0x839143A0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839143A4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x839143b4
	if (!cr6.eq) goto loc_839143B4;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x83914624
	if (cr6.eq) goto loc_83914624;
loc_839143B4:
	// lbz r11,112(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914624
	if (!cr6.eq) goto loc_83914624;
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x83914538
	if (cr6.eq) goto loc_83914538;
	// stw r31,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r31.u32);
	// bl 0x830ff290
	ctx.lr = 0x839143D0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839143D4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x83914454
	if (cr6.eq) goto loc_83914454;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x83914454
	if (cr6.eq) goto loc_83914454;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a164c8
	ctx.lr = 0x839143F0;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x839143F4;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83914454
	if (cr6.lt) goto loc_83914454;
	// beq cr6,0x83914418
	if (cr6.eq) goto loc_83914418;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83914458
	if (!cr6.lt) goto loc_83914458;
loc_8391440C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r22)
	PPC_STORE_U8(ctx.r22.u32 + 32, ctx.r11.u8);
	// b 0x83914458
	goto loc_83914458;
loc_83914418:
	// lwz r11,4460(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8391440c
	if (!cr6.eq) goto loc_8391440C;
	// lwz r11,5388(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83914448
	if (!cr6.eq) goto loc_83914448;
	// lwz r11,5412(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5412);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83914448
	if (!cr6.eq) goto loc_83914448;
	// lwz r11,5416(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5416);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x83914454
	if (cr6.eq) goto loc_83914454;
loc_83914448:
	// lwz r11,5396(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5396);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x83914458
	if (!cr6.eq) goto loc_83914458;
loc_83914454:
	// stb r16,32(r22)
	PPC_STORE_U8(ctx.r22.u32 + 32, ctx.r16.u8);
loc_83914458:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x83914464;
	sub_82A0C7B0(ctx, base);
	// bl 0x82a36648
	ctx.lr = 0x83914468;
	sub_82A36648(ctx, base);
	// stb r3,33(r22)
	PPC_STORE_U8(ctx.r22.u32 + 33, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a161a8
	ctx.lr = 0x83914478;
	sub_82A161A8(ctx, base);
	// stw r3,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83914490
	if (cr6.lt) goto loc_83914490;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83914494
	if (cr6.lt) goto loc_83914494;
loc_83914490:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83914494:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839144c4
	if (cr6.eq) goto loc_839144C4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r19,12
	ctx.r10.s64 = ctx.r19.s64 + 12;
loc_839144A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// beq cr6,0x839144c8
	if (cr6.eq) goto loc_839144C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839144a8
	if (cr6.lt) goto loc_839144A8;
loc_839144C4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_839144C8:
	// stw r11,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x83914538
	if (cr6.eq) goto loc_83914538;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfc r10,r20,r11
	xer.ca = ctx.r11.u32 >= ctx.r20.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r20.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// mulli r11,r6,84
	ctx.r11.s64 = ctx.r6.s64 * 84;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// addi r10,r11,460
	ctx.r10.s64 = ctx.r11.s64 + 460;
	// lbz r4,460(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 460);
	// lfs f0,464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,36(r22)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r22.u32 + 36, temp.u32);
	// lbz r11,462(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 462);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83914530
	if (cr6.eq) goto loc_83914530;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83914530
	if (cr6.eq) goto loc_83914530;
	// stb r16,40(r22)
	PPC_STORE_U8(ctx.r22.u32 + 40, ctx.r16.u8);
	// b 0x83914538
	goto loc_83914538;
loc_83914530:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,40(r22)
	PPC_STORE_U8(ctx.r22.u32 + 40, ctx.r11.u8);
loc_83914538:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// ori r9,r11,44728
	ctx.r9.u64 = ctx.r11.u64 | 44728;
	// addi r11,r10,6784
	ctx.r11.s64 = ctx.r10.s64 + 6784;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lwzx r8,r18,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r9.u32);
	// stw r8,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r8.u32);
loc_83914558:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a14298
	ctx.lr = 0x83914568;
	sub_82A14298(ctx, base);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lbz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// blt cr6,0x83914558
	if (cr6.lt) goto loc_83914558;
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x831156e8
	ctx.lr = 0x83914590;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24072
	ctx.r9.u64 = ctx.r11.u64 | 24072;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839145c8
	if (!cr6.eq) goto loc_839145C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x839145B0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839145c8
	if (!cr6.eq) goto loc_839145C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r11.u8);
	// b 0x839145cc
	goto loc_839145CC;
loc_839145C8:
	// stb r16,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r16.u8);
loc_839145CC:
	// lbz r11,36(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839145ec
	if (cr6.eq) goto loc_839145EC;
	// lwz r11,40(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 40);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83914624
	if (cr6.eq) goto loc_83914624;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83914624
	if (cr6.eq) goto loc_83914624;
loc_839145EC:
	// lwz r11,5356(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83914624
	if (cr6.eq) goto loc_83914624;
	// lbz r10,495(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 495);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83914624
	if (cr6.eq) goto loc_83914624;
	// lwz r11,4456(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4456);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x83914624
	if (!cr6.lt) goto loc_83914624;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d39140
	ctx.lr = 0x83914618;
	sub_82D39140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914628
	if (cr6.eq) goto loc_83914628;
loc_83914624:
	// stb r16,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r16.u8);
loc_83914628:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914630"))) PPC_WEAK_FUNC(sub_83914630);
PPC_FUNC_IMPL(__imp__sub_83914630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83914638;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r24,472(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r25,292(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x83914660;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a33718
	ctx.lr = 0x83914678;
	sub_82A33718(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lbz r6,3280(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3280);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x839146ac
	if (!cr6.eq) goto loc_839146AC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839146AC:
	// bl 0x831156e8
	ctx.lr = 0x839146B0;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24077
	ctx.r9.u64 = ctx.r11.u64 | 24077;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83914770
	if (cr6.eq) goto loc_83914770;
	// addi r3,r28,2324
	ctx.r3.s64 = ctx.r28.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x839146D0;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914770
	if (cr6.eq) goto loc_83914770;
	// lwz r11,4456(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83914770
	if (cr6.eq) goto loc_83914770;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914738
	if (cr6.eq) goto loc_83914738;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x839146FC;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914738
	if (!cr6.eq) goto loc_83914738;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83914770
	if (cr6.eq) goto loc_83914770;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x83914770
	if (cr6.eq) goto loc_83914770;
	// bl 0x83911ac0
	ctx.lr = 0x83914720;
	sub_83911AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914770
	if (!cr6.eq) goto loc_83914770;
	// lwz r11,4460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83914770
	if (!cr6.eq) goto loc_83914770;
loc_83914738:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a47d40
	ctx.lr = 0x83914740;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914760
	if (cr6.eq) goto loc_83914760;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83930ac8
	ctx.lr = 0x83914754;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914770
	if (!cr6.eq) goto loc_83914770;
loc_83914760:
	// bl 0x82d4de68
	ctx.lr = 0x83914764;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83914774
	if (!cr6.eq) goto loc_83914774;
loc_83914770:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83914774:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,217
	ctx.r4.s64 = ctx.r11.s64 + 217;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x839147b4
	if (cr6.eq) goto loc_839147B4;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839147B4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839147cc
	if (cr6.eq) goto loc_839147CC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_839147CC:
	// addis r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 65536;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-20788
	ctx.r10.s64 = ctx.r10.s64 + -20788;
	// ori r11,r8,44728
	ctx.r11.u64 = ctx.r8.u64 | 44728;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x839147fc
	if (!cr6.eq) goto loc_839147FC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r8,r23,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x83914818
	if (cr6.eq) goto loc_83914818;
loc_839147FC:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lwzx r7,r23,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_83914818:
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r28,r11,6784
	ctx.r28.s64 = ctx.r11.s64 + 6784;
loc_83914824:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a14298
	ctx.lr = 0x83914834;
	sub_82A14298(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8391485c
	if (cr6.eq) goto loc_8391485C;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lbz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// stbx r8,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u8);
loc_8391485C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x83914824
	if (cr6.lt) goto loc_83914824;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914874"))) PPC_WEAK_FUNC(sub_83914874);
PPC_FUNC_IMPL(__imp__sub_83914874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83914878"))) PPC_WEAK_FUNC(sub_83914878);
PPC_FUNC_IMPL(__imp__sub_83914878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83914880;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r25,472(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x839148AC;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x82a32ec0
	ctx.lr = 0x839148C0;
	sub_82A32EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r21,0
	ctx.r21.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x831156e8
	ctx.lr = 0x839148D8;
	sub_831156E8(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r7,r9,24077
	ctx.r7.u64 = ctx.r9.u64 | 24077;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8391499c
	if (cr6.eq) goto loc_8391499C;
	// addi r3,r30,2324
	ctx.r3.s64 = ctx.r30.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x839148FC;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391499c
	if (cr6.eq) goto loc_8391499C;
	// lwz r11,4456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8391499c
	if (cr6.eq) goto loc_8391499C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914964
	if (cr6.eq) goto loc_83914964;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83914928;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914964
	if (!cr6.eq) goto loc_83914964;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x8391499c
	if (cr6.eq) goto loc_8391499C;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x8391499c
	if (cr6.eq) goto loc_8391499C;
	// bl 0x83911ac0
	ctx.lr = 0x8391494C;
	sub_83911AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391499c
	if (!cr6.eq) goto loc_8391499C;
	// lwz r11,4460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8391499c
	if (!cr6.eq) goto loc_8391499C;
loc_83914964:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a47d40
	ctx.lr = 0x8391496C;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391498c
	if (cr6.eq) goto loc_8391498C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83930ac8
	ctx.lr = 0x83914980;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391499c
	if (!cr6.eq) goto loc_8391499C;
loc_8391498C:
	// bl 0x82d4de68
	ctx.lr = 0x83914990;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839149a0
	if (!cr6.eq) goto loc_839149A0;
loc_8391499C:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_839149A0:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// li r28,2
	ctx.r28.s64 = 2;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// subfc r10,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1168
	ctx.r11.s64 = ctx.r11.s64 + 1168;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x839149e0
	if (cr6.eq) goto loc_839149E0;
	// stb r21,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r21.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839149E0:
	// addis r3,r23,1
	ctx.r3.s64 = ctx.r23.s64 + 65536;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x825832e0
	ctx.lr = 0x839149EC;
	sub_825832E0(ctx, base);
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83914a44
	if (cr6.eq) goto loc_83914A44;
	// subfc r10,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// stb r11,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r11.u8);
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r24,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r24.u8);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r6,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r6.s64 = ctx.r31.s64 - ctx.r28.s64;
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & ctx.r31.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// and r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 & ctx.r31.u64;
	// addi r11,r11,1168
	ctx.r11.s64 = ctx.r11.s64 + 1168;
	// rlwinm r9,r10,4,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r24,r7,r30
	PPC_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r24.u8);
	// stb r24,3473(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3473, ctx.r24.u8);
	// stb r24,3537(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3537, ctx.r24.u8);
loc_83914A44:
	// lwz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83914a58
	if (cr6.lt) goto loc_83914A58;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x83914ad4
	if (cr6.lt) goto loc_83914AD4;
loc_83914A58:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83914ad4
	if (cr6.eq) goto loc_83914AD4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83914ae0
	if (cr6.eq) goto loc_83914AE0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83914ae0
	if (cr6.eq) goto loc_83914AE0;
	// bl 0x831156e8
	ctx.lr = 0x83914A74;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x83914a9c
	if (!cr6.lt) goto loc_83914A9C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83914A9C:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83914AB4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83914ab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83914AB4;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// blt cr6,0x83914ad4
	if (cr6.lt) goto loc_83914AD4;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// ble cr6,0x83914ae0
	if (!cr6.gt) goto loc_83914AE0;
loc_83914AD4:
	// stb r21,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r21.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83914AE0:
	// stb r24,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r24.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914AEC"))) PPC_WEAK_FUNC(sub_83914AEC);
PPC_FUNC_IMPL(__imp__sub_83914AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83914AF0"))) PPC_WEAK_FUNC(sub_83914AF0);
PPC_FUNC_IMPL(__imp__sub_83914AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83914AF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r26,472(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// lwz r28,292(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x83914B20;
	sub_82A0C710(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r9,5356(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,439
	ctx.r11.s64 = ctx.r11.s64 + 439;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x83914b5c
	if (cr6.eq) goto loc_83914B5C;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// b 0x83914b90
	goto loc_83914B90;
loc_83914B5C:
	// lbz r11,253(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914b84
	if (cr6.eq) goto loc_83914B84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r10,260(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 260);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x83914b90
	goto loc_83914B90;
loc_83914B84:
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// lbz r11,261(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 261);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_83914B90:
	// bl 0x831156e8
	ctx.lr = 0x83914B94;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24077
	ctx.r9.u64 = ctx.r11.u64 | 24077;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83914c2c
	if (cr6.eq) goto loc_83914C2C;
	// addi r3,r30,2324
	ctx.r3.s64 = ctx.r30.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83914BB4;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914c2c
	if (cr6.eq) goto loc_83914C2C;
	// lwz r11,4456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83914c2c
	if (cr6.eq) goto loc_83914C2C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83914BD4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914bf4
	if (!cr6.eq) goto loc_83914BF4;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83914c2c
	if (cr6.eq) goto loc_83914C2C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83914c2c
	if (cr6.eq) goto loc_83914C2C;
loc_83914BF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a47d40
	ctx.lr = 0x83914BFC;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914c1c
	if (cr6.eq) goto loc_83914C1C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83930ac8
	ctx.lr = 0x83914C10;
	sub_83930AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914c2c
	if (!cr6.eq) goto loc_83914C2C;
loc_83914C1C:
	// bl 0x82d4de68
	ctx.lr = 0x83914C20;
	sub_82D4DE68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83914c30
	if (!cr6.eq) goto loc_83914C30;
loc_83914C2C:
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_83914C30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914C38"))) PPC_WEAK_FUNC(sub_83914C38);
PPC_FUNC_IMPL(__imp__sub_83914C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83914C40;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x830ff290
	ctx.lr = 0x83914C54;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83914C58;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x83914dd4
	if (cr6.eq) goto loc_83914DD4;
	// addi r19,r31,2324
	ctx.r19.s64 = ctx.r31.s64 + 2324;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8391b400
	ctx.lr = 0x83914C6C;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914dd4
	if (cr6.eq) goto loc_83914DD4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x83914C88;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83914dd4
	if (!cr6.eq) goto loc_83914DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x83914CA4;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83914dd4
	if (!cr6.eq) goto loc_83914DD4;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x83914dd4
	if (cr6.eq) goto loc_83914DD4;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r31,2500
	ctx.r11.s64 = ctx.r31.s64 + 2500;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83914CE0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83914ce0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83914CE0;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r23,129(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r22,128(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lbz r21,127(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r20,126(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,7
	ctx.r26.s64 = 7;
loc_83914D14:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x83914dd4
	if (cr6.eq) goto loc_83914DD4;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(ctx.r30.u32, 255, xer);
	// beq cr6,0x83914dd4
	if (cr6.eq) goto loc_83914DD4;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83914d78
	if (!cr6.eq) goto loc_83914D78;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83914dc0
	if (cr6.eq) goto loc_83914DC0;
loc_83914D78:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x83914d90
	if (!cr6.eq) goto loc_83914D90;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x83914dc0
	if (cr6.eq) goto loc_83914DC0;
loc_83914D90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83914D98;
	sub_8391B0C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83914DA0;
	sub_8391B0C8(ctx, base);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8391bdd8
	ctx.lr = 0x83914DC0;
	sub_8391BDD8(ctx, base);
loc_83914DC0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83914d14
	if (cr6.lt) goto loc_83914D14;
loc_83914DD4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914DDC"))) PPC_WEAK_FUNC(sub_83914DDC);
PPC_FUNC_IMPL(__imp__sub_83914DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83914DE0"))) PPC_WEAK_FUNC(sub_83914DE0);
PPC_FUNC_IMPL(__imp__sub_83914DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83914DE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82a0c738
	ctx.lr = 0x83914E0C;
	sub_82A0C738(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x82a23768
	ctx.lr = 0x83914E24;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x83914E34;
	sub_831CE980(ctx, base);
	// addi r29,r29,2324
	ctx.r29.s64 = ctx.r29.s64 + 2324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8391b400
	ctx.lr = 0x83914E40;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914fa8
	if (cr6.eq) goto loc_83914FA8;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x83914E58;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83914fa8
	if (!cr6.eq) goto loc_83914FA8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x83914f2c
	if (cr6.eq) goto loc_83914F2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8391b0c8
	ctx.lr = 0x83914E7C;
	sub_8391B0C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8391b0c8
	ctx.lr = 0x83914E84;
	sub_8391B0C8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x83914fa8
	if (!cr6.eq) goto loc_83914FA8;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq cr6,0x83914ec0
	if (cr6.eq) goto loc_83914EC0;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x83914f2c
	if (!cr6.eq) goto loc_83914F2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x83914f20
	goto loc_83914F20;
loc_83914EC0:
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// bl 0x82a2a378
	ctx.lr = 0x83914ED0;
	sub_82A2A378(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a169d8
	ctx.lr = 0x83914EE0;
	sub_82A169D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82a16798
	ctx.lr = 0x83914EEC;
	sub_82A16798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x83914f20
	if (cr6.eq) goto loc_83914F20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16490
	ctx.lr = 0x83914F00;
	sub_82A16490(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83914F04;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
loc_83914F20:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8391bdd8
	ctx.lr = 0x83914F2C;
	sub_8391BDD8(ctx, base);
loc_83914F2C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83914fa8
	if (cr6.eq) goto loc_83914FA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83914F40;
	sub_8391B0C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b0c8
	ctx.lr = 0x83914F48;
	sub_8391B0C8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x83914f84
	if (cr6.eq) goto loc_83914F84;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83914f7c
	if (cr6.eq) goto loc_83914F7C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83914fa8
	if (!cr6.eq) goto loc_83914FA8;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x83914f88
	goto loc_83914F88;
loc_83914F7C:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x83914f88
	goto loc_83914F88;
loc_83914F84:
	// li r10,5
	ctx.r10.s64 = 5;
loc_83914F88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8391bdd8
	ctx.lr = 0x83914FA8;
	sub_8391BDD8(ctx, base);
loc_83914FA8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83102db0
	ctx.lr = 0x83914FB0;
	sub_83102DB0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83914FB8"))) PPC_WEAK_FUNC(sub_83914FB8);
PPC_FUNC_IMPL(__imp__sub_83914FB8) {
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
	ctx.lr = 0x83914FC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,24
	ctx.r26.s64 = 24;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,-3564(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r23,192(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
loc_83914FE4:
	// addi r10,r11,254
	ctx.r10.s64 = ctx.r11.s64 + 254;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subfc r8,r26,r9
	xer.ca = ctx.r9.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r10,387
	ctx.r4.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83915018
	if (cr6.eq) goto loc_83915018;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_83915018:
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subfc r8,r26,r9
	xer.ca = ctx.r9.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r10,387
	ctx.r4.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391504c
	if (cr6.eq) goto loc_8391504C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8391504C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subfc r9,r26,r10
	xer.ca = ctx.r10.u32 >= ctx.r26.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r26.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r10,387
	ctx.r5.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391507c
	if (cr6.eq) goto loc_8391507C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8391507C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subfc r8,r26,r9
	xer.ca = ctx.r9.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r10,387
	ctx.r4.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839150b0
	if (cr6.eq) goto loc_839150B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_839150B0:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subfc r8,r26,r9
	xer.ca = ctx.r9.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r10,387
	ctx.r4.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839150e4
	if (cr6.eq) goto loc_839150E4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_839150E4:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subfc r8,r26,r9
	xer.ca = ctx.r9.u32 >= ctx.r26.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r10,387
	ctx.r4.s64 = ctx.r10.s64 + 387;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83915118
	if (cr6.eq) goto loc_83915118;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_83915118:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bdnz 0x83914fe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83914FE4;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839151b8
	if (!cr6.eq) goto loc_839151B8;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r27,2056(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
loc_83915144:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x83915154
	if (cr6.lt) goto loc_83915154;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915154:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839151ac
	if (cr6.eq) goto loc_839151AC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r22,76(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83915180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r22,r9
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, xer);
	// bne cr6,0x839151ac
	if (!cr6.eq) goto loc_839151AC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839151a0
	if (!cr6.eq) goto loc_839151A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x839151a8
	goto loc_839151A8;
loc_839151A0:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_839151A8:
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
loc_839151AC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x83915144
	if (cr6.lt) goto loc_83915144;
loc_839151B8:
	// lwz r4,3288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83915308
	if (!cr6.lt) goto loc_83915308;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x839151CC;
	sub_82A0C710(ctx, base);
	// lbz r11,253(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 253);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,3304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3304, ctx.r9.u8);
	// bl 0x82dad2e0
	ctx.lr = 0x839151E0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83915220
	if (cr6.eq) goto loc_83915220;
	// lwz r30,3288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// bl 0x82dad2e0
	ctx.lr = 0x839151F0;
	sub_82DAD2E0(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x83915214
	if (!cr6.lt) goto loc_83915214;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// b 0x83915224
	goto loc_83915224;
loc_83915214:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r26.u32);
	// b 0x83915224
	goto loc_83915224;
loc_83915220:
	// stw r25,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r25.u32);
loc_83915224:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r4,3288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// bl 0x82a0c710
	ctx.lr = 0x83915230;
	sub_82A0C710(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83915234:
	// addi r10,r11,4729
	ctx.r10.s64 = ctx.r11.s64 + 4729;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8391525c
	if (cr6.eq) goto loc_8391525C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83915234
	if (cr6.lt) goto loc_83915234;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8391525C:
	// lwz r10,3288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// mulli r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 * 11;
	// add. r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x83915278
	if (cr0.lt) goto loc_83915278;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8391527c
	if (cr6.lt) goto loc_8391527C;
loc_83915278:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8391527C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839152ac
	if (cr6.eq) goto loc_839152AC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r23,12
	ctx.r11.s64 = ctx.r23.s64 + 12;
loc_83915290:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x839152b0
	if (cr6.eq) goto loc_839152B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x83915290
	if (cr6.lt) goto loc_83915290;
loc_839152AC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_839152B0:
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lbz r9,4502(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4502);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83915300
	if (!cr6.eq) goto loc_83915300;
	// lwz r3,412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x82a52c70
	ctx.lr = 0x839152D0;
	sub_82A52C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915300
	if (!cr6.eq) goto loc_83915300;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r3,412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x82a52ca0
	ctx.lr = 0x839152E8;
	sub_82A52CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915300
	if (!cr6.eq) goto loc_83915300;
	// stb r25,3305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3305, ctx.r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83915300:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3305, ctx.r11.u8);
loc_83915308:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83915310"))) PPC_WEAK_FUNC(sub_83915310);
PPC_FUNC_IMPL(__imp__sub_83915310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83915318;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// addi r26,r3,3528
	ctx.r26.s64 = ctx.r3.s64 + 3528;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r18,292(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83915348;
	sub_82A1AAA8(ctx, base);
	// stb r3,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8391b960
	ctx.lr = 0x83915354;
	sub_8391B960(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a225d0
	ctx.lr = 0x8391535C;
	sub_82A225D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8291b4e0
	ctx.lr = 0x83915368;
	sub_8291B4E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lfs f0,6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6472);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,112(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 112, temp.u32);
	// bl 0x82a23768
	ctx.lr = 0x83915388;
	sub_82A23768(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x839153c8
	if (!cr6.eq) goto loc_839153C8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x839153c4
	if (!cr6.lt) goto loc_839153C4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stb r23,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r23.u8);
loc_839153C4:
	// stb r21,110(r26)
	PPC_STORE_U8(ctx.r26.u32 + 110, ctx.r21.u8);
loc_839153C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x839153D8;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x839154b8
	if (cr6.eq) goto loc_839154B8;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f0b68
	ctx.lr = 0x839153F0;
	sub_829F0B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915454
	if (!cr6.eq) goto loc_83915454;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8391541c
	if (!cr6.eq) goto loc_8391541C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x83915420
	if (cr6.eq) goto loc_83915420;
loc_8391541C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83915420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915454
	if (!cr6.eq) goto loc_83915454;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x83915444
	if (!cr6.eq) goto loc_83915444;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x83915448
	if (cr6.eq) goto loc_83915448;
loc_83915444:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83915448:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839154b8
	if (cr6.eq) goto loc_839154B8;
loc_83915454:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83915480
	if (cr6.lt) goto loc_83915480;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x83915480
	if (!cr6.lt) goto loc_83915480;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83915480
	if (cr6.lt) goto loc_83915480;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x83915484
	if (cr6.lt) goto loc_83915484;
loc_83915480:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83915484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839154b8
	if (cr6.eq) goto loc_839154B8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x839154b4
	if (!cr6.lt) goto loc_839154B4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stb r23,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r23.u8);
loc_839154B4:
	// stb r21,111(r26)
	PPC_STORE_U8(ctx.r26.u32 + 111, ctx.r21.u8);
loc_839154B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x839154C8;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x839154d8
	if (cr6.eq) goto loc_839154D8;
	// stb r21,109(r26)
	PPC_STORE_U8(ctx.r26.u32 + 109, ctx.r21.u8);
loc_839154D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x839154E8;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r22,255
	ctx.r22.s64 = 255;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x83915644
	if (cr6.eq) goto loc_83915644;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,4
	ctx.r9.s64 = 4;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bgt cr6,0x8391555c
	if (cr6.gt) goto loc_8391555C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83915548
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915548;
	// bdzf 4*cr6+eq,0x83915550
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915550;
	// bdzf 4*cr6+eq,0x83915550
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915550;
	// bdzf 4*cr6+eq,0x8391555c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8391555C;
	// bne cr6,0x83915558
	if (!cr6.eq) goto loc_83915558;
loc_83915548:
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x8391555c
	goto loc_8391555C;
loc_83915550:
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// b 0x8391555c
	goto loc_8391555C;
loc_83915558:
	// addi r11,r11,105
	ctx.r11.s64 = ctx.r11.s64 + 105;
loc_8391555C:
	// lbz r10,2492(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2492);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r9,4456(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4456);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r27,r26,136
	ctx.r27.s64 = ctx.r26.s64 + 136;
	// ld r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// ld r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_83915584:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_83915588:
	// add r31,r29,r20
	ctx.r31.u64 = ctx.r29.u64 + ctx.r20.u64;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// beq cr6,0x83915634
	if (cr6.eq) goto loc_83915634;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stbx r21,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r21.u8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rldicr r8,r23,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r21,-127(r11)
	PPC_STORE_U8(ctx.r11.u32 + -127, ctx.r21.u8);
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// bl 0x8391bd88
	ctx.lr = 0x839155E4;
	sub_8391BD88(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicr r8,r23,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,28(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// bl 0x8391bd88
	ctx.lr = 0x83915620;
	sub_8391BD88(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83915588
	if (cr6.lt) goto loc_83915588;
loc_83915634:
	// addi r20,r20,6
	ctx.r20.s64 = ctx.r20.s64 + 6;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r20,12
	cr6.compare<int32_t>(ctx.r20.s32, 12, xer);
	// blt cr6,0x83915584
	if (cr6.lt) goto loc_83915584;
loc_83915644:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x83915654;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bne cr6,0x83915738
	if (!cr6.eq) goto loc_83915738;
	// lbz r11,95(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 95);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r23,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r23.u8);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// bne cr6,0x8391570c
	if (!cr6.eq) goto loc_8391570C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ld r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x839156e0
	if (cr6.gt) goto loc_839156E0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839156cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839156CC;
	// bdzf 4*cr6+eq,0x839156d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839156D4;
	// bdzf 4*cr6+eq,0x839156d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839156D4;
	// bdzf 4*cr6+eq,0x839156e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839156E0;
	// bne cr6,0x839156dc
	if (!cr6.eq) goto loc_839156DC;
loc_839156CC:
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x839156e0
	goto loc_839156E0;
loc_839156D4:
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// b 0x839156e0
	goto loc_839156E0;
loc_839156DC:
	// addi r11,r11,105
	ctx.r11.s64 = ctx.r11.s64 + 105;
loc_839156E0:
	// lbz r5,2492(r16)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2492);
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r10,4456(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4456);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8391bd88
	ctx.lr = 0x8391570C;
	sub_8391BD88(ctx, base);
loc_8391570C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83915734
	if (!cr6.lt) goto loc_83915734;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stb r23,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r23.u8);
loc_83915734:
	// stb r21,108(r26)
	PPC_STORE_U8(ctx.r26.u32 + 108, ctx.r21.u8);
loc_83915738:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x83915748;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// bne cr6,0x839157d8
	if (!cr6.eq) goto loc_839157D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// ld r6,296(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// bgt cr6,0x839157ac
	if (cr6.gt) goto loc_839157AC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83915798
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915798;
	// bdzf 4*cr6+eq,0x839157a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839157A0;
	// bdzf 4*cr6+eq,0x839157a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839157A0;
	// bdzf 4*cr6+eq,0x839157ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839157AC;
	// bne cr6,0x839157a8
	if (!cr6.eq) goto loc_839157A8;
loc_83915798:
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x839157ac
	goto loc_839157AC;
loc_839157A0:
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// b 0x839157ac
	goto loc_839157AC;
loc_839157A8:
	// addi r11,r11,105
	ctx.r11.s64 = ctx.r11.s64 + 105;
loc_839157AC:
	// lbz r5,2492(r16)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2492);
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r10,4456(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4456);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8391bd88
	ctx.lr = 0x839157D8;
	sub_8391BD88(ctx, base);
loc_839157D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a23768
	ctx.lr = 0x839157E8;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// bne cr6,0x83915900
	if (!cr6.eq) goto loc_83915900;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// bne cr6,0x83915818
	if (!cr6.eq) goto loc_83915818;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_83915818:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ld r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// bgt cr6,0x83915868
	if (cr6.gt) goto loc_83915868;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83915854
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915854;
	// bdzf 4*cr6+eq,0x8391585c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8391585C;
	// bdzf 4*cr6+eq,0x8391585c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8391585C;
	// bdzf 4*cr6+eq,0x83915868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83915868;
	// bne cr6,0x83915864
	if (!cr6.eq) goto loc_83915864;
loc_83915854:
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// b 0x83915868
	goto loc_83915868;
loc_8391585C:
	// addi r11,r11,90
	ctx.r11.s64 = ctx.r11.s64 + 90;
	// b 0x83915868
	goto loc_83915868;
loc_83915864:
	// addi r11,r11,105
	ctx.r11.s64 = ctx.r11.s64 + 105;
loc_83915868:
	// lwz r5,4456(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4456);
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lbz r10,2492(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2492);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r21,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r21.u8);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8391bd88
	ctx.lr = 0x839158A8;
	sub_8391BD88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x839158bc
	if (cr6.eq) goto loc_839158BC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83915900
	if (!cr6.eq) goto loc_83915900;
loc_839158BC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r21,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r21.u8);
	// ld r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83915900
	if (!cr6.lt) goto loc_83915900;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r23,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r23.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_83915900:
	// lfs f0,68(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 140, temp.u32);
	// lfs f13,88(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 144, temp.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// lbz r11,5973(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 5973);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839159dc
	if (!cr6.eq) goto loc_839159DC;
	// bl 0x8353b1d8
	ctx.lr = 0x8391592C;
	sub_8353B1D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x83915934;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83915938;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x83915978
	if (!cr6.eq) goto loc_83915978;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83915960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// stb r21,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r21.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83915978:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83915998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839159dc
	if (cr6.eq) goto loc_839159DC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x839159cc
	if (cr6.eq) goto loc_839159CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x839159BC;
	sub_82D26ED8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82d26b18
	ctx.lr = 0x839159C4;
	sub_82D26B18(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_839159CC:
	// stw r23,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r23.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x839159D4;
	sub_82D26ED8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82d26b18
	ctx.lr = 0x839159DC;
	sub_82D26B18(ctx, base);
loc_839159DC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839159E4"))) PPC_WEAK_FUNC(sub_839159E4);
PPC_FUNC_IMPL(__imp__sub_839159E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839159E8"))) PPC_WEAK_FUNC(sub_839159E8);
PPC_FUNC_IMPL(__imp__sub_839159E8) {
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
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83915A10:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stbu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83915a10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83915A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x8391bac0
	ctx.lr = 0x83915A34;
	sub_8391BAC0(ctx, base);
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

__attribute__((alias("__imp__sub_83915A4C"))) PPC_WEAK_FUNC(sub_83915A4C);
PPC_FUNC_IMPL(__imp__sub_83915A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83915A50"))) PPC_WEAK_FUNC(sub_83915A50);
PPC_FUNC_IMPL(__imp__sub_83915A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83915A58;
	__savegprlr_28(ctx, base);
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83915a98
	if (cr6.eq) goto loc_83915A98;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83915A74:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83915A88;
	sub_8259CB28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x83915a74
	if (!cr6.eq) goto loc_83915A74;
loc_83915A98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83915AA4"))) PPC_WEAK_FUNC(sub_83915AA4);
PPC_FUNC_IMPL(__imp__sub_83915AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83915AA8"))) PPC_WEAK_FUNC(sub_83915AA8);
PPC_FUNC_IMPL(__imp__sub_83915AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83915AB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,3504
	ctx.r31.s64 = ctx.r3.s64 + 3504;
	// li r29,23
	ctx.r29.s64 = 23;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83915ACC:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83915aec
	if (cr6.lt) goto loc_83915AEC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83915AEC;
	sub_825952B8(ctx, base);
loc_83915AEC:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bge 0x83915acc
	if (!cr0.lt) goto loc_83915ACC;
	// lwz r4,1324(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1324);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83915b18
	if (cr6.eq) goto loc_83915B18;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83915B18;
	sub_825952B8(ctx, base);
loc_83915B18:
	// stw r30,1324(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1324, ctx.r30.u32);
	// addi r31,r28,312
	ctx.r31.s64 = ctx.r28.s64 + 312;
	// stw r30,1328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1328, ctx.r30.u32);
	// stw r30,1332(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1332, ctx.r30.u32);
	// lwz r3,312(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83915b54
	if (cr6.eq) goto loc_83915B54;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x83915B44;
	sub_838ADAB0(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83915B54;
	sub_825952B8(ctx, base);
loc_83915B54:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r4,292(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83915b78
	if (cr6.eq) goto loc_83915B78;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83915B78;
	sub_825952B8(ctx, base);
loc_83915B78:
	// stw r30,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r30.u32);
	// stw r30,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r30.u32);
	// stw r30,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83915B8C"))) PPC_WEAK_FUNC(sub_83915B8C);
PPC_FUNC_IMPL(__imp__sub_83915B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83915B90"))) PPC_WEAK_FUNC(sub_83915B90);
PPC_FUNC_IMPL(__imp__sub_83915B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83915B98;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r24,r3,2324
	ctx.r24.s64 = ctx.r3.s64 + 2324;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r22,292(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r27,192(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stb r6,2324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2324, ctx.r6.u8);
	// bl 0x831156e8
	ctx.lr = 0x83915BC8;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r9,r11,24068
	ctx.r9.u64 = ctx.r11.u64 | 24068;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x83915c40
	if (cr6.eq) goto loc_83915C40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8391b400
	ctx.lr = 0x83915BEC;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915c40
	if (cr6.eq) goto loc_83915C40;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83915c40
	if (cr6.eq) goto loc_83915C40;
	// lwz r11,4456(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83915c40
	if (cr6.eq) goto loc_83915C40;
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83915c40
	if (cr6.eq) goto loc_83915C40;
	// bl 0x830ff290
	ctx.lr = 0x83915C20;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83915C24;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// bne cr6,0x83915c44
	if (!cr6.eq) goto loc_83915C44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18500
	ctx.lr = 0x83915C34;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915c44
	if (cr6.eq) goto loc_83915C44;
loc_83915C40:
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
loc_83915C44:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83915C4C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,752
	ctx.r30.s64 = ctx.r11.s64 + 752;
	// lbz r10,756(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 756);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83915cac
	if (!cr6.eq) goto loc_83915CAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83915C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83915C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x828c6780
	ctx.lr = 0x83915CA8;
	sub_828C6780(ctx, base);
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
loc_83915CAC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915cc8
	if (!cr6.eq) goto loc_83915CC8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_83915CC8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bge cr6,0x83915d18
	if (!cr6.lt) goto loc_83915D18;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,3740
	ctx.r10.s64 = ctx.r11.s64 + 3740;
	// stfs f0,3740(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3740, temp.u32);
	// stfs f13,3744(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3744, temp.u32);
	// stfs f12,3748(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3748, temp.u32);
loc_83915D18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x83915D24;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83915d4c
	if (cr6.eq) goto loc_83915D4C;
	// lwz r11,1272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x83915d4c
	if (!cr6.lt) goto loc_83915D4C;
	// addi r11,r31,1001
	ctx.r11.s64 = ctx.r31.s64 + 1001;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
loc_83915D4C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915d5c
	if (cr6.eq) goto loc_83915D5C;
	// stw r23,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
loc_83915D5C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// blt cr6,0x83915c4c
	if (cr6.lt) goto loc_83915C4C;
	// li r25,255
	ctx.r25.s64 = 255;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stb r23,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r29,r24,132
	ctx.r29.s64 = ctx.r24.s64 + 132;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83915D90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x83915D9C;
	sub_82A0C710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29b60
	ctx.lr = 0x83915DAC;
	sub_82A29B60(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x83915DC0;
	sub_82A0C738(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82a16188
	ctx.lr = 0x83915DCC;
	sub_82A16188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a16440
	ctx.lr = 0x83915DD8;
	sub_82A16440(ctx, base);
	// stbx r26,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r26.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x83915d90
	if (cr6.lt) goto loc_83915D90;
	// addi r28,r24,100
	ctx.r28.s64 = ctx.r24.s64 + 100;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_83915DF4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83915e04
	if (cr6.lt) goto loc_83915E04;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915E04:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r7,r8,r24
	PPC_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r7.u32);
	// blt cr6,0x83915e2c
	if (cr6.lt) goto loc_83915E2C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915E2C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stbx r9,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u8);
	// blt cr6,0x83915e4c
	if (cr6.lt) goto loc_83915E4C;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915E4C:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83915e64
	if (!cr6.eq) goto loc_83915E64;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x83915eac
	goto loc_83915EAC;
loc_83915E64:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x83915eac
	if (!cr6.lt) goto loc_83915EAC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83915e84
	if (cr6.lt) goto loc_83915E84;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915E84:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x83915eac
	if (!cr6.eq) goto loc_83915EAC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r26,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
loc_83915EAC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83915ebc
	if (cr6.lt) goto loc_83915EBC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83915EBC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x825b2f28
	ctx.lr = 0x83915EC8;
	sub_825B2F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83915ed8
	if (!cr6.eq) goto loc_83915ED8;
	// stbx r23,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r23.u8);
loc_83915ED8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83915df4
	if (cr6.lt) goto loc_83915DF4;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r8,r24,124
	ctx.r8.s64 = ctx.r24.s64 + 124;
	// addi r7,r21,28
	ctx.r7.s64 = ctx.r21.s64 + 28;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83915F00:
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915f58
	if (cr6.eq) goto loc_83915F58;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x83915f20
	if (!cr6.lt) goto loc_83915F20;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x83915f48
	goto loc_83915F48;
loc_83915F20:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x83915f30
	if (!cr6.lt) goto loc_83915F30;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x83915f48
	goto loc_83915F48;
loc_83915F30:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r6,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r5,r11,r10
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
loc_83915F48:
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x83915f58
	if (!cr6.eq) goto loc_83915F58;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x83915f5c
	goto loc_83915F5C;
loc_83915F58:
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
loc_83915F5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bdnz 0x83915f00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83915F00;
	// lbz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915f8c
	if (cr6.eq) goto loc_83915F8C;
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83915f8c
	if (!cr6.eq) goto loc_83915F8C;
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
loc_83915F8C:
	// lwz r11,5356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83915f9c
	if (!cr6.eq) goto loc_83915F9C;
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
loc_83915F9C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x83915FA4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83915fb4
	if (cr6.eq) goto loc_83915FB4;
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
loc_83915FB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83915FBC"))) PPC_WEAK_FUNC(sub_83915FBC);
PPC_FUNC_IMPL(__imp__sub_83915FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83915FC0"))) PPC_WEAK_FUNC(sub_83915FC0);
PPC_FUNC_IMPL(__imp__sub_83915FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83915FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,23768
	ctx.r10.s64 = ctx.r11.s64 + 23768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83912530
	ctx.lr = 0x83915FE0;
	sub_83912530(ctx, base);
	// addi r3,r29,2324
	ctx.r3.s64 = ctx.r29.s64 + 2324;
	// bl 0x83915aa8
	ctx.lr = 0x83915FE8;
	sub_83915AA8(ctx, base);
	// addi r28,r29,1632
	ctx.r28.s64 = ctx.r29.s64 + 1632;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,21
	ctx.r26.s64 = 21;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-16664
	ctx.r27.s64 = ctx.r11.s64 + -16664;
loc_83916000:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// stwu r27,-40(r28)
	ea = -40 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r28.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916030
	if (cr6.eq) goto loc_83916030;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83916030
	if (cr6.eq) goto loc_83916030;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x8391602C;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83916030:
	// stb r30,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r30.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83916050
	if (cr6.eq) goto loc_83916050;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x8391604C;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83916050:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x83916000
	if (!cr0.lt) goto loc_83916000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r29,732
	ctx.r31.s64 = ctx.r29.s64 + 732;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,732(r29)
	PPC_STORE_U32(ctx.r29.u32 + 732, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83916070;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83916098
	if (cr6.eq) goto loc_83916098;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83916094;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83916098:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r29,712
	ctx.r31.s64 = ctx.r29.s64 + 712;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 712, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839160B0;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839160d8
	if (cr6.eq) goto loc_839160D8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x839160D4;
	sub_8353F3B8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_839160D8:
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// bl 0x82a0dc70
	ctx.lr = 0x839160E0;
	sub_82A0DC70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831032a0
	ctx.lr = 0x839160E8;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839160F0"))) PPC_WEAK_FUNC(sub_839160F0);
PPC_FUNC_IMPL(__imp__sub_839160F0) {
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
	// bl 0x83915fc0
	ctx.lr = 0x83916110;
	sub_83915FC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916128
	if (cr6.eq) goto loc_83916128;
	// bl 0x82416268
	ctx.lr = 0x83916124;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83916128:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83916140"))) PPC_WEAK_FUNC(sub_83916140);
PPC_FUNC_IMPL(__imp__sub_83916140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83916148;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8391619c
	if (cr6.eq) goto loc_8391619C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83915a50
	ctx.lr = 0x83916184;
	sub_83915A50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x83916198;
	sub_838ADAB0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8391619C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839161B4"))) PPC_WEAK_FUNC(sub_839161B4);
PPC_FUNC_IMPL(__imp__sub_839161B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839161B8"))) PPC_WEAK_FUNC(sub_839161B8);
PPC_FUNC_IMPL(__imp__sub_839161B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839161C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8391af28
	ctx.lr = 0x839161D0;
	sub_8391AF28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// bl 0x8391b198
	ctx.lr = 0x839161EC;
	sub_8391B198(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8391af78
	ctx.lr = 0x839161F4;
	sub_8391AF78(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x8391afb8
	ctx.lr = 0x839161FC;
	sub_8391AFB8(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x8391b018
	ctx.lr = 0x83916204;
	sub_8391B018(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x8391b030
	ctx.lr = 0x8391620C;
	sub_8391B030(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x8391b048
	ctx.lr = 0x83916214;
	sub_8391B048(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x8391b0f0
	ctx.lr = 0x8391621C;
	sub_8391B0F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// bl 0x83916140
	ctx.lr = 0x83916234;
	sub_83916140(ctx, base);
	// addi r28,r31,332
	ctx.r28.s64 = ctx.r31.s64 + 332;
	// li r29,23
	ctx.r29.s64 = 23;
loc_8391623C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b068
	ctx.lr = 0x83916244;
	sub_8391B068(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bge 0x8391623c
	if (!cr0.lt) goto loc_8391623C;
	// addi r28,r31,908
	ctx.r28.s64 = ctx.r31.s64 + 908;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83916258:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b068
	ctx.lr = 0x83916260;
	sub_8391B068(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bge 0x83916258
	if (!cr0.lt) goto loc_83916258;
	// addi r29,r31,956
	ctx.r29.s64 = ctx.r31.s64 + 956;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83916274:
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r6,r11,27752
	ctx.r6.s64 = ctx.r11.s64 + 27752;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,44
	ctx.r3.s64 = ctx.r29.s64 + 44;
	// bl 0x823fca98
	ctx.lr = 0x8391628C;
	sub_823FCA98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8391b118
	ctx.lr = 0x83916294;
	sub_8391B118(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// bge 0x83916274
	if (!cr0.lt) goto loc_83916274;
	// addi r28,r31,1148
	ctx.r28.s64 = ctx.r31.s64 + 1148;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839162A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b160
	ctx.lr = 0x839162B0;
	sub_8391B160(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bge 0x839162a8
	if (!cr0.lt) goto loc_839162A8;
	// addi r28,r31,1180
	ctx.r28.s64 = ctx.r31.s64 + 1180;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839162C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b0a0
	ctx.lr = 0x839162CC;
	sub_8391B0A0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// bge 0x839162c4
	if (!cr0.lt) goto loc_839162C4;
	// addi r28,r31,1188
	ctx.r28.s64 = ctx.r31.s64 + 1188;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839162E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b0b8
	ctx.lr = 0x839162E8;
	sub_8391B0B8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bge 0x839162e0
	if (!cr0.lt) goto loc_839162E0;
	// addi r3,r31,1204
	ctx.r3.s64 = ctx.r31.s64 + 1204;
	// bl 0x839159e8
	ctx.lr = 0x839162FC;
	sub_839159E8(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,22
	ctx.r10.s64 = 22;
	// stfs f31,1356(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1356, temp.u32);
	// stfs f31,1360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// stfs f31,1364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1364, temp.u32);
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1352, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,1372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stfs f31,1376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// stfs f31,1380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// stfs f31,1384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// stfs f31,1388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// stfs f0,1392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// stfs f31,1396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// stfs f31,1400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// stfs f31,1404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1404, temp.u32);
	// stfs f31,1408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stfs f0,1412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
loc_83916350:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83916350
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83916350;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,1676
	ctx.r11.s64 = ctx.r31.s64 + 1676;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391636C:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f31,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391636c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391636C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,2832
	ctx.r11.s64 = ctx.r31.s64 + 2832;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,15
	ctx.r10.s64 = 15;
loc_83916388:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stb r30,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r30.u8);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// stb r30,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r30.u8);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r30,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r30.u32);
	// stb r30,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r30.u8);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r30,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r30.u32);
	// stb r30,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r30.u8);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// bdnz 0x83916388
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83916388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391c040
	ctx.lr = 0x839163E0;
	sub_8391C040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839163F0"))) PPC_WEAK_FUNC(sub_839163F0);
PPC_FUNC_IMPL(__imp__sub_839163F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839163F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,23660
	ctx.r4.s64 = ctx.r11.s64 + 23660;
	// bl 0x83103328
	ctx.lr = 0x8391640C;
	sub_83103328(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r24,r30,72
	ctx.r24.s64 = ctx.r30.s64 + 72;
	// addi r9,r10,23768
	ctx.r9.s64 = ctx.r10.s64 + 23768;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x82a0db20
	ctx.lr = 0x83916424;
	sub_82A0DB20(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r8,-22824
	ctx.r7.s64 = ctx.r8.s64 + -22824;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r31,716(r30)
	PPC_STORE_U8(ctx.r30.u32 + 716, ctx.r31.u8);
	// stw r31,720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 720, ctx.r31.u32);
	// addi r29,r30,752
	ctx.r29.s64 = ctx.r30.s64 + 752;
	// stw r7,712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 712, ctx.r7.u32);
	// addi r5,r6,-19152
	ctx.r5.s64 = ctx.r6.s64 + -19152;
	// stw r31,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r31.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r31,728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 728, ctx.r31.u32);
	// addi r28,r30,712
	ctx.r28.s64 = ctx.r30.s64 + 712;
	// stb r31,736(r30)
	PPC_STORE_U8(ctx.r30.u32 + 736, ctx.r31.u8);
	// addi r27,r30,732
	ctx.r27.s64 = ctx.r30.s64 + 732;
	// stw r31,740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 740, ctx.r31.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r5,732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 732, ctx.r5.u32);
	// stw r31,744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 744, ctx.r31.u32);
	// addi r9,r9,7056
	ctx.r9.s64 = ctx.r9.s64 + 7056;
	// stw r31,748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 748, ctx.r31.u32);
loc_8391647C:
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x8391647c
	if (!cr0.lt) goto loc_8391647C;
	// stw r31,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r31.u32);
	// addi r3,r30,1868
	ctx.r3.s64 = ctx.r30.s64 + 1868;
	// stw r31,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r31.u32);
	// stw r31,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r31.u32);
	// stw r31,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r31.u32);
	// stw r31,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r31.u32);
	// stw r31,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r31.u32);
	// stw r31,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r31.u32);
	// stb r31,1676(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1676, ctx.r31.u8);
	// stb r31,1677(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1677, ctx.r31.u8);
	// stb r31,1678(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1678, ctx.r31.u8);
	// stb r31,1679(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1679, ctx.r31.u8);
	// stw r31,1680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1680, ctx.r31.u32);
	// bl 0x839285a8
	ctx.lr = 0x839164E8;
	sub_839285A8(ctx, base);
	// addi r3,r30,2324
	ctx.r3.s64 = ctx.r30.s64 + 2324;
	// bl 0x839161b8
	ctx.lr = 0x839164F0;
	sub_839161B8(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,6000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6000, ctx.r31.u32);
	// addi r3,r30,1684
	ctx.r3.s64 = ctx.r30.s64 + 1684;
	// stb r31,6004(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6004, ctx.r31.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x83916508;
	sub_831CDCF0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1768
	ctx.r3.s64 = ctx.r30.s64 + 1768;
	// bl 0x831cdcf0
	ctx.lr = 0x83916518;
	sub_831CDCF0(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1816
	ctx.r3.s64 = ctx.r30.s64 + 1816;
	// bl 0x831cdcf0
	ctx.lr = 0x83916528;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22560
	ctx.lr = 0x83916530;
	sub_82A22560(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x8391653C;
	sub_82A22530(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x83916548;
	sub_82A22530(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x83916554;
	sub_82A22530(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b4670
	ctx.lr = 0x8391655C;
	sub_825B4670(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825bf558
	ctx.lr = 0x83916564;
	sub_825BF558(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22530
	ctx.lr = 0x83916570;
	sub_82A22530(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r26,r10,7000
	ctx.r26.s64 = ctx.r10.s64 + 7000;
loc_83916580:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x831d0b08
	ctx.lr = 0x839165A0;
	sub_831D0B08(ctx, base);
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839165ec
	if (!cr6.eq) goto loc_839165EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839165C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839165D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x828c6780
	ctx.lr = 0x839165E8;
	sub_828C6780(ctx, base);
	// stb r25,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r25.u8);
loc_839165EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// blt cr6,0x83916580
	if (cr6.lt) goto loc_83916580;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a125c8
	ctx.lr = 0x83916608;
	sub_82A125C8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r30,1664
	ctx.r11.s64 = ctx.r30.s64 + 1664;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
loc_83916618:
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83916618
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83916618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83916630"))) PPC_WEAK_FUNC(sub_83916630);
PPC_FUNC_IMPL(__imp__sub_83916630) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,6008
	ctx.r4.s64 = 6008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83916654;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83916670
	if (cr6.eq) goto loc_83916670;
	// bl 0x839163f0
	ctx.lr = 0x83916660;
	sub_839163F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83916670:
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

__attribute__((alias("__imp__sub_83916684"))) PPC_WEAK_FUNC(sub_83916684);
PPC_FUNC_IMPL(__imp__sub_83916684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83916688"))) PPC_WEAK_FUNC(sub_83916688);
PPC_FUNC_IMPL(__imp__sub_83916688) {
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
	// bl 0x831cdac4
	ctx.lr = 0x83916690;
	__savegprlr_19(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,736(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 736);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r20,r3,732
	ctx.r20.s64 = ctx.r3.s64 + 732;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839166b4
	if (!cr6.eq) goto loc_839166B4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825bf558
	ctx.lr = 0x839166B4;
	sub_825BF558(ctx, base);
loc_839166B4:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839166d0
	if (!cr6.eq) goto loc_839166D0;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// stw r10,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r10.u32);
loc_839166D0:
	// lwz r24,16(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// bl 0x831156e8
	ctx.lr = 0x839166D8;
	sub_831156E8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r31,2324
	ctx.r3.s64 = ctx.r31.s64 + 2324;
	// addi r21,r31,2632
	ctx.r21.s64 = ctx.r31.s64 + 2632;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addis r25,r9,5
	ctx.r25.s64 = ctx.r9.s64 + 327680;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r25,r25,14904
	ctx.r25.s64 = ctx.r25.s64 + 14904;
	// lwz r23,192(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stb r29,2632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2632, ctx.r29.u8);
	// bl 0x8391b400
	ctx.lr = 0x83916708;
	sub_8391B400(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83916724
	if (!cr6.eq) goto loc_83916724;
	// lbz r10,5973(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5973);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83916730
	if (cr6.eq) goto loc_83916730;
loc_83916724:
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83916734
	if (!cr6.eq) goto loc_83916734;
loc_83916730:
	// stb r29,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r29.u8);
loc_83916734:
	// li r19,2
	ctx.r19.s64 = 2;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// bl 0x830ff290
	ctx.lr = 0x83916740;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x83916744;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839167e8
	if (cr6.eq) goto loc_839167E8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
loc_83916758:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83916768
	if (cr6.lt) goto loc_83916768;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83916768:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839167ac
	if (cr6.eq) goto loc_839167AC;
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83916794;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x839167ac
	if (!cr6.eq) goto loc_839167AC;
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839167bc
	if (cr6.eq) goto loc_839167BC;
loc_839167AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83916758
	if (cr6.lt) goto loc_83916758;
	// b 0x839167e0
	goto loc_839167E0;
loc_839167BC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839167d0
	if (!cr6.eq) goto loc_839167D0;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// b 0x839167e0
	goto loc_839167E0;
loc_839167D0:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r22,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r22.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bne cr6,0x839167e8
	if (!cr6.eq) goto loc_839167E8;
loc_839167E0:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
loc_839167E8:
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
loc_839167FC:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a33718
	ctx.lr = 0x8391680C;
	sub_82A33718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916920
	if (cr6.eq) goto loc_83916920;
	// bl 0x830ff290
	ctx.lr = 0x8391681C;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x83916820;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916834
	if (cr6.eq) goto loc_83916834;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, xer);
	// bne cr6,0x83916920
	if (!cr6.eq) goto loc_83916920;
loc_83916834:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_83916838:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8391683C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a37978
	ctx.lr = 0x83916850;
	sub_82A37978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a375f8
	ctx.lr = 0x83916858;
	sub_82A375F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916900
	if (cr6.eq) goto loc_83916900;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83916900
	if (!cr6.eq) goto loc_83916900;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x83123ba8
	ctx.lr = 0x83916894;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_839168A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839168a8
	if (!cr6.eq) goto loc_839168A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839168CC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8291fdc8
	ctx.lr = 0x839168D8;
	sub_8291FDC8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839168f4
	if (cr6.lt) goto loc_839168F4;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839168F4;
	sub_825952B8(ctx, base);
loc_839168F4:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
loc_83916900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a37630
	ctx.lr = 0x83916908;
	sub_82A37630(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x8391683c
	if (cr6.lt) goto loc_8391683C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// blt cr6,0x83916838
	if (cr6.lt) goto loc_83916838;
loc_83916920:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839167fc
	if (cr6.lt) goto loc_839167FC;
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,28
	ctx.r11.s64 = 28;
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// divw. r31,r10,r11
	ctx.r31.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83916abc
	if (cr0.eq) goto loc_83916ABC;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// ori r4,r4,303
	ctx.r4.u64 = ctx.r4.u64 | 303;
	// bl 0x82d04220
	ctx.lr = 0x83916960;
	sub_82D04220(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,90
	ctx.r4.u64 = ctx.r4.u64 | 90;
	// bl 0x82d04220
	ctx.lr = 0x8391697C;
	sub_82D04220(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x839169c0
	if (!cr6.eq) goto loc_839169C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r31,r11,23680
	ctx.r31.s64 = ctx.r11.s64 + 23680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x825a1eb8
	ctx.lr = 0x8391699C;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x839169B0;
	sub_825A1DA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x839169C0;
	sub_825A1EB8(ctx, base);
loc_839169C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839169d4
	if (!cr6.lt) goto loc_839169D4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_839169D4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839169e8
	if (!cr6.lt) goto loc_839169E8;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_839169E8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r31,r11,17680
	ctx.r31.s64 = ctx.r11.s64 + 17680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x839169FC;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
loc_83916A10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83916a10
	if (!cr6.eq) goto loc_83916A10;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83916A38;
	sub_8259CC28(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// bl 0x8291fdc8
	ctx.lr = 0x83916A44;
	sub_8291FDC8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83916a60
	if (cr6.lt) goto loc_83916A60;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x83916A60;
	sub_825952B8(ctx, base);
loc_83916A60:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// blt cr6,0x83916a88
	if (cr6.lt) goto loc_83916A88;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83916A88;
	sub_825952B8(ctx, base);
loc_83916A88:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// blt cr6,0x83916ab0
	if (cr6.lt) goto loc_83916AB0;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x83916AB0;
	sub_825952B8(ctx, base);
loc_83916AB0:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
loc_83916ABC:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916b24
	if (cr6.eq) goto loc_83916B24;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_83916AD4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83916ad4
	if (!cr0.eq) goto loc_83916AD4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83916b20
	if (!cr6.eq) goto loc_83916B20;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x83916B00;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11720
	ctx.r5.s64 = ctx.r11.s64 + -11720;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83916B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83916B20:
	// stw r29,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r29.u32);
loc_83916B24:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83916b50
	if (cr6.eq) goto loc_83916B50;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838adab0
	ctx.lr = 0x83916B40;
	sub_838ADAB0(ctx, base);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x83916B50;
	sub_825952B8(ctx, base);
loc_83916B50:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83916B58"))) PPC_WEAK_FUNC(sub_83916B58);
PPC_FUNC_IMPL(__imp__sub_83916B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83916B60;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83916B6C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83916f7c
	if (cr6.eq) goto loc_83916F7C;
	// addi r17,r31,72
	ctx.r17.s64 = ctx.r31.s64 + 72;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a12748
	ctx.lr = 0x83916B80;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r26,104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r24,84(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r21,292(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r18,412(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83916f74
	if (cr6.eq) goto loc_83916F74;
	// lbz r11,1677(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1677);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916c08
	if (cr6.eq) goto loc_83916C08;
	// lbz r11,1760(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1760);
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
	// beq cr6,0x83916c08
	if (cr6.eq) goto loc_83916C08;
	// lwz r11,1688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916c08
	if (!cr6.eq) goto loc_83916C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83912950
	ctx.lr = 0x83916C08;
	sub_83912950(ctx, base);
loc_83916C08:
	// addi r20,r31,712
	ctx.r20.s64 = ctx.r31.s64 + 712;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825b46f0
	ctx.lr = 0x83916C14;
	sub_825B46F0(ctx, base);
	// lwz r11,4460(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4460);
	// li r19,1
	ctx.r19.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83916c5c
	if (cr6.eq) goto loc_83916C5C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83916c60
	if (cr6.eq) goto loc_83916C60;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a52c50
	ctx.lr = 0x83916C4C;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916c74
	if (cr6.eq) goto loc_83916C74;
	// b 0x83916c6c
	goto loc_83916C6C;
loc_83916C5C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83916C60:
	// lwz r11,4548(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4548);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83916c74
	if (!cr6.eq) goto loc_83916C74;
loc_83916C6C:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83916C74:
	// lbz r11,5973(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5973);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916c8c
	if (!cr6.eq) goto loc_83916C8C;
	// lbz r11,1679(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1679);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916c98
	if (cr6.eq) goto loc_83916C98;
loc_83916C8C:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
loc_83916C98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stb r25,5974(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5974, ctx.r25.u8);
	// stb r29,192(r30)
	PPC_STORE_U8(ctx.r30.u32 + 192, ctx.r29.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916cb4
	if (!cr6.eq) goto loc_83916CB4;
	// stb r22,193(r30)
	PPC_STORE_U8(ctx.r30.u32 + 193, ctx.r22.u8);
	// b 0x83916cb8
	goto loc_83916CB8;
loc_83916CB4:
	// stb r19,193(r30)
	PPC_STORE_U8(ctx.r30.u32 + 193, ctx.r19.u8);
loc_83916CB8:
	// lbz r11,4498(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4498);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916cd8
	if (cr6.eq) goto loc_83916CD8;
	// lbz r11,4499(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4499);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916cd8
	if (cr6.eq) goto loc_83916CD8;
	// stb r22,5972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5972, ctx.r22.u8);
	// b 0x83916cdc
	goto loc_83916CDC;
loc_83916CD8:
	// stb r19,5972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5972, ctx.r19.u8);
loc_83916CDC:
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2460, ctx.r11.u8);
	// lfs f0,72(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2464, temp.u32);
	// addi r11,r31,2460
	ctx.r11.s64 = ctx.r31.s64 + 2460;
	// lfs f13,76(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// lfs f12,80(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2472(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,2476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2476, temp.u32);
	// bl 0x83915b90
	ctx.lr = 0x83916D1C;
	sub_83915B90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83912d48
	ctx.lr = 0x83916D2C;
	sub_83912D48(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83912b58
	ctx.lr = 0x83916D44;
	sub_83912B58(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83913968
	ctx.lr = 0x83916D5C;
	sub_83913968(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83916688
	ctx.lr = 0x83916D70;
	sub_83916688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83913140
	ctx.lr = 0x83916D78;
	sub_83913140(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839131e8
	ctx.lr = 0x83916D84;
	sub_839131E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839134a8
	ctx.lr = 0x83916D90;
	sub_839134A8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83913590
	ctx.lr = 0x83916DA0;
	sub_83913590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839129b0
	ctx.lr = 0x83916DAC;
	sub_839129B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914fb8
	ctx.lr = 0x83916DB8;
	sub_83914FB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83915310
	ctx.lr = 0x83916DC8;
	sub_83915310(ctx, base);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83916DCC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83913d00
	ctx.lr = 0x83916DE4;
	sub_83913D00(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914630
	ctx.lr = 0x83916DF4;
	sub_83914630(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914878
	ctx.lr = 0x83916E08;
	sub_83914878(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914af0
	ctx.lr = 0x83916E18;
	sub_83914AF0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914de0
	ctx.lr = 0x83916E2C;
	sub_83914DE0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83914c38
	ctx.lr = 0x83916E40;
	sub_83914C38(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83913f70
	ctx.lr = 0x83916E5C;
	sub_83913F70(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x83916dcc
	if (cr6.lt) goto loc_83916DCC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839132a8
	ctx.lr = 0x83916E78;
	sub_839132A8(ctx, base);
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// addi r3,r31,3676
	ctx.r3.s64 = ctx.r31.s64 + 3676;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x83916E88;
	sub_831CE980(ctx, base);
	// addi r3,r31,2324
	ctx.r3.s64 = ctx.r31.s64 + 2324;
	// bl 0x8391b400
	ctx.lr = 0x83916E90;
	sub_8391B400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916f08
	if (!cr6.eq) goto loc_83916F08;
	// bl 0x830ff290
	ctx.lr = 0x83916EA0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83916EA4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x83916f08
	if (cr6.eq) goto loc_83916F08;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r29,24
	ctx.r29.s64 = 24;
loc_83916EB4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// subfc r10,r29,r11
	xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r7,r29,r11
	xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r29.s64;
	// and r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ctx.r11.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// and r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ctx.r11.u64;
	// mulli r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 * 84;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r4,r11,460
	ctx.r4.s64 = ctx.r11.s64 + 460;
	// mulli r10,r9,84
	ctx.r10.s64 = ctx.r9.s64 * 84;
	// stb r22,460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 460, ctx.r22.u8);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r11,460
	ctx.r3.s64 = ctx.r11.s64 + 460;
	// bl 0x825b2568
	ctx.lr = 0x83916EF8;
	sub_825B2568(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83916eb4
	if (cr6.lt) goto loc_83916EB4;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_83916F08:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916f4c
	if (!cr6.eq) goto loc_83916F4C;
	// lbz r11,4502(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4502);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916f38
	if (!cr6.eq) goto loc_83916F38;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a52c70
	ctx.lr = 0x83916F28;
	sub_82A52C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x83916f3c
	if (cr6.eq) goto loc_83916F3C;
loc_83916F38:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83916F3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916f4c
	if (!cr6.eq) goto loc_83916F4C;
	// stb r22,3292(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3292, ctx.r22.u8);
loc_83916F4C:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x83916F54;
	sub_82A0CC80(ctx, base);
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916f7c
	if (cr6.eq) goto loc_83916F7C;
	// lwz r3,8(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x83916F68;
	sub_825B33F0(ctx, base);
	// stw r22,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83916F74:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x83916F7C;
	sub_82A0CC80(ctx, base);
loc_83916F7C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83916F84"))) PPC_WEAK_FUNC(sub_83916F84);
PPC_FUNC_IMPL(__imp__sub_83916F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83916F88"))) PPC_WEAK_FUNC(sub_83916F88);
PPC_FUNC_IMPL(__imp__sub_83916F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83916F90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839172dc
	if (cr6.eq) goto loc_839172DC;
	// bl 0x83916b58
	ctx.lr = 0x83916FB0;
	sub_83916B58(ctx, base);
	// lbz r11,716(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 716);
	// addi r23,r27,712
	ctx.r23.s64 = ctx.r27.s64 + 712;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916fc8
	if (!cr6.eq) goto loc_83916FC8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825b4670
	ctx.lr = 0x83916FC8;
	sub_825B4670(ctx, base);
loc_83916FC8:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83916fe4
	if (!cr6.eq) goto loc_83916FE4;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r10.u32);
loc_83916FE4:
	// lbz r11,1676(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1676);
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83916ffc
	if (cr6.eq) goto loc_83916FFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83912768
	ctx.lr = 0x83916FFC;
	sub_83912768(ctx, base);
loc_83916FFC:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391705c
	if (cr6.eq) goto loc_8391705C;
	// bl 0x82a1aaa8
	ctx.lr = 0x83917010;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391703c
	if (cr6.eq) goto loc_8391703C;
	// bl 0x83820e58
	ctx.lr = 0x83917020;
	sub_83820E58(ctx, base);
	// bl 0x83574ae0
	ctx.lr = 0x83917024;
	sub_83574AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391705c
	if (!cr6.eq) goto loc_8391705C;
	// bl 0x83820e58
	ctx.lr = 0x83917034;
	sub_83820E58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83917058
	goto loc_83917058;
loc_8391703C:
	// bl 0x83820e58
	ctx.lr = 0x83917040;
	sub_83820E58(ctx, base);
	// bl 0x83574ae0
	ctx.lr = 0x83917044;
	sub_83574AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8391705c
	if (!cr6.eq) goto loc_8391705C;
	// bl 0x83820e58
	ctx.lr = 0x83917054;
	sub_83820E58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_83917058:
	// bl 0x83994450
	ctx.lr = 0x8391705C;
	sub_83994450(ctx, base);
loc_8391705C:
	// lwz r3,1648(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1648);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917078
	if (cr6.eq) goto loc_83917078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83917078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83917078:
	// addi r31,r27,1816
	ctx.r31.s64 = ctx.r27.s64 + 1816;
	// li r30,13
	ctx.r30.s64 = 13;
loc_83917080:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917090
	if (cr6.eq) goto loc_83917090;
	// bl 0x83928fa8
	ctx.lr = 0x83917090;
	sub_83928FA8(ctx, base);
loc_83917090:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83917080
	if (!cr0.eq) goto loc_83917080;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r27,1684
	ctx.r31.s64 = ctx.r27.s64 + 1684;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_839170A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839170f4
	if (cr6.eq) goto loc_839170F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839170C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83917128
	if (!cr6.eq) goto loc_83917128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917128
	if (cr6.eq) goto loc_83917128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839170EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x83917128
	goto loc_83917128;
loc_839170F4:
	// addi r30,r27,2324
	ctx.r30.s64 = ctx.r27.s64 + 2324;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8392b990
	ctx.lr = 0x83917108;
	sub_8392B990(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917128
	if (cr6.eq) goto loc_83917128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r27,1868
	ctx.r4.s64 = ctx.r27.s64 + 1868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392b5c0
	ctx.lr = 0x83917124;
	sub_8392B5C0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83917128:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,21
	cr6.compare<uint32_t>(ctx.r29.u32, 21, xer);
	// blt cr6,0x839170a8
	if (cr6.lt) goto loc_839170A8;
	// lwz r11,1652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1652);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391717c
	if (cr6.eq) goto loc_8391717C;
	// bl 0x83543988
	ctx.lr = 0x8391714C;
	sub_83543988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839171bc
	if (!cr6.eq) goto loc_839171BC;
	// lwz r3,1652(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1652);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839171bc
	if (cr6.eq) goto loc_839171BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83917174;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,1652(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1652, ctx.r25.u32);
	// b 0x839171bc
	goto loc_839171BC;
loc_8391717C:
	// bl 0x83543988
	ctx.lr = 0x83917180;
	sub_83543988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839171bc
	if (cr6.eq) goto loc_839171BC;
	// bl 0x831021a0
	ctx.lr = 0x83917190;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x83917198;
	sub_82DA45F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r27,1868
	ctx.r3.s64 = ctx.r27.s64 + 1868;
	// lwz r4,140(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// bl 0x8392cb78
	ctx.lr = 0x839171A8;
	sub_8392CB78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1652(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1652, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x839171BC;
	sub_83103100(ctx, base);
loc_839171BC:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r26,r27,1768
	ctx.r26.s64 = ctx.r27.s64 + 1768;
loc_839171C4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_839171CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917218
	if (cr6.eq) goto loc_83917218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839171E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83917254
	if (!cr6.eq) goto loc_83917254;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917254
	if (cr6.eq) goto loc_83917254;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83917210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x83917254
	goto loc_83917254;
loc_83917218:
	// addi r31,r27,2324
	ctx.r31.s64 = ctx.r27.s64 + 2324;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8392bc10
	ctx.lr = 0x83917230;
	sub_8392BC10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917254
	if (cr6.eq) goto loc_83917254;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r27,1868
	ctx.r5.s64 = ctx.r27.s64 + 1868;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392b8b0
	ctx.lr = 0x83917250;
	sub_8392B8B0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_83917254:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x839171cc
	if (cr6.lt) goto loc_839171CC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x839171c4
	if (cr6.lt) goto loc_839171C4;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839172dc
	if (cr6.eq) goto loc_839172DC;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8391728C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8391728c
	if (!cr0.eq) goto loc_8391728C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839172d8
	if (!cr6.eq) goto loc_839172D8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x839172B8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12704
	ctx.r5.s64 = ctx.r11.s64 + 12704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839172D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839172D8:
	// stw r25,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r25.u32);
loc_839172DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839172E8"))) PPC_WEAK_FUNC(sub_839172E8);
PPC_FUNC_IMPL(__imp__sub_839172E8) {
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
	// lwz r11,1656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8391735c
	if (cr6.gt) goto loc_8391735C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83917324
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83917324;
	// bdzf 4*cr6+eq,0x83917330
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83917330;
	// bne cr6,0x8391733c
	if (!cr6.eq) goto loc_8391733C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83917358
	goto loc_83917358;
loc_83917324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839123d8
	ctx.lr = 0x8391732C;
	sub_839123D8(ctx, base);
	// b 0x83917344
	goto loc_83917344;
loc_83917330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83916f88
	ctx.lr = 0x83917338;
	sub_83916F88(ctx, base);
	// b 0x83917344
	goto loc_83917344;
loc_8391733C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83912530
	ctx.lr = 0x83917344;
	sub_83912530(ctx, base);
loc_83917344:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391735c
	if (cr6.eq) goto loc_8391735C;
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83917358:
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
loc_8391735C:
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

__attribute__((alias("__imp__sub_83917370"))) PPC_WEAK_FUNC(sub_83917370);
PPC_FUNC_IMPL(__imp__sub_83917370) {
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
	// bl 0x831156e8
	ctx.lr = 0x8391738C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839173b4
	if (cr6.eq) goto loc_839173B4;
	// bl 0x831156e8
	ctx.lr = 0x8391739C;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312c6f0
	ctx.lr = 0x839173A8;
	sub_8312C6F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9b0
	ctx.lr = 0x839173B4;
	sub_8312B9B0(ctx, base);
loc_839173B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103260
	ctx.lr = 0x839173BC;
	sub_83103260(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839173D4"))) PPC_WEAK_FUNC(sub_839173D4);
PPC_FUNC_IMPL(__imp__sub_839173D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839173D8"))) PPC_WEAK_FUNC(sub_839173D8);
PPC_FUNC_IMPL(__imp__sub_839173D8) {
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
	ctx.lr = 0x839173F8;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391743c
	if (cr6.eq) goto loc_8391743C;
	// bl 0x831156e8
	ctx.lr = 0x83917408;
	sub_831156E8(ctx, base);
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lbz r9,344(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 344);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83917444
	if (!cr6.eq) goto loc_83917444;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// lbz r4,345(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// bl 0x8312d788
	ctx.lr = 0x83917434;
	sub_8312D788(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x82e744f8
	ctx.lr = 0x8391743C;
	sub_82E744F8(ctx, base);
loc_8391743C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83917448
	goto loc_83917448;
loc_83917444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83917448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917460"))) PPC_WEAK_FUNC(sub_83917460);
PPC_FUNC_IMPL(__imp__sub_83917460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83917468;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x83917478;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839174ec
	if (cr6.eq) goto loc_839174EC;
	// addi r11,r30,22
	ctx.r11.s64 = ctx.r30.s64 + 22;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839174ec
	if (cr6.eq) goto loc_839174EC;
	// bl 0x82e744f8
	ctx.lr = 0x839174A0;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x839174B4;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b66948
	ctx.lr = 0x839174C0;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x839174dc
	if (cr6.eq) goto loc_839174DC;
	// bl 0x8259b510
	ctx.lr = 0x839174DC;
	sub_8259B510(ctx, base);
loc_839174DC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839174f0
	if (!cr6.eq) goto loc_839174F0;
loc_839174EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839174F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839174F8"))) PPC_WEAK_FUNC(sub_839174F8);
PPC_FUNC_IMPL(__imp__sub_839174F8) {
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
	// bl 0x82dad2e0
	ctx.lr = 0x83917514;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917580
	if (cr6.eq) goto loc_83917580;
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917580
	if (cr6.eq) goto loc_83917580;
	// bl 0x82e744f8
	ctx.lr = 0x83917534;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x83917548;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b66948
	ctx.lr = 0x83917554;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x83917570
	if (cr6.eq) goto loc_83917570;
	// bl 0x8259b510
	ctx.lr = 0x83917570;
	sub_8259B510(ctx, base);
loc_83917570:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83917584
	if (!cr6.eq) goto loc_83917584;
loc_83917580:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83917584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391759C"))) PPC_WEAK_FUNC(sub_8391759C);
PPC_FUNC_IMPL(__imp__sub_8391759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839175A0"))) PPC_WEAK_FUNC(sub_839175A0);
PPC_FUNC_IMPL(__imp__sub_839175A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839175A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x839175B4;
	sub_83103328(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r9,r11,23976
	ctx.r9.s64 = ctx.r11.s64 + 23976;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r25,172
	ctx.r11.s64 = ctx.r25.s64 + 172;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r28,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r28.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839175D4:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stwu r28,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839175d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839175D4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,352(r25)
	PPC_STORE_U32(ctx.r25.u32 + 352, ctx.r28.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,356(r25)
	PPC_STORE_U32(ctx.r25.u32 + 356, ctx.r28.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r24,r25,352
	ctx.r24.s64 = ctx.r25.s64 + 352;
	// addi r20,r25,84
	ctx.r20.s64 = ctx.r25.s64 + 84;
	// addi r27,r25,180
	ctx.r27.s64 = ctx.r25.s64 + 180;
	// li r23,22
	ctx.r23.s64 = 22;
	// li r19,29
	ctx.r19.s64 = 29;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r22,r11,272
	ctx.r22.s64 = ctx.r11.s64 + 272;
	// addi r26,r10,17524
	ctx.r26.s64 = ctx.r10.s64 + 17524;
	// addi r21,r9,272
	ctx.r21.s64 = ctx.r9.s64 + 272;
loc_83917618:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391762C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917644
	if (cr6.eq) goto loc_83917644;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82e816d8
	ctx.lr = 0x8391763C;
	sub_82E816D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83917648
	goto loc_83917648;
loc_83917644:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83917648:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8391765C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917688
	if (cr6.eq) goto loc_83917688;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83917678;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// b 0x8391768c
	goto loc_8391768C;
loc_83917688:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8391768C:
	// stw r30,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x839176f0
	if (cr6.eq) goto loc_839176F0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839176dc
	if (cr6.eq) goto loc_839176DC;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x839176B4;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839176dc
	if (cr6.lt) goto loc_839176DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8257fb60
	ctx.lr = 0x839176D8;
	sub_8257FB60(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_839176DC:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839176ec
	if (cr6.eq) goto loc_839176EC;
	// bl 0x8259b510
	ctx.lr = 0x839176EC;
	sub_8259B510(ctx, base);
loc_839176EC:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_839176F0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83917700
	if (cr6.eq) goto loc_83917700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x83917700;
	sub_8259B510(ctx, base);
loc_83917700:
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83917714;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391772c
	if (cr6.eq) goto loc_8391772C;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82e7d7e0
	ctx.lr = 0x83917724;
	sub_82E7D7E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83917730
	goto loc_83917730;
loc_8391772C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83917730:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x83917744;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917770
	if (cr6.eq) goto loc_83917770;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83917760;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// b 0x83917774
	goto loc_83917774;
loc_83917770:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83917774:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x839177d8
	if (cr6.eq) goto loc_839177D8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839177c4
	if (cr6.eq) goto loc_839177C4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8391779C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839177c4
	if (cr6.lt) goto loc_839177C4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x839177C0;
	sub_8257FB60(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_839177C4:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839177d4
	if (cr6.eq) goto loc_839177D4;
	// bl 0x8259b510
	ctx.lr = 0x839177D4;
	sub_8259B510(ctx, base);
loc_839177D4:
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
loc_839177D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839177e8
	if (cr6.eq) goto loc_839177E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x839177E8;
	sub_8259B510(ctx, base);
loc_839177E8:
	// stwu r28,4(r20)
	ea = 4 + ctx.r20.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r20.u32 = ea;
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r28,360(r25)
	PPC_STORE_U32(ctx.r25.u32 + 360, ctx.r28.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x83917618
	if (!cr0.eq) goto loc_83917618;
	// bl 0x82dad2e0
	ctx.lr = 0x83917800;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917838
	if (cr6.eq) goto loc_83917838;
	// bl 0x831156e8
	ctx.lr = 0x83917810;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x82b85ff8
	ctx.lr = 0x83917820;
	sub_82B85FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x83917830
	if (!cr6.lt) goto loc_83917830;
	// li r4,2
	ctx.r4.s64 = 2;
loc_83917830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b9e8
	ctx.lr = 0x83917838;
	sub_8312B9E8(ctx, base);
loc_83917838:
	// bl 0x830fe8a0
	ctx.lr = 0x8391783C;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x83917840;
	sub_835240D8(ctx, base);
	// std r3,80(r25)
	PPC_STORE_U64(ctx.r25.u32 + 80, ctx.r3.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83917850"))) PPC_WEAK_FUNC(sub_83917850);
PPC_FUNC_IMPL(__imp__sub_83917850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83917858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,23976
	ctx.r10.s64 = ctx.r11.s64 + 23976;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391787c
	if (cr6.eq) goto loc_8391787C;
	// bl 0x8259b510
	ctx.lr = 0x8391787C;
	sub_8259B510(ctx, base);
loc_8391787C:
	// addi r11,r29,352
	ctx.r11.s64 = ctx.r29.s64 + 352;
	// li r30,21
	ctx.r30.s64 = 21;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_83917888:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917898
	if (cr6.eq) goto loc_83917898;
	// bl 0x8259b510
	ctx.lr = 0x83917898;
	sub_8259B510(ctx, base);
loc_83917898:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83917888
	if (!cr0.lt) goto loc_83917888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831032a0
	ctx.lr = 0x839178A8;
	sub_831032A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839178B0"))) PPC_WEAK_FUNC(sub_839178B0);
PPC_FUNC_IMPL(__imp__sub_839178B0) {
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
	// bl 0x83917850
	ctx.lr = 0x839178D0;
	sub_83917850(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839178e8
	if (cr6.eq) goto loc_839178E8;
	// bl 0x82416268
	ctx.lr = 0x839178E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839178E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917900"))) PPC_WEAK_FUNC(sub_83917900);
PPC_FUNC_IMPL(__imp__sub_83917900) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83917934;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391794c
	if (cr6.eq) goto loc_8391794C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839175a0
	ctx.lr = 0x83917948;
	sub_839175A0(ctx, base);
	// b 0x83917950
	goto loc_83917950;
loc_8391794C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83917950:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917968"))) PPC_WEAK_FUNC(sub_83917968);
PPC_FUNC_IMPL(__imp__sub_83917968) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e82a38
	ctx.lr = 0x83917988;
	sub_82E82A38(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8391798C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917a84
	if (cr6.eq) goto loc_83917A84;
	// bl 0x82dad2e0
	ctx.lr = 0x8391799C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917a84
	if (cr6.eq) goto loc_83917A84;
	// bl 0x831156e8
	ctx.lr = 0x839179A8;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9c0
	ctx.lr = 0x839179B4;
	sub_8312B9C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917a84
	if (cr6.eq) goto loc_83917A84;
	// bl 0x82dad2e0
	ctx.lr = 0x839179C4;
	sub_82DAD2E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r31,60(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82e81630
	ctx.lr = 0x839179D8;
	sub_82E81630(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312d828
	ctx.lr = 0x839179E4;
	sub_8312D828(ctx, base);
	// stw r3,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r3.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x839179EC;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83917a00
	if (!cr6.eq) goto loc_83917A00;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83917a0c
	goto loc_83917A0C;
loc_83917A00:
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x82e74498
	ctx.lr = 0x83917A08;
	sub_82E74498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83917A0C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917a24
	if (cr6.eq) goto loc_83917A24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312b9c8
	ctx.lr = 0x83917A24;
	sub_8312B9C8(ctx, base);
loc_83917A24:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18704
	ctx.r8.s64 = ctx.r11.s64 + 18704;
	// addi r7,r10,18692
	ctx.r7.s64 = ctx.r10.s64 + 18692;
	// addi r6,r9,18688
	ctx.r6.s64 = ctx.r9.s64 + 18688;
	// stw r8,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r8.u32);
	// stw r7,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r7.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r6,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x83917A50;
	sub_82B6A590(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// addi r11,r5,18784
	ctx.r11.s64 = ctx.r5.s64 + 18784;
	// addi r9,r3,18768
	ctx.r9.s64 = ctx.r3.s64 + 18768;
	// addi r10,r4,18772
	ctx.r10.s64 = ctx.r4.s64 + 18772;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// bl 0x82b6a590
	ctx.lr = 0x83917A7C;
	sub_82B6A590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83917ab4
	goto loc_83917AB4;
loc_83917A84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,18784
	ctx.r8.s64 = ctx.r11.s64 + 18784;
	// addi r7,r10,18772
	ctx.r7.s64 = ctx.r10.s64 + 18772;
	// addi r6,r9,18768
	ctx.r6.s64 = ctx.r9.s64 + 18768;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// bl 0x82b6a590
	ctx.lr = 0x83917AB0;
	sub_82B6A590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83917AB4:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917ACC"))) PPC_WEAK_FUNC(sub_83917ACC);
PPC_FUNC_IMPL(__imp__sub_83917ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83917AD0"))) PPC_WEAK_FUNC(sub_83917AD0);
PPC_FUNC_IMPL(__imp__sub_83917AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83917AD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83917b1c
	if (cr6.lt) goto loc_83917B1C;
	// bne cr6,0x83917b34
	if (!cr6.eq) goto loc_83917B34;
	// bl 0x830fe8a0
	ctx.lr = 0x83917AFC;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x83917B00;
	sub_835240D8(ctx, base);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,500
	cr6.compare<uint64_t>(ctx.r10.u64, 500, xer);
	// blt cr6,0x83917b34
	if (cr6.lt) goto loc_83917B34;
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x83917b34
	goto loc_83917B34;
loc_83917B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83917968
	ctx.lr = 0x83917B24;
	sub_83917968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917b34
	if (cr6.eq) goto loc_83917B34;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
loc_83917B34:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
loc_83917B3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83917b6c
	if (cr6.lt) goto loc_83917B6C;
	// bne cr6,0x83917b88
	if (!cr6.eq) goto loc_83917B88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839173d8
	ctx.lr = 0x83917B58;
	sub_839173D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917b88
	if (cr6.eq) goto loc_83917B88;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// b 0x83917b88
	goto loc_83917B88;
loc_83917B6C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83917460
	ctx.lr = 0x83917B78;
	sub_83917460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917b88
	if (cr6.eq) goto loc_83917B88;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_83917B88:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,22
	cr6.compare<uint32_t>(ctx.r29.u32, 22, xer);
	// blt cr6,0x83917b3c
	if (cr6.lt) goto loc_83917B3C;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83917bf0
	if (cr6.lt) goto loc_83917BF0;
	// bne cr6,0x83917c08
	if (!cr6.eq) goto loc_83917C08;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83917bd8
	if (!cr6.eq) goto loc_83917BD8;
	// bl 0x831156e8
	ctx.lr = 0x83917BBC;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312b9b0
	ctx.lr = 0x83917BC8;
	sub_8312B9B0(ctx, base);
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x82e744f8
	ctx.lr = 0x83917BD0;
	sub_82E744F8(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x83917bdc
	goto loc_83917BDC;
loc_83917BD8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83917BDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917c08
	if (cr6.eq) goto loc_83917C08;
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// b 0x83917c08
	goto loc_83917C08;
loc_83917BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839174f8
	ctx.lr = 0x83917BF8;
	sub_839174F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917c08
	if (cr6.eq) goto loc_83917C08;
	// stw r26,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r26.u32);
loc_83917C08:
	// bl 0x831156e8
	ctx.lr = 0x83917C0C;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917d08
	if (cr6.eq) goto loc_83917D08;
	// bl 0x831156e8
	ctx.lr = 0x83917C1C;
	sub_831156E8(ctx, base);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312b9d8
	ctx.lr = 0x83917C28;
	sub_8312B9D8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x83917d08
	if (cr6.eq) goto loc_83917D08;
	// bl 0x82dad2e0
	ctx.lr = 0x83917C34;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83917d08
	if (cr6.eq) goto loc_83917D08;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x83917C4C;
	sub_82DAD2E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// bl 0x828eeb48
	ctx.lr = 0x83917C5C;
	sub_828EEB48(ctx, base);
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq cr6,0x83917cec
	if (cr6.eq) goto loc_83917CEC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_83917C8C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83917cc4
	if (cr6.eq) goto loc_83917CC4;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x83917d10
	if (!cr6.gt) goto loc_83917D10;
loc_83917CA4:
	// lbzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x83917cc0
	if (cr6.eq) goto loc_83917CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83917ca4
	if (cr6.gt) goto loc_83917CA4;
	// b 0x83917cc4
	goto loc_83917CC4;
loc_83917CC0:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_83917CC4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83917ce0
	if (!cr6.eq) goto loc_83917CE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312d788
	ctx.lr = 0x83917CE0;
	sub_8312D788(ctx, base);
loc_83917CE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// blt cr6,0x83917c8c
	if (cr6.lt) goto loc_83917C8C;
loc_83917CEC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83917d08
	if (cr6.eq) goto loc_83917D08;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83917D08;
	sub_825952B8(ctx, base);
loc_83917D08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83917D10:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83917D1C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_83917D1C"))) PPC_WEAK_FUNC(sub_83917D1C);
PPC_FUNC_IMPL(__imp__sub_83917D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83917D20"))) PPC_WEAK_FUNC(sub_83917D20);
PPC_FUNC_IMPL(__imp__sub_83917D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917D38"))) PPC_WEAK_FUNC(sub_83917D38);
PPC_FUNC_IMPL(__imp__sub_83917D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917D4C"))) PPC_WEAK_FUNC(sub_83917D4C);
PPC_FUNC_IMPL(__imp__sub_83917D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83917D50"))) PPC_WEAK_FUNC(sub_83917D50);
PPC_FUNC_IMPL(__imp__sub_83917D50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917D58"))) PPC_WEAK_FUNC(sub_83917D58);
PPC_FUNC_IMPL(__imp__sub_83917D58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x83917D78;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83917D7C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x83917e30
	if (!cr6.eq) goto loc_83917E30;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// lwz r9,392(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfc r10,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r5,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,332
	ctx.r10.s64 = ctx.r11.s64 + 332;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83917dcc
	if (!cr6.eq) goto loc_83917DCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83917e40
	goto loc_83917E40;
loc_83917DCC:
	// lwz r6,396(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// bne cr6,0x83917e28
	if (!cr6.eq) goto loc_83917E28;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83917e40
	if (cr6.eq) goto loc_83917E40;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83917DE8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// subfc r10,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bne cr6,0x83917e1c
	if (!cr6.eq) goto loc_83917E1C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83917E1C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83917de8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83917DE8;
	// b 0x83917e40
	goto loc_83917E40;
loc_83917E28:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x83917e40
	goto loc_83917E40;
loc_83917E30:
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bge cr6,0x83917e40
	if (!cr6.lt) goto loc_83917E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83917E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83917E58"))) PPC_WEAK_FUNC(sub_83917E58);
PPC_FUNC_IMPL(__imp__sub_83917E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83917E60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31778
	ctx.r27.s64 = -2082603008;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,2056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83917E80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83917f34
	if (cr6.eq) goto loc_83917F34;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83917eac
	if (!cr6.eq) goto loc_83917EAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83917EAC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83917EB0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83917ec0
	if (cr6.lt) goto loc_83917EC0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83917EC0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917f04
	if (cr6.eq) goto loc_83917F04;
	// lwz r3,2056(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2056);
	// lwz r26,76(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83917EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r26,r9
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, xer);
	// bne cr6,0x83917f04
	if (!cr6.eq) goto loc_83917F04;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83917f14
	if (cr6.eq) goto loc_83917F14;
loc_83917F04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x83917eb0
	if (cr6.lt) goto loc_83917EB0;
	// b 0x83917f34
	goto loc_83917F34;
loc_83917F14:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83917f28
	if (!cr6.eq) goto loc_83917F28;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83917f30
	goto loc_83917F30;
loc_83917F28:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83917F30:
	// stw r11,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r11.u32);
loc_83917F34:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,24080
	ctx.r28.s64 = ctx.r11.s64 + 24080;
loc_83917F40:
	// lbz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 400);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(ctx.r11.s32, 56, xer);
	// bge cr6,0x83917fa0
	if (!cr6.lt) goto loc_83917FA0;
	// addi r10,r11,39
	ctx.r10.s64 = ctx.r11.s64 + 39;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83917f78
	if (!cr6.eq) goto loc_83917F78;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8392cf60
	ctx.lr = 0x83917F74;
	sub_8392CF60(ctx, base);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_83917F78:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83917f8c
	if (!cr6.eq) goto loc_83917F8C;
	// lbz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 400);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// blt cr6,0x83917fb4
	if (cr6.lt) goto loc_83917FB4;
loc_83917F8C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83917f40
	if (cr6.lt) goto loc_83917F40;
loc_83917FA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,400(r29)
	PPC_STORE_U8(ctx.r29.u32 + 400, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83917FB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,400(r29)
	PPC_STORE_U8(ctx.r29.u32 + 400, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83917FC8"))) PPC_WEAK_FUNC(sub_83917FC8);
PPC_FUNC_IMPL(__imp__sub_83917FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839180b8
	if (cr6.eq) goto loc_839180B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839ec8f8
	ctx.lr = 0x83917FFC;
	sub_839EC8F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839180b8
	if (cr6.eq) goto loc_839180B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44b68
	ctx.lr = 0x83918014;
	sub_82A44B68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82a44b68
	ctx.lr = 0x83918038;
	sub_82A44B68(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r31,r9,-26260
	ctx.r31.s64 = ctx.r9.s64 + -26260;
	// lfs f4,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x83918064;
	sub_82CD6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x8392cc40
	ctx.lr = 0x83918070;
	sub_8392CC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x8392cc08
	ctx.lr = 0x8391807C;
	sub_8392CC08(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lvlx128 v60,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vupkd3d128 v62,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vsldoi128 v61,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x839180B4;
	sub_8392CBE0(ctx, base);
	// b 0x839180c4
	goto loc_839180C4;
loc_839180B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x8392cc08
	ctx.lr = 0x839180C4;
	sub_8392CC08(ctx, base);
loc_839180C4:
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

__attribute__((alias("__imp__sub_839180DC"))) PPC_WEAK_FUNC(sub_839180DC);
PPC_FUNC_IMPL(__imp__sub_839180DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839180E0"))) PPC_WEAK_FUNC(sub_839180E0);
PPC_FUNC_IMPL(__imp__sub_839180E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839180E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,312(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r26,412(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bl 0x82a2de90
	ctx.lr = 0x83918110;
	sub_82A2DE90(ctx, base);
	// lbz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 18);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83918134
	if (cr6.eq) goto loc_83918134;
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_83918134:
	// lwz r11,4456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4456);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83918164
	if (!cr6.eq) goto loc_83918164;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r5,r31
	ctx.r31.u64 = ctx.r5.u64 & ctx.r31.u64;
loc_83918164:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a52c50
	ctx.lr = 0x8391816C;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f13,8148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfs f0,9104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83918194
	if (cr6.gt) goto loc_83918194;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83918194:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,360(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83918278
	if (cr6.eq) goto loc_83918278;
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// lfs f0,8144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r31,24056
	ctx.r11.s64 = ctx.r31.s64 + 24056;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,8152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8392cc08
	ctx.lr = 0x839181CC;
	sub_8392CC08(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f11,8148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8148);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-26260
	ctx.r11.s64 = ctx.r11.s64 + -26260;
	// lfs f0,24056(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24056);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f12,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bgt cr6,0x8391820c
	if (cr6.gt) goto loc_8391820C;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x83918230
	goto loc_83918230;
loc_8391820C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-23860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8391822c
	if (!cr6.lt) goto loc_8391822C;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8391822C:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83918230:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,360(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 360);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vupkd3d128 v62,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltw128 v13,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vsldoi128 v60,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x83918270;
	sub_8392CBE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83918278:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8392cc08
	ctx.lr = 0x83918280;
	sub_8392CC08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83918288"))) PPC_WEAK_FUNC(sub_83918288);
PPC_FUNC_IMPL(__imp__sub_83918288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83918290;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// bne cr6,0x839182bc
	if (!cr6.eq) goto loc_839182BC;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x83918380
	if (cr6.eq) goto loc_83918380;
loc_839182BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c788
	ctx.lr = 0x839182C4;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,1280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8392cc08
	ctx.lr = 0x839182F0;
	sub_8392CC08(ctx, base);
	// lwz r9,384(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// beq cr6,0x83918308
	if (cr6.eq) goto loc_83918308;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8392cc98
	ctx.lr = 0x83918308;
	sub_8392CC98(ctx, base);
loc_83918308:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-26260
	ctx.r29.s64 = ctx.r11.s64 + -26260;
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,9796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9796);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x83918330;
	sub_82CD6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8392cc40
	ctx.lr = 0x8391833C;
	sub_8392CC40(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vupkd3d128 v62,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vsldoi128 v61,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// stvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x83918374;
	sub_8392CBE0(ctx, base);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83918380:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8392cc08
	ctx.lr = 0x8391838C;
	sub_8392CC08(ctx, base);
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83918398"))) PPC_WEAK_FUNC(sub_83918398);
PPC_FUNC_IMPL(__imp__sub_83918398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839183A0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391854c
	if (cr6.eq) goto loc_8391854C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x839183e4
	if (cr6.lt) goto loc_839183E4;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x839183e8
	if (cr6.lt) goto loc_839183E8;
loc_839183E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839183E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391854c
	if (cr6.eq) goto loc_8391854C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x83918404;
	sub_82A0C788(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8391842c
	if (!cr6.lt) goto loc_8391842C;
	// lfs f13,24040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24040);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// b 0x8391843c
	goto loc_8391843C;
loc_8391842C:
	// lfs f12,24040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24040);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x8391843c
	if (cr6.lt) goto loc_8391843C;
	// fsubs f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
loc_8391843C:
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,7272
	ctx.r4.s64 = ctx.r9.s64 + 7272;
	// lfs f12,7148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7148);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r11,-26260
	ctx.r29.s64 = ctx.r11.s64 + -26260;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x83918474;
	sub_82624408(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,1288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// vspltisw v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stfs f11,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v62,v10,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vrsqrtefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v62.f32))));
	// stfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vmulfp128 v13,v62,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vmulfp128 v12,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83917d58
	ctx.lr = 0x839184EC;
	sub_83917D58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83918578
	if (cr6.eq) goto loc_83918578;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x8392cc40
	ctx.lr = 0x8391850C;
	sub_8392CC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x8392cc08
	ctx.lr = 0x83918518;
	sub_8392CC08(ctx, base);
	// lvlx128 v61,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x8391853C;
	sub_8392CBE0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8391854C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83917d58
	ctx.lr = 0x83918558;
	sub_83917D58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83918578
	if (cr6.eq) goto loc_83918578;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 39;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8392cc08
	ctx.lr = 0x83918578;
	sub_8392CC08(ctx, base);
loc_83918578:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83918588"))) PPC_WEAK_FUNC(sub_83918588);
PPC_FUNC_IMPL(__imp__sub_83918588) {
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
	ctx.lr = 0x83918590;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce778
	ctx.lr = 0x83918598;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r30,412(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52c50
	ctx.lr = 0x839185C0;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83918624
	if (cr6.eq) goto loc_83918624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52cd0
	ctx.lr = 0x839185D8;
	sub_82A52CD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83918624
	if (cr6.eq) goto loc_83918624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52cd0
	ctx.lr = 0x839185EC;
	sub_82A52CD0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bge cr6,0x83918600
	if (!cr6.lt) goto loc_83918600;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x83918620
	if (cr6.eq) goto loc_83918620;
loc_83918600:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52cd0
	ctx.lr = 0x8391860C;
	sub_82A52CD0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bge cr6,0x83918624
	if (!cr6.lt) goto loc_83918624;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bne cr6,0x83918624
	if (!cr6.eq) goto loc_83918624;
loc_83918620:
	// li r28,1
	ctx.r28.s64 = 1;
loc_83918624:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839189b0
	if (cr6.eq) goto loc_839189B0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,5440(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5440);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r27,r11,24000
	ctx.r27.s64 = ctx.r11.s64 + 24000;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,76(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lbz r9,39(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83918668
	if (cr6.eq) goto loc_83918668;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83918668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391868c
	if (cr6.eq) goto loc_8391868C;
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83918684
	if (!cr6.eq) goto loc_83918684;
	// stw r25,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r25.u32);
loc_83918684:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
loc_8391868C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f2,24512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24512);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x839186B0;
	sub_82CD6C48(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f4,24508(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24508);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x839186CC;
	sub_82CD6C48(ctx, base);
	// lis r8,-31768
	ctx.r8.s64 = -2081947648;
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r8,7124
	ctx.r30.s64 = ctx.r8.s64 + 7124;
	// lwz r5,7124(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7124);
	// bl 0x8392ccf0
	ctx.lr = 0x839186E4;
	sub_8392CCF0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x8392ccf0
	ctx.lr = 0x839186F4;
	sub_8392CCF0(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lbz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// bl 0x8392cc08
	ctx.lr = 0x83918700;
	sub_8392CC08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r30,r11,-23848
	ctx.r30.s64 = ctx.r11.s64 + -23848;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,5416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83918744
	if (cr6.lt) goto loc_83918744;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x83918748
	if (cr6.lt) goto loc_83918748;
loc_83918744:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_83918748:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839187b8
	if (cr6.eq) goto loc_839187B8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83918764
	if (!cr6.lt) goto loc_83918764;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8391878c
	goto loc_8391878C;
loc_83918764:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x83918774
	if (!cr6.lt) goto loc_83918774;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8391878c
	goto loc_8391878C;
loc_83918774:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_8391878C:
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x83918794;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x839187a8
	if (cr6.eq) goto loc_839187A8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_839187A8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x839187b8
	if (!cr6.eq) goto loc_839187B8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_839187B8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839187e0
	if (cr6.eq) goto loc_839187E0;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f1,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82624408
	ctx.lr = 0x839187E0;
	sub_82624408(ctx, base);
loc_839187E0:
	// lbz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 380);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne cr6,0x839189b4
	if (!cr6.eq) goto loc_839189B4;
	// lwz r9,404(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f5,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f5.f64 = double(temp.f32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f5
	cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x839189b4
	if (!cr6.lt) goto loc_839189B4;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f4,25696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25696);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24500);
	ctx.f3.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x825f8930
	ctx.lr = 0x83918870;
	sub_825F8930(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lfs f13,-8376(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8376);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmuls f28,f6,f13
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// bl 0x8392cbe0
	ctx.lr = 0x839188CC;
	sub_8392CBE0(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x8392cc30
	ctx.lr = 0x839188D4;
	sub_8392CC30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839189c0
	if (cr6.eq) goto loc_839189C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r6,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x839189c0
	if (cr0.eq) goto loc_839189C0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lfs f13,24496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24492);
	ctx.f0.f64 = double(temp.f32);
loc_83918908:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bgt cr6,0x83918984
	if (cr6.gt) goto loc_83918984;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83918944
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83918944;
	// bdzf 4*cr6+eq,0x83918950
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83918950;
	// bdzf 4*cr6+eq,0x83918958
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83918958;
	// bdzf 4*cr6+eq,0x83918964
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83918964;
	// bne cr6,0x83918970
	if (!cr6.eq) goto loc_83918970;
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x8391897c
	goto loc_8391897C;
loc_83918944:
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// b 0x83918978
	goto loc_83918978;
loc_83918950:
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x83918974
	goto loc_83918974;
loc_83918958:
	// stfs f28,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x8391897c
	goto loc_8391897C;
loc_83918964:
	// stfs f28,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// b 0x83918978
	goto loc_83918978;
loc_83918970:
	// stfs f28,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_83918974:
	// fmuls f12,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
loc_83918978:
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_8391897C:
	// stfs f30,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83918984:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r6,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x83918908
	if (cr6.lt) goto loc_83918908;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c4
	ctx.lr = 0x839189AC;
	__restfpr_28(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839189B0:
	// stb r25,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r25.u8);
loc_839189B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x8392cc08
	ctx.lr = 0x839189C0;
	sub_8392CC08(ctx, base);
loc_839189C0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c4
	ctx.lr = 0x839189CC;
	__restfpr_28(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839189D0"))) PPC_WEAK_FUNC(sub_839189D0);
PPC_FUNC_IMPL(__imp__sub_839189D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839189D8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a52cd0
	ctx.lr = 0x83918A00;
	sub_82A52CD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83918a24
	if (cr6.eq) goto loc_83918A24;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a52cd0
	ctx.lr = 0x83918A14;
	sub_82A52CD0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// blt cr6,0x83918a28
	if (cr6.lt) goto loc_83918A28;
loc_83918A24:
	// li r29,23
	ctx.r29.s64 = 23;
loc_83918A28:
	// lbz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83918ca0
	if (cr6.eq) goto loc_83918CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a52c50
	ctx.lr = 0x83918A3C;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83918a50
	if (cr6.eq) goto loc_83918A50;
	// cmpwi cr6,r29,24
	cr6.compare<int32_t>(ctx.r29.s32, 24, xer);
	// bne cr6,0x83918ca0
	if (!cr6.eq) goto loc_83918CA0;
loc_83918A50:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,24516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24516);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f3,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x83918A78;
	sub_82CD6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// bl 0x8392cc40
	ctx.lr = 0x83918A84;
	sub_8392CC40(ctx, base);
	// lis r8,-31768
	ctx.r8.s64 = -2081947648;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lfs f13,7148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7148);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r5,2496
	ctx.r3.s64 = ctx.r5.s64 + 2496;
	// lfs f12,-23844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23844);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,2480
	ctx.r11.s64 = ctx.r4.s64 + 2480;
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v61,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v10,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmaddfp v7,v10,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// vslw128 v11,v60,v60
	ctx.v11.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,24360(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24360);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r6,2512
	ctx.r3.s64 = ctx.r6.s64 + 2512;
	// vspltisw v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x1)));
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r5,2528
	ctx.r11.s64 = ctx.r5.s64 + 2528;
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// vmaddfp v10,v7,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// vupkd3d128 v28,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v28 = vTemp;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,-10804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10804);
	ctx.f10.f64 = double(temp.f32);
	// vspltisw128 v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x2)));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vsldoi128 v31,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lfs f8,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// vsel v6,v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// vor128 v59,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v9,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v57,v59,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v6.f32)));
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vcfpsxws128 v56,v57,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// vcsxwfp128 v10,v56,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vand128 v12,v56,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vadduws v6,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// vand128 v53,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r10,r6,2592
	ctx.r10.s64 = ctx.r6.s64 + 2592;
	// vand128 v52,v12,v55
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// addi r4,r8,2544
	ctx.r4.s64 = ctx.r8.s64 + 2544;
	// addi r11,r7,2560
	ctx.r11.s64 = ctx.r7.s64 + 2560;
	// vspltw128 v54,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vor128 v51,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r5,2608
	ctx.r9.s64 = ctx.r5.s64 + 2608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vcmpequw128 v27,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v4,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v6,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r8,2576
	ctx.r6.s64 = ctx.r8.s64 + 2576;
	// vand128 v50,v51,v13
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vnmsubfp v13,v10,v9,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r7,2624
	ctx.r5.s64 = ctx.r7.s64 + 2624;
	// lvx128 v3,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequw128 v29,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vand128 v49,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvx128 v2,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequw128 v26,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r3,364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// lvx128 v1,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vcmpequw128 v7,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v30,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v54,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v12,v10,v8,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v6,v13,v5
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v9,v4,v13,v3
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v8,v13,v12,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v13,v2
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v9,v9,v13,v1
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v10,v13,v28
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v12,v9,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v48,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v47,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsel v8,v13,v12,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v10,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vor128 v9,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vsel v13,v10,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v46,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vxor v13,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vor128 v12,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vsel v9,v13,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vxor128 v11,v11,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vmaddfp v0,v30,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v13,v11,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vsel v12,v0,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x83918C88;
	sub_8392CBE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// bl 0x8392cc08
	ctx.lr = 0x83918C94;
	sub_8392CC08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83918CA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,364(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// bl 0x8392cc08
	ctx.lr = 0x83918CAC;
	sub_8392CC08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83918CB8"))) PPC_WEAK_FUNC(sub_83918CB8);
PPC_FUNC_IMPL(__imp__sub_83918CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83918CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83918d84
	if (cr6.eq) goto loc_83918D84;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-26260
	ctx.r29.s64 = ctx.r11.s64 + -26260;
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,9796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9796);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x83918D08;
	sub_82CD6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// bl 0x8392cc40
	ctx.lr = 0x83918D14;
	sub_8392CC40(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lfs f13,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// lfs f0,24076(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24076);
	ctx.f0.f64 = double(temp.f32);
	// vupkd3d128 v62,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// vsldoi128 v61,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x83918D70;
	sub_8392CBE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// bl 0x8392cc08
	ctx.lr = 0x83918D7C;
	sub_8392CC08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83918D84:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// bl 0x8392cc08
	ctx.lr = 0x83918D90;
	sub_8392CC08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83918D98"))) PPC_WEAK_FUNC(sub_83918D98);
PPC_FUNC_IMPL(__imp__sub_83918D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// li r11,24
	ctx.r11.s64 = 24;
	// lfs f0,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31763
	ctx.r6.s64 = -2081619968;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// subfc r5,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f0,24524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24524);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f0,24520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24520);
	ctx.f0.f64 = double(temp.f32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,-3564(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3564);
	// subfc r6,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// and r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// subfe r8,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// subfc r6,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ctx.r7.u64;
	// subfe r8,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r31,111(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// mulli r10,r6,84
	ctx.r10.s64 = ctx.r6.s64 * 84;
	// lbz r6,95(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// lbz r5,103(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// mulli r9,r9,84
	ctx.r9.s64 = ctx.r9.s64 * 84;
	// mulli r8,r8,84
	ctx.r8.s64 = ctx.r8.s64 * 84;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r6,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,24076(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24076);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// lfs f2,536(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 536);
	ctx.f2.f64 = double(temp.f32);
	// lbz r7,540(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 540);
	// lwz r6,532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// bl 0x83918398
	ctx.lr = 0x83918E8C;
	sub_83918398(ctx, base);
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

__attribute__((alias("__imp__sub_83918EA0"))) PPC_WEAK_FUNC(sub_83918EA0);
PPC_FUNC_IMPL(__imp__sub_83918EA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,200(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// beq cr6,0x83918f08
	if (cr6.eq) goto loc_83918F08;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x83918f08
	if (!cr6.eq) goto loc_83918F08;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f2,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r8,19296
	ctx.r10.s64 = ctx.r8.s64 + 19296;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,11808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11808);
	ctx.f1.f64 = double(temp.f32);
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x83918398
	ctx.lr = 0x83918F04;
	sub_83918398(ctx, base);
	// b 0x83918f14
	goto loc_83918F14;
loc_83918F08:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// bl 0x8392cc08
	ctx.lr = 0x83918F14;
	sub_8392CC08(ctx, base);
loc_83918F14:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83918F30"))) PPC_WEAK_FUNC(sub_83918F30);
PPC_FUNC_IMPL(__imp__sub_83918F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83918F38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,24528
	ctx.r10.s64 = ctx.r11.s64 + 24528;
	// addi r31,r3,156
	ctx.r31.s64 = ctx.r3.s64 + 156;
	// li r30,56
	ctx.r30.s64 = 56;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,36
	ctx.r28.s64 = 36;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83918F5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83918f9c
	if (cr6.eq) goto loc_83918F9C;
	// bl 0x8392cd08
	ctx.lr = 0x83918F6C;
	sub_8392CD08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83918f9c
	if (cr6.eq) goto loc_83918F9C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83918F88;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x83918F90;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83918F98;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83918F9C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83918f5c
	if (!cr0.eq) goto loc_83918F5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,136(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 136);
	// addi r30,r27,132
	ctx.r30.s64 = ctx.r27.s64 + 132;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r9.u32);
	// beq cr6,0x83918fec
	if (cr6.eq) goto loc_83918FEC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83918fec
	if (cr6.eq) goto loc_83918FEC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83918FE8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83918FEC:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83919018
	if (cr6.eq) goto loc_83919018;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83919014;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83919018:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,116(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 116);
	// addi r30,r27,112
	ctx.r30.s64 = ctx.r27.s64 + 112;
	// addi r9,r11,-16664
	ctx.r9.s64 = ctx.r11.s64 + -16664;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r9.u32);
	// beq cr6,0x83919054
	if (cr6.eq) goto loc_83919054;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83919054
	if (cr6.eq) goto loc_83919054;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x83919050;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83919054:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83919078
	if (cr6.eq) goto loc_83919078;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x83919074;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83919078:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 96);
	// addi r30,r27,92
	ctx.r30.s64 = ctx.r27.s64 + 92;
	// addi r9,r11,-16664
	ctx.r9.s64 = ctx.r11.s64 + -16664;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r9.u32);
	// beq cr6,0x839190b4
	if (cr6.eq) goto loc_839190B4;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839190b4
	if (cr6.eq) goto loc_839190B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x839190B0;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_839190B4:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839190d8
	if (cr6.eq) goto loc_839190D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f3b8
	ctx.lr = 0x839190D4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_839190D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 76);
	// addi r30,r27,72
	ctx.r30.s64 = ctx.r27.s64 + 72;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r9.u32);
	// beq cr6,0x8391911c
	if (cr6.eq) goto loc_8391911C;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8391911c
	if (cr6.eq) goto loc_8391911C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83919118;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8391911C:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83919148
	if (cr6.eq) goto loc_83919148;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83919144;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83919148:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831032a0
	ctx.lr = 0x83919150;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83919158"))) PPC_WEAK_FUNC(sub_83919158);
PPC_FUNC_IMPL(__imp__sub_83919158) {
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
	// bl 0x83918f30
	ctx.lr = 0x83919178;
	sub_83918F30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83919190
	if (cr6.eq) goto loc_83919190;
	// bl 0x82416268
	ctx.lr = 0x8391918C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83919190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839191A8"))) PPC_WEAK_FUNC(sub_839191A8);
PPC_FUNC_IMPL(__imp__sub_839191A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x839191B0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce778
	ctx.lr = 0x839191B8;
	__savefpr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lbz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r21,r3,132
	ctx.r21.s64 = ctx.r3.s64 + 132;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r22,32(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,192(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r29,412(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// lwz r23,12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x839191f4
	if (!cr6.eq) goto loc_839191F4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825aa080
	ctx.lr = 0x839191F4;
	sub_825AA080(ctx, base);
loc_839191F4:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83919210
	if (!cr6.eq) goto loc_83919210;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r10.u32);
loc_83919210:
	// clrlwi r31,r24,24
	ctx.r31.u64 = ctx.r24.u32 & 0xFF;
	// lwz r3,12(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r30,24
	ctx.r30.s64 = 24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subfc r10,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r20,0
	ctx.r20.s64 = 0;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r11,r7,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lfs f0,268(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x839196f0
	if (!cr6.gt) goto loc_839196F0;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,340(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x839196f0
	if (cr6.eq) goto loc_839196F0;
	// bl 0x82a18500
	ctx.lr = 0x8391927C;
	sub_82A18500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839196f0
	if (!cr6.eq) goto loc_839196F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a52c50
	ctx.lr = 0x83919290;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839196f0
	if (!cr6.eq) goto loc_839196F0;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,332
	ctx.r10.s64 = ctx.r11.s64 + 332;
	// lwz r4,340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// bl 0x82a0c788
	ctx.lr = 0x839192D0;
	sub_82A0C788(ctx, base);
	// subfc r5,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r5.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// and r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 & ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r8,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,340(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// bl 0x825ca6b8
	ctx.lr = 0x83919308;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x83919330
	if (!cr6.lt) goto loc_83919330;
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8391931C;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47e00
	ctx.lr = 0x83919320;
	sub_82A47E00(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_83919330:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839196f0
	if (cr6.eq) goto loc_839196F0;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// lwz r8,1280(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r6,1284(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	// lwz r5,1288(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & ctx.r31.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x839194ec
	if (!cr6.lt) goto loc_839194EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x83919390;
	sub_82A0C710(ctx, base);
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// lwz r4,292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,345(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 345);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x839193d4
	if (cr6.lt) goto loc_839193D4;
	// li r10,23
	ctx.r10.s64 = 23;
loc_839193D4:
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839193f0
	if (cr6.eq) goto loc_839193F0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// b 0x83919410
	goto loc_83919410;
loc_839193F0:
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83919408
	if (cr6.lt) goto loc_83919408;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8391940c
	if (cr6.lt) goto loc_8391940C;
loc_83919408:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8391940C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_83919410:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839194ec
	if (cr6.eq) goto loc_839194EC;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83919428
	if (cr6.lt) goto loc_83919428;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83919428:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82a29b60
	ctx.lr = 0x83919440;
	sub_82A29B60(ctx, base);
	// mulli r10,r29,11
	ctx.r10.s64 = ctx.r29.s64 * 11;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r25,r9
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, xer);
	// bne cr6,0x839194ec
	if (!cr6.eq) goto loc_839194EC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a14170
	ctx.lr = 0x83919458;
	sub_82A14170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8391946c
	if (cr6.lt) goto loc_8391946C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x83919470
	if (cr6.lt) goto loc_83919470;
loc_8391946C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83919470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839194e0
	if (cr6.eq) goto loc_839194E0;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 & ctx.r31.u64;
	// rlwinm r11,r7,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r29,332
	ctx.r11.s64 = ctx.r29.s64 + 332;
	// bl 0x82a14170
	ctx.lr = 0x839194AC;
	sub_82A14170(ctx, base);
	// lwz r5,340(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x839194e0
	if (cr6.eq) goto loc_839194E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,-3564(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a14170
	ctx.lr = 0x839194C4;
	sub_82A14170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c788
	ctx.lr = 0x839194D0;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// b 0x839194f4
	goto loc_839194F4;
loc_839194E0:
	// lfs f28,8144(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8144);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8152(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8152);
	ctx.f29.f64 = double(temp.f32);
	// b 0x839194f4
	goto loc_839194F4;
loc_839194EC:
	// lfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
loc_839194F4:
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r7,r11,34
	ctx.r7.s64 = ctx.r11.s64 + 34;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,24040
	ctx.r29.s64 = ctx.r11.s64 + 24040;
	// lfs f13,24040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24040);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r6,r23
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8391952c
	if (!cr6.lt) goto loc_8391952C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83919538
	goto loc_83919538;
loc_8391952C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83919538
	if (cr6.lt) goto loc_83919538;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83919538:
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,7272
	ctx.r4.s64 = ctx.r9.s64 + 7272;
	// lfs f13,7148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7148);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r11,-26260
	ctx.r27.s64 = ctx.r11.s64 + -26260;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x83919570;
	sub_82624408(ctx, base);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f28,128(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x83917d58
	ctx.lr = 0x839195AC;
	sub_83917D58(ctx, base);
	// addi r8,r3,77
	ctx.r8.s64 = ctx.r3.s64 + 77;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x8392cc30
	ctx.lr = 0x839195C0;
	sub_8392CC30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391973c
	if (cr6.eq) goto loc_8391973C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83919688
	if (cr0.eq) goto loc_83919688;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_839195E8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83919668
	if (cr6.eq) goto loc_83919668;
	// subfc r11,r30,r31
	xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// and r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 & ctx.r31.u64;
	// addi r25,r1,176
	ctx.r25.s64 = ctx.r1.s64 + 176;
	// rlwinm r8,r10,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f0,268(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v60,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stvx128 v60,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_83919668:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// blt cr6,0x839195e8
	if (cr6.lt) goto loc_839195E8;
loc_83919688:
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// beq cr6,0x83919718
	if (cr6.eq) goto loc_83919718;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,9796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82cd6c48
	ctx.lr = 0x839196B0;
	sub_82CD6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x8392cc40
	ctx.lr = 0x839196BC;
	sub_8392CC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x839196C8;
	sub_8392CC08(ctx, base);
	// lvlx128 v59,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x839196EC;
	sub_8392CBE0(ctx, base);
	// b 0x83919718
	goto loc_83919718;
loc_839196F0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83917d58
	ctx.lr = 0x839196FC;
	sub_83917D58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83919718
	if (cr6.eq) goto loc_83919718;
	// addi r11,r3,77
	ctx.r11.s64 = ctx.r3.s64 + 77;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x83919718;
	sub_8392CC08(ctx, base);
loc_83919718:
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 + 112;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391972c
	if (cr6.eq) goto loc_8391972C;
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
loc_8391972C:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391973c
	if (cr6.eq) goto loc_8391973C;
	// stw r20,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r20.u32);
loc_8391973C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x83919748;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391974C"))) PPC_WEAK_FUNC(sub_8391974C);
PPC_FUNC_IMPL(__imp__sub_8391974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83919750"))) PPC_WEAK_FUNC(sub_83919750);
PPC_FUNC_IMPL(__imp__sub_83919750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83919758;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce740
	ctx.lr = 0x83919760;
	__savefpr_14(ctx, base);
	// addi r12,r1,-304
	ctx.r12.s64 = ctx.r1.s64 + -304;
	// bl 0x831d1244
	ctx.lr = 0x83919768;
	__savevmx_122(ctx, base);
	// stwu r1,-2016(r1)
	ea = -2016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// stw r3,2036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2036, ctx.r3.u32);
	// addi r25,r3,72
	ctx.r25.s64 = ctx.r3.s64 + 72;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lbz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,412(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// bne cr6,0x839197a4
	if (!cr6.eq) goto loc_839197A4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825bf380
	ctx.lr = 0x839197A4;
	sub_825BF380(ctx, base);
loc_839197A4:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839197c0
	if (!cr6.eq) goto loc_839197C0;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
loc_839197C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r28,12(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lbz r10,8507(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8507);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83919914
	if (!cr6.eq) goto loc_83919914;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,24
	ctx.r30.s64 = 24;
loc_83919820:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r9,-3564(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// subfc r8,r30,r10
	xer.ca = ctx.r10.u32 >= ctx.r30.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// li r5,84
	ctx.r5.s64 = 84;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,460
	ctx.r4.s64 = ctx.r11.s64 + 460;
	// bl 0x831ce980
	ctx.lr = 0x83919854;
	sub_831CE980(ctx, base);
	// lbz r11,354(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 354);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83919868
	if (cr6.eq) goto loc_83919868;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x83919888
	if (!cr6.eq) goto loc_83919888;
loc_83919868:
	// lbz r10,361(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 361);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83919888
	if (!cr6.eq) goto loc_83919888;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52c50
	ctx.lr = 0x8391987C;
	sub_82A52C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83919898
	if (cr6.eq) goto loc_83919898;
loc_83919888:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x83919820
	if (cr6.lt) goto loc_83919820;
	// b 0x83919914
	goto loc_83919914;
loc_83919898:
	// lfs f0,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f13,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_83919914:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391a5b4
	if (cr6.eq) goto loc_8391A5B4;
	// bl 0x8392cc30
	ctx.lr = 0x83919928;
	sub_8392CC30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391a5d0
	if (cr6.eq) goto loc_8391A5D0;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x827f6e48
	ctx.lr = 0x8391993C;
	sub_827F6E48(ctx, base);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lfs f1,20056(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5cc60
	ctx.lr = 0x83919954;
	sub_82A5CC60(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f11,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-27164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18044);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f30,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fsqrts f14,f6
	ctx.f14.f64 = double(float(sqrt(ctx.f6.f64)));
	// bl 0x825c3ec0
	ctx.lr = 0x839199B8;
	sub_825C3EC0(ctx, base);
	// lfs f5,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r26,r11,24052
	ctx.r26.s64 = ctx.r11.s64 + 24052;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lfs f13,-12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fsubs f0,f30,f4
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839199e0
	if (!cr6.lt) goto loc_839199E0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_839199E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f15,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f0,f0,f15
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f15.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839199f8
	if (!cr6.lt) goto loc_839199F8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_839199F8:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83919a0c
	if (!cr6.lt) goto loc_83919A0C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83919a18
	goto loc_83919A18;
loc_83919A0C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83919a1c
	if (cr6.lt) goto loc_83919A1C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83919A18:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_83919A1C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82646fc0
	ctx.lr = 0x83919A28;
	sub_82646FC0(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f1,20056(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5cc60
	ctx.lr = 0x83919A6C;
	sub_82A5CC60(ctx, base);
	// addi r30,r1,124
	ctx.r30.s64 = ctx.r1.s64 + 124;
	// li r31,4
	ctx.r31.s64 = 4;
loc_83919A74:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,20056(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82a5cc60
	ctx.lr = 0x83919A88;
	sub_82A5CC60(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x83919a74
	if (!cr0.eq) goto loc_83919A74;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82a5d940
	ctx.lr = 0x83919A9C;
	sub_82A5D940(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-31768
	ctx.r30.s64 = -2081947648;
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lis r31,-31768
	ctx.r31.s64 = -2081947648;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83919acc
	if (!cr6.eq) goto loc_83919ACC;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x83919acc
	if (!cr6.eq) goto loc_83919ACC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83919af0
	goto loc_83919AF0;
loc_83919ACC:
	// fsubs f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x83919AD8;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x83919ae8
	if (!cr6.lt) goto loc_83919AE8;
	// lfs f0,7132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_83919AE8:
	// lfs f0,7152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_83919AF0:
	// lfs f13,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmr f23,f0
	ctx.f23.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83919b08
	if (!cr6.lt) goto loc_83919B08;
	// fadds f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83919b14
	goto loc_83919B14;
loc_83919B08:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83919b14
	if (cr6.lt) goto loc_83919B14;
	// fsubs f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83919B14:
	// lis r28,-31768
	ctx.r28.s64 = -2081947648;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,7148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f23,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f16,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f30,f0,f16
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f16.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d1930
	ctx.lr = 0x83919B34;
	sub_831D1930(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f30,f29,f31
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// bl 0x831d1a10
	ctx.lr = 0x83919B44;
	sub_831D1A10(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x83919b70
	if (!cr6.eq) goto loc_83919B70;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x83919b70
	if (!cr6.eq) goto loc_83919B70;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83919b94
	goto loc_83919B94;
loc_83919B70:
	// fsubs f1,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x83919B7C;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x83919b8c
	if (!cr6.lt) goto loc_83919B8C;
	// lfs f0,7132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7132);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_83919B8C:
	// lfs f0,7152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_83919B94:
	// lfs f13,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83919ba8
	if (!cr6.lt) goto loc_83919BA8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83919bb4
	goto loc_83919BB4;
loc_83919BA8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83919bb4
	if (cr6.lt) goto loc_83919BB4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83919BB4:
	// fsubs f0,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83919bc8
	if (!cr6.lt) goto loc_83919BC8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x83919bd4
	goto loc_83919BD4;
loc_83919BC8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83919bd4
	if (cr6.lt) goto loc_83919BD4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_83919BD4:
	// lfs f13,7148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f27,f0,f16
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f16.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x831d1930
	ctx.lr = 0x83919BE8;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// bl 0x831d1a10
	ctx.lr = 0x83919C04;
	sub_831D1A10(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f11,f30,f25
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmuls f10,f30,f27
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f9,f25,f29
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f25,f30
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// lfs f0,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// fmsubs f6,f29,f27,f11
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 - ctx.f11.f64));
	// fmsubs f5,f25,f30,f10
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 - ctx.f10.f64));
	// fmsubs f4,f30,f25,f9
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 - ctx.f9.f64));
	// fmsubs f3,f28,f12,f8
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f2,f25,f28,f6
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fmadds f1,f29,f12,f5
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f13,f30,f12,f4
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fnmsubs f11,f29,f25,f3
	ctx.f11.f64 = double(float(-(ctx.f29.f64 * ctx.f25.f64 - ctx.f3.f64)));
	// fmadds f10,f30,f12,f2
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmadds f9,f28,f25,f1
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f25.f64 + ctx.f1.f64));
	// stfs f9,244(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmadds f8,f28,f27,f13
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f27.f64 + ctx.f13.f64));
	// stfs f8,248(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fnmsubs f7,f30,f27,f11
	ctx.f7.f64 = double(float(-(ctx.f30.f64 * ctx.f27.f64 - ctx.f11.f64)));
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// blt cr6,0x83919c84
	if (cr6.lt) goto loc_83919C84;
	// lfs f0,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
loc_83919C84:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f13,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r16,r29,8
	ctx.r16.s64 = ctx.r29.s64 + 8;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f25,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r31,5356(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5356);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r11,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8391a4e4
	if (cr0.eq) goto loc_8391A4E4;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fneg f19,f23
	ctx.f19.u64 = ctx.f23.u64 ^ 0x8000000000000000;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// vspltisw128 v122,3
	simde_mm_store_si128((simde__m128i*)ctx.v122.u32, simde_mm_set1_epi32(int(0x3)));
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fdivs f17,f25,f14
	ctx.f17.f64 = double(float(ctx.f25.f64 / ctx.f14.f64));
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// vspltisw128 v125,2
	simde_mm_store_si128((simde__m128i*)ctx.v125.u32, simde_mm_set1_epi32(int(0x2)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltisw128 v123,-1
	simde_mm_store_si128((simde__m128i*)ctx.v123.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lfs f18,-11408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11408);
	ctx.f18.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f20,-11316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11316);
	ctx.f20.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f21,-3676(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -3676);
	ctx.f21.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f22,24560(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24560);
	ctx.f22.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r14,12
	ctx.r14.s64 = 12;
	// addi r30,r10,27636
	ctx.r30.s64 = ctx.r10.s64 + 27636;
	// addi r25,r9,2624
	ctx.r25.s64 = ctx.r9.s64 + 2624;
	// addi r24,r8,2576
	ctx.r24.s64 = ctx.r8.s64 + 2576;
	// addi r23,r7,2592
	ctx.r23.s64 = ctx.r7.s64 + 2592;
	// addi r22,r6,2608
	ctx.r22.s64 = ctx.r6.s64 + 2608;
	// addi r21,r5,2544
	ctx.r21.s64 = ctx.r5.s64 + 2544;
	// addi r20,r4,2560
	ctx.r20.s64 = ctx.r4.s64 + 2560;
	// addi r19,r31,2528
	ctx.r19.s64 = ctx.r31.s64 + 2528;
	// addi r18,r29,2512
	ctx.r18.s64 = ctx.r29.s64 + 2512;
	// addi r17,r28,2480
	ctx.r17.s64 = ctx.r28.s64 + 2480;
	// addi r27,r27,2496
	ctx.r27.s64 = ctx.r27.s64 + 2496;
	// b 0x83919d80
	goto loc_83919D80;
loc_83919D78:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
loc_83919D80:
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lfd f12,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r9,r26,32
	ctx.r9.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r9,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r9.u64);
	// lfd f0,320(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// add r31,r15,r10
	ctx.r31.u64 = ctx.r15.u64 + ctx.r10.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fdivs f29,f7,f9
	ctx.f29.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fdivs f30,f6,f9
	ctx.f30.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x83919de0
	if (!cr6.lt) goto loc_83919DE0;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x83919dec
	goto loc_83919DEC;
loc_83919DE0:
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// ble cr6,0x83919dec
	if (!cr6.gt) goto loc_83919DEC;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
loc_83919DEC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x83919dfc
	if (!cr6.lt) goto loc_83919DFC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x83919e08
	goto loc_83919E08;
loc_83919DFC:
	// fcmpu cr6,f30,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// ble cr6,0x83919e08
	if (!cr6.gt) goto loc_83919E08;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
loc_83919E08:
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,5756(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x83919e30
	if (cr6.lt) goto loc_83919E30;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// bge cr6,0x83919e30
	if (!cr6.lt) goto loc_83919E30;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
loc_83919E30:
	// bl 0x82a0c738
	ctx.lr = 0x83919E34;
	sub_82A0C738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a161a8
	ctx.lr = 0x83919E3C;
	sub_82A161A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83919E44;
	sub_831156E8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x83919E60;
	sub_83123BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x83919E70;
	sub_831CE980(ctx, base);
	// lwz r9,2036(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2036);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r29,80
	ctx.r29.s64 = 80;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r8,392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lbz r5,224(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 224);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r11,252(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 252);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x83919f44
	if (cr6.eq) goto loc_83919F44;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beq cr6,0x83919ed4
	if (cr6.eq) goto loc_83919ED4;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8314b3a8
	ctx.lr = 0x83919EC0;
	sub_8314B3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,75
	cr6.compare<uint32_t>(ctx.r11.u32, 75, xer);
	// ble cr6,0x83919f50
	if (!cr6.gt) goto loc_83919F50;
	// li r29,85
	ctx.r29.s64 = 85;
	// b 0x83919f50
	goto loc_83919F50;
loc_83919ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83919f10
	if (cr6.eq) goto loc_83919F10;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83919f00
	if (!cr6.lt) goto loc_83919F00;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8314b3a8
	ctx.lr = 0x83919EF8;
	sub_8314B3A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83919f54
	goto loc_83919F54;
loc_83919F00:
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8314b3a8
	ctx.lr = 0x83919F08;
	sub_8314B3A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83919f54
	goto loc_83919F54;
loc_83919F10:
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8314b3a8
	ctx.lr = 0x83919F18;
	sub_8314B3A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8314b3a8
	ctx.lr = 0x83919F28;
	sub_8314B3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic. r10,r11,-75
	xer.ca = ctx.r11.u32 > 74;
	ctx.r10.s64 = ctx.r11.s64 + -75;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83919f50
	if (cr0.eq) goto loc_83919F50;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// b 0x83919f50
	goto loc_83919F50;
loc_83919F44:
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x8314b3a8
	ctx.lr = 0x83919F4C;
	sub_8314B3A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83919F50:
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83919F54:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,24556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24556);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f8,f10,f22
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f22.f64));
	// fmuls f7,f9,f22
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fmadds f28,f8,f21,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f21.f64 + ctx.f0.f64));
	// fmadds f29,f7,f21,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f21.f64 + ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a5d300
	ctx.lr = 0x83919F98;
	sub_82A5D300(ctx, base);
	// lfs f6,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmr f30,f19
	ctx.f30.f64 = ctx.f19.f64;
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f19,f31
	cr6.compare(ctx.f19.f64, ctx.f31.f64);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f27,f3,f6
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f24,f2,f5
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lfs f0,-12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f26,f1,f4
	ctx.f26.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// bge cr6,0x83919fd4
	if (!cr6.lt) goto loc_83919FD4;
	// fadds f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// b 0x83919fe0
	goto loc_83919FE0;
loc_83919FD4:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x83919fe0
	if (cr6.lt) goto loc_83919FE0;
	// fsubs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
loc_83919FE0:
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
	// fadds f1,f30,f15
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f15.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x83919FEC;
	sub_82A5AA98(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a5aa98
	ctx.lr = 0x8391A000;
	sub_82A5AA98(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmadds f30,f0,f27,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fmsubs f27,f13,f27,f11
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 - ctx.f11.f64));
	// bl 0x82a5d300
	ctx.lr = 0x8391A028;
	sub_82A5D300(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82a5d300
	ctx.lr = 0x8391A03C;
	sub_82A5D300(ctx, base);
	// lfs f10,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fmuls f2,f6,f6
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f0,f4,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82a5a9f8
	ctx.lr = 0x8391A070;
	sub_82A5A9F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vor v6,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v11,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// lvx128 v10,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lvx128 v8,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// vslw128 v12,v62,v62
	ctx.v12.u32[0] = ctx.v62.u32[0] << (ctx.v62.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v62.u32[1] << (ctx.v62.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v62.u32[2] << (ctx.v62.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v62.u32[3] << (ctx.v62.u8[12] & 0x1F);
	// lvx128 v5,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f25,288(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lvx128 v7,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,296(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmadds f13,f29,f20,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f20.f64 + ctx.f0.f64));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vmaddcfp128 v6,v13,v6,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor v13,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaddcfp128 v13,v6,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsel v11,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v60,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vaddfp128 v59,v60,v11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcsxwfp128 v9,v58,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vand128 v11,v58,v122
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v122.u8)));
	// vadduws v0,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vand128 v56,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vnmsubfp v13,v9,v10,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v10,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v13,v9,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v9,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddcfp128 v0,v13,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v5,v5,v0,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v10,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v4,v0,v4,v127
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v3,v9,v0,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v10,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v55,v11,v125
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8)));
	// lvx128 v6,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v5,v0,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v3,v0,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vupkd3d128 v8,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v8 = vTemp;
	// vand128 v54,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// vcmpequw128 v2,v56,v127
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vsldoi128 v124,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// vcmpequw128 v9,v55,v127
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// vand128 v53,v57,v125
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8)));
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// vcmpequw128 v1,v54,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// fmr f1,f28
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = ctx.f28.f64;
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v126,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// vcmpequw128 v7,v53,v127
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vmaddfp v0,v11,v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v10,v4,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v52,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v51,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsel v8,v0,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v11,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v10,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vsel v0,v11,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vor128 v50,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vxor v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vxor128 v12,v12,v50
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsel v0,v0,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vor128 v11,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vmaddcfp128 v0,v31,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsel v13,v12,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel128 v126,v0,v13,v126
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// bl 0x82a5d300
	ctx.lr = 0x8391A1B4;
	sub_82A5D300(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,880
	ctx.r4.s64 = ctx.r1.s64 + 880;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82a5d300
	ctx.lr = 0x8391A1C8;
	sub_82A5D300(ctx, base);
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x8391A1E4;
	sub_82A5A9F8(ctx, base);
	// lfs f13,-12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
	// fcmpu cr6,f23,f31
	cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// bge cr6,0x8391a1fc
	if (!cr6.lt) goto loc_8391A1FC;
	// fadds f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f13.f64));
	// b 0x8391a208
	goto loc_8391A208;
loc_8391A1FC:
	// fcmpu cr6,f23,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f13.f64);
	// blt cr6,0x8391a208
	if (cr6.lt) goto loc_8391A208;
	// fsubs f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f13.f64));
loc_8391A208:
	// fsubs f0,f0,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f15.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8391a220
	if (!cr6.lt) goto loc_8391A220;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8391a22c
	goto loc_8391A22C;
loc_8391A220:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8391a230
	if (cr6.lt) goto loc_8391A230;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8391A22C:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8391A230:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v13,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v49,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// lvx128 v11,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v31,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v31 = vTemp;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,7148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lvx128 v8,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v12,v49,v49
	ctx.v12.u32[0] = ctx.v49.u32[0] << (ctx.v49.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v49.u32[1] << (ctx.v49.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v49.u32[2] << (ctx.v49.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v49.u32[3] << (ctx.v49.u8[12] & 0x1F);
	// lvx128 v6,r0,r21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r20
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lvx128 v4,r0,r23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,4
	ctx.r6.s64 = 4;
	// lvx128 v3,r0,r22
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f13,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v2,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v36,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v35,r30,r14
	temp.u32 = ctx.r30.u32 + ctx.r14.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f25,340(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v48,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v10,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// vmaddcfp128 v7,v10,v7,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsldoi128 v10,v126,v126,12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), 4));
	// vmaddcfp128 v13,v7,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsel v9,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v47,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v46,v47,v9
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v45,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v46.f32)));
	// vand128 v0,v45,v122
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v122.u8)));
	// vcsxwfp128 v9,v45,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vadduws v30,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vand128 v44,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vand128 v43,v0,v125
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8)));
	// vor128 v42,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vcmpequw128 v30,v44,v127
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v29,v43,v127
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vand128 v41,v42,v13
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vnmsubfp v13,v9,v11,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vand128 v40,v42,v125
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8)));
	// vcmpequw128 v7,v41,v127
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v28,v40,v127
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vnmsubfp v13,v9,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v8,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddcfp128 v0,v13,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v11,v6,v0,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v9,v4,v0,v3
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddcfp128 v8,v0,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v11,v11,v0,v2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v9,v9,v0,v1
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v11,v0,v31
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v13,v9,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v39,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v38,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsel v8,v0,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vor128 v11,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vor128 v9,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vsel v0,v11,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v37,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vxor v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vxor128 v12,v12,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vor128 v11,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vsel v9,v0,v8,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vspltw128 v8,v126,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x0));
	// vsel v13,v12,v11,v28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v34,r30,r6
	temp.u32 = ctx.r30.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f9,f17,f27
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f17.f64 * ctx.f27.f64));
	// lvlx128 v33,r30,r5
	temp.u32 = ctx.r30.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v32,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vor128 v63,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vmaddcfp128 v12,v0,v12,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v0,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// fmuls f8,f30,f16
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f16.f64));
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// vrlimi128 v32,v33,4,3
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 57), 4));
	// stfs f24,260(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// vrlimi128 v63,v36,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 57), 4));
	// addi r9,r1,544
	ctx.r9.s64 = ctx.r1.s64 + 544;
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// addi r6,r1,560
	ctx.r6.s64 = ctx.r1.s64 + 560;
	// vor128 v7,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// vor128 v6,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fmuls f7,f9,f18
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f18.f64));
	// stfs f7,264(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vsel128 v0,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v61,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vrlimi128 v7,v36,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 78), 2));
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v6,v34,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 78), 2));
	// lfs f2,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// vspltw128 v60,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vor v4,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vsldoi v13,v0,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// vrlimi128 v7,v35,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 147), 1));
	// vspltw v5,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vrlimi128 v6,v35,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 147), 1));
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v4,v8,v4,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lfs f1,496(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f1.f64 = double(temp.f32);
	// vperm v12,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// vperm v0,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r15,r15,32
	ctx.r15.s64 = ctx.r15.s64 + 32;
	// vperm128 v11,v126,v126,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddcfp128 v9,v126,v9,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v6,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vperm128 v8,v126,v126,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v6,v5,v6,v4
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v7,v10,v13,v9
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v9,v10,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v8,v0,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vsldoi128 v59,v7,v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), 8));
	// vsubfp128 v0,v9,v59
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vnmsubfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v12,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// vsel128 v12,v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vspltw128 v58,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v56,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vspltw128 v55,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v57,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,560(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,544(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,512(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f3.f64 = double(temp.f32);
	// stvx128 v57,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f25,28(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,528(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r5,4(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r4,0(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83919d78
	if (cr6.lt) goto loc_83919D78;
	// lwz r24,2036(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2036);
	// lwz r25,208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8391A4E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// bl 0x8392cc08
	ctx.lr = 0x8391A4F0;
	sub_8392CC08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// lfs f0,21588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f13.u64);
	// lfs f13,24524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24524);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.f11.u64);
	// lfs f13,24552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24552);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f10.u64);
	// stfd f12,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f12.u64);
	// lbz r5,223(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 223);
	// lfs f0,-3400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3400);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,239(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r3,231(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lbz r7,199(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// beq cr6,0x8391a56c
	if (cr6.eq) goto loc_8391A56C;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// bne cr6,0x8391a578
	if (!cr6.eq) goto loc_8391A578;
loc_8391A56C:
	// li r11,32
	ctx.r11.s64 = 32;
	// fmr f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f16.f64;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
loc_8391A578:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f25,308(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f0,-8312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8312);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f14,f0
	ctx.f0.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// bl 0x8392cbe0
	ctx.lr = 0x8391A5A4;
	sub_8392CBE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// bl 0x8392cc40
	ctx.lr = 0x8391A5B0;
	sub_8392CC40(ctx, base);
	// b 0x8391a5bc
	goto loc_8391A5BC;
loc_8391A5B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8392cc08
	ctx.lr = 0x8391A5BC;
	sub_8392CC08(ctx, base);
loc_8391A5BC:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391a5d0
	if (cr6.eq) goto loc_8391A5D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
loc_8391A5D0:
	// addi r1,r1,2016
	ctx.r1.s64 = ctx.r1.s64 + 2016;
	// addi r12,r1,-304
	ctx.r12.s64 = ctx.r1.s64 + -304;
	// bl 0x831d14dc
	ctx.lr = 0x8391A5DC;
	__restvmx_122(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce78c
	ctx.lr = 0x8391A5E4;
	__restfpr_14(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391A5E8"))) PPC_WEAK_FUNC(sub_8391A5E8);
PPC_FUNC_IMPL(__imp__sub_8391A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8391A5F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,24388
	ctx.r4.s64 = ctx.r11.s64 + 24388;
	// bl 0x83103328
	ctx.lr = 0x8391A604;
	sub_83103328(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,24528
	ctx.r8.s64 = ctx.r10.s64 + 24528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r7,r9,-19040
	ctx.r7.s64 = ctx.r9.s64 + -19040;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r4,r6,-22864
	ctx.r4.s64 = ctx.r6.s64 + -22864;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r9,r5,-22892
	ctx.r9.s64 = ctx.r5.s64 + -22892;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r7,r8,-24636
	ctx.r7.s64 = ctx.r8.s64 + -24636;
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r27,r31,132
	ctx.r27.s64 = ctx.r31.s64 + 132;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r6,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r6.u32);
	// stb r11,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r11.u8);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8391A6D0;
	sub_831CDCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bf380
	ctx.lr = 0x8391A6D8;
	sub_825BF380(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b4da8
	ctx.lr = 0x8391A6E0;
	sub_825B4DA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b4748
	ctx.lr = 0x8391A6E8;
	sub_825B4748(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825aa080
	ctx.lr = 0x8391A6F0;
	sub_825AA080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391A6FC"))) PPC_WEAK_FUNC(sub_8391A6FC);
PPC_FUNC_IMPL(__imp__sub_8391A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391A700"))) PPC_WEAK_FUNC(sub_8391A700);
PPC_FUNC_IMPL(__imp__sub_8391A700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8391A708;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce764
	ctx.lr = 0x8391A710;
	__savefpr_23(ctx, base);
	// li r12,-240
	ctx.r12.s64 = -240;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-31763
	ctx.r17.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-3564(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// lwz r15,192(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r14,292(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x830ff290
	ctx.lr = 0x8391A734;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391A738;
	sub_830FFAA8(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x8391acd8
	if (cr6.eq) goto loc_8391ACD8;
	// addi r27,r28,92
	ctx.r27.s64 = ctx.r28.s64 + 92;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391a760
	if (!cr6.eq) goto loc_8391A760;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b4da8
	ctx.lr = 0x8391A760;
	sub_825B4DA8(ctx, base);
loc_8391A760:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391a77c
	if (!cr6.eq) goto loc_8391A77C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
loc_8391A77C:
	// lwz r18,12(r27)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82a22c10
	ctx.lr = 0x8391A790;
	sub_82A22C10(ctx, base);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,255
	ctx.r11.s64 = 255;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x8391a7c4
	if (cr6.lt) goto loc_8391A7C4;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x8391a7c4
	if (!cr6.lt) goto loc_8391A7C4;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8391a7c4
	if (cr6.lt) goto loc_8391A7C4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8391a7c8
	if (cr6.lt) goto loc_8391A7C8;
loc_8391A7C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8391A7C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391a7e8
	if (cr6.eq) goto loc_8391A7E8;
	// lwz r3,-3564(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x8391A7DC;
	sub_82A0C738(ctx, base);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82a2a378
	ctx.lr = 0x8391A7E4;
	sub_82A2A378(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_8391A7E8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r24,r11,-26260
	ctx.r24.s64 = ctx.r11.s64 + -26260;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lfs f24,24568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24568);
	ctx.f24.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f30,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lfs f27,24508(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24508);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f23,24564(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24564);
	ctx.f23.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f25,9796(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9796);
	ctx.f25.f64 = double(temp.f32);
	// li r20,24
	ctx.r20.s64 = 24;
	// lfs f26,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f26.f64 = double(temp.f32);
	// ori r16,r4,30072
	ctx.r16.u64 = ctx.r4.u64 | 30072;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// lis r21,-31768
	ctx.r21.s64 = -2081947648;
	// lis r19,-31778
	ctx.r19.s64 = -2082603008;
	// addi r23,r11,7272
	ctx.r23.s64 = ctx.r11.s64 + 7272;
loc_8391A848:
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// lwz r9,392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// li r11,6
	ctx.r11.s64 = 6;
	// subfc r6,r20,r7
	xer.ca = ctx.r7.u32 >= ctx.r20.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r20.s64;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r3,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 + 328;
loc_8391A884:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8391a884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391A884;
	// lwz r3,2056(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2056);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r30,221(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 221);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8391A8B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8391a914
	if (cr6.eq) goto loc_8391A914;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(ctx.r25.u32, 24, xer);
	// blt cr6,0x8391a8cc
	if (cr6.lt) goto loc_8391A8CC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8391A8CC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391a920
	if (cr6.eq) goto loc_8391A920;
	// lwz r3,2056(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2056);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391A8F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x8391a920
	if (!cr6.eq) goto loc_8391A920;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x8391a920
	if (!cr6.lt) goto loc_8391A920;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x8391a91c
	goto loc_8391A91C;
loc_8391A914:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x8391a920
	if (!cr6.lt) goto loc_8391A920;
loc_8391A91C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8391A920:
	// lwz r29,216(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r29,255
	cr6.compare<int32_t>(ctx.r29.s32, 255, xer);
	// beq cr6,0x8391acb8
	if (cr6.eq) goto loc_8391ACB8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391acb8
	if (cr6.eq) goto loc_8391ACB8;
	// lbz r27,208(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// bge cr6,0x8391a95c
	if (!cr6.lt) goto loc_8391A95C;
	// addi r11,r29,27718
	ctx.r11.s64 = ctx.r29.s64 + 27718;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 + ctx.r18.u64;
	// b 0x8391a960
	goto loc_8391A960;
loc_8391A95C:
	// add r31,r18,r16
	ctx.r31.u64 = ctx.r18.u64 + ctx.r16.u64;
loc_8391A960:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x8391a970
	if (cr6.lt) goto loc_8391A970;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8391A970:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x8357ece0
	ctx.lr = 0x8391A97C;
	sub_8357ECE0(ctx, base);
	// lwz r10,4456(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4456);
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 & ctx.r27.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8391ac78
	if (cr6.eq) goto loc_8391AC78;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x8391ac78
	if (cr6.eq) goto loc_8391AC78;
	// bl 0x82a47e20
	ctx.lr = 0x8391A9B8;
	sub_82A47E20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8391ac78
	if (cr6.eq) goto loc_8391AC78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47d40
	ctx.lr = 0x8391A9C8;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8391a9e4
	if (cr6.eq) goto loc_8391A9E4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x8391a9e4
	if (cr6.eq) goto loc_8391A9E4;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x8391ac78
	if (!cr6.eq) goto loc_8391AC78;
loc_8391A9E4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8391a9f8
	if (cr6.lt) goto loc_8391A9F8;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8391a9fc
	if (cr6.lt) goto loc_8391A9FC;
loc_8391A9F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8391A9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391aa1c
	if (cr6.eq) goto loc_8391AA1C;
	// add r11,r29,r14
	ctx.r11.u64 = ctx.r29.u64 + ctx.r14.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8391aa20
	goto loc_8391AA20;
loc_8391AA1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8391AA20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391ac78
	if (cr6.eq) goto loc_8391AC78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8391AA38;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,24076(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 24076);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lwz r9,1280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// lwz r8,1284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f29,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f28,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// bl 0x82cd6c48
	ctx.lr = 0x8391AA9C;
	sub_82CD6C48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8391ab1c
	if (cr6.eq) goto loc_8391AB1C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8391ab20
	if (!cr6.eq) goto loc_8391AB20;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8391aaf0
	if (!cr6.eq) goto loc_8391AAF0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x8391AAE4;
	sub_82CD6C48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8391ab20
	goto loc_8391AB20;
loc_8391AAF0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8391ab20
	if (!cr6.eq) goto loc_8391AB20;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cd6c48
	ctx.lr = 0x8391AB10;
	sub_82CD6C48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8391ab20
	goto loc_8391AB20;
loc_8391AB1C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8391AB20:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lfs f4,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x8391AB38;
	sub_825C3EC0(ctx, base);
	// lfs f0,7148(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 7148);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x8391AB60;
	sub_82624408(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// vspltisw v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r26,40
	ctx.r9.s64 = ctx.r26.s64 + 40;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stfs f9,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v62,v10,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vrsqrtefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v62.f32))));
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// vmulfp128 v12,v62,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v12,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cc40
	ctx.lr = 0x8391ABCC;
	sub_8392CC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391ABD8;
	sub_8392CC08(ctx, base);
	// lvlx128 v61,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// vspltw128 v127,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v127,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x8391ABFC;
	sub_8392CBE0(ctx, base);
	// addi r7,r26,48
	ctx.r7.s64 = ctx.r26.s64 + 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8392cc40
	ctx.lr = 0x8391AC10;
	sub_8392CC40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391AC1C;
	sub_8392CC08(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8392cbe0
	ctx.lr = 0x8391AC38;
	sub_8392CBE0(ctx, base);
	// addi r10,r26,56
	ctx.r10.s64 = ctx.r26.s64 + 56;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8392cc40
	ctx.lr = 0x8391AC4C;
	sub_8392CC40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391AC58;
	sub_8392CC08(ctx, base);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8392cbe0
	ctx.lr = 0x8391AC74;
	sub_8392CBE0(ctx, base);
	// b 0x8391acb4
	goto loc_8391ACB4;
loc_8391AC78:
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391AC8C;
	sub_8392CC08(ctx, base);
	// addi r9,r26,48
	ctx.r9.s64 = ctx.r26.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391ACA0;
	sub_8392CC08(ctx, base);
	// addi r7,r26,56
	ctx.r7.s64 = ctx.r26.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// bl 0x8392cc08
	ctx.lr = 0x8391ACB4;
	sub_8392CC08(ctx, base);
loc_8391ACB4:
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8391ACB8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(ctx.r25.u32, 24, xer);
	// blt cr6,0x8391a848
	if (cr6.lt) goto loc_8391A848;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391acd8
	if (cr6.eq) goto loc_8391ACD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_8391ACD8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// li r0,-240
	ctx.r0.s64 = -240;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b0
	ctx.lr = 0x8391ACEC;
	__restfpr_23(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391ACF0"))) PPC_WEAK_FUNC(sub_8391ACF0);
PPC_FUNC_IMPL(__imp__sub_8391ACF0) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391AD14;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391ad30
	if (cr6.eq) goto loc_8391AD30;
	// bl 0x8391a5e8
	ctx.lr = 0x8391AD20;
	sub_8391A5E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8391AD30:
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

__attribute__((alias("__imp__sub_8391AD44"))) PPC_WEAK_FUNC(sub_8391AD44);
PPC_FUNC_IMPL(__imp__sub_8391AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391AD48"))) PPC_WEAK_FUNC(sub_8391AD48);
PPC_FUNC_IMPL(__imp__sub_8391AD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8391AD50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8391aea4
	if (cr6.eq) goto loc_8391AEA4;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8391AD8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8391aea4
	if (!cr6.eq) goto loc_8391AEA4;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,392(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// beq cr6,0x8391ae54
	if (cr6.eq) goto loc_8391AE54;
	// lwz r11,4456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4456);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8391ae54
	if (cr6.eq) goto loc_8391AE54;
	// lbz r11,381(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 381);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391ae54
	if (!cr6.eq) goto loc_8391AE54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x8391ADCC;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391ae54
	if (!cr6.eq) goto loc_8391AE54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83917fc8
	ctx.lr = 0x8391ADE0;
	sub_83917FC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839180e0
	ctx.lr = 0x8391ADE8;
	sub_839180E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391a700
	ctx.lr = 0x8391ADF0;
	sub_8391A700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83918288
	ctx.lr = 0x8391ADF8;
	sub_83918288(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8391ADFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83918d98
	ctx.lr = 0x8391AE08;
	sub_83918D98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839191a8
	ctx.lr = 0x8391AE14;
	sub_839191A8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// blt cr6,0x8391adfc
	if (cr6.lt) goto loc_8391ADFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83918588
	ctx.lr = 0x8391AE28;
	sub_83918588(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83919750
	ctx.lr = 0x8391AE30;
	sub_83919750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83918ea0
	ctx.lr = 0x8391AE38;
	sub_83918EA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839189d0
	ctx.lr = 0x8391AE40;
	sub_839189D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83918cb8
	ctx.lr = 0x8391AE48;
	sub_83918CB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8391AE54:
	// addi r31,r30,156
	ctx.r31.s64 = ctx.r30.s64 + 156;
	// li r29,56
	ctx.r29.s64 = 56;
loc_8391AE5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391ae70
	if (cr6.eq) goto loc_8391AE70;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8392cc08
	ctx.lr = 0x8391AE70;
	sub_8392CC08(ctx, base);
loc_8391AE70:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8391ae5c
	if (!cr0.eq) goto loc_8391AE5C;
	// lbz r11,381(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 381);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391aea4
	if (cr6.eq) goto loc_8391AEA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x8391AE90;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391aea4
	if (!cr6.eq) goto loc_8391AEA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839180e0
	ctx.lr = 0x8391AEA4;
	sub_839180E0(ctx, base);
loc_8391AEA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391AEB0"))) PPC_WEAK_FUNC(sub_8391AEB0);
PPC_FUNC_IMPL(__imp__sub_8391AEB0) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8391aef0
	if (cr6.eq) goto loc_8391AEF0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8391aee4
	if (cr6.eq) goto loc_8391AEE4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8391af10
	if (!cr6.eq) goto loc_8391AF10;
	// b 0x8391af08
	goto loc_8391AF08;
loc_8391AEE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391ad48
	ctx.lr = 0x8391AEEC;
	sub_8391AD48(ctx, base);
	// b 0x8391aef8
	goto loc_8391AEF8;
loc_8391AEF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83917e58
	ctx.lr = 0x8391AEF8;
	sub_83917E58(ctx, base);
loc_8391AEF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391af10
	if (cr6.eq) goto loc_8391AF10;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_8391AF08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_8391AF10:
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

__attribute__((alias("__imp__sub_8391AF24"))) PPC_WEAK_FUNC(sub_8391AF24);
PPC_FUNC_IMPL(__imp__sub_8391AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391AF28"))) PPC_WEAK_FUNC(sub_8391AF28);
PPC_FUNC_IMPL(__imp__sub_8391AF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
loc_8391AF4C:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// stwx r9,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u32);
	// stb r8,100(r10)
	PPC_STORE_U8(ctx.r10.u32 + 100, ctx.r8.u8);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x8391af4c
	if (cr6.lt) goto loc_8391AF4C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391AF74"))) PPC_WEAK_FUNC(sub_8391AF74);
PPC_FUNC_IMPL(__imp__sub_8391AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391AF78"))) PPC_WEAK_FUNC(sub_8391AF78);
PPC_FUNC_IMPL(__imp__sub_8391AF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391AFB4"))) PPC_WEAK_FUNC(sub_8391AFB4);
PPC_FUNC_IMPL(__imp__sub_8391AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391AFB8"))) PPC_WEAK_FUNC(sub_8391AFB8);
PPC_FUNC_IMPL(__imp__sub_8391AFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8391AFD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r8.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x8391afd8
	if (cr6.lt) goto loc_8391AFD8;
	// stb r9,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r9.u8);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
	// stb r9,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r9.u8);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B014"))) PPC_WEAK_FUNC(sub_8391B014);
PPC_FUNC_IMPL(__imp__sub_8391B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B018"))) PPC_WEAK_FUNC(sub_8391B018);
PPC_FUNC_IMPL(__imp__sub_8391B018) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B030"))) PPC_WEAK_FUNC(sub_8391B030);
PPC_FUNC_IMPL(__imp__sub_8391B030) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B044"))) PPC_WEAK_FUNC(sub_8391B044);
PPC_FUNC_IMPL(__imp__sub_8391B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B048"))) PPC_WEAK_FUNC(sub_8391B048);
PPC_FUNC_IMPL(__imp__sub_8391B048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B064"))) PPC_WEAK_FUNC(sub_8391B064);
PPC_FUNC_IMPL(__imp__sub_8391B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B068"))) PPC_WEAK_FUNC(sub_8391B068);
PPC_FUNC_IMPL(__imp__sub_8391B068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B09C"))) PPC_WEAK_FUNC(sub_8391B09C);
PPC_FUNC_IMPL(__imp__sub_8391B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B0A0"))) PPC_WEAK_FUNC(sub_8391B0A0);
PPC_FUNC_IMPL(__imp__sub_8391B0A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B0B8"))) PPC_WEAK_FUNC(sub_8391B0B8);
PPC_FUNC_IMPL(__imp__sub_8391B0B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B0C8"))) PPC_WEAK_FUNC(sub_8391B0C8);
PPC_FUNC_IMPL(__imp__sub_8391B0C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B0EC"))) PPC_WEAK_FUNC(sub_8391B0EC);
PPC_FUNC_IMPL(__imp__sub_8391B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B0F0"))) PPC_WEAK_FUNC(sub_8391B0F0);
PPC_FUNC_IMPL(__imp__sub_8391B0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8391B10C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b10c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B10C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B118"))) PPC_WEAK_FUNC(sub_8391B118);
PPC_FUNC_IMPL(__imp__sub_8391B118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B160"))) PPC_WEAK_FUNC(sub_8391B160);
PPC_FUNC_IMPL(__imp__sub_8391B160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8391B188:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391b188
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B198"))) PPC_WEAK_FUNC(sub_8391B198);
PPC_FUNC_IMPL(__imp__sub_8391B198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B1BC"))) PPC_WEAK_FUNC(sub_8391B1BC);
PPC_FUNC_IMPL(__imp__sub_8391B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B1C0"))) PPC_WEAK_FUNC(sub_8391B1C0);
PPC_FUNC_IMPL(__imp__sub_8391B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8391B1C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,3568
	ctx.r31.s64 = ctx.r3.s64 + 3568;
	// li r29,10
	ctx.r29.s64 = 10;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8391B1DC:
	// lwz r30,-40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8391b210
	if (cr6.eq) goto loc_8391B210;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8391B1F0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8391b20c
	if (cr6.gt) goto loc_8391B20C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391B20C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8391B20C:
	// stw r26,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r26.u32);
loc_8391B210:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391b224
	if (cr6.eq) goto loc_8391B224;
	// bl 0x833bbd78
	ctx.lr = 0x8391B220;
	sub_833BBD78(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8391B224:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8391b1dc
	if (!cr0.eq) goto loc_8391B1DC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r28,3504
	ctx.r27.s64 = ctx.r28.s64 + 3504;
	// addi r31,r28,2544
	ctx.r31.s64 = ctx.r28.s64 + 2544;
loc_8391B23C:
	// stbx r26,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r26.u8);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8391b274
	if (cr6.eq) goto loc_8391B274;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8391B254;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8391b270
	if (cr6.gt) goto loc_8391B270;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391B270;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8391B270:
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
loc_8391B274:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391b288
	if (cr6.eq) goto loc_8391B288;
	// bl 0x833bbd78
	ctx.lr = 0x8391B284;
	sub_833BBD78(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8391B288:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x8391b23c
	if (cr6.lt) goto loc_8391B23C;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_8391B29C:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8391B2A0:
	// add r29,r25,r27
	ctx.r29.u64 = ctx.r25.u64 + ctx.r27.u64;
	// addi r11,r29,444
	ctx.r11.s64 = ctx.r29.s64 + 444;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r30,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8391b2e0
	if (cr6.eq) goto loc_8391B2E0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8391B2C0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8391b2dc
	if (cr6.gt) goto loc_8391B2DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391B2DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8391B2DC:
	// stwx r26,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r26.u32);
loc_8391B2E0:
	// addi r11,r29,508
	ctx.r11.s64 = ctx.r29.s64 + 508;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391b2fc
	if (cr6.eq) goto loc_8391B2FC;
	// bl 0x833bbd78
	ctx.lr = 0x8391B2F8;
	sub_833BBD78(ctx, base);
	// stwx r26,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u32);
loc_8391B2FC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8391b2a0
	if (cr6.lt) goto loc_8391B2A0;
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// cmpwi cr6,r25,64
	cr6.compare<int32_t>(ctx.r25.s32, 64, xer);
	// blt cr6,0x8391b29c
	if (cr6.lt) goto loc_8391B29C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391B324"))) PPC_WEAK_FUNC(sub_8391B324);
PPC_FUNC_IMPL(__imp__sub_8391B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B328"))) PPC_WEAK_FUNC(sub_8391B328);
PPC_FUNC_IMPL(__imp__sub_8391B328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x8391b3a4
	if (cr6.gt) goto loc_8391B3A4;
	// lis r12,-31854
	ctx.r12.s64 = -2087583744;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19624
	ctx.r12.s64 = ctx.r12.s64 + -19624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8391B384;
	case 1:
		goto loc_8391B3A4;
	case 2:
		goto loc_8391B384;
	case 3:
		goto loc_8391B3A4;
	case 4:
		goto loc_8391B384;
	case 5:
		goto loc_8391B3A4;
	case 6:
		goto loc_8391B384;
	case 7:
		goto loc_8391B3A4;
	case 8:
		goto loc_8391B384;
	case 9:
		goto loc_8391B3A4;
	case 10:
		goto loc_8391B39C;
	default:
		return;
	}
	// lwz r28,-19580(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19580);
	// lwz r28,-19548(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19548);
	// lwz r28,-19580(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19580);
	// lwz r28,-19548(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19548);
	// lwz r28,-19580(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19580);
	// lwz r28,-19548(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19548);
	// lwz r28,-19580(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19580);
	// lwz r28,-19548(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19548);
	// lwz r28,-19580(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19580);
	// lwz r28,-19548(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19548);
	// lwz r28,-19556(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19556);
loc_8391B384:
	// lwz r10,5356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8391b39c
	if (!cr6.eq) goto loc_8391B39C;
	// lbz r11,4498(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4498);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391b3a4
	if (!cr6.eq) goto loc_8391B3A4;
loc_8391B39C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8391B3A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B3AC"))) PPC_WEAK_FUNC(sub_8391B3AC);
PPC_FUNC_IMPL(__imp__sub_8391B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B3B0"))) PPC_WEAK_FUNC(sub_8391B3B0);
PPC_FUNC_IMPL(__imp__sub_8391B3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,3276
	ctx.r8.s64 = 214695936;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r6,r8,52428
	ctx.r6.u64 = ctx.r8.u64 | 52428;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x8391b3e4
	if (!cr6.lt) goto loc_8391B3E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8391b3e8
	goto loc_8391B3E8;
loc_8391B3E4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8391B3E8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bltlr cr6
	if (cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B3FC"))) PPC_WEAK_FUNC(sub_8391B3FC);
PPC_FUNC_IMPL(__imp__sub_8391B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B400"))) PPC_WEAK_FUNC(sub_8391B400);
PPC_FUNC_IMPL(__imp__sub_8391B400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,3649(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391b414
	if (cr6.eq) goto loc_8391B414;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8391B414:
	// b 0x8391b328
	sub_8391B328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391B418"))) PPC_WEAK_FUNC(sub_8391B418);
PPC_FUNC_IMPL(__imp__sub_8391B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391B420;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d0b4c8
	ctx.lr = 0x8391B438;
	sub_82D0B4C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391b44c
	if (cr6.lt) goto loc_8391B44C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8391b450
	goto loc_8391B450;
loc_8391B44C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391B450:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d06fa0
	ctx.lr = 0x8391B458;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d04828
	ctx.lr = 0x8391B460;
	sub_82D04828(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391b474
	if (cr6.lt) goto loc_8391B474;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8391b478
	goto loc_8391B478;
loc_8391B474:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391B478:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d06fa0
	ctx.lr = 0x8391B480;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d047a8
	ctx.lr = 0x8391B488;
	sub_82D047A8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,24916
	ctx.r31.s64 = ctx.r11.s64 + 24916;
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8391b4ac
	if (cr6.lt) goto loc_8391B4AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-5556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5556);
	ctx.f1.f64 = double(temp.f32);
loc_8391B4AC:
	// bl 0x82d07058
	ctx.lr = 0x8391B4B0;
	sub_82D07058(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07060
	ctx.lr = 0x8391B4BC;
	sub_82D07060(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a7a980
	ctx.lr = 0x8391B4C8;
	sub_83A7A980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a245d0
	ctx.lr = 0x8391B4D4;
	sub_82A245D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d07118
	ctx.lr = 0x8391B4E0;
	sub_82D07118(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dab6d8
	ctx.lr = 0x8391B4EC;
	sub_82DAB6D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0af58
	ctx.lr = 0x8391B504;
	sub_82D0AF58(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d04b60
	ctx.lr = 0x8391B514;
	sub_82D04B60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0b540
	ctx.lr = 0x8391B51C;
	sub_82D0B540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391B528"))) PPC_WEAK_FUNC(sub_8391B528);
PPC_FUNC_IMPL(__imp__sub_8391B528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8391b568
	if (cr6.eq) goto loc_8391B568;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8391B538:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8391b55c
	if (cr6.eq) goto loc_8391B55C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8391B550:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b550
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B550;
loc_8391B55C:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// bne 0x8391b538
	if (!cr0.eq) goto loc_8391B538;
loc_8391B568:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B57C"))) PPC_WEAK_FUNC(sub_8391B57C);
PPC_FUNC_IMPL(__imp__sub_8391B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B580"))) PPC_WEAK_FUNC(sub_8391B580);
PPC_FUNC_IMPL(__imp__sub_8391B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r5,36
	ctx.r11.s64 = ctx.r5.s64 + 36;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x8391b5c0
	if (cr6.eq) goto loc_8391B5C0;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
loc_8391B594:
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391B5A4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8391b5a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B5A4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8391b594
	if (!cr6.eq) goto loc_8391B594;
loc_8391B5C0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391B5D4"))) PPC_WEAK_FUNC(sub_8391B5D4);
PPC_FUNC_IMPL(__imp__sub_8391B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B5D8"))) PPC_WEAK_FUNC(sub_8391B5D8);
PPC_FUNC_IMPL(__imp__sub_8391B5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8391B5E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8391b954
	if (cr6.eq) goto loc_8391B954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,20
	ctx.r23.s64 = 20;
	// ori r8,r10,52428
	ctx.r8.u64 = ctx.r10.u64 | 52428;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, xer);
	// bge cr6,0x8391b630
	if (!cr6.lt) goto loc_8391B630;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8391B630;
	sub_831CC150(ctx, base);
loc_8391B630:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + ctx.r26.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x8391b79c
	if (!cr6.lt) goto loc_8391B79C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8391b3b0
	ctx.lr = 0x8391B650;
	sub_8391B3B0(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82595718
	ctx.lr = 0x8391B678;
	sub_82595718(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// divw r31,r9,r23
	ctx.r31.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8391b528
	ctx.lr = 0x8391B6A8;
	sub_8391B528(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x8391b6ec
	if (cr6.eq) goto loc_8391B6EC;
loc_8391B6B8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391b6dc
	if (cr6.eq) goto loc_8391B6DC;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8391B6D0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8391b6d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B6D0;
loc_8391B6DC:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x8391b6b8
	if (!cr6.eq) goto loc_8391B6B8;
loc_8391B6EC:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x8391b74c
	if (cr6.eq) goto loc_8391B74C;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_8391B718:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391b73c
	if (cr6.eq) goto loc_8391B73C;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8391B730:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8391b730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B730;
loc_8391B73C:
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bne cr6,0x8391b718
	if (!cr6.eq) goto loc_8391B718;
loc_8391B74C:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r10,r23
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r23.s32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x8391b774
	if (cr6.eq) goto loc_8391B774;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8391B774;
	sub_825952B8(ctx, base);
loc_8391B774:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// add r10,r25,r30
	ctx.r10.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8391B79C:
	// subf r11,r27,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r27.s64;
	// li r9,5
	ctx.r9.s64 = 5;
	// divw r10,r11,r23
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r23.s32);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bge cr6,0x8391b880
	if (!cr6.lt) goto loc_8391B880;
loc_8391B7BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b7bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B7BC;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// beq cr6,0x8391b818
	if (cr6.eq) goto loc_8391B818;
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
loc_8391B7E4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391b808
	if (cr6.eq) goto loc_8391B808;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391B7FC:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b7fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B7FC;
loc_8391B808:
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x8391b7e4
	if (!cr6.eq) goto loc_8391B7E4;
loc_8391B818:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r27,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r27.s64;
	// divw r10,r11,r23
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r23.s32);
	// subf r5,r10,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r10.s64;
	// bl 0x8391b528
	ctx.lr = 0x8391B834;
	sub_8391B528(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x8391b954
	if (cr6.eq) goto loc_8391B954;
loc_8391B850:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391B860:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b860
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B860;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x8391b850
	if (!cr6.eq) goto loc_8391B850;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8391B880:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b880
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B880;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8391b8e0
	if (cr6.eq) goto loc_8391B8E0;
loc_8391B8AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391b8d0
	if (cr6.eq) goto loc_8391B8D0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8391B8C4:
	// lwzu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8391b8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B8C4;
loc_8391B8D0:
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x8391b8ac
	if (!cr6.eq) goto loc_8391B8AC;
loc_8391B8E0:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x8391b91c
	if (cr6.eq) goto loc_8391B91C;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_8391B8F0:
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addi r8,r8,-20
	ctx.r8.s64 = ctx.r8.s64 + -20;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8391B908:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8391b908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B908;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x8391b8f0
	if (!cr6.eq) goto loc_8391B8F0;
loc_8391B91C:
	// add r7,r4,r27
	ctx.r7.u64 = ctx.r4.u64 + ctx.r27.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x8391b954
	if (cr6.eq) goto loc_8391B954;
loc_8391B92C:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8391B93C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391b93c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391B93C;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8391b92c
	if (!cr6.eq) goto loc_8391B92C;
loc_8391B954:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391B95C"))) PPC_WEAK_FUNC(sub_8391B95C);
PPC_FUNC_IMPL(__imp__sub_8391B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391B960"))) PPC_WEAK_FUNC(sub_8391B960);
PPC_FUNC_IMPL(__imp__sub_8391B960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391B968;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r29,36
	ctx.r29.s64 = 36;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// blt cr6,0x8391b9a0
	if (cr6.lt) goto loc_8391B9A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8391b580
	ctx.lr = 0x8391B9A0;
	sub_8391B580(ctx, base);
loc_8391B9A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x8391b9c0
	if (!cr6.lt) goto loc_8391B9C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
loc_8391B9C0:
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391b9dc
	if (cr6.eq) goto loc_8391B9DC;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_8391B9DC:
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391b9f0
	if (cr6.eq) goto loc_8391B9F0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
loc_8391B9F0:
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba04
	if (cr6.eq) goto loc_8391BA04;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
loc_8391BA04:
	// lbz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba18
	if (cr6.eq) goto loc_8391BA18;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
loc_8391BA18:
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba2c
	if (cr6.eq) goto loc_8391BA2C;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_8391BA2C:
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba40
	if (cr6.eq) goto loc_8391BA40;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
loc_8391BA40:
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba54
	if (cr6.eq) goto loc_8391BA54;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
loc_8391BA54:
	// lbz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba68
	if (cr6.eq) goto loc_8391BA68;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
loc_8391BA68:
	// lbz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba7c
	if (cr6.eq) goto loc_8391BA7C;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8391BA7C:
	// lbz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391ba90
	if (cr6.eq) goto loc_8391BA90;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
loc_8391BA90:
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391baa4
	if (cr6.eq) goto loc_8391BAA4;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_8391BAA4:
	// lbz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391bab8
	if (cr6.eq) goto loc_8391BAB8;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_8391BAB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391BAC0"))) PPC_WEAK_FUNC(sub_8391BAC0);
PPC_FUNC_IMPL(__imp__sub_8391BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391BAC8;
	__savegprlr_29(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r3,9
	ctx.r9.s64 = ctx.r3.s64 + 9;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391BAE8:
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391bae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BAE8;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// stb r4,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r4.u8);
	// stw r9,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_8391BB18:
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// stdu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8391bb18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BB18;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 + 108;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8391BB44:
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391bb44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BB44;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,36
	ctx.r31.s64 = 36;
	// addi r6,r3,120
	ctx.r6.s64 = ctx.r3.s64 + 120;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r31
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r31.s32);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// blt cr6,0x8391bbcc
	if (cr6.lt) goto loc_8391BBCC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8391bbc0
	if (cr6.eq) goto loc_8391BBC0;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
loc_8391BB94:
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391BBA4:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8391bba4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BBA4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8391bb94
	if (!cr6.eq) goto loc_8391BB94;
loc_8391BBC0:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_8391BBCC:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x8391bbe8
	if (!cr6.lt) goto loc_8391BBE8;
	// stb r29,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r29.u8);
loc_8391BBE8:
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc00
	if (cr6.eq) goto loc_8391BC00;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
loc_8391BC00:
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc14
	if (cr6.eq) goto loc_8391BC14;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
loc_8391BC14:
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc28
	if (cr6.eq) goto loc_8391BC28;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
loc_8391BC28:
	// lbz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc3c
	if (cr6.eq) goto loc_8391BC3C;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r4,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r4.u8);
loc_8391BC3C:
	// lbz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc50
	if (cr6.eq) goto loc_8391BC50;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r4,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r4.u8);
loc_8391BC50:
	// lbz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc64
	if (cr6.eq) goto loc_8391BC64;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r4,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r4.u8);
loc_8391BC64:
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc78
	if (cr6.eq) goto loc_8391BC78;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r4,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r4.u8);
loc_8391BC78:
	// lbz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bc8c
	if (cr6.eq) goto loc_8391BC8C;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r4,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r4.u8);
loc_8391BC8C:
	// lbz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bca0
	if (cr6.eq) goto loc_8391BCA0;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
loc_8391BCA0:
	// lbz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bcb4
	if (cr6.eq) goto loc_8391BCB4;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r4,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r4.u8);
loc_8391BCB4:
	// lbz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bcc8
	if (cr6.eq) goto loc_8391BCC8;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r4,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r4.u8);
loc_8391BCC8:
	// lbz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391bcdc
	if (cr6.eq) goto loc_8391BCDC;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r4,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r4.u8);
loc_8391BCDC:
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r3,136
	ctx.r9.s64 = ctx.r3.s64 + 136;
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8391BCF8:
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// stfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391bcf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BCF8;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391BD0C"))) PPC_WEAK_FUNC(sub_8391BD0C);
PPC_FUNC_IMPL(__imp__sub_8391BD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391BD10"))) PPC_WEAK_FUNC(sub_8391BD10);
PPC_FUNC_IMPL(__imp__sub_8391BD10) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x8391bd40
	if (cr6.lt) goto loc_8391BD40;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r4,r11,24626
	ctx.r4.s64 = ctx.r11.s64 + 24626;
	// bl 0x837b0c10
	ctx.lr = 0x8391BD3C;
	sub_837B0C10(ctx, base);
	// b 0x8391bd6c
	goto loc_8391BD6C;
loc_8391BD40:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2832
	ctx.r4.s64 = ctx.r11.s64 + 2832;
	// bl 0x8259cb28
	ctx.lr = 0x8391BD6C;
	sub_8259CB28(ctx, base);
loc_8391BD6C:
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

__attribute__((alias("__imp__sub_8391BD84"))) PPC_WEAK_FUNC(sub_8391BD84);
PPC_FUNC_IMPL(__imp__sub_8391BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391BD88"))) PPC_WEAK_FUNC(sub_8391BD88);
PPC_FUNC_IMPL(__imp__sub_8391BD88) {
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
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// bl 0x82bb6500
	ctx.lr = 0x8391BDBC;
	sub_82BB6500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8391BDD8"))) PPC_WEAK_FUNC(sub_8391BDD8);
PPC_FUNC_IMPL(__imp__sub_8391BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391BDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r31,296(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8391bea8
	if (cr6.eq) goto loc_8391BEA8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8391BE10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391be10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391BE10;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8391BE30:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x8391be44
	if (cr6.eq) goto loc_8391BE44;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8391be90
	goto loc_8391BE90;
loc_8391BE44:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8391be58
	if (cr6.eq) goto loc_8391BE58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8391be90
	goto loc_8391BE90;
loc_8391BE58:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// beq cr6,0x8391be6c
	if (cr6.eq) goto loc_8391BE6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8391be90
	goto loc_8391BE90;
loc_8391BE6C:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8391be80
	if (cr6.eq) goto loc_8391BE80;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8391be90
	goto loc_8391BE90;
loc_8391BE80:
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8391BE90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391bee4
	if (!cr6.eq) goto loc_8391BEE4;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x8391be30
	if (!cr6.eq) goto loc_8391BE30;
loc_8391BEA8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x8391bee0
	if (cr6.lt) goto loc_8391BEE0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8391bee0
	if (cr6.gt) goto loc_8391BEE0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8391bee0
	if (cr6.eq) goto loc_8391BEE0;
loc_8391BEC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x8391beec
	if (cr6.eq) goto loc_8391BEEC;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8391bec8
	if (!cr6.eq) goto loc_8391BEC8;
loc_8391BEE0:
	// bl 0x835bc6a8
	ctx.lr = 0x8391BEE4;
	sub_835BC6A8(ctx, base);
loc_8391BEE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8391BEEC:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8391b5d8
	ctx.lr = 0x8391BEFC;
	sub_8391B5D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391BF04"))) PPC_WEAK_FUNC(sub_8391BF04);
PPC_FUNC_IMPL(__imp__sub_8391BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391BF08"))) PPC_WEAK_FUNC(sub_8391BF08);
PPC_FUNC_IMPL(__imp__sub_8391BF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8391BF10;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x830ff290
	ctx.lr = 0x8391BF20;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x8391BF24;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391bf74
	if (!cr6.eq) goto loc_8391BF74;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x8391bf48
	if (cr6.lt) goto loc_8391BF48;
loc_8391BF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8391BF48:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832d33b8
	ctx.lr = 0x8391BF54;
	sub_832D33B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8391c034
	if (!cr6.eq) goto loc_8391C034;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x8391BF68;
	sub_8259D6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8391BF74:
	// bl 0x82a13948
	ctx.lr = 0x8391BF78;
	sub_82A13948(ctx, base);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// lwz r10,-3564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r30,192(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// blt cr6,0x8391bf98
	if (cr6.lt) goto loc_8391BF98;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8391BF98:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391bf3c
	if (cr6.eq) goto loc_8391BF3C;
	// bl 0x82dad2e0
	ctx.lr = 0x8391BFB0;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391bf3c
	if (cr6.eq) goto loc_8391BF3C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x8391bfcc
	if (cr6.lt) goto loc_8391BFCC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_8391BFCC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x82b6b738
	ctx.lr = 0x8391BFE0;
	sub_82B6B738(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db29e0
	ctx.lr = 0x8391BFF0;
	sub_82DB29E0(ctx, base);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8391c014
	if (cr0.eq) goto loc_8391C014;
	// lbz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8391c018
	if (cr6.eq) goto loc_8391C018;
loc_8391C014:
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
loc_8391C018:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8391C028;
	sub_8259CB28(ctx, base);
	// bl 0x82a0d0d8
	ctx.lr = 0x8391C02C;
	sub_82A0D0D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b6a860
	ctx.lr = 0x8391C034;
	sub_82B6A860(ctx, base);
loc_8391C034:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391C040"))) PPC_WEAK_FUNC(sub_8391C040);
PPC_FUNC_IMPL(__imp__sub_8391C040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8391C048;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r3,1352
	ctx.r29.s64 = ctx.r3.s64 + 1352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x831ce980
	ctx.lr = 0x8391C0BC;
	sub_831CE980(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,2032
	ctx.r3.s64 = ctx.r30.s64 + 2032;
	// bl 0x831cdcf0
	ctx.lr = 0x8391C0CC;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1776
	ctx.r3.s64 = ctx.r30.s64 + 1776;
	// bl 0x831cdcf0
	ctx.lr = 0x8391C0DC;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,2288
	ctx.r3.s64 = ctx.r30.s64 + 2288;
	// bl 0x831cdcf0
	ctx.lr = 0x8391C0EC;
	sub_831CDCF0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r30,3564
	ctx.r11.s64 = ctx.r30.s64 + 3564;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391C100:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391c100
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C100;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r28,r30,3528
	ctx.r28.s64 = ctx.r30.s64 + 3528;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391C11C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391c11c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C11C;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r30,3604
	ctx.r11.s64 = ctx.r30.s64 + 3604;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391C134:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391c134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391af28
	ctx.lr = 0x8391C144;
	sub_8391AF28(ctx, base);
	// stb r31,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r31.u8);
	// stb r31,157(r30)
	PPC_STORE_U8(ctx.r30.u32 + 157, ctx.r31.u8);
	// li r18,1
	ctx.r18.s64 = 1;
	// stb r31,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r31.u8);
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// stb r31,160(r30)
	PPC_STORE_U8(ctx.r30.u32 + 160, ctx.r31.u8);
	// stw r31,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r31.u32);
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// stw r31,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r31.u32);
	// stfs f31,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// stb r31,168(r30)
	PPC_STORE_U8(ctx.r30.u32 + 168, ctx.r31.u8);
	// stb r18,158(r30)
	PPC_STORE_U8(ctx.r30.u32 + 158, ctx.r18.u8);
	// stb r31,169(r30)
	PPC_STORE_U8(ctx.r30.u32 + 169, ctx.r31.u8);
	// bl 0x8391afb8
	ctx.lr = 0x8391C17C;
	sub_8391AFB8(ctx, base);
	// stb r31,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r31.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r31,224(r30)
	PPC_STORE_U8(ctx.r30.u32 + 224, ctx.r31.u8);
	// addi r11,r30,248
	ctx.r11.s64 = ctx.r30.s64 + 248;
	// stw r31,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r31,225(r30)
	PPC_STORE_U8(ctx.r30.u32 + 225, ctx.r31.u8);
	// stb r31,228(r30)
	PPC_STORE_U8(ctx.r30.u32 + 228, ctx.r31.u8);
	// stw r18,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r18.u32);
	// stfs f31,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// stfs f31,244(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 244, temp.u32);
	// stb r31,236(r30)
	PPC_STORE_U8(ctx.r30.u32 + 236, ctx.r31.u8);
	// stb r31,248(r30)
	PPC_STORE_U8(ctx.r30.u32 + 248, ctx.r31.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r31,249(r30)
	PPC_STORE_U8(ctx.r30.u32 + 249, ctx.r31.u8);
	// stb r31,250(r30)
	PPC_STORE_U8(ctx.r30.u32 + 250, ctx.r31.u8);
loc_8391C1BC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391c1bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C1BC;
	// addi r3,r30,1204
	ctx.r3.s64 = ctx.r30.s64 + 1204;
	// bl 0x8391bac0
	ctx.lr = 0x8391C1CC;
	sub_8391BAC0(ctx, base);
	// lwz r6,296(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r7,292(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r5,r30,292
	ctx.r5.s64 = ctx.r30.s64 + 292;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x8391c21c
	if (cr6.eq) goto loc_8391C21C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x8391c218
	if (cr6.eq) goto loc_8391C218;
loc_8391C1EC:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391C1FC:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8391c1fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C1FC;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x8391c1ec
	if (!cr6.eq) goto loc_8391C1EC;
loc_8391C218:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
loc_8391C21C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r7,255
	ctx.r7.s64 = 255;
loc_8391C224:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,332
	ctx.r9.s64 = ctx.r11.s64 + 332;
	// stfs f31,352(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stb r31,332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 332, ctx.r31.u8);
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// stw r7,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r7.u32);
	// stb r31,345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 345, ctx.r31.u8);
	// stb r31,346(r11)
	PPC_STORE_U8(ctx.r11.u32 + 346, ctx.r31.u8);
	// stw r31,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r31.u32);
	// stb r31,344(r11)
	PPC_STORE_U8(ctx.r11.u32 + 344, ctx.r31.u8);
	// blt cr6,0x8391c224
	if (cr6.lt) goto loc_8391C224;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r17,2
	ctx.r17.s64 = 2;
loc_8391C274:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f31,928(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 928, temp.u32);
	// stb r31,908(r10)
	PPC_STORE_U8(ctx.r10.u32 + 908, ctx.r31.u8);
	// stw r31,912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 912, ctx.r31.u32);
	// addi r6,r8,1148
	ctx.r6.s64 = ctx.r8.s64 + 1148;
	// stw r7,916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 916, ctx.r7.u32);
	// stb r31,921(r10)
	PPC_STORE_U8(ctx.r10.u32 + 921, ctx.r31.u8);
	// stb r31,922(r10)
	PPC_STORE_U8(ctx.r10.u32 + 922, ctx.r31.u8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stw r31,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r31.u32);
	// stb r31,920(r10)
	PPC_STORE_U8(ctx.r10.u32 + 920, ctx.r31.u8);
	// stfs f31,992(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 992, temp.u32);
	// stfs f31,1048(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1048, temp.u32);
	// stb r31,956(r11)
	PPC_STORE_U8(ctx.r11.u32 + 956, ctx.r31.u8);
	// stb r31,968(r11)
	PPC_STORE_U8(ctx.r11.u32 + 968, ctx.r31.u8);
	// addi r10,r10,908
	ctx.r10.s64 = ctx.r10.s64 + 908;
	// stw r7,972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 972, ctx.r7.u32);
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// stw r31,976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 976, ctx.r31.u32);
	// stw r4,980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 980, ctx.r4.u32);
	// stw r7,984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 984, ctx.r7.u32);
	// stb r31,988(r11)
	PPC_STORE_U8(ctx.r11.u32 + 988, ctx.r31.u8);
	// stb r31,989(r11)
	PPC_STORE_U8(ctx.r11.u32 + 989, ctx.r31.u8);
	// stb r31,996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 996, ctx.r31.u8);
	// stw r31,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r31.u32);
	// addi r11,r11,956
	ctx.r11.s64 = ctx.r11.s64 + 956;
	// stb r31,1148(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1148, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,1149(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1149, ctx.r31.u8);
	// stw r17,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r17.u32);
	// stw r31,1156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1156, ctx.r31.u32);
loc_8391C318:
	// stbx r31,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391c318
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C318;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1188
	ctx.r8.s64 = ctx.r10.s64 + 1188;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r31,1180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1180, ctx.r31.u8);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stb r31,1181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1181, ctx.r31.u8);
	// stb r18,1182(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1182, ctx.r18.u8);
	// addi r11,r11,1180
	ctx.r11.s64 = ctx.r11.s64 + 1180;
	// stb r31,1188(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1188, ctx.r31.u8);
	// stb r31,1189(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1189, ctx.r31.u8);
	// blt cr6,0x8391c274
	if (cr6.lt) goto loc_8391C274;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x831ce980
	ctx.lr = 0x8391C3B4;
	sub_831CE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x8391C3B8;
	sub_830FF290(ctx, base);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r21,15
	ctx.r21.s64 = 15;
	// li r22,36
	ctx.r22.s64 = 36;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r20,r10,-4008
	ctx.r20.s64 = ctx.r10.s64 + -4008;
	// stfs f0,1768(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1768, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stfs f13,1772(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1772, temp.u32);
	// stb r31,3648(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3648, ctx.r31.u8);
	// stb r31,3649(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3649, ctx.r31.u8);
	// addi r19,r11,28808
	ctx.r19.s64 = ctx.r11.s64 + 28808;
loc_8391C3F0:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82d042a8
	ctx.lr = 0x8391C40C;
	sub_82D042A8(ctx, base);
	// addi r6,r28,80
	ctx.r6.s64 = ctx.r28.s64 + 80;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8391b418
	ctx.lr = 0x8391C420;
	sub_8391B418(ctx, base);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82595718
	ctx.lr = 0x8391C434;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391c468
	if (cr6.eq) goto loc_8391C468;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stb r31,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r31.u8);
	// bl 0x825749e0
	ctx.lr = 0x8391C45C;
	sub_825749E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// b 0x8391c46c
	goto loc_8391C46C;
loc_8391C468:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8391C46C:
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833bcae8
	ctx.lr = 0x8391C484;
	sub_833BCAE8(ctx, base);
	// stw r3,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82572fa0
	ctx.lr = 0x8391C494;
	sub_82572FA0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391c4b0
	if (cr6.lt) goto loc_8391C4B0;
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8391C4B0;
	sub_825952B8(ctx, base);
loc_8391C4B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// blt cr6,0x8391c3f0
	if (cr6.lt) goto loc_8391C3F0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r25,r30,3504
	ctx.r25.s64 = ctx.r30.s64 + 3504;
	// addi r24,r30,3651
	ctx.r24.s64 = ctx.r30.s64 + 3651;
	// addi r26,r30,2832
	ctx.r26.s64 = ctx.r30.s64 + 2832;
	// addi r28,r30,2640
	ctx.r28.s64 = ctx.r30.s64 + 2640;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_8391C4E4:
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8391bf08
	ctx.lr = 0x8391C500;
	sub_8391BF08(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391c520
	if (!cr6.eq) goto loc_8391C520;
	// stfs f31,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 96, temp.u32);
	// stw r31,-96(r28)
	PPC_STORE_U32(ctx.r28.u32 + -96, ctx.r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stbx r31,r25,r27
	PPC_STORE_U8(ctx.r25.u32 + ctx.r27.u32, ctx.r31.u8);
	// b 0x8391c5c0
	goto loc_8391C5C0;
loc_8391C520:
	// stbx r18,r25,r27
	PPC_STORE_U8(ctx.r25.u32 + ctx.r27.u32, ctx.r18.u8);
	// addi r6,r28,96
	ctx.r6.s64 = ctx.r28.s64 + 96;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8391b418
	ctx.lr = 0x8391C538;
	sub_8391B418(ctx, base);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82595718
	ctx.lr = 0x8391C54C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391c580
	if (cr6.eq) goto loc_8391C580;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stb r31,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r31.u8);
	// bl 0x825749e0
	ctx.lr = 0x8391C574;
	sub_825749E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// b 0x8391c584
	goto loc_8391C584;
loc_8391C580:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8391C584:
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833bcae8
	ctx.lr = 0x8391C59C;
	sub_833BCAE8(ctx, base);
	// stw r3,-96(r28)
	PPC_STORE_U32(ctx.r28.u32 + -96, ctx.r3.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8391C5B4;
	sub_8259CB28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82572fa0
	ctx.lr = 0x8391C5C0;
	sub_82572FA0(ctx, base);
loc_8391C5C0:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stbx r31,r24,r27
	PPC_STORE_U8(ctx.r24.u32 + ctx.r27.u32, ctx.r31.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391c5e0
	if (cr6.lt) goto loc_8391C5E0;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8391C5E0;
	sub_825952B8(ctx, base);
loc_8391C5E0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x8391c4e4
	if (cr6.lt) goto loc_8391C4E4;
	// bl 0x831156e8
	ctx.lr = 0x8391C604;
	sub_831156E8(ctx, base);
	// lwz r24,56(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8391C610:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8391C614:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8312d620
	ctx.lr = 0x8391C628;
	sub_8312D620(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391c64c
	if (!cr6.eq) goto loc_8391C64C;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391c70c
	if (cr6.lt) goto loc_8391C70C;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// b 0x8391c704
	goto loc_8391C704;
loc_8391C64C:
	// add r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r11,r28,572
	ctx.r11.s64 = ctx.r28.s64 + 572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8391b418
	ctx.lr = 0x8391C66C;
	sub_8391B418(ctx, base);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595718
	ctx.lr = 0x8391C680;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391c6b4
	if (cr6.eq) goto loc_8391C6B4;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stb r31,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r31.u8);
	// bl 0x825749e0
	ctx.lr = 0x8391C6A8;
	sub_825749E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// b 0x8391c6b8
	goto loc_8391C6B8;
loc_8391C6B4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8391C6B8:
	// addi r11,r28,444
	ctx.r11.s64 = ctx.r28.s64 + 444;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// stwx r6,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r6.u32);
	// bl 0x833bcae8
	ctx.lr = 0x8391C6D8;
	sub_833BCAE8(ctx, base);
	// addi r9,r28,508
	ctx.r9.s64 = ctx.r28.s64 + 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82572fa0
	ctx.lr = 0x8391C6F0;
	sub_82572FA0(ctx, base);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8391c70c
	if (cr6.lt) goto loc_8391C70C;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_8391C704:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8391C70C;
	sub_825952B8(ctx, base);
loc_8391C70C:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8391c614
	if (cr6.lt) goto loc_8391C614;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r26,64
	cr6.compare<int32_t>(ctx.r26.s32, 64, xer);
	// blt cr6,0x8391c610
	if (cr6.lt) goto loc_8391C610;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391C74C"))) PPC_WEAK_FUNC(sub_8391C74C);
PPC_FUNC_IMPL(__imp__sub_8391C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C750"))) PPC_WEAK_FUNC(sub_8391C750);
PPC_FUNC_IMPL(__imp__sub_8391C750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// bne cr6,0x8391c768
	if (!cr6.eq) goto loc_8391C768;
	// lwz r3,7424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// blr 
	return;
loc_8391C768:
	// addi r10,r11,7424
	ctx.r10.s64 = ctx.r11.s64 + 7424;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391C774"))) PPC_WEAK_FUNC(sub_8391C774);
PPC_FUNC_IMPL(__imp__sub_8391C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C778"))) PPC_WEAK_FUNC(sub_8391C778);
PPC_FUNC_IMPL(__imp__sub_8391C778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,23
	ctx.r3.s64 = ctx.r11.s64 + 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391C78C"))) PPC_WEAK_FUNC(sub_8391C78C);
PPC_FUNC_IMPL(__imp__sub_8391C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C790"))) PPC_WEAK_FUNC(sub_8391C790);
PPC_FUNC_IMPL(__imp__sub_8391C790) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8391C7B0;
	sub_8392CFC8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,25752
	ctx.r9.s64 = ctx.r11.s64 + 25752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8391C7D8:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8391c7d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391C7D8;
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

__attribute__((alias("__imp__sub_8391C7FC"))) PPC_WEAK_FUNC(sub_8391C7FC);
PPC_FUNC_IMPL(__imp__sub_8391C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C800"))) PPC_WEAK_FUNC(sub_8391C800);
PPC_FUNC_IMPL(__imp__sub_8391C800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391C808;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391C830;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391c850
	if (cr6.eq) goto loc_8391C850;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8391c790
	ctx.lr = 0x8391C848;
	sub_8391C790(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8391C850:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391C85C"))) PPC_WEAK_FUNC(sub_8391C85C);
PPC_FUNC_IMPL(__imp__sub_8391C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C860"))) PPC_WEAK_FUNC(sub_8391C860);
PPC_FUNC_IMPL(__imp__sub_8391C860) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391C884;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391c8ac
	if (!cr6.eq) goto loc_8391C8AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391C8A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8391c8f0
	goto loc_8391C8F0;
loc_8391C8AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8391c8d8
	if (!cr6.eq) goto loc_8391C8D8;
	// bl 0x830ff290
	ctx.lr = 0x8391C8BC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391C8C0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x8391c8d0
	if (!cr6.eq) goto loc_8391C8D0;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x8391c8f0
	goto loc_8391C8F0;
loc_8391C8D0:
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8391c8f0
	goto loc_8391C8F0;
loc_8391C8D8:
	// bl 0x830ff290
	ctx.lr = 0x8391C8DC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391C8E0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r4,35
	ctx.r4.s64 = 35;
	// beq cr6,0x8391c8f0
	if (cr6.eq) goto loc_8391C8F0;
	// li r4,30
	ctx.r4.s64 = 30;
loc_8391C8F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391C908;
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

__attribute__((alias("__imp__sub_8391C91C"))) PPC_WEAK_FUNC(sub_8391C91C);
PPC_FUNC_IMPL(__imp__sub_8391C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391C920"))) PPC_WEAK_FUNC(sub_8391C920);
PPC_FUNC_IMPL(__imp__sub_8391C920) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391C944;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391c958
	if (!cr6.eq) goto loc_8391C958;
	// bl 0x83911e78
	ctx.lr = 0x8391C958;
	sub_83911E78(ctx, base);
loc_8391C958:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r10,r5,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,1148(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1148);
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

__attribute__((alias("__imp__sub_8391C990"))) PPC_WEAK_FUNC(sub_8391C990);
PPC_FUNC_IMPL(__imp__sub_8391C990) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391C9B4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391c9c8
	if (!cr6.eq) goto loc_8391C9C8;
	// bl 0x83911e78
	ctx.lr = 0x8391C9C8;
	sub_83911E78(ctx, base);
loc_8391C9C8:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfc r7,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r10,r4,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_8391CA04"))) PPC_WEAK_FUNC(sub_8391CA04);
PPC_FUNC_IMPL(__imp__sub_8391CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CA08"))) PPC_WEAK_FUNC(sub_8391CA08);
PPC_FUNC_IMPL(__imp__sub_8391CA08) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391CA2C;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391ca40
	if (!cr6.eq) goto loc_8391CA40;
	// bl 0x83911e78
	ctx.lr = 0x8391CA40;
	sub_83911E78(ctx, base);
loc_8391CA40:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-31768
	ctx.r8.s64 = -2081947648;
	// subfc r7,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r8,7432
	ctx.r4.s64 = ctx.r8.s64 + 7432;
	// subfe r9,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r10,r8,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,1148
	ctx.r10.s64 = ctx.r11.s64 + 1148;
	// lwz r7,1152(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r6,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8391CA9C;
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

__attribute__((alias("__imp__sub_8391CAB0"))) PPC_WEAK_FUNC(sub_8391CAB0);
PPC_FUNC_IMPL(__imp__sub_8391CAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8391CAB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391CAD0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391cae4
	if (!cr6.eq) goto loc_8391CAE4;
	// bl 0x83911e78
	ctx.lr = 0x8391CAE4;
	sub_83911E78(ctx, base);
loc_8391CAE4:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r28,r11,7452
	ctx.r28.s64 = ctx.r11.s64 + 7452;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r31,0
	ctx.r31.s64 = 0;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r4,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1148
	ctx.r11.s64 = ctx.r11.s64 + 1148;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r26,r11,25552
	ctx.r26.s64 = ctx.r11.s64 + 25552;
loc_8391CB24:
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// stbx r11,r27,r31
	PPC_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x8391CB3C;
	sub_82D2E228(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8391cb60
	if (!cr6.eq) goto loc_8391CB60;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8391CB60:
	// bctrl 
	ctx.lr = 0x8391CB64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x8391cb24
	if (cr6.lt) goto loc_8391CB24;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391CB7C"))) PPC_WEAK_FUNC(sub_8391CB7C);
PPC_FUNC_IMPL(__imp__sub_8391CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CB80"))) PPC_WEAK_FUNC(sub_8391CB80);
PPC_FUNC_IMPL(__imp__sub_8391CB80) {
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
	// bl 0x8391ca08
	ctx.lr = 0x8391CB98;
	sub_8391CA08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391cab0
	ctx.lr = 0x8391CBA0;
	sub_8391CAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391c860
	ctx.lr = 0x8391CBA8;
	sub_8391C860(ctx, base);
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

__attribute__((alias("__imp__sub_8391CBBC"))) PPC_WEAK_FUNC(sub_8391CBBC);
PPC_FUNC_IMPL(__imp__sub_8391CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CBC0"))) PPC_WEAK_FUNC(sub_8391CBC0);
PPC_FUNC_IMPL(__imp__sub_8391CBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391CBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391CBE0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391cbf4
	if (!cr6.eq) goto loc_8391CBF4;
	// bl 0x83911e78
	ctx.lr = 0x8391CBF4;
	sub_83911E78(ctx, base);
loc_8391CBF4:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r10,r5,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,1148
	ctx.r30.s64 = ctx.r11.s64 + 1148;
	// bl 0x8391c860
	ctx.lr = 0x8391CC24;
	sub_8391C860(ctx, base);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8391cc3c
	if (cr6.eq) goto loc_8391CC3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
loc_8391CC3C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8391cc5c
	if (!cr6.eq) goto loc_8391CC5C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8391cc64
	if (cr6.eq) goto loc_8391CC64;
loc_8391CC5C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_8391CC64:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8391cc7c
	if (cr6.eq) goto loc_8391CC7C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_8391CC7C:
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8391cc94
	if (cr6.eq) goto loc_8391CC94;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_8391CC94:
	// lbz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// lbz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8391ccac
	if (cr6.eq) goto loc_8391CCAC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_8391CCAC:
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// lbz r10,55(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8391ccc4
	if (cr6.eq) goto loc_8391CCC4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
loc_8391CCC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391ccec
	if (cr6.eq) goto loc_8391CCEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3e0
	ctx.lr = 0x8391CCDC;
	sub_8392D3E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391ca08
	ctx.lr = 0x8391CCE4;
	sub_8391CA08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391cab0
	ctx.lr = 0x8391CCEC;
	sub_8391CAB0(ctx, base);
loc_8391CCEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391CCF4"))) PPC_WEAK_FUNC(sub_8391CCF4);
PPC_FUNC_IMPL(__imp__sub_8391CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CCF8"))) PPC_WEAK_FUNC(sub_8391CCF8);
PPC_FUNC_IMPL(__imp__sub_8391CCF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r11,r6,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,1188(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391CD1C"))) PPC_WEAK_FUNC(sub_8391CD1C);
PPC_FUNC_IMPL(__imp__sub_8391CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CD20"))) PPC_WEAK_FUNC(sub_8391CD20);
PPC_FUNC_IMPL(__imp__sub_8391CD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,7584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391CD2C"))) PPC_WEAK_FUNC(sub_8391CD2C);
PPC_FUNC_IMPL(__imp__sub_8391CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CD30"))) PPC_WEAK_FUNC(sub_8391CD30);
PPC_FUNC_IMPL(__imp__sub_8391CD30) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x83911e78
	ctx.lr = 0x8391CD44;
	sub_83911E78(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,14
	ctx.r3.s64 = ctx.r11.s64 + 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391CD60"))) PPC_WEAK_FUNC(sub_8391CD60);
PPC_FUNC_IMPL(__imp__sub_8391CD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// subfc r7,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r10,r4,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,1188(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391CD8C"))) PPC_WEAK_FUNC(sub_8391CD8C);
PPC_FUNC_IMPL(__imp__sub_8391CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391CD90"))) PPC_WEAK_FUNC(sub_8391CD90);
PPC_FUNC_IMPL(__imp__sub_8391CD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8391CD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391CDC0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391cdfc
	if (cr6.eq) goto loc_8391CDFC;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8391CDE0;
	sub_8392CFC8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,26472
	ctx.r10.s64 = ctx.r11.s64 + 26472;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8391CDFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391CE08"))) PPC_WEAK_FUNC(sub_8391CE08);
PPC_FUNC_IMPL(__imp__sub_8391CE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8391CE10;
	__savegprlr_22(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r25,r11,26372
	ctx.r25.s64 = ctx.r11.s64 + 26372;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r25,-160
	ctx.r4.s64 = ctx.r25.s64 + -160;
	// bl 0x8259cc28
	ctx.lr = 0x8391CE44;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391ce58
	if (!cr6.eq) goto loc_8391CE58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391CE58:
	// lis r6,103
	ctx.r6.s64 = 6750208;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// ori r6,r6,141
	ctx.r6.u64 = ctx.r6.u64 | 141;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8391CE6C;
	sub_8392DBE8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391ce8c
	if (cr6.lt) goto loc_8391CE8C;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x8391CE8C;
	sub_825952B8(ctx, base);
loc_8391CE8C:
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// subfc r8,r22,r9
	xer.ca = ctx.r9.u32 >= ctx.r22.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r22.s64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// rlwinm r10,r5,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r23,r11,1188
	ctx.r23.s64 = ctx.r11.s64 + 1188;
	// lbz r4,1189(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1189);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8391d104
	if (cr6.eq) goto loc_8391D104;
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// bctrl 
	ctx.lr = 0x8391CEE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r29,r10,7728
	ctx.r29.s64 = ctx.r10.s64 + 7728;
loc_8391CEF4:
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x8391d05c
	if (!cr6.eq) goto loc_8391D05C;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x8391CF30;
	sub_82D042A8(ctx, base);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// bl 0x82d042a8
	ctx.lr = 0x8391CF4C;
	sub_82D042A8(ctx, base);
	// addi r4,r25,-72
	ctx.r4.s64 = ctx.r25.s64 + -72;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x8391CF5C;
	sub_825A1EB8(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x8391CF70;
	sub_825A1DA8(ctx, base);
	// addi r4,r25,-68
	ctx.r4.s64 = ctx.r25.s64 + -68;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x8391CF80;
	sub_825A1EB8(ctx, base);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8391CF98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391cf98
	if (!cr6.eq) goto loc_8391CF98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8391CFBC;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391cfd0
	if (!cr6.eq) goto loc_8391CFD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391CFD0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8391CFE0;
	sub_8392DC70(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391cffc
	if (cr6.lt) goto loc_8391CFFC;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8391CFFC;
	sub_825952B8(ctx, base);
loc_8391CFFC:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x8391d024
	if (cr6.lt) goto loc_8391D024;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8391D024;
	sub_825952B8(ctx, base);
loc_8391D024:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x8391d04c
	if (cr6.lt) goto loc_8391D04C;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8391D04C;
	sub_825952B8(ctx, base);
loc_8391D04C:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// b 0x8391d0e8
	goto loc_8391D0E8;
loc_8391D05C:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8391D074:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391d074
	if (!cr6.eq) goto loc_8391D074;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8391D098;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d0ac
	if (!cr6.eq) goto loc_8391D0AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D0AC:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8392dbe8
	ctx.lr = 0x8391D0C0;
	sub_8392DBE8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8391d0dc
	if (cr6.lt) goto loc_8391D0DC;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x8391D0DC;
	sub_825952B8(ctx, base);
loc_8391D0DC:
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8391D0E8:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8391cef4
	if (cr6.lt) goto loc_8391CEF4;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8391D104:
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// bctrl 
	ctx.lr = 0x8391D10C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r25,-48
	ctx.r4.s64 = ctx.r25.s64 + -48;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x8391D118;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d12c
	if (!cr6.eq) goto loc_8391D12C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D12C:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// ori r6,r6,301
	ctx.r6.u64 = ctx.r6.u64 | 301;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8391D140;
	sub_8392DBE8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d15c
	if (cr6.lt) goto loc_8391D15C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x8391D15C;
	sub_825952B8(ctx, base);
loc_8391D15C:
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r4,r25,-466
	ctx.r4.s64 = ctx.r25.s64 + -466;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x8391D174;
	sub_837B0C10(ctx, base);
	// addi r4,r25,-32
	ctx.r4.s64 = ctx.r25.s64 + -32;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x8391D180;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d194
	if (!cr6.eq) goto loc_8391D194;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D194:
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8391D1A4;
	sub_8392DC70(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d1c0
	if (cr6.lt) goto loc_8391D1C0;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x8391D1C0;
	sub_825952B8(ctx, base);
loc_8391D1C0:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r28,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r28.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8391d1e8
	if (cr6.lt) goto loc_8391D1E8;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x8391D1E8;
	sub_825952B8(ctx, base);
loc_8391D1E8:
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x8391D200;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d214
	if (!cr6.eq) goto loc_8391D214;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D214:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// ori r6,r6,300
	ctx.r6.u64 = ctx.r6.u64 | 300;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8391D228;
	sub_8392DBE8(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d244
	if (cr6.lt) goto loc_8391D244;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x8391D244;
	sub_825952B8(ctx, base);
loc_8391D244:
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x8391D25C;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d270
	if (!cr6.eq) goto loc_8391D270;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D270:
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// ori r6,r6,299
	ctx.r6.u64 = ctx.r6.u64 | 299;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8392dbe8
	ctx.lr = 0x8391D284;
	sub_8392DBE8(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d2a0
	if (cr6.lt) goto loc_8391D2A0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x8391D2A0;
	sub_825952B8(ctx, base);
loc_8391D2A0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391D2A8"))) PPC_WEAK_FUNC(sub_8391D2A8);
PPC_FUNC_IMPL(__imp__sub_8391D2A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8391ce08
	sub_8391CE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391D2AC"))) PPC_WEAK_FUNC(sub_8391D2AC);
PPC_FUNC_IMPL(__imp__sub_8391D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391D2B0"))) PPC_WEAK_FUNC(sub_8391D2B0);
PPC_FUNC_IMPL(__imp__sub_8391D2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// bne cr6,0x8391d2cc
	if (!cr6.eq) goto loc_8391D2CC;
	// addi r11,r11,26924
	ctx.r11.s64 = ctx.r11.s64 + 26924;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_8391D2CC:
	// addi r3,r11,26924
	ctx.r3.s64 = ctx.r11.s64 + 26924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391D2D4"))) PPC_WEAK_FUNC(sub_8391D2D4);
PPC_FUNC_IMPL(__imp__sub_8391D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391D2D8"))) PPC_WEAK_FUNC(sub_8391D2D8);
PPC_FUNC_IMPL(__imp__sub_8391D2D8) {
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
	// bl 0x8392d6e8
	ctx.lr = 0x8391D2F4;
	sub_8392D6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391d30c
	if (!cr6.eq) goto loc_8391D30C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8391d338
	goto loc_8391D338;
loc_8391D30C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8391d320
	if (!cr6.eq) goto loc_8391D320;
loc_8391D318:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8391d338
	goto loc_8391D338;
loc_8391D320:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391d318
	if (cr6.eq) goto loc_8391D318;
	// li r4,-4416
	ctx.r4.s64 = -4416;
	// bl 0x83545640
	ctx.lr = 0x8391D334;
	sub_83545640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8391D338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391D350"))) PPC_WEAK_FUNC(sub_8391D350);
PPC_FUNC_IMPL(__imp__sub_8391D350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391D364"))) PPC_WEAK_FUNC(sub_8391D364);
PPC_FUNC_IMPL(__imp__sub_8391D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391D368"))) PPC_WEAK_FUNC(sub_8391D368);
PPC_FUNC_IMPL(__imp__sub_8391D368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8391D370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391D398;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391d3e4
	if (cr6.eq) goto loc_8391D3E4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8392cfc8
	ctx.lr = 0x8391D3B8;
	sub_8392CFC8(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27192
	ctx.r9.s64 = ctx.r10.s64 + 27192;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8391D3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391D3F0"))) PPC_WEAK_FUNC(sub_8391D3F0);
PPC_FUNC_IMPL(__imp__sub_8391D3F0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D414;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391d428
	if (!cr6.eq) goto loc_8391D428;
	// bl 0x83911e78
	ctx.lr = 0x8391D428;
	sub_83911E78(ctx, base);
loc_8391D428:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r5,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r3,1180(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1180);
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

__attribute__((alias("__imp__sub_8391D468"))) PPC_WEAK_FUNC(sub_8391D468);
PPC_FUNC_IMPL(__imp__sub_8391D468) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D48C;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391d4a0
	if (!cr6.eq) goto loc_8391D4A0;
	// bl 0x83911e78
	ctx.lr = 0x8391D4A0;
	sub_83911E78(ctx, base);
loc_8391D4A0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r11,r4,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r8,1180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1180, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_8391D4E4"))) PPC_WEAK_FUNC(sub_8391D4E4);
PPC_FUNC_IMPL(__imp__sub_8391D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391D4E8"))) PPC_WEAK_FUNC(sub_8391D4E8);
PPC_FUNC_IMPL(__imp__sub_8391D4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8391D4F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8391d51c
	if (cr6.eq) goto loc_8391D51C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r26
	ctx.r30.u64 = ctx.r8.u64 & ctx.r26.u64;
	// b 0x8391d520
	goto loc_8391D520;
loc_8391D51C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8391D520:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x83150518
	ctx.lr = 0x8391D540;
	sub_83150518(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r27,r11,27096
	ctx.r27.s64 = ctx.r11.s64 + 27096;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x8391D564;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d578
	if (!cr6.eq) goto loc_8391D578;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D578:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8391D588;
	sub_8392DC70(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d5a4
	if (cr6.lt) goto loc_8391D5A4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8391D5A4;
	sub_825952B8(ctx, base);
loc_8391D5A4:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D5C0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8391d5d4
	if (!cr6.eq) goto loc_8391D5D4;
	// bl 0x83911e78
	ctx.lr = 0x8391D5D4;
	sub_83911E78(ctx, base);
loc_8391D5D4:
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x8391D5DC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ad8
	ctx.lr = 0x8391D5F0;
	sub_83123AD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,160
	ctx.r5.s64 = 160;
	// bge cr6,0x8391d61c
	if (!cr6.lt) goto loc_8391D61C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// b 0x8391d620
	goto loc_8391D620;
loc_8391D61C:
	// addi r4,r10,104
	ctx.r4.s64 = ctx.r10.s64 + 104;
loc_8391D620:
	// bl 0x831ce980
	ctx.lr = 0x8391D624;
	sub_831CE980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83165ba8
	ctx.lr = 0x8391D634;
	sub_83165BA8(ctx, base);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x8391D650;
	sub_8259CC28(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bne cr6,0x8391d664
	if (!cr6.eq) goto loc_8391D664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8391D664:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8392dc70
	ctx.lr = 0x8391D674;
	sub_8392DC70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8391d690
	if (cr6.lt) goto loc_8391D690;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8391D690;
	sub_825952B8(ctx, base);
loc_8391D690:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8391d6b8
	if (cr6.lt) goto loc_8391D6B8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8391D6B8;
	sub_825952B8(ctx, base);
loc_8391D6B8:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8391d6e0
	if (cr6.lt) goto loc_8391D6E0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8391D6E0;
	sub_825952B8(ctx, base);
loc_8391D6E0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391D6E8"))) PPC_WEAK_FUNC(sub_8391D6E8);
PPC_FUNC_IMPL(__imp__sub_8391D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391D6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D708;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391d71c
	if (!cr6.eq) goto loc_8391D71C;
	// bl 0x83911e78
	ctx.lr = 0x8391D71C;
	sub_83911E78(ctx, base);
loc_8391D71C:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r11,r4,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D750;
	sub_82A1AAA8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391d7e8
	if (cr6.eq) goto loc_8391D7E8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8391d79c
	if (!cr6.eq) goto loc_8391D79C;
	// bl 0x830ff290
	ctx.lr = 0x8391D76C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391D770;
	sub_830FFAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8391d794
	if (!cr6.eq) goto loc_8391D794;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x8391d7c8
	goto loc_8391D7C8;
loc_8391D794:
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x8391d7c8
	goto loc_8391D7C8;
loc_8391D79C:
	// bl 0x830ff290
	ctx.lr = 0x8391D7A0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391D7A4;
	sub_830FFAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8391d7c8
	if (cr6.eq) goto loc_8391D7C8;
	// li r4,27
	ctx.r4.s64 = 27;
loc_8391D7C8:
	// bctrl 
	ctx.lr = 0x8391D7CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,26996
	ctx.r29.s64 = ctx.r11.s64 + 26996;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D7E0;
	sub_8392D3A0(ctx, base);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// b 0x8391d82c
	goto loc_8391D82C;
loc_8391D7E8:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8391D7FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391D814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r9,26996
	ctx.r29.s64 = ctx.r9.s64 + 26996;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D828;
	sub_8392D3A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8391D82C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D834;
	sub_8392D3A0(ctx, base);
	// lbz r11,1181(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1181);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lbz r10,1181(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1181);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lbz r9,1182(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1182);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
	// beq cr6,0x8391d860
	if (cr6.eq) goto loc_8391D860;
	// lwz r4,7776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7776);
	// b 0x8391d868
	goto loc_8391D868;
loc_8391D860:
	// addi r10,r11,7776
	ctx.r10.s64 = ctx.r11.s64 + 7776;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8391D868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D870;
	sub_8392D3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8391d4e8
	ctx.lr = 0x8391D878;
	sub_8391D4E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391D880"))) PPC_WEAK_FUNC(sub_8391D880);
PPC_FUNC_IMPL(__imp__sub_8391D880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391D888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D8A0;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// beq cr6,0x8391d954
	if (cr6.eq) goto loc_8391D954;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391d9b0
	if (!cr6.eq) goto loc_8391D9B0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8391d8f8
	if (!cr6.eq) goto loc_8391D8F8;
	// bl 0x830ff290
	ctx.lr = 0x8391D8C8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391D8CC;
	sub_830FFAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8391d8f0
	if (!cr6.eq) goto loc_8391D8F0;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x8391d924
	goto loc_8391D924;
loc_8391D8F0:
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x8391d924
	goto loc_8391D924;
loc_8391D8F8:
	// bl 0x830ff290
	ctx.lr = 0x8391D8FC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391D900;
	sub_830FFAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x8391d924
	if (cr6.eq) goto loc_8391D924;
	// li r4,27
	ctx.r4.s64 = 27;
loc_8391D924:
	// bctrl 
	ctx.lr = 0x8391D928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,27068
	ctx.r30.s64 = ctx.r11.s64 + 27068;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D93C;
	sub_8392D3A0(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D948;
	sub_8392D3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// b 0x8391d9b0
	goto loc_8391D9B0;
loc_8391D954:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8391d9b0
	if (!cr6.eq) goto loc_8391D9B0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8391D970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391D988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,27068
	ctx.r30.s64 = ctx.r9.s64 + 27068;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D99C;
	sub_8392D3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3a0
	ctx.lr = 0x8391D9A8;
	sub_8392D3A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r8.u8);
loc_8391D9B0:
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1aaa8
	ctx.lr = 0x8391D9BC;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8391d9d0
	if (!cr6.eq) goto loc_8391D9D0;
	// bl 0x83911e78
	ctx.lr = 0x8391D9D0;
	sub_83911E78(ctx, base);
loc_8391D9D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r5,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r11,1180
	ctx.r30.s64 = ctx.r11.s64 + 1180;
	// lbz r4,1180(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1180);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x8391da80
	if (!cr6.eq) goto loc_8391DA80;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8391da34
	if (cr6.eq) goto loc_8391DA34;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8392d3e0
	ctx.lr = 0x8391DA24;
	sub_8392D3E0(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x8391d4e8
	ctx.lr = 0x8391DA34;
	sub_8391D4E8(ctx, base);
loc_8391DA34:
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8391da80
	if (cr6.eq) goto loc_8391DA80;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8391da70
	if (cr6.eq) goto loc_8391DA70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7776);
	// bl 0x8392d3a0
	ctx.lr = 0x8391DA68;
	sub_8392D3A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8391DA70:
	// addi r10,r11,7776
	ctx.r10.s64 = ctx.r11.s64 + 7776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8392d3a0
	ctx.lr = 0x8391DA80;
	sub_8392D3A0(ctx, base);
loc_8391DA80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391DA88"))) PPC_WEAK_FUNC(sub_8391DA88);
PPC_FUNC_IMPL(__imp__sub_8391DA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391DA90"))) PPC_WEAK_FUNC(sub_8391DA90);
PPC_FUNC_IMPL(__imp__sub_8391DA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391DA98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
loc_8391DAA8:
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839289d8
	ctx.lr = 0x8391DAB4;
	sub_839289D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x8391daa8
	if (cr6.lt) goto loc_8391DAA8;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391DAEC"))) PPC_WEAK_FUNC(sub_8391DAEC);
PPC_FUNC_IMPL(__imp__sub_8391DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391DAF0"))) PPC_WEAK_FUNC(sub_8391DAF0);
PPC_FUNC_IMPL(__imp__sub_8391DAF0) {
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
	// bl 0x83820f08
	ctx.lr = 0x8391DB08;
	sub_83820F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8391DB10:
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83820a58
	ctx.lr = 0x8391DB1C;
	sub_83820A58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x8391db10
	if (cr6.lt) goto loc_8391DB10;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391DB44"))) PPC_WEAK_FUNC(sub_8391DB44);
PPC_FUNC_IMPL(__imp__sub_8391DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391DB48"))) PPC_WEAK_FUNC(sub_8391DB48);
PPC_FUNC_IMPL(__imp__sub_8391DB48) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391DB50"))) PPC_WEAK_FUNC(sub_8391DB50);
PPC_FUNC_IMPL(__imp__sub_8391DB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8391DB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// rlwinm r11,r10,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,27596(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27596);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8391dbb8
	if (cr6.lt) goto loc_8391DBB8;
	// li r30,255
	ctx.r30.s64 = 255;
	// b 0x8391dbf4
	goto loc_8391DBF4;
loc_8391DBB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8391dbf4
	if (!cr6.gt) goto loc_8391DBF4;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lfs f13,8064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,16100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27784);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r30,87(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_8391DBF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391DC04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83823408
	ctx.lr = 0x8391DC18;
	sub_83823408(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391DC28"))) PPC_WEAK_FUNC(sub_8391DC28);
PPC_FUNC_IMPL(__imp__sub_8391DC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8391DC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r4,17
	ctx.r8.s64 = ctx.r4.s64 + 17;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r11,r3,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwzx r8,r29,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,340(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, xer);
	// beq cr6,0x8391dc98
	if (cr6.eq) goto loc_8391DC98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391DC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83823440
	ctx.lr = 0x8391DC94;
	sub_83823440(ctx, base);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8391DC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391DCA0"))) PPC_WEAK_FUNC(sub_8391DCA0);
PPC_FUNC_IMPL(__imp__sub_8391DCA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83928c00
	ctx.lr = 0x8391DCB8;
	sub_83928C00(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r11,27792
	ctx.r9.s64 = ctx.r11.s64 + 27792;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391DCD8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391dcd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391DCD8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391DCF4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391dcf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391DCF4;
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

__attribute__((alias("__imp__sub_8391DD14"))) PPC_WEAK_FUNC(sub_8391DD14);
PPC_FUNC_IMPL(__imp__sub_8391DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391DD18"))) PPC_WEAK_FUNC(sub_8391DD18);
PPC_FUNC_IMPL(__imp__sub_8391DD18) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8391DD44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391dd68
	if (cr6.eq) goto loc_8391DD68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8391dca0
	ctx.lr = 0x8391DD54;
	sub_8391DCA0(ctx, base);
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
loc_8391DD68:
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

__attribute__((alias("__imp__sub_8391DD80"))) PPC_WEAK_FUNC(sub_8391DD80);
PPC_FUNC_IMPL(__imp__sub_8391DD80) {
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
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// blt cr6,0x8391ddac
	if (cr6.lt) goto loc_8391DDAC;
loc_8391DDA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8391de28
	goto loc_8391DE28;
loc_8391DDAC:
	// bl 0x830ff290
	ctx.lr = 0x8391DDB0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391DDB4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8391de08
	if (!cr6.eq) goto loc_8391DE08;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// mulli r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 * 112;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r31,76(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8391DDEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x8391de00
	if (!cr6.eq) goto loc_8391DE00;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x8391de28
	goto loc_8391DE28;
loc_8391DE00:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x8391de28
	goto loc_8391DE28;
loc_8391DE08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83928a90
	ctx.lr = 0x8391DE14;
	sub_83928A90(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bge cr6,0x8391dda4
	if (!cr6.lt) goto loc_8391DDA4;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_8391DE28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391DE40"))) PPC_WEAK_FUNC(sub_8391DE40);
PPC_FUNC_IMPL(__imp__sub_8391DE40) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r7,-3564(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r6,292(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 292);
	// lwz r10,4456(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4456);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bge cr6,0x8391dff0
	if (!cr6.lt) goto loc_8391DFF0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r10,24
	ctx.r10.s64 = 24;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r9,387
	ctx.r5.s64 = ctx.r9.s64 + 387;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ble cr6,0x8391deac
	if (!cr6.gt) goto loc_8391DEAC;
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x8391dff0
	if (cr6.lt) goto loc_8391DFF0;
loc_8391DEAC:
	// subfc r10,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r11,r4,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// lfs f13,352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lbz r8,345(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 345);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8391def0
	if (cr6.lt) goto loc_8391DEF0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x8391def4
	if (cr6.lt) goto loc_8391DEF4;
loc_8391DEF0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8391DEF4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391dff0
	if (cr6.eq) goto loc_8391DFF0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8391df14
	if (cr6.lt) goto loc_8391DF14;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x8391df18
	if (cr6.lt) goto loc_8391DF18;
loc_8391DF14:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8391DF18:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391df38
	if (cr6.eq) goto loc_8391DF38;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r5,5768(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5768);
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r9,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8391df3c
	goto loc_8391DF3C;
loc_8391DF38:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8391DF3C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391dff0
	if (cr6.eq) goto loc_8391DFF0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8391df5c
	if (cr6.lt) goto loc_8391DF5C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x8391df60
	if (cr6.lt) goto loc_8391DF60;
loc_8391DF5C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8391DF60:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8391df80
	if (cr6.eq) goto loc_8391DF80;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r6,5790(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5790);
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r9,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8391df84
	goto loc_8391DF84;
loc_8391DF80:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8391DF84:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8391dff0
	if (!cr6.eq) goto loc_8391DFF0;
	// lwz r30,192(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x8391dff0
	if (cr6.eq) goto loc_8391DFF0;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// bge cr6,0x8391dff0
	if (!cr6.lt) goto loc_8391DFF0;
	// lbz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 332);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8391dff0
	if (!cr6.eq) goto loc_8391DFF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8391dff0
	if (cr6.lt) goto loc_8391DFF0;
	// bl 0x830ff290
	ctx.lr = 0x8391DFC8;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8391DFCC;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8391dfe8
	if (cr6.eq) goto loc_8391DFE8;
	// mulli r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// b 0x8391dff4
	goto loc_8391DFF4;
loc_8391DFE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8391dff4
	goto loc_8391DFF4;
loc_8391DFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8391DFF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391E00C"))) PPC_WEAK_FUNC(sub_8391E00C);
PPC_FUNC_IMPL(__imp__sub_8391E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391E010"))) PPC_WEAK_FUNC(sub_8391E010);
PPC_FUNC_IMPL(__imp__sub_8391E010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8391E018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83820f08
	ctx.lr = 0x8391E024;
	sub_83820F08(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
loc_8391E034:
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83820a58
	ctx.lr = 0x8391E040;
	sub_83820A58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// blt cr6,0x8391e034
	if (cr6.lt) goto loc_8391E034;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r27,80
	ctx.r30.s64 = ctx.r27.s64 + 80;
loc_8391E058:
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83820a58
	ctx.lr = 0x8391E064;
	sub_83820A58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x8391e058
	if (cr6.lt) goto loc_8391E058;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8391E080"))) PPC_WEAK_FUNC(sub_8391E080);
PPC_FUNC_IMPL(__imp__sub_8391E080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lfs f1,8220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391E08C"))) PPC_WEAK_FUNC(sub_8391E08C);
PPC_FUNC_IMPL(__imp__sub_8391E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8391E090"))) PPC_WEAK_FUNC(sub_8391E090);
PPC_FUNC_IMPL(__imp__sub_8391E090) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8391E0BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x8391e11c
	if (!cr6.lt) goto loc_8391E11C;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// bge cr6,0x8391e0f8
	if (!cr6.lt) goto loc_8391E0F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83928a90
	ctx.lr = 0x8391E0D8;
	sub_83928A90(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8391e11c
	if (cr6.eq) goto loc_8391E11C;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bge cr6,0x8391e11c
	if (!cr6.lt) goto loc_8391E11C;
	// addi r11,r3,9
	ctx.r11.s64 = ctx.r3.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8391e120
	goto loc_8391E120;
loc_8391E0F8:
	// cmplwi cr6,r31,26
	cr6.compare<uint32_t>(ctx.r31.u32, 26, xer);
	// bge cr6,0x8391e11c
	if (!cr6.lt) goto loc_8391E11C;
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8391e11c
	if (!cr6.lt) goto loc_8391E11C;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8391e120
	goto loc_8391E120;
loc_8391E11C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8391E120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391E138"))) PPC_WEAK_FUNC(sub_8391E138);
PPC_FUNC_IMPL(__imp__sub_8391E138) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x8391E154;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8391E158;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x8391e308
	if (!cr6.eq) goto loc_8391E308;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,24
	ctx.r8.s64 = 24;
loc_8391E174:
	// addi r7,r11,254
	ctx.r7.s64 = ctx.r11.s64 + 254;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// subfc r4,r8,r6
	xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e1ac
	if (!cr6.eq) goto loc_8391E1AC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E1AC:
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// subfc r4,r8,r6
	xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e1e4
	if (!cr6.eq) goto loc_8391E1E4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E1E4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// subfc r6,r8,r7
	xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e218
	if (!cr6.eq) goto loc_8391E218;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E218:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// subfc r4,r8,r6
	xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e250
	if (!cr6.eq) goto loc_8391E250;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E250:
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// subfc r4,r8,r6
	xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e288
	if (!cr6.eq) goto loc_8391E288;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E288:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// subfc r4,r8,r6
	xer.ca = ctx.r6.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r6.s64 - ctx.r8.s64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r7,r7,14
	ctx.r7.s64 = ctx.r7.s64 + 14;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8391e2c0
	if (!cr6.eq) goto loc_8391E2C0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8391E2C0:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// blt cr6,0x8391e174
	if (cr6.lt) goto loc_8391E174;
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// bge cr6,0x8391e308
	if (!cr6.lt) goto loc_8391E308;
	// addi r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 9;
	// subfic r30,r5,12
	xer.ca = ctx.r5.u32 <= 12;
	ctx.r30.s64 = 12 - ctx.r5.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8391E2E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8391e2fc
	if (cr6.eq) goto loc_8391E2FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a46f98
	ctx.lr = 0x8391E2FC;
	sub_82A46F98(ctx, base);
loc_8391E2FC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8391e2e8
	if (!cr0.eq) goto loc_8391E2E8;
loc_8391E308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8391E320"))) PPC_WEAK_FUNC(sub_8391E320);
PPC_FUNC_IMPL(__imp__sub_8391E320) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83928c00
	ctx.lr = 0x8391E33C;
	sub_83928C00(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,255
	ctx.r30.s64 = 255;
	// addi r10,r11,28272
	ctx.r10.s64 = ctx.r11.s64 + 28272;
	// li r5,48
	ctx.r5.s64 = 48;
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x831cdcf0
	ctx.lr = 0x8391E360;
	sub_831CDCF0(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8391E374:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391e374
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391E374;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8391E38C:
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8391e38c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8391E38C;
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

__attribute__((alias("__imp__sub_8391E3B4"))) PPC_WEAK_FUNC(sub_8391E3B4);
PPC_FUNC_IMPL(__imp__sub_8391E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

