#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825777D8"))) PPC_WEAK_FUNC(sub_825777D8);
PPC_FUNC_IMPL(__imp__sub_825777D8) {
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
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_825777F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x8257781c
	if (!cr6.eq) goto loc_8257781C;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x8257781c
	if (!cr6.eq) goto loc_8257781C;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x82577828
	if (cr6.eq) goto loc_82577828;
loc_8257781C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825777f4
	goto loc_825777F4;
loc_82577828:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x82577834;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82577868
	if (cr6.eq) goto loc_82577868;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8257786c
	goto loc_8257786C;
loc_82577868:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8257786C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825778A8"))) PPC_WEAK_FUNC(sub_825778A8);
PPC_FUNC_IMPL(__imp__sub_825778A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x82577930
	if (cr6.eq) goto loc_82577930;
loc_825778B8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82577918
	if (cr6.eq) goto loc_82577918;
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x82577918
	if (!cr6.eq) goto loc_82577918;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_825778DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577904
	if (cr6.eq) goto loc_82577904;
	// cmplwi cr6,r9,91
	cr6.compare<uint32_t>(ctx.r9.u32, 91, xer);
	// beq cr6,0x82577900
	if (cr6.eq) goto loc_82577900;
	// cmplwi cr6,r9,93
	cr6.compare<uint32_t>(ctx.r9.u32, 93, xer);
	// bne cr6,0x82577904
	if (!cr6.eq) goto loc_82577904;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82577904
	goto loc_82577904;
loc_82577900:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82577904:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x825778dc
	if (cr6.gt) goto loc_825778DC;
	// b 0x82577920
	goto loc_82577920;
loc_82577918:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82577920:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// bne cr6,0x825778b8
	if (!cr6.eq) goto loc_825778B8;
loc_82577930:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577944"))) PPC_WEAK_FUNC(sub_82577944);
PPC_FUNC_IMPL(__imp__sub_82577944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577948"))) PPC_WEAK_FUNC(sub_82577948);
PPC_FUNC_IMPL(__imp__sub_82577948) {
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
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82577964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x8257798c
	if (!cr6.eq) goto loc_8257798C;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x8257798c
	if (!cr6.eq) goto loc_8257798C;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x82577998
	if (cr6.eq) goto loc_82577998;
loc_8257798C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82577964
	goto loc_82577964;
loc_82577998:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x825779A4;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825779d8
	if (cr6.eq) goto loc_825779D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x825779dc
	goto loc_825779DC;
loc_825779D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825779DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577A10"))) PPC_WEAK_FUNC(sub_82577A10);
PPC_FUNC_IMPL(__imp__sub_82577A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82577A18;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,18696
	ctx.r11.s64 = ctx.r11.s64 + 18696;
loc_82577A2C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577a44
	if (cr6.eq) goto loc_82577A44;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82577a2c
	goto loc_82577A2C;
loc_82577A44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,38
	ctx.r24.s64 = 38;
	// li r25,39
	ctx.r25.s64 = 39;
	// li r26,62
	ctx.r26.s64 = 62;
	// li r27,34
	ctx.r27.s64 = 34;
	// li r28,60
	ctx.r28.s64 = 60;
	// addi r29,r11,18184
	ctx.r29.s64 = ctx.r11.s64 + 18184;
	// addi r30,r10,19720
	ctx.r30.s64 = ctx.r10.s64 + 19720;
loc_82577A70:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82577A74:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577c70
	if (cr6.eq) goto loc_82577C70;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bgt cr6,0x82577be8
	if (cr6.gt) goto loc_82577BE8;
	// beq cr6,0x82577bc0
	if (cr6.eq) goto loc_82577BC0;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// beq cr6,0x82577b28
	if (cr6.eq) goto loc_82577B28;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(ctx.r11.s32, 109, xer);
	// bne cr6,0x82577aec
	if (!cr6.eq) goto loc_82577AEC;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,112
	cr6.compare<uint32_t>(ctx.r9.u32, 112, xer);
	// bne cr6,0x82577aec
	if (!cr6.eq) goto loc_82577AEC;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// bne cr6,0x82577aec
	if (!cr6.eq) goto loc_82577AEC;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577AEC:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577B28:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bne cr6,0x82577b68
	if (!cr6.eq) goto loc_82577B68;
	// lbzu r11,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82577ba0
	if (cr6.eq) goto loc_82577BA0;
loc_82577B48:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x82577b48
	if (!cr6.eq) goto loc_82577B48;
	// b 0x82577ba0
	goto loc_82577BA0;
loc_82577B68:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82577ba0
	if (cr6.eq) goto loc_82577BA0;
loc_82577B7C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x82577b7c
	if (!cr6.eq) goto loc_82577B7C;
loc_82577BA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825770e8
	ctx.lr = 0x82577BA8;
	sub_825770E8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577a74
	if (!cr6.eq) goto loc_82577A74;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82577a74
	goto loc_82577A74;
loc_82577BC0:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577BE8:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// beq cr6,0x82577c38
	if (cr6.eq) goto loc_82577C38;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(ctx.r11.u32, 113, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577C38:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577c60
	if (!cr6.eq) goto loc_82577C60;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577C60:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82577a70
	goto loc_82577A70;
loc_82577C70:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577C7C"))) PPC_WEAK_FUNC(sub_82577C7C);
PPC_FUNC_IMPL(__imp__sub_82577C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577C80"))) PPC_WEAK_FUNC(sub_82577C80);
PPC_FUNC_IMPL(__imp__sub_82577C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82577C88;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
loc_82577C9C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577cb4
	if (cr6.eq) goto loc_82577CB4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82577c9c
	goto loc_82577C9C;
loc_82577CB4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,38
	ctx.r24.s64 = 38;
	// li r25,39
	ctx.r25.s64 = 39;
	// li r26,62
	ctx.r26.s64 = 62;
	// li r27,34
	ctx.r27.s64 = 34;
	// li r28,60
	ctx.r28.s64 = 60;
	// addi r29,r11,18440
	ctx.r29.s64 = ctx.r11.s64 + 18440;
	// addi r30,r10,19720
	ctx.r30.s64 = ctx.r10.s64 + 19720;
loc_82577CE0:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82577CE4:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577ee0
	if (cr6.eq) goto loc_82577EE0;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(ctx.r11.s32, 38, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bgt cr6,0x82577e58
	if (cr6.gt) goto loc_82577E58;
	// beq cr6,0x82577e30
	if (cr6.eq) goto loc_82577E30;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// beq cr6,0x82577d98
	if (cr6.eq) goto loc_82577D98;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(ctx.r11.s32, 109, xer);
	// bne cr6,0x82577d5c
	if (!cr6.eq) goto loc_82577D5C;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,112
	cr6.compare<uint32_t>(ctx.r9.u32, 112, xer);
	// bne cr6,0x82577d5c
	if (!cr6.eq) goto loc_82577D5C;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// bne cr6,0x82577d5c
	if (!cr6.eq) goto loc_82577D5C;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577D5C:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577D98:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bne cr6,0x82577dd8
	if (!cr6.eq) goto loc_82577DD8;
	// lbzu r11,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82577e10
	if (cr6.eq) goto loc_82577E10;
loc_82577DB8:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x82577db8
	if (!cr6.eq) goto loc_82577DB8;
	// b 0x82577e10
	goto loc_82577E10;
loc_82577DD8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82577e10
	if (cr6.eq) goto loc_82577E10;
loc_82577DEC:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x82577dec
	if (!cr6.eq) goto loc_82577DEC;
loc_82577E10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825770e8
	ctx.lr = 0x82577E18;
	sub_825770E8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577ce4
	if (!cr6.eq) goto loc_82577CE4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82577ce4
	goto loc_82577CE4;
loc_82577E30:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577E58:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// beq cr6,0x82577ea8
	if (cr6.eq) goto loc_82577EA8;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(ctx.r11.u32, 113, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577EA8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82577ed0
	if (!cr6.eq) goto loc_82577ED0;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577ED0:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82577ce0
	goto loc_82577CE0;
loc_82577EE0:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577EEC"))) PPC_WEAK_FUNC(sub_82577EEC);
PPC_FUNC_IMPL(__imp__sub_82577EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82577EF0"))) PPC_WEAK_FUNC(sub_82577EF0);
PPC_FUNC_IMPL(__imp__sub_82577EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82577EF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,19464
	ctx.r11.s64 = ctx.r11.s64 + 19464;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82577f2c
	if (cr6.eq) goto loc_82577F2C;
loc_82577F1C:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82577f1c
	if (!cr6.eq) goto loc_82577F1C;
loc_82577F2C:
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,19208
	ctx.r29.s64 = ctx.r11.s64 + 19208;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578150
	if (cr6.eq) goto loc_82578150;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,38
	ctx.r24.s64 = 38;
	// li r25,39
	ctx.r25.s64 = 39;
	// li r26,62
	ctx.r26.s64 = 62;
	// li r27,34
	ctx.r27.s64 = 34;
	// li r28,60
	ctx.r28.s64 = 60;
	// addi r30,r11,19720
	ctx.r30.s64 = ctx.r11.s64 + 19720;
loc_82577F6C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bgt cr6,0x825780c0
	if (cr6.gt) goto loc_825780C0;
	// beq cr6,0x8257809c
	if (cr6.eq) goto loc_8257809C;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// beq cr6,0x82578004
	if (cr6.eq) goto loc_82578004;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(ctx.r11.s32, 109, xer);
	// bne cr6,0x82577fcc
	if (!cr6.eq) goto loc_82577FCC;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r9,112
	cr6.compare<uint32_t>(ctx.r9.u32, 112, xer);
	// bne cr6,0x82577fcc
	if (!cr6.eq) goto loc_82577FCC;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,59
	cr6.compare<uint32_t>(ctx.r9.u32, 59, xer);
	// bne cr6,0x82577fcc
	if (!cr6.eq) goto loc_82577FCC;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82578138
	goto loc_82578138;
loc_82577FCC:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(ctx.r11.u32, 115, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r25.u8);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82578138
	goto loc_82578138;
loc_82578004:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bne cr6,0x82578044
	if (!cr6.eq) goto loc_82578044;
	// lbzu r11,3(r31)
	ea = 3 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x8257807c
	if (cr6.eq) goto loc_8257807C;
loc_82578024:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x82578024
	if (!cr6.eq) goto loc_82578024;
	// b 0x8257807c
	goto loc_8257807C;
loc_82578044:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x8257807c
	if (cr6.eq) goto loc_8257807C;
loc_82578058:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x82578058
	if (!cr6.eq) goto loc_82578058;
loc_8257807C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825770e8
	ctx.lr = 0x82578084;
	sub_825770E8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82578140
	if (!cr6.eq) goto loc_82578140;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82578140
	goto loc_82578140;
loc_8257809C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82578138
	goto loc_82578138;
loc_825780C0:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// beq cr6,0x8257810c
	if (cr6.eq) goto loc_8257810C;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(ctx.r11.u32, 113, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// b 0x82578138
	goto loc_82578138;
loc_8257810C:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82578130
	if (!cr6.eq) goto loc_82578130;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82578138
	goto loc_82578138;
loc_82578130:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82578138:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82578140:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82577f6c
	if (!cr6.eq) goto loc_82577F6C;
loc_82578150:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257815C"))) PPC_WEAK_FUNC(sub_8257815C);
PPC_FUNC_IMPL(__imp__sub_8257815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578160"))) PPC_WEAK_FUNC(sub_82578160);
PPC_FUNC_IMPL(__imp__sub_82578160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825781d0
	if (cr6.eq) goto loc_825781D0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578198
	if (!cr6.eq) goto loc_82578198;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8257817C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257817c
	if (!cr6.eq) goto loc_8257817C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82578198:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825781b4
	if (cr6.eq) goto loc_825781B4;
loc_825781A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825781a4
	if (!cr6.eq) goto loc_825781A4;
loc_825781B4:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x825776b0
	sub_825776B0(ctx, base);
	return;
loc_825781D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825781E0"))) PPC_WEAK_FUNC(sub_825781E0);
PPC_FUNC_IMPL(__imp__sub_825781E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825781E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257822c
	if (cr6.eq) goto loc_8257822C;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578224;
	sub_82578160(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82578230
	goto loc_82578230;
loc_8257822C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82578230:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82578254
	if (cr6.eq) goto loc_82578254;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x8257824C;
	sub_82578160(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82578258
	goto loc_82578258;
loc_82578254:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82578258:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82578278
	if (cr6.eq) goto loc_82578278;
loc_82578268:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82578268
	if (!cr6.eq) goto loc_82578268;
loc_82578278:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x825775d0
	ctx.lr = 0x8257829C;
	sub_825775D0(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825782c4
	if (cr6.eq) goto loc_825782C4;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// b 0x825782cc
	goto loc_825782CC;
loc_825782C4:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_825782CC:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825782E8"))) PPC_WEAK_FUNC(sub_825782E8);
PPC_FUNC_IMPL(__imp__sub_825782E8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82577340
	ctx.lr = 0x82578314;
	sub_82577340(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82578330"))) PPC_WEAK_FUNC(sub_82578330);
PPC_FUNC_IMPL(__imp__sub_82578330) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578364
	if (!cr6.eq) goto loc_82578364;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82578374
	goto loc_82578374;
loc_82578364:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82577410
	ctx.lr = 0x82578370;
	sub_82577410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82578374:
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

__attribute__((alias("__imp__sub_8257838C"))) PPC_WEAK_FUNC(sub_8257838C);
PPC_FUNC_IMPL(__imp__sub_8257838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578390"))) PPC_WEAK_FUNC(sub_82578390);
PPC_FUNC_IMPL(__imp__sub_82578390) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825783b4
	if (cr6.eq) goto loc_825783B4;
	// bl 0x82577410
	ctx.lr = 0x825783AC;
	sub_82577410(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825783c8
	if (!cr6.eq) goto loc_825783C8;
loc_825783B4:
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
loc_825783C8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825783dc
	if (!cr6.eq) goto loc_825783DC;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r11,r11,-17548
	ctx.r11.s64 = ctx.r11.s64 + -17548;
loc_825783DC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825783F0"))) PPC_WEAK_FUNC(sub_825783F0);
PPC_FUNC_IMPL(__imp__sub_825783F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825783F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578428
	if (cr6.eq) goto loc_82578428;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82577410
	ctx.lr = 0x8257841C;
	sub_82577410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578434
	if (!cr6.eq) goto loc_82578434;
loc_82578428:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82578434:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-17548
	ctx.r30.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257844c
	if (!cr6.eq) goto loc_8257844C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8257844C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d0fd0
	ctx.lr = 0x8257845C;
	sub_831D0FD0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578470
	if (!cr6.eq) goto loc_82578470;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82578470:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257847C"))) PPC_WEAK_FUNC(sub_8257847C);
PPC_FUNC_IMPL(__imp__sub_8257847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578480"))) PPC_WEAK_FUNC(sub_82578480);
PPC_FUNC_IMPL(__imp__sub_82578480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82578488;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825784b8
	if (cr6.eq) goto loc_825784B8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82577410
	ctx.lr = 0x825784AC;
	sub_82577410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825784c4
	if (!cr6.eq) goto loc_825784C4;
loc_825784B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825784C4:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-17548
	ctx.r30.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825784dc
	if (!cr6.eq) goto loc_825784DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825784DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x825784EC;
	sub_831D0FD8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578500
	if (!cr6.eq) goto loc_82578500;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82578500:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257850C"))) PPC_WEAK_FUNC(sub_8257850C);
PPC_FUNC_IMPL(__imp__sub_8257850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578510"))) PPC_WEAK_FUNC(sub_82578510);
PPC_FUNC_IMPL(__imp__sub_82578510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82578518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578548
	if (cr6.eq) goto loc_82578548;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82577410
	ctx.lr = 0x8257853C;
	sub_82577410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578554
	if (!cr6.eq) goto loc_82578554;
loc_82578548:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82578554:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-17548
	ctx.r30.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257856c
	if (!cr6.eq) goto loc_8257856C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8257856C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d82e8
	ctx.lr = 0x82578574;
	sub_831D82E8(ctx, base);
	// stfd f1,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f1.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578588
	if (!cr6.eq) goto loc_82578588;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82578588:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578594"))) PPC_WEAK_FUNC(sub_82578594);
PPC_FUNC_IMPL(__imp__sub_82578594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578598"))) PPC_WEAK_FUNC(sub_82578598);
PPC_FUNC_IMPL(__imp__sub_82578598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825785A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825785d0
	if (cr6.eq) goto loc_825785D0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82577410
	ctx.lr = 0x825785C4;
	sub_82577410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825785dc
	if (!cr6.eq) goto loc_825785DC;
loc_825785D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825785DC:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r30,r11,-17548
	ctx.r30.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825785f4
	if (!cr6.eq) goto loc_825785F4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825785F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d7ef8
	ctx.lr = 0x82578604;
	sub_831D7EF8(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578618
	if (!cr6.eq) goto loc_82578618;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82578618:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578624"))) PPC_WEAK_FUNC(sub_82578624);
PPC_FUNC_IMPL(__imp__sub_82578624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578628"))) PPC_WEAK_FUNC(sub_82578628);
PPC_FUNC_IMPL(__imp__sub_82578628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82578630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578660
	if (cr6.eq) goto loc_82578660;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82577410
	ctx.lr = 0x82578654;
	sub_82577410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257866c
	if (!cr6.eq) goto loc_8257866C;
loc_82578660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8257866C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82578680
	if (cr6.eq) goto loc_82578680;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82578684
	goto loc_82578684;
loc_82578680:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82578684:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r30,r11,-17548
	ctx.r30.s64 = ctx.r11.s64 + -17548;
	// bne cr6,0x82578698
	if (!cr6.eq) goto loc_82578698;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82578698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82576558
	ctx.lr = 0x825786A0;
	sub_82576558(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825786b0
	if (!cr6.eq) goto loc_825786B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825786B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825786BC"))) PPC_WEAK_FUNC(sub_825786BC);
PPC_FUNC_IMPL(__imp__sub_825786BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825786C0"))) PPC_WEAK_FUNC(sub_825786C0);
PPC_FUNC_IMPL(__imp__sub_825786C0) {
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
	// bl 0x825781e0
	ctx.lr = 0x825786D8;
	sub_825781E0(ctx, base);
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

__attribute__((alias("__imp__sub_825786F0"))) PPC_WEAK_FUNC(sub_825786F0);
PPC_FUNC_IMPL(__imp__sub_825786F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825786F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,16
	cr6.compare<int32_t>(ctx.r7.s32, 16, xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82578724
	if (!cr6.eq) goto loc_82578724;
	// addi r5,r11,17088
	ctx.r5.s64 = ctx.r11.s64 + 17088;
	// b 0x8257872c
	goto loc_8257872C;
loc_82578724:
	// addi r11,r11,17088
	ctx.r11.s64 = ctx.r11.s64 + 17088;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_8257872C:
	// bl 0x8257d308
	ctx.lr = 0x82578730;
	sub_8257D308(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825781e0
	ctx.lr = 0x82578754;
	sub_825781E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578760"))) PPC_WEAK_FUNC(sub_82578760);
PPC_FUNC_IMPL(__imp__sub_82578760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82578768;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r5,r11,17108
	ctx.r5.s64 = ctx.r11.s64 + 17108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8257d308
	ctx.lr = 0x8257879C;
	sub_8257D308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825781e0
	ctx.lr = 0x825787C0;
	sub_825781E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825787CC"))) PPC_WEAK_FUNC(sub_825787CC);
PPC_FUNC_IMPL(__imp__sub_825787CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825787D0"))) PPC_WEAK_FUNC(sub_825787D0);
PPC_FUNC_IMPL(__imp__sub_825787D0) {
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
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82578820
	if (cr6.eq) goto loc_82578820;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578800;
	sub_82578160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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
loc_82578820:
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_8257883C"))) PPC_WEAK_FUNC(sub_8257883C);
PPC_FUNC_IMPL(__imp__sub_8257883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578840"))) PPC_WEAK_FUNC(sub_82578840);
PPC_FUNC_IMPL(__imp__sub_82578840) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8252e3c0
	ctx.lr = 0x82578868;
	sub_8252E3C0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578880;
	sub_82578160(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825788A4"))) PPC_WEAK_FUNC(sub_825788A4);
PPC_FUNC_IMPL(__imp__sub_825788A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825788A8"))) PPC_WEAK_FUNC(sub_825788A8);
PPC_FUNC_IMPL(__imp__sub_825788A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825788B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8252e3c0
	ctx.lr = 0x825788D8;
	sub_8252E3C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x825788E4;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825781e0
	ctx.lr = 0x82578908;
	sub_825781E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578914"))) PPC_WEAK_FUNC(sub_82578914);
PPC_FUNC_IMPL(__imp__sub_82578914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578918"))) PPC_WEAK_FUNC(sub_82578918);
PPC_FUNC_IMPL(__imp__sub_82578918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82578920;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x8257893C;
	sub_8252E3C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,16
	cr6.compare<int32_t>(ctx.r27.s32, 16, xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82578960
	if (!cr6.eq) goto loc_82578960;
	// addi r5,r11,17088
	ctx.r5.s64 = ctx.r11.s64 + 17088;
	// b 0x82578968
	goto loc_82578968;
loc_82578960:
	// addi r11,r11,17088
	ctx.r11.s64 = ctx.r11.s64 + 17088;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_82578968:
	// bl 0x8257d308
	ctx.lr = 0x8257896C;
	sub_8257D308(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825781e0
	ctx.lr = 0x82578990;
	sub_825781E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257899C"))) PPC_WEAK_FUNC(sub_8257899C);
PPC_FUNC_IMPL(__imp__sub_8257899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825789A0"))) PPC_WEAK_FUNC(sub_825789A0);
PPC_FUNC_IMPL(__imp__sub_825789A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r5,r11,17112
	ctx.r5.s64 = ctx.r11.s64 + 17112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257d308
	ctx.lr = 0x825789D0;
	sub_8257D308(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x825789EC;
	sub_82578160(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578A0C"))) PPC_WEAK_FUNC(sub_82578A0C);
PPC_FUNC_IMPL(__imp__sub_82578A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578A10"))) PPC_WEAK_FUNC(sub_82578A10);
PPC_FUNC_IMPL(__imp__sub_82578A10) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,17116
	ctx.r5.s64 = ctx.r11.s64 + 17116;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257d308
	ctx.lr = 0x82578A3C;
	sub_8257D308(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578A58;
	sub_82578160(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82578A78"))) PPC_WEAK_FUNC(sub_82578A78);
PPC_FUNC_IMPL(__imp__sub_82578A78) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82578ab0
	if (!cr6.eq) goto loc_82578AB0;
	// addi r11,r11,17128
	ctx.r11.s64 = ctx.r11.s64 + 17128;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82578ab4
	goto loc_82578AB4;
loc_82578AB0:
	// addi r5,r11,17128
	ctx.r5.s64 = ctx.r11.s64 + 17128;
loc_82578AB4:
	// bl 0x8257d308
	ctx.lr = 0x82578AB8;
	sub_8257D308(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578AD4;
	sub_82578160(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82578AF4"))) PPC_WEAK_FUNC(sub_82578AF4);
PPC_FUNC_IMPL(__imp__sub_82578AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578AF8"))) PPC_WEAK_FUNC(sub_82578AF8);
PPC_FUNC_IMPL(__imp__sub_82578AF8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82578b30
	if (!cr6.eq) goto loc_82578B30;
	// addi r11,r11,17140
	ctx.r11.s64 = ctx.r11.s64 + 17140;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82578b34
	goto loc_82578B34;
loc_82578B30:
	// addi r5,r11,17140
	ctx.r5.s64 = ctx.r11.s64 + 17140;
loc_82578B34:
	// bl 0x8257d308
	ctx.lr = 0x82578B38;
	sub_8257D308(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578B54;
	sub_82578160(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82578B74"))) PPC_WEAK_FUNC(sub_82578B74);
PPC_FUNC_IMPL(__imp__sub_82578B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578B78"))) PPC_WEAK_FUNC(sub_82578B78);
PPC_FUNC_IMPL(__imp__sub_82578B78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,17148
	ctx.r5.s64 = ctx.r11.s64 + 17148;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257d308
	ctx.lr = 0x82578BA4;
	sub_8257D308(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82578BC0;
	sub_82578160(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82578BE0"))) PPC_WEAK_FUNC(sub_82578BE0);
PPC_FUNC_IMPL(__imp__sub_82578BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82578BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82578ca0
	if (cr6.eq) goto loc_82578CA0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82578c28
	if (!cr6.eq) goto loc_82578C28;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82578c24
	if (cr6.eq) goto loc_82578C24;
loc_82578C18:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82578c18
	if (!cr6.eq) goto loc_82578C18;
loc_82578C24:
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82578C28:
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82578c88
	if (cr6.eq) goto loc_82578C88;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r28,r11,-17548
	ctx.r28.s64 = ctx.r11.s64 + -17548;
loc_82578C3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82578c50
	if (cr6.eq) goto loc_82578C50;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82578c54
	goto loc_82578C54;
loc_82578C50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82578C54:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82578c60
	if (!cr6.eq) goto loc_82578C60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82578C60:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82577058
	ctx.lr = 0x82578C70;
	sub_82577058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82578c94
	if (!cr6.eq) goto loc_82578C94;
	// lwz r30,44(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82578c3c
	if (!cr6.eq) goto loc_82578C3C;
loc_82578C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82578C94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82578CA0:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578CAC"))) PPC_WEAK_FUNC(sub_82578CAC);
PPC_FUNC_IMPL(__imp__sub_82578CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578CB0"))) PPC_WEAK_FUNC(sub_82578CB0);
PPC_FUNC_IMPL(__imp__sub_82578CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82578CB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r23,r11,17928
	ctx.r23.s64 = ctx.r11.s64 + 17928;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r8,r9,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82578f3c
	if (cr6.eq) goto loc_82578F3C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// ori r21,r9,12
	ctx.r21.u64 = ctx.r9.u64 | 12;
	// ori r24,r8,10
	ctx.r24.u64 = ctx.r8.u64 | 10;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,17416
	ctx.r26.s64 = ctx.r11.s64 + 17416;
	// addi r22,r10,-17548
	ctx.r22.s64 = ctx.r10.s64 + -17548;
loc_82578D08:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578d34
	if (cr6.eq) goto loc_82578D34;
loc_82578D24:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578d24
	if (!cr6.eq) goto loc_82578D24;
loc_82578D34:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// ble cr6,0x82578dac
	if (!cr6.gt) goto loc_82578DAC;
	// lwzx r11,r27,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r21.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82578d74
	if (cr6.eq) goto loc_82578D74;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82578d78
	goto loc_82578D78;
loc_82578D74:
	// bl 0x82416260
	ctx.lr = 0x82578D78;
	sub_82416260(ctx, base);
loc_82578D78:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r3,r24
	ctx.r8.u64 = ctx.r3.u64 + ctx.r24.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82578DAC:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82578dd8
	if (cr6.eq) goto loc_82578DD8;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// b 0x82578ddc
	goto loc_82578DDC;
loc_82578DD8:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82578DDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,32(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82578e0c
	if (cr6.eq) goto loc_82578E0C;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r31,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// b 0x82578e14
	goto loc_82578E14;
loc_82578E0C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r31,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r31.u32);
loc_82578E14:
	// stw r31,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r31.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578e44
	if (cr6.eq) goto loc_82578E44;
loc_82578E34:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578e34
	if (!cr6.eq) goto loc_82578E34;
loc_82578E44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82578e64
	if (!cr6.eq) goto loc_82578E64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// beq cr6,0x82578e6c
	if (cr6.eq) goto loc_82578E6C;
loc_82578E64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82578e70
	goto loc_82578E70;
loc_82578E6C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82578E70:
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578e98
	if (cr6.eq) goto loc_82578E98;
loc_82578E88:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578e88
	if (!cr6.eq) goto loc_82578E88;
loc_82578E98:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82578ebc
	if (!cr6.eq) goto loc_82578EBC;
	// bl 0x82577a10
	ctx.lr = 0x82578EB8;
	sub_82577A10(ctx, base);
	// b 0x82578ec0
	goto loc_82578EC0;
loc_82578EBC:
	// bl 0x82577c80
	ctx.lr = 0x82578EC0;
	sub_82577C80(ctx, base);
loc_82578EC0:
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x82578ef0
	if (!cr6.eq) goto loc_82578EF0;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// beq cr6,0x82578ef8
	if (cr6.eq) goto loc_82578EF8;
loc_82578EF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82578efc
	goto loc_82578EFC;
loc_82578EF8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82578EFC:
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578f24
	if (cr6.eq) goto loc_82578F24;
loc_82578F14:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578f14
	if (!cr6.eq) goto loc_82578F14;
loc_82578F24:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578d08
	if (!cr6.eq) goto loc_82578D08;
loc_82578F3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578F44"))) PPC_WEAK_FUNC(sub_82578F44);
PPC_FUNC_IMPL(__imp__sub_82578F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82578F48"))) PPC_WEAK_FUNC(sub_82578F48);
PPC_FUNC_IMPL(__imp__sub_82578F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82578F50;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r24,r11,17928
	ctx.r24.s64 = ctx.r11.s64 + 17928;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825791ac
	if (cr6.eq) goto loc_825791AC;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// ori r21,r8,12
	ctx.r21.u64 = ctx.r8.u64 | 12;
	// ori r25,r7,10
	ctx.r25.u64 = ctx.r7.u64 | 10;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r11,18440
	ctx.r23.s64 = ctx.r11.s64 + 18440;
	// addi r22,r10,18184
	ctx.r22.s64 = ctx.r10.s64 + 18184;
	// addi r29,r9,17416
	ctx.r29.s64 = ctx.r9.s64 + 17416;
loc_82578FA8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82578fd4
	if (cr6.eq) goto loc_82578FD4;
loc_82578FC4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578fc4
	if (!cr6.eq) goto loc_82578FC4;
loc_82578FD4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x8257904c
	if (!cr6.gt) goto loc_8257904C;
	// lwzx r11,r28,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r21.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82579014
	if (cr6.eq) goto loc_82579014;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82579018
	goto loc_82579018;
loc_82579014:
	// bl 0x82416260
	ctx.lr = 0x82579018;
	sub_82416260(ctx, base);
loc_82579018:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r8,r3,r25
	ctx.r8.u64 = ctx.r3.u64 + ctx.r25.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8257904C:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82579078
	if (cr6.eq) goto loc_82579078;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// b 0x8257907c
	goto loc_8257907C;
loc_82579078:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_8257907C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r8,32(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x825790ac
	if (cr6.eq) goto loc_825790AC;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// b 0x825790b4
	goto loc_825790B4;
loc_825790AC:
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// stw r9,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r9.u32);
loc_825790B4:
	// stw r9,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r9.u32);
	// stw r27,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r27.u32);
	// stw r26,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825790e4
	if (cr6.eq) goto loc_825790E4;
loc_825790D4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825790d4
	if (!cr6.eq) goto loc_825790D4;
loc_825790E4:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257910c
	if (cr6.eq) goto loc_8257910C;
loc_825790FC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825790fc
	if (!cr6.eq) goto loc_825790FC;
loc_8257910C:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x82579140
	if (!cr6.eq) goto loc_82579140;
loc_82579128:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r10,r22
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579158
	if (cr6.eq) goto loc_82579158;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82579128
	goto loc_82579128;
loc_82579140:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r10,r23
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579158
	if (cr6.eq) goto loc_82579158;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82579140
	goto loc_82579140;
loc_82579158:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82579194
	if (cr6.eq) goto loc_82579194;
loc_82579184:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82579184
	if (!cr6.eq) goto loc_82579184;
loc_82579194:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82578fa8
	if (!cr6.eq) goto loc_82578FA8;
loc_825791AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825791B4"))) PPC_WEAK_FUNC(sub_825791B4);
PPC_FUNC_IMPL(__imp__sub_825791B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825791B8"))) PPC_WEAK_FUNC(sub_825791B8);
PPC_FUNC_IMPL(__imp__sub_825791B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825791C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82577ef0
	ctx.lr = 0x825791E0;
	sub_82577EF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x825791F0;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82579228
	if (cr6.eq) goto loc_82579228;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8257922c
	goto loc_8257922C;
loc_82579228:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8257922C:
	// subf r9,r29,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r29.s64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82579258
	if (cr6.eq) goto loc_82579258;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// b 0x82579260
	goto loc_82579260;
loc_82579258:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82579260:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82579280
	if (!cr6.eq) goto loc_82579280;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r11,r11,-17548
	ctx.r11.s64 = ctx.r11.s64 + -17548;
loc_82579280:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82579294
	if (!cr6.eq) goto loc_82579294;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82579294:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825792A8"))) PPC_WEAK_FUNC(sub_825792A8);
PPC_FUNC_IMPL(__imp__sub_825792A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825792B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,19208
	ctx.r11.s64 = ctx.r11.s64 + 19208;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825792f0
	if (cr6.eq) goto loc_825792F0;
loc_825792E0:
	// lbzu r10,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825792e0
	if (!cr6.eq) goto loc_825792E0;
loc_825792F0:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x82579300;
	sub_82577208(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82579338
	if (cr6.eq) goto loc_82579338;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8257933c
	goto loc_8257933C;
loc_82579338:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8257933C:
	// subf r9,r29,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82579368
	if (cr6.eq) goto loc_82579368;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// b 0x82579370
	goto loc_82579370;
loc_82579368:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82579370:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82579390
	if (!cr6.eq) goto loc_82579390;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r11,r11,-17548
	ctx.r11.s64 = ctx.r11.s64 + -17548;
loc_82579390:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825793a4
	if (!cr6.eq) goto loc_825793A4;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_825793A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825793B4"))) PPC_WEAK_FUNC(sub_825793B4);
PPC_FUNC_IMPL(__imp__sub_825793B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825793B8"))) PPC_WEAK_FUNC(sub_825793B8);
PPC_FUNC_IMPL(__imp__sub_825793B8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82578be0
	ctx.lr = 0x825793E4;
	sub_82578BE0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82579400"))) PPC_WEAK_FUNC(sub_82579400);
PPC_FUNC_IMPL(__imp__sub_82579400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x8257944c
	if (!cr6.eq) goto loc_8257944C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82579434
	if (cr6.eq) goto loc_82579434;
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_82579434:
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_8257944C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82579498
	if (!cr6.eq) goto loc_82579498;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82579480
	if (cr6.eq) goto loc_82579480;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r5,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r5.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_82579480:
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_82579498:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r4,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r4.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// stw r5,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r5.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825794B8"))) PPC_WEAK_FUNC(sub_825794B8);
PPC_FUNC_IMPL(__imp__sub_825794B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825794C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x825794D8;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq cr6,0x82579510
	if (cr6.eq) goto loc_82579510;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// b 0x82579514
	goto loc_82579514;
loc_82579510:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82579514:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,17672
	ctx.r9.s64 = ctx.r11.s64 + 17672;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579544
	if (cr6.eq) goto loc_82579544;
loc_82579534:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82579534
	if (!cr6.eq) goto loc_82579534;
loc_82579544:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r10,r11,17416
	ctx.r10.s64 = ctx.r11.s64 + 17416;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579580
	if (cr6.eq) goto loc_82579580;
loc_82579570:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82579570
	if (!cr6.eq) goto loc_82579570;
loc_82579580:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578cb0
	ctx.lr = 0x82579594;
	sub_82578CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,62
	cr6.compare<int32_t>(ctx.r10.s32, 62, xer);
	// bne cr6,0x825795c4
	if (!cr6.eq) goto loc_825795C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257a140
	ctx.lr = 0x825795C0;
	sub_8257A140(ctx, base);
	// b 0x825795d4
	goto loc_825795D4;
loc_825795C4:
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x825795d4
	if (!cr6.eq) goto loc_825795D4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825795D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825795e8
	if (cr6.eq) goto loc_825795E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x825795f0
	goto loc_825795F0;
loc_825795E8:
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r10,r10,-17548
	ctx.r10.s64 = ctx.r10.s64 + -17548;
loc_825795F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257960c
	if (cr6.eq) goto loc_8257960C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r28,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8257960C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stbx r28,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579620"))) PPC_WEAK_FUNC(sub_82579620);
PPC_FUNC_IMPL(__imp__sub_82579620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82579628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x82579640;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82579678
	if (cr6.eq) goto loc_82579678;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8257967c
	goto loc_8257967C;
loc_82579678:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257967C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,17672
	ctx.r9.s64 = ctx.r11.s64 + 17672;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825796ac
	if (cr6.eq) goto loc_825796AC;
loc_8257969C:
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8257969c
	if (!cr6.eq) goto loc_8257969C;
loc_825796AC:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,17416
	ctx.r10.s64 = ctx.r10.s64 + 17416;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825796e8
	if (cr6.eq) goto loc_825796E8;
loc_825796D8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825796d8
	if (!cr6.eq) goto loc_825796D8;
loc_825796E8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82578f48
	ctx.lr = 0x825796FC;
	sub_82578F48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,62
	cr6.compare<int32_t>(ctx.r10.s32, 62, xer);
	// bne cr6,0x82579734
	if (!cr6.eq) goto loc_82579734;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257a298
	ctx.lr = 0x82579728;
	sub_8257A298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82579734:
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x82579744
	if (!cr6.eq) goto loc_82579744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82579744:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579750"))) PPC_WEAK_FUNC(sub_82579750);
PPC_FUNC_IMPL(__imp__sub_82579750) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// neg r7,r9
	ctx.r7.s64 = -ctx.r9.s64;
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r7,r7,68
	ctx.r7.s64 = ctx.r7.s64 + 68;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r5,72
	ctx.r5.u64 = ctx.r5.u64 | 72;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r31,-32169
	ctx.r31.s64 = -2108227584;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r30,-32169
	ctx.r30.s64 = -2108227584;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r31,r31,28712
	ctx.r31.s64 = ctx.r31.s64 + 28712;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r30,r30,28728
	ctx.r30.s64 = ctx.r30.s64 + 28728;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stbx r4,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u8);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825797F4"))) PPC_WEAK_FUNC(sub_825797F4);
PPC_FUNC_IMPL(__imp__sub_825797F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825797F8"))) PPC_WEAK_FUNC(sub_825797F8);
PPC_FUNC_IMPL(__imp__sub_825797F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82579800;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82579828
	if (cr6.eq) goto loc_82579828;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8257982c
	goto loc_8257982C;
loc_82579828:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8257982C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82579850
	if (cr6.eq) goto loc_82579850;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82579848;
	sub_82578160(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82579854
	goto loc_82579854;
loc_82579850:
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_82579854:
	// lbz r10,215(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 215);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82579878
	if (cr6.eq) goto loc_82579878;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578160
	ctx.lr = 0x82579870;
	sub_82578160(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8257987c
	goto loc_8257987C;
loc_82579878:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8257987C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257989c
	if (cr6.eq) goto loc_8257989C;
loc_8257988C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257988c
	if (!cr6.eq) goto loc_8257988C;
loc_8257989C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x825774e0
	ctx.lr = 0x825798C4;
	sub_825774E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579400
	ctx.lr = 0x825798D8;
	sub_82579400(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825798E8"))) PPC_WEAK_FUNC(sub_825798E8);
PPC_FUNC_IMPL(__imp__sub_825798E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825798F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8257991c
	if (cr6.eq) goto loc_8257991C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8257991c
	if (!cr6.eq) goto loc_8257991C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8257991C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257993c
	if (cr6.eq) goto loc_8257993C;
loc_8257992C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257992c
	if (!cr6.eq) goto loc_8257992C;
loc_8257993C:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,48
	ctx.r4.s64 = 48;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82577208
	ctx.lr = 0x82579958;
	sub_82577208(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82579990
	if (cr6.eq) goto loc_82579990;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// b 0x82579994
	goto loc_82579994;
loc_82579990:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82579994:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825799b4
	if (cr6.eq) goto loc_825799B4;
loc_825799A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825799a4
	if (!cr6.eq) goto loc_825799A4;
loc_825799B4:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addic r7,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r5,r9,20004
	ctx.r5.s64 = ctx.r9.s64 + 20004;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r8,19996
	ctx.r4.s64 = ctx.r8.s64 + 19996;
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x825775d0
	ctx.lr = 0x825799E4;
	sub_825775D0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82579a04
	if (cr6.eq) goto loc_82579A04;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// b 0x82579a0c
	goto loc_82579A0C;
loc_82579A04:
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82579A0C:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82579a38
	if (cr6.eq) goto loc_82579A38;
loc_82579A28:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82579a28
	if (!cr6.eq) goto loc_82579A28;
loc_82579A38:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,19988
	ctx.r5.s64 = ctx.r9.s64 + 19988;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r8,19976
	ctx.r4.s64 = ctx.r8.s64 + 19976;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x825775d0
	ctx.lr = 0x82579A68;
	sub_825775D0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82579a88
	if (cr6.eq) goto loc_82579A88;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// b 0x82579a90
	goto loc_82579A90;
loc_82579A88:
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82579A90:
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82579400
	ctx.lr = 0x82579AAC;
	sub_82579400(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579AB8"))) PPC_WEAK_FUNC(sub_82579AB8);
PPC_FUNC_IMPL(__imp__sub_82579AB8) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,76
	ctx.r3.u64 = ctx.r3.u64 | 76;
	// bl 0x825730a8
	ctx.lr = 0x82579AEC;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82579b04
	if (cr6.eq) goto loc_82579B04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82579750
	ctx.lr = 0x82579AFC;
	sub_82579750(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82579b08
	goto loc_82579B08;
loc_82579B04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82579B08:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82579B28"))) PPC_WEAK_FUNC(sub_82579B28);
PPC_FUNC_IMPL(__imp__sub_82579B28) {
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
	// lbz r11,199(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x825797f8
	ctx.lr = 0x82579B48;
	sub_825797F8(ctx, base);
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

__attribute__((alias("__imp__sub_82579B60"))) PPC_WEAK_FUNC(sub_82579B60);
PPC_FUNC_IMPL(__imp__sub_82579B60) {
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
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825797f8
	ctx.lr = 0x82579B94;
	sub_825797F8(ctx, base);
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

__attribute__((alias("__imp__sub_82579BAC"))) PPC_WEAK_FUNC(sub_82579BAC);
PPC_FUNC_IMPL(__imp__sub_82579BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579BB0"))) PPC_WEAK_FUNC(sub_82579BB0);
PPC_FUNC_IMPL(__imp__sub_82579BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82579BB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8252e3c0
	ctx.lr = 0x82579BE0;
	sub_8252E3C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e3c0
	ctx.lr = 0x82579BEC;
	sub_8252E3C0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825797f8
	ctx.lr = 0x82579C18;
	sub_825797F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579C24"))) PPC_WEAK_FUNC(sub_82579C24);
PPC_FUNC_IMPL(__imp__sub_82579C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579C28"))) PPC_WEAK_FUNC(sub_82579C28);
PPC_FUNC_IMPL(__imp__sub_82579C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x825798e8
	sub_825798E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579C2C"))) PPC_WEAK_FUNC(sub_82579C2C);
PPC_FUNC_IMPL(__imp__sub_82579C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82579C30"))) PPC_WEAK_FUNC(sub_82579C30);
PPC_FUNC_IMPL(__imp__sub_82579C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// beq cr6,0x82579d30
	if (cr6.eq) goto loc_82579D30;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// beq cr6,0x82579c4c
	if (cr6.eq) goto loc_82579C4C;
	// b 0x825794b8
	sub_825794B8(ctx, base);
	return;
loc_82579C4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x82579c6c
	if (cr6.eq) goto loc_82579C6C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// bne cr6,0x82579d04
	if (!cr6.eq) goto loc_82579D04;
loc_82579C6C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,109
	cr6.compare<uint32_t>(ctx.r10.u32, 109, xer);
	// beq cr6,0x82579c8c
	if (cr6.eq) goto loc_82579C8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,77
	cr6.compare<uint32_t>(ctx.r10.u32, 77, xer);
	// bne cr6,0x82579d04
	if (!cr6.eq) goto loc_82579D04;
loc_82579C8C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, xer);
	// beq cr6,0x82579ca8
	if (cr6.eq) goto loc_82579CA8;
	// cmpwi cr6,r10,76
	cr6.compare<int32_t>(ctx.r10.s32, 76, xer);
	// bne cr6,0x82579d04
	if (!cr6.eq) goto loc_82579D04;
loc_82579CA8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r8,r10,17416
	ctx.r8.s64 = ctx.r10.s64 + 17416;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579d04
	if (cr6.eq) goto loc_82579D04;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82579CC4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x82579ce4
	if (!cr6.eq) goto loc_82579CE4;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x82579cf0
	if (cr6.eq) goto loc_82579CF0;
loc_82579CE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82579cc4
	goto loc_82579CC4;
loc_82579CF0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82579D04:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x82579d20
	if (!cr6.eq) goto loc_82579D20;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x82579cf0
	if (cr6.eq) goto loc_82579CF0;
loc_82579D20:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82579d04
	goto loc_82579D04;
loc_82579D30:
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82579e14
	if (cr6.eq) goto loc_82579E14;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82579da4
	if (cr6.eq) goto loc_82579DA4;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,68
	cr6.compare<uint32_t>(ctx.r10.u32, 68, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x825777d8
	sub_825777D8(ctx, base);
	return;
loc_82579DA4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,79
	cr6.compare<uint32_t>(ctx.r10.u32, 79, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,89
	cr6.compare<uint32_t>(ctx.r10.u32, 89, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,80
	cr6.compare<uint32_t>(ctx.r10.u32, 80, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,69
	cr6.compare<uint32_t>(ctx.r10.u32, 69, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r8,r10,17416
	ctx.r8.s64 = ctx.r10.s64 + 17416;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579e74
	if (cr6.eq) goto loc_82579E74;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x825778a8
	sub_825778A8(ctx, base);
	return;
loc_82579E14:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x82579e74
	if (!cr6.eq) goto loc_82579E74;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82579E28:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x82579e58
	if (!cr6.eq) goto loc_82579E58;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x82579e58
	if (!cr6.eq) goto loc_82579E58;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x82579e64
	if (cr6.eq) goto loc_82579E64;
loc_82579E58:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82579e28
	goto loc_82579E28;
loc_82579E64:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82579E74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x82579ea4
	if (cr6.eq) goto loc_82579EA4;
loc_82579E8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,62
	cr6.compare<uint32_t>(ctx.r9.u32, 62, xer);
	// bne cr6,0x82579e8c
	if (!cr6.eq) goto loc_82579E8C;
loc_82579EA4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579EB8"))) PPC_WEAK_FUNC(sub_82579EB8);
PPC_FUNC_IMPL(__imp__sub_82579EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// beq cr6,0x82579fb8
	if (cr6.eq) goto loc_82579FB8;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// beq cr6,0x82579ed4
	if (cr6.eq) goto loc_82579ED4;
	// b 0x82579620
	sub_82579620(ctx, base);
	return;
loc_82579ED4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x82579ef4
	if (cr6.eq) goto loc_82579EF4;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// bne cr6,0x82579f8c
	if (!cr6.eq) goto loc_82579F8C;
loc_82579EF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,109
	cr6.compare<uint32_t>(ctx.r10.u32, 109, xer);
	// beq cr6,0x82579f14
	if (cr6.eq) goto loc_82579F14;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,77
	cr6.compare<uint32_t>(ctx.r10.u32, 77, xer);
	// bne cr6,0x82579f8c
	if (!cr6.eq) goto loc_82579F8C;
loc_82579F14:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, xer);
	// beq cr6,0x82579f30
	if (cr6.eq) goto loc_82579F30;
	// cmpwi cr6,r10,76
	cr6.compare<int32_t>(ctx.r10.s32, 76, xer);
	// bne cr6,0x82579f8c
	if (!cr6.eq) goto loc_82579F8C;
loc_82579F30:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r8,r10,17416
	ctx.r8.s64 = ctx.r10.s64 + 17416;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82579f8c
	if (cr6.eq) goto loc_82579F8C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82579F4C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x82579f6c
	if (!cr6.eq) goto loc_82579F6C;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x82579f78
	if (cr6.eq) goto loc_82579F78;
loc_82579F6C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82579f4c
	goto loc_82579F4C;
loc_82579F78:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82579F8C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x82579fa8
	if (!cr6.eq) goto loc_82579FA8;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x82579f78
	if (cr6.eq) goto loc_82579F78;
loc_82579FA8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82579f8c
	goto loc_82579F8C;
loc_82579FB8:
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x8257a09c
	if (cr6.eq) goto loc_8257A09C;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x8257a02c
	if (cr6.eq) goto loc_8257A02C;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,68
	cr6.compare<uint32_t>(ctx.r10.u32, 68, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82577948
	sub_82577948(ctx, base);
	return;
loc_8257A02C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,79
	cr6.compare<uint32_t>(ctx.r10.u32, 79, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,89
	cr6.compare<uint32_t>(ctx.r10.u32, 89, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,80
	cr6.compare<uint32_t>(ctx.r10.u32, 80, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,69
	cr6.compare<uint32_t>(ctx.r10.u32, 69, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r8,r10,17416
	ctx.r8.s64 = ctx.r10.s64 + 17416;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8257a0fc
	if (cr6.eq) goto loc_8257A0FC;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x825778a8
	sub_825778A8(ctx, base);
	return;
loc_8257A09C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x8257a0fc
	if (!cr6.eq) goto loc_8257A0FC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_8257A0B0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x8257a0e0
	if (!cr6.eq) goto loc_8257A0E0;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x8257a0e0
	if (!cr6.eq) goto loc_8257A0E0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x8257a0ec
	if (cr6.eq) goto loc_8257A0EC;
loc_8257A0E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8257a0b0
	goto loc_8257A0B0;
loc_8257A0EC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8257A0FC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x8257a12c
	if (cr6.eq) goto loc_8257A12C;
loc_8257A114:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,62
	cr6.compare<uint32_t>(ctx.r9.u32, 62, xer);
	// bne cr6,0x8257a114
	if (!cr6.eq) goto loc_8257A114;
loc_8257A12C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A140"))) PPC_WEAK_FUNC(sub_8257A140);
PPC_FUNC_IMPL(__imp__sub_8257A140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257A148;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,17416
	ctx.r27.s64 = ctx.r11.s64 + 17416;
loc_8257A164:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257a18c
	if (cr6.eq) goto loc_8257A18C;
loc_8257A17C:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257a17c
	if (!cr6.eq) goto loc_8257A17C;
loc_8257A18C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_8257A194:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257a1a8
	if (cr6.eq) goto loc_8257A1A8;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// beq cr6,0x8257a1c0
	if (cr6.eq) goto loc_8257A1C0;
loc_8257A1A8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825791b8
	ctx.lr = 0x8257A1BC;
	sub_825791B8(ctx, base);
	// b 0x8257a194
	goto loc_8257A194;
loc_8257A1C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// beq cr6,0x8257a230
	if (cr6.eq) goto loc_8257A230;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82579c30
	ctx.lr = 0x8257A1E4;
	sub_82579C30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257a164
	if (cr6.eq) goto loc_8257A164;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257a218
	if (cr6.eq) goto loc_8257A218;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// b 0x8257a164
	goto loc_8257A164;
loc_8257A218:
	// stw r26,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r26.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// b 0x8257a164
	goto loc_8257A164;
loc_8257A230:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r9,17672
	ctx.r10.s64 = ctx.r9.s64 + 17672;
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8257a260
	if (cr6.eq) goto loc_8257A260;
loc_8257A250:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257a250
	if (!cr6.eq) goto loc_8257A250;
loc_8257A260:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257a284
	if (cr6.eq) goto loc_8257A284;
loc_8257A274:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257a274
	if (!cr6.eq) goto loc_8257A274;
loc_8257A284:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A294"))) PPC_WEAK_FUNC(sub_8257A294);
PPC_FUNC_IMPL(__imp__sub_8257A294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A298"))) PPC_WEAK_FUNC(sub_8257A298);
PPC_FUNC_IMPL(__imp__sub_8257A298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257A2A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,17416
	ctx.r27.s64 = ctx.r11.s64 + 17416;
loc_8257A2BC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257a2e4
	if (cr6.eq) goto loc_8257A2E4;
loc_8257A2D4:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257a2d4
	if (!cr6.eq) goto loc_8257A2D4;
loc_8257A2E4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_8257A2EC:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257a300
	if (cr6.eq) goto loc_8257A300;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// beq cr6,0x8257a318
	if (cr6.eq) goto loc_8257A318;
loc_8257A300:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825792a8
	ctx.lr = 0x8257A314;
	sub_825792A8(ctx, base);
	// b 0x8257a2ec
	goto loc_8257A2EC;
loc_8257A318:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// beq cr6,0x8257a388
	if (cr6.eq) goto loc_8257A388;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82579eb8
	ctx.lr = 0x8257A33C;
	sub_82579EB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257a2bc
	if (cr6.eq) goto loc_8257A2BC;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257a370
	if (cr6.eq) goto loc_8257A370;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// b 0x8257a2bc
	goto loc_8257A2BC;
loc_8257A370:
	// stw r26,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r26.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// b 0x8257a2bc
	goto loc_8257A2BC;
loc_8257A388:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r9,17672
	ctx.r10.s64 = ctx.r9.s64 + 17672;
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8257a3b8
	if (cr6.eq) goto loc_8257A3B8;
loc_8257A3A8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257a3a8
	if (!cr6.eq) goto loc_8257A3A8;
loc_8257A3B8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257a3dc
	if (cr6.eq) goto loc_8257A3DC;
loc_8257A3CC:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257a3cc
	if (!cr6.eq) goto loc_8257A3CC;
loc_8257A3DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A3EC"))) PPC_WEAK_FUNC(sub_8257A3EC);
PPC_FUNC_IMPL(__imp__sub_8257A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A3F0"))) PPC_WEAK_FUNC(sub_8257A3F0);
PPC_FUNC_IMPL(__imp__sub_8257A3F0) {
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
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82546008
	ctx.lr = 0x8257A410;
	sub_82546008(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257a424
	if (cr6.eq) goto loc_8257A424;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x8257A424;
	sub_82473550(ctx, base);
loc_8257A424:
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

__attribute__((alias("__imp__sub_8257A43C"))) PPC_WEAK_FUNC(sub_8257A43C);
PPC_FUNC_IMPL(__imp__sub_8257A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A440"))) PPC_WEAK_FUNC(sub_8257A440);
PPC_FUNC_IMPL(__imp__sub_8257A440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257A448;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8257a498
	if (!cr6.gt) goto loc_8257A498;
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_8257A470:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A47C;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a490
	if (cr6.eq) goto loc_8257A490;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A490;
	sub_82473550(ctx, base);
loc_8257A490:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x8257a470
	if (!cr0.eq) goto loc_8257A470;
loc_8257A498:
	// std r26,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r26.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4A8"))) PPC_WEAK_FUNC(sub_8257A4A8);
PPC_FUNC_IMPL(__imp__sub_8257A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257A4B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8257a504
	if (cr6.eq) goto loc_8257A504;
	// lwz r30,188(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8257A4D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82546008
	ctx.lr = 0x8257A4E4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8257a4f8
	if (cr6.eq) goto loc_8257A4F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A4F8;
	sub_82473550(ctx, base);
loc_8257A4F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8257a4d8
	if (!cr6.eq) goto loc_8257A4D8;
loc_8257A504:
	// std r26,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r26.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A514"))) PPC_WEAK_FUNC(sub_8257A514);
PPC_FUNC_IMPL(__imp__sub_8257A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A518"))) PPC_WEAK_FUNC(sub_8257A518);
PPC_FUNC_IMPL(__imp__sub_8257A518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8257A520;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8257a798
	if (cr6.eq) goto loc_8257A798;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// extsb r27,r6
	ctx.r27.s64 = ctx.r6.s8;
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_8257A54C:
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// beq cr6,0x8257a770
	if (cr6.eq) goto loc_8257A770;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bgt cr6,0x8257a6d4
	if (cr6.gt) goto loc_8257A6D4;
	// beq cr6,0x8257a64c
	if (cr6.eq) goto loc_8257A64C;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// beq cr6,0x8257a5e4
	if (cr6.eq) goto loc_8257A5E4;
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(ctx.r11.u32, 38, xer);
	// bne cr6,0x8257a770
	if (!cr6.eq) goto loc_8257A770;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A588;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a59c
	if (cr6.eq) goto loc_8257A59C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A59C;
	sub_82473550(ctx, base);
loc_8257A59C:
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A5A8;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a5bc
	if (cr6.eq) goto loc_8257A5BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A5BC;
	sub_82473550(ctx, base);
loc_8257A5BC:
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A5C8;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a5dc
	if (cr6.eq) goto loc_8257A5DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A5DC;
	sub_82473550(ctx, base);
loc_8257A5DC:
	// li r4,112
	ctx.r4.s64 = 112;
	// b 0x8257a750
	goto loc_8257A750;
loc_8257A5E4:
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A5F0;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a604
	if (cr6.eq) goto loc_8257A604;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A604;
	sub_82473550(ctx, base);
loc_8257A604:
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A610;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a624
	if (cr6.eq) goto loc_8257A624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A624;
	sub_82473550(ctx, base);
loc_8257A624:
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A630;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a644
	if (cr6.eq) goto loc_8257A644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A644;
	sub_82473550(ctx, base);
loc_8257A644:
	// li r4,111
	ctx.r4.s64 = 111;
	// b 0x8257a730
	goto loc_8257A730;
loc_8257A64C:
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A658;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a66c
	if (cr6.eq) goto loc_8257A66C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A66C;
	sub_82473550(ctx, base);
loc_8257A66C:
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A678;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a68c
	if (cr6.eq) goto loc_8257A68C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A68C;
	sub_82473550(ctx, base);
loc_8257A68C:
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A698;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a6ac
	if (cr6.eq) goto loc_8257A6AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A6AC;
	sub_82473550(ctx, base);
loc_8257A6AC:
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A6B8;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a6cc
	if (cr6.eq) goto loc_8257A6CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A6CC;
	sub_82473550(ctx, base);
loc_8257A6CC:
	// li r4,115
	ctx.r4.s64 = 115;
	// b 0x8257a750
	goto loc_8257A750;
loc_8257A6D4:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x8257a70c
	if (cr6.eq) goto loc_8257A70C;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// bne cr6,0x8257a770
	if (!cr6.eq) goto loc_8257A770;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A6F0;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a704
	if (cr6.eq) goto loc_8257A704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A704;
	sub_82473550(ctx, base);
loc_8257A704:
	// li r4,103
	ctx.r4.s64 = 103;
	// b 0x8257a730
	goto loc_8257A730;
loc_8257A70C:
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A718;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a72c
	if (cr6.eq) goto loc_8257A72C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A72C;
	sub_82473550(ctx, base);
loc_8257A72C:
	// li r4,108
	ctx.r4.s64 = 108;
loc_8257A730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A738;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a74c
	if (cr6.eq) goto loc_8257A74C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A74C;
	sub_82473550(ctx, base);
loc_8257A74C:
	// li r4,116
	ctx.r4.s64 = 116;
loc_8257A750:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A758;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a76c
	if (cr6.eq) goto loc_8257A76C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A76C;
	sub_82473550(ctx, base);
loc_8257A76C:
	// li r4,59
	ctx.r4.s64 = 59;
loc_8257A770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257A778;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257a78c
	if (cr6.eq) goto loc_8257A78C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257A78C;
	sub_82473550(ctx, base);
loc_8257A78C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x8257a54c
	if (!cr6.eq) goto loc_8257A54C;
loc_8257A798:
	// std r25,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r25.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A7A8"))) PPC_WEAK_FUNC(sub_8257A7A8);
PPC_FUNC_IMPL(__imp__sub_8257A7A8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257a7dc
	if (cr6.eq) goto loc_8257A7DC;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82577748
	ctx.lr = 0x8257A7CC;
	sub_82577748(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257A7DC;
	sub_82573040(ctx, base);
loc_8257A7DC:
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

__attribute__((alias("__imp__sub_8257A7F0"))) PPC_WEAK_FUNC(sub_8257A7F0);
PPC_FUNC_IMPL(__imp__sub_8257A7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257A7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// beq cr6,0x8257a830
	if (cr6.eq) goto loc_8257A830;
loc_8257A81C:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257a81c
	if (!cr6.eq) goto loc_8257A81C;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_8257A830:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257a854
	if (cr6.eq) goto loc_8257A854;
loc_8257A840:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257a840
	if (!cr6.eq) goto loc_8257A840;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_8257A854:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x8257a884
	if (!cr6.eq) goto loc_8257A884;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,187
	cr6.compare<uint32_t>(ctx.r11.u32, 187, xer);
	// bne cr6,0x8257a884
	if (!cr6.eq) goto loc_8257A884;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bne cr6,0x8257a884
	if (!cr6.eq) goto loc_8257A884;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
loc_8257A884:
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x8257a944
	if (!cr6.lt) goto loc_8257A944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,17416
	ctx.r28.s64 = ctx.r11.s64 + 17416;
loc_8257A898:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257a8d8
	if (cr6.eq) goto loc_8257A8D8;
loc_8257A8AC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r29,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r29.s64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x8257a944
	if (!cr6.lt) goto loc_8257A944;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257a8ac
	if (!cr6.eq) goto loc_8257A8AC;
loc_8257A8D8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8257a950
	if (!cr6.eq) goto loc_8257A950;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579c30
	ctx.lr = 0x8257A8F8;
	sub_82579C30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257a934
	if (cr6.eq) goto loc_8257A934;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257a920
	if (cr6.eq) goto loc_8257A920;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// b 0x8257a928
	goto loc_8257A928;
loc_8257A920:
	// stw r27,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r27.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_8257A928:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
loc_8257A934:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x8257a898
	if (cr6.lt) goto loc_8257A898;
loc_8257A944:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8257A950:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A95C"))) PPC_WEAK_FUNC(sub_8257A95C);
PPC_FUNC_IMPL(__imp__sub_8257A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257A960"))) PPC_WEAK_FUNC(sub_8257A960);
PPC_FUNC_IMPL(__imp__sub_8257A960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257A968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// beq cr6,0x8257a9a0
	if (cr6.eq) goto loc_8257A9A0;
loc_8257A98C:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257a98c
	if (!cr6.eq) goto loc_8257A98C;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_8257A9A0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257a9c4
	if (cr6.eq) goto loc_8257A9C4;
loc_8257A9B0:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257a9b0
	if (!cr6.eq) goto loc_8257A9B0;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_8257A9C4:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x8257a9f4
	if (!cr6.eq) goto loc_8257A9F4;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,187
	cr6.compare<uint32_t>(ctx.r11.u32, 187, xer);
	// bne cr6,0x8257a9f4
	if (!cr6.eq) goto loc_8257A9F4;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bne cr6,0x8257a9f4
	if (!cr6.eq) goto loc_8257A9F4;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
loc_8257A9F4:
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x8257aab4
	if (!cr6.lt) goto loc_8257AAB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,17416
	ctx.r28.s64 = ctx.r11.s64 + 17416;
loc_8257AA08:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257aa48
	if (cr6.eq) goto loc_8257AA48;
loc_8257AA1C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r29,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r29.s64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bge cr6,0x8257aab4
	if (!cr6.lt) goto loc_8257AAB4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257aa1c
	if (!cr6.eq) goto loc_8257AA1C;
loc_8257AA48:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x8257aac0
	if (!cr6.eq) goto loc_8257AAC0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82579eb8
	ctx.lr = 0x8257AA68;
	sub_82579EB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257aaa4
	if (cr6.eq) goto loc_8257AAA4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257aa90
	if (cr6.eq) goto loc_8257AA90;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// b 0x8257aa98
	goto loc_8257AA98;
loc_8257AA90:
	// stw r27,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r27.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_8257AA98:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
loc_8257AAA4:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x8257aa08
	if (cr6.lt) goto loc_8257AA08;
loc_8257AAB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8257AAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AACC"))) PPC_WEAK_FUNC(sub_8257AACC);
PPC_FUNC_IMPL(__imp__sub_8257AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AAD0"))) PPC_WEAK_FUNC(sub_8257AAD0);
PPC_FUNC_IMPL(__imp__sub_8257AAD0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8257ab00
	if (cr6.lt) goto loc_8257AB00;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8257ab04
	goto loc_8257AB04;
loc_8257AB00:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8257AB04:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8257ab1c
	if (cr6.lt) goto loc_8257AB1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8257ab20
	goto loc_8257AB20;
loc_8257AB1C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8257AB20:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8257ab30
	if (cr6.eq) goto loc_8257AB30;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8257AB30:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82575c30
	ctx.lr = 0x8257AB38;
	sub_82575C30(ctx, base);
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

__attribute__((alias("__imp__sub_8257AB50"))) PPC_WEAK_FUNC(sub_8257AB50);
PPC_FUNC_IMPL(__imp__sub_8257AB50) {
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257ab8c
	if (!cr6.eq) goto loc_8257AB8C;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257AB88;
	sub_8257A440(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
loc_8257AB8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r9,r10,-17548
	ctx.r9.s64 = ctx.r10.s64 + -17548;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x8257abac
	if (!cr6.eq) goto loc_8257ABAC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// beq cr6,0x8257abb4
	if (cr6.eq) goto loc_8257ABB4;
loc_8257ABAC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8257abb8
	goto loc_8257ABB8;
loc_8257ABB4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257ABB8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257abc4
	if (!cr6.eq) goto loc_8257ABC4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257ABC4:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a518
	ctx.lr = 0x8257ABDC;
	sub_8257A518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8257AC0C"))) PPC_WEAK_FUNC(sub_8257AC0C);
PPC_FUNC_IMPL(__imp__sub_8257AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257AC10"))) PPC_WEAK_FUNC(sub_8257AC10);
PPC_FUNC_IMPL(__imp__sub_8257AC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257AC18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257ac50
	if (!cr6.eq) goto loc_8257AC50;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257AC48;
	sub_8257A440(ctx, base);
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r28,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r28.u64);
loc_8257AC50:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AC60;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ac78
	if (cr6.eq) goto loc_8257AC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AC78;
	sub_82473550(ctx, base);
loc_8257AC78:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AC84;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ac98
	if (cr6.eq) goto loc_8257AC98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AC98;
	sub_82473550(ctx, base);
loc_8257AC98:
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257ACA4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257acb8
	if (cr6.eq) goto loc_8257ACB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257ACB8;
	sub_82473550(ctx, base);
loc_8257ACB8:
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257ACC4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257acd8
	if (cr6.eq) goto loc_8257ACD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257ACD8;
	sub_82473550(ctx, base);
loc_8257ACD8:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257ACE4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257acf8
	if (cr6.eq) goto loc_8257ACF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257ACF8;
	sub_82473550(ctx, base);
loc_8257ACF8:
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AD04;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ad18
	if (cr6.eq) goto loc_8257AD18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AD18;
	sub_82473550(ctx, base);
loc_8257AD18:
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AD24;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ad38
	if (cr6.eq) goto loc_8257AD38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AD38;
	sub_82473550(ctx, base);
loc_8257AD38:
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AD44;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ad58
	if (cr6.eq) goto loc_8257AD58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AD58;
	sub_82473550(ctx, base);
loc_8257AD58:
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AD64;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ad78
	if (cr6.eq) goto loc_8257AD78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AD78;
	sub_82473550(ctx, base);
loc_8257AD78:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r10,-17548
	ctx.r4.s64 = ctx.r10.s64 + -17548;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257ad98
	if (!cr6.eq) goto loc_8257AD98;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x8257ada0
	if (cr6.eq) goto loc_8257ADA0;
loc_8257AD98:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x8257ada4
	goto loc_8257ADA4;
loc_8257ADA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257ADA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257adb0
	if (cr6.eq) goto loc_8257ADB0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8257ADB0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257ADC0;
	sub_8257A4A8(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,93
	ctx.r4.s64 = 93;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257ADD8;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257adf0
	if (cr6.eq) goto loc_8257ADF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257ADF0;
	sub_82473550(ctx, base);
loc_8257ADF0:
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257ADFC;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ae10
	if (cr6.eq) goto loc_8257AE10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AE10;
	sub_82473550(ctx, base);
loc_8257AE10:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AE1C;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ae30
	if (cr6.eq) goto loc_8257AE30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AE30;
	sub_82473550(ctx, base);
loc_8257AE30:
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AE40"))) PPC_WEAK_FUNC(sub_8257AE40);
PPC_FUNC_IMPL(__imp__sub_8257AE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257AE48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257ae80
	if (!cr6.eq) goto loc_8257AE80;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257AE78;
	sub_8257A440(ctx, base);
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r28,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r28.u64);
loc_8257AE80:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AE90;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257aea8
	if (cr6.eq) goto loc_8257AEA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AEA8;
	sub_82473550(ctx, base);
loc_8257AEA8:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AEB4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257aec8
	if (cr6.eq) goto loc_8257AEC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AEC8;
	sub_82473550(ctx, base);
loc_8257AEC8:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AED4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257aee8
	if (cr6.eq) goto loc_8257AEE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AEE8;
	sub_82473550(ctx, base);
loc_8257AEE8:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AEF4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257af08
	if (cr6.eq) goto loc_8257AF08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AF08;
	sub_82473550(ctx, base);
loc_8257AF08:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r10,-17548
	ctx.r4.s64 = ctx.r10.s64 + -17548;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257af28
	if (!cr6.eq) goto loc_8257AF28;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x8257af30
	if (cr6.eq) goto loc_8257AF30;
loc_8257AF28:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x8257af34
	goto loc_8257AF34;
loc_8257AF30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257AF34:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257af40
	if (cr6.eq) goto loc_8257AF40;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8257AF40:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257AF50;
	sub_8257A4A8(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,45
	ctx.r4.s64 = 45;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AF68;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257af80
	if (cr6.eq) goto loc_8257AF80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AF80;
	sub_82473550(ctx, base);
loc_8257AF80:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AF8C;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257afa0
	if (cr6.eq) goto loc_8257AFA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AFA0;
	sub_82473550(ctx, base);
loc_8257AFA0:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257AFAC;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257afc0
	if (cr6.eq) goto loc_8257AFC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257AFC0;
	sub_82473550(ctx, base);
loc_8257AFC0:
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AFD0"))) PPC_WEAK_FUNC(sub_8257AFD0);
PPC_FUNC_IMPL(__imp__sub_8257AFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257AFD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257b010
	if (!cr6.eq) goto loc_8257B010;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257B008;
	sub_8257A440(ctx, base);
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r28,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r28.u64);
loc_8257B010:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B020;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b038
	if (cr6.eq) goto loc_8257B038;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B038;
	sub_82473550(ctx, base);
loc_8257B038:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B044;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b058
	if (cr6.eq) goto loc_8257B058;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B058;
	sub_82473550(ctx, base);
loc_8257B058:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B064;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b078
	if (cr6.eq) goto loc_8257B078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B078;
	sub_82473550(ctx, base);
loc_8257B078:
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B084;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b098
	if (cr6.eq) goto loc_8257B098;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B098;
	sub_82473550(ctx, base);
loc_8257B098:
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B0A4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b0b8
	if (cr6.eq) goto loc_8257B0B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B0B8;
	sub_82473550(ctx, base);
loc_8257B0B8:
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B0C4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b0d8
	if (cr6.eq) goto loc_8257B0D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B0D8;
	sub_82473550(ctx, base);
loc_8257B0D8:
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B0E4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b0f8
	if (cr6.eq) goto loc_8257B0F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B0F8;
	sub_82473550(ctx, base);
loc_8257B0F8:
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B104;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b118
	if (cr6.eq) goto loc_8257B118;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B118;
	sub_82473550(ctx, base);
loc_8257B118:
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B124;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b138
	if (cr6.eq) goto loc_8257B138;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B138;
	sub_82473550(ctx, base);
loc_8257B138:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B144;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b158
	if (cr6.eq) goto loc_8257B158;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B158;
	sub_82473550(ctx, base);
loc_8257B158:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r10,-17548
	ctx.r4.s64 = ctx.r10.s64 + -17548;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257b178
	if (!cr6.eq) goto loc_8257B178;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x8257b180
	if (cr6.eq) goto loc_8257B180;
loc_8257B178:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x8257b184
	goto loc_8257B184;
loc_8257B180:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257B184:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257b190
	if (cr6.eq) goto loc_8257B190;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8257B190:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257B1A0;
	sub_8257A4A8(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r31,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r31.u64);
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B1B8;
	sub_82546008(ctx, base);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257b1cc
	if (cr6.eq) goto loc_8257B1CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B1CC;
	sub_82473550(ctx, base);
loc_8257B1CC:
	// std r31,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r31.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B1DC"))) PPC_WEAK_FUNC(sub_8257B1DC);
PPC_FUNC_IMPL(__imp__sub_8257B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B1E0"))) PPC_WEAK_FUNC(sub_8257B1E0);
PPC_FUNC_IMPL(__imp__sub_8257B1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257B1E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257b220
	if (!cr6.eq) goto loc_8257B220;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257B218;
	sub_8257A440(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
loc_8257B220:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B230;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b248
	if (cr6.eq) goto loc_8257B248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B248;
	sub_82473550(ctx, base);
loc_8257B248:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B254;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b268
	if (cr6.eq) goto loc_8257B268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B268;
	sub_82473550(ctx, base);
loc_8257B268:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r28,r11,-17548
	ctx.r28.s64 = ctx.r11.s64 + -17548;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257b288
	if (!cr6.eq) goto loc_8257B288;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// beq cr6,0x8257b290
	if (cr6.eq) goto loc_8257B290;
loc_8257B288:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// b 0x8257b294
	goto loc_8257B294;
loc_8257B290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B294:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257b2a0
	if (!cr6.eq) goto loc_8257B2A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8257B2A0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257B2B0;
	sub_8257A4A8(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// std r30,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r30.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B2C8;
	sub_82546008(ctx, base);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257b2dc
	if (cr6.eq) goto loc_8257B2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B2DC;
	sub_82473550(ctx, base);
loc_8257B2DC:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257b2f4
	if (!cr6.eq) goto loc_8257B2F4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// beq cr6,0x8257b2fc
	if (cr6.eq) goto loc_8257B2FC;
loc_8257B2F4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x8257b300
	goto loc_8257B300;
loc_8257B2FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B300:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257b30c
	if (!cr6.eq) goto loc_8257B30C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8257B30C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257B31C;
	sub_8257A4A8(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,63
	ctx.r4.s64 = 63;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B334;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b34c
	if (cr6.eq) goto loc_8257B34C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B34C;
	sub_82473550(ctx, base);
loc_8257B34C:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B358;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b36c
	if (cr6.eq) goto loc_8257B36C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B36C;
	sub_82473550(ctx, base);
loc_8257B36C:
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B37C"))) PPC_WEAK_FUNC(sub_8257B37C);
PPC_FUNC_IMPL(__imp__sub_8257B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B380"))) PPC_WEAK_FUNC(sub_8257B380);
PPC_FUNC_IMPL(__imp__sub_8257B380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257B388;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,32(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8257b5c4
	if (cr6.eq) goto loc_8257B5C4;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r27,r11,-17548
	ctx.r27.s64 = ctx.r11.s64 + -17548;
loc_8257B3B4:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B3C0;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b3d4
	if (cr6.eq) goto loc_8257B3D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B3D4;
	sub_82473550(ctx, base);
loc_8257B3D4:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257b3ec
	if (!cr6.eq) goto loc_8257B3EC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq cr6,0x8257b3f4
	if (cr6.eq) goto loc_8257B3F4;
loc_8257B3EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x8257b3f8
	goto loc_8257B3F8;
loc_8257B3F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B3F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257b404
	if (!cr6.eq) goto loc_8257B404;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8257B404:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a4a8
	ctx.lr = 0x8257B414;
	sub_8257A4A8(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,61
	ctx.r4.s64 = 61;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B42C;
	sub_82546008(ctx, base);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b444
	if (cr6.eq) goto loc_8257B444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B444;
	sub_82473550(ctx, base);
loc_8257B444:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257b45c
	if (!cr6.eq) goto loc_8257B45C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// beq cr6,0x8257b464
	if (cr6.eq) goto loc_8257B464;
loc_8257B45C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8257b468
	goto loc_8257B468;
loc_8257B464:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257B468:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257b474
	if (!cr6.eq) goto loc_8257B474;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8257B474:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257b498
	if (cr6.eq) goto loc_8257B498;
loc_8257B480:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,34
	cr6.compare<uint32_t>(ctx.r9.u32, 34, xer);
	// beq cr6,0x8257b4e8
	if (cr6.eq) goto loc_8257B4E8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257b480
	if (!cr6.eq) goto loc_8257B480;
loc_8257B498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B49C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257b51c
	if (cr6.eq) goto loc_8257B51C;
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x82546008
	ctx.lr = 0x8257B4B4;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b4c8
	if (cr6.eq) goto loc_8257B4C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B4C8;
	sub_82473550(ctx, base);
loc_8257B4C8:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257b4e0
	if (!cr6.eq) goto loc_8257B4E0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq cr6,0x8257b4f0
	if (cr6.eq) goto loc_8257B4F0;
loc_8257B4E0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8257b4f4
	goto loc_8257B4F4;
loc_8257B4E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8257b49c
	goto loc_8257B49C;
loc_8257B4F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B4F4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257b500
	if (!cr6.eq) goto loc_8257B500;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8257B500:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257a518
	ctx.lr = 0x8257B514;
	sub_8257A518(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x8257b580
	goto loc_8257B580;
loc_8257B51C:
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82546008
	ctx.lr = 0x8257B524;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b538
	if (cr6.eq) goto loc_8257B538;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B538;
	sub_82473550(ctx, base);
loc_8257B538:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257b550
	if (!cr6.eq) goto loc_8257B550;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq cr6,0x8257b558
	if (cr6.eq) goto loc_8257B558;
loc_8257B550:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8257b55c
	goto loc_8257B55C;
loc_8257B558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257B55C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257b568
	if (!cr6.eq) goto loc_8257B568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8257B568:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a518
	ctx.lr = 0x8257B57C;
	sub_8257A518(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
loc_8257B580:
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257B594;
	sub_82546008(ctx, base);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257b5ac
	if (cr6.eq) goto loc_8257B5AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257B5AC;
	sub_82473550(ctx, base);
loc_8257B5AC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257b5c4
	if (cr6.eq) goto loc_8257B5C4;
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8257b3b4
	if (!cr6.eq) goto loc_8257B3B4;
loc_8257B5C4:
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B5D4"))) PPC_WEAK_FUNC(sub_8257B5D4);
PPC_FUNC_IMPL(__imp__sub_8257B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B5D8"))) PPC_WEAK_FUNC(sub_8257B5D8);
PPC_FUNC_IMPL(__imp__sub_8257B5D8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,72
	ctx.r10.u64 = ctx.r11.u64 | 72;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x8257b624
	if (cr6.eq) goto loc_8257B624;
	// bl 0x8257a7f0
	ctx.lr = 0x8257B620;
	sub_8257A7F0(ctx, base);
	// b 0x8257b628
	goto loc_8257B628;
loc_8257B624:
	// bl 0x8257a960
	ctx.lr = 0x8257B628;
	sub_8257A960(ctx, base);
loc_8257B628:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257b63c
	if (!cr6.eq) goto loc_8257B63C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257b644
	goto loc_8257B644;
loc_8257B63C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257B644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B65C"))) PPC_WEAK_FUNC(sub_8257B65C);
PPC_FUNC_IMPL(__imp__sub_8257B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B660"))) PPC_WEAK_FUNC(sub_8257B660);
PPC_FUNC_IMPL(__imp__sub_8257B660) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8257b5d8
	sub_8257B5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B668"))) PPC_WEAK_FUNC(sub_8257B668);
PPC_FUNC_IMPL(__imp__sub_8257B668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257B670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8257b6e8
	if (!cr6.gt) goto loc_8257B6E8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_8257B68C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8257b6a0
	if (cr6.lt) goto loc_8257B6A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b6a4
	goto loc_8257B6A4;
loc_8257B6A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8257B6A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8257b6bc
	if (cr6.lt) goto loc_8257B6BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b6c0
	goto loc_8257B6C0;
loc_8257B6BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8257B6C0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8257b6d0
	if (cr6.eq) goto loc_8257B6D0;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8257B6D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575c30
	ctx.lr = 0x8257B6E0;
	sub_82575C30(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x8257b68c
	if (!cr0.eq) goto loc_8257B68C;
loc_8257B6E8:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B6F8"))) PPC_WEAK_FUNC(sub_8257B6F8);
PPC_FUNC_IMPL(__imp__sub_8257B6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257B700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8257b77c
	if (cr6.eq) goto loc_8257B77C;
loc_8257B71C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8257b734
	if (cr6.lt) goto loc_8257B734;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b738
	goto loc_8257B738;
loc_8257B734:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8257B738:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8257b750
	if (cr6.lt) goto loc_8257B750;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b754
	goto loc_8257B754;
loc_8257B750:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8257B754:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8257b764
	if (cr6.eq) goto loc_8257B764;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8257B764:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575c30
	ctx.lr = 0x8257B770;
	sub_82575C30(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x8257b71c
	if (!cr6.eq) goto loc_8257B71C;
loc_8257B77C:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B78C"))) PPC_WEAK_FUNC(sub_8257B78C);
PPC_FUNC_IMPL(__imp__sub_8257B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B790"))) PPC_WEAK_FUNC(sub_8257B790);
PPC_FUNC_IMPL(__imp__sub_8257B790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x8257B798;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8257b9e8
	if (cr6.eq) goto loc_8257B9E8;
	// extsb r16,r6
	ctx.r16.s64 = ctx.r6.s8;
	// li r29,38
	ctx.r29.s64 = 38;
	// li r25,97
	ctx.r25.s64 = 97;
	// li r20,109
	ctx.r20.s64 = 109;
	// li r26,112
	ctx.r26.s64 = 112;
	// li r30,59
	ctx.r30.s64 = 59;
	// li r21,113
	ctx.r21.s64 = 113;
	// li r22,117
	ctx.r22.s64 = 117;
	// li r27,111
	ctx.r27.s64 = 111;
	// li r28,116
	ctx.r28.s64 = 116;
	// li r23,115
	ctx.r23.s64 = 115;
	// li r18,103
	ctx.r18.s64 = 103;
	// li r19,108
	ctx.r19.s64 = 108;
loc_8257B7E8:
	// lbz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, xer);
	// bne cr6,0x8257b84c
	if (!cr6.eq) goto loc_8257B84C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8257b80c
	if (cr6.lt) goto loc_8257B80C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b810
	goto loc_8257B810;
loc_8257B80C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8257B810:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8257b828
	if (cr6.lt) goto loc_8257B828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8257b82c
	goto loc_8257B82C;
loc_8257B828:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8257B82C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8257b83c
	if (cr6.eq) goto loc_8257B83C;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8257B83C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82575c30
	ctx.lr = 0x8257B848;
	sub_82575C30(ctx, base);
	// b 0x8257b9dc
	goto loc_8257B9DC;
loc_8257B84C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bgt cr6,0x8257b94c
	if (cr6.gt) goto loc_8257B94C;
	// beq cr6,0x8257b8f4
	if (cr6.eq) goto loc_8257B8F4;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// beq cr6,0x8257b8b0
	if (cr6.eq) goto loc_8257B8B0;
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(ctx.r11.u32, 38, xer);
	// bne cr6,0x8257b95c
	if (!cr6.eq) goto loc_8257B95C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B880;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B894;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B8A8;
	sub_8257AAD0(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// b 0x8257b9b8
	goto loc_8257B9B8;
loc_8257B8B0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B8C4;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B8D8;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B8EC;
	sub_8257AAD0(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// b 0x8257b9a4
	goto loc_8257B9A4;
loc_8257B8F4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B908;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B91C;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B930;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B944;
	sub_8257AAD0(ctx, base);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// b 0x8257b9b8
	goto loc_8257B9B8;
loc_8257B94C:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x8257b98c
	if (cr6.eq) goto loc_8257B98C;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x8257b970
	if (cr6.eq) goto loc_8257B970;
loc_8257B95C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B96C;
	sub_8257AAD0(ctx, base);
	// b 0x8257b9dc
	goto loc_8257B9DC;
loc_8257B970:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B984;
	sub_8257AAD0(ctx, base);
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// b 0x8257b9a4
	goto loc_8257B9A4;
loc_8257B98C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B9A0;
	sub_8257AAD0(ctx, base);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
loc_8257B9A4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B9B4;
	sub_8257AAD0(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_8257B9B8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B9C8;
	sub_8257AAD0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257aad0
	ctx.lr = 0x8257B9DC;
	sub_8257AAD0(ctx, base);
loc_8257B9DC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r17
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r17.u32, xer);
	// bne cr6,0x8257b7e8
	if (!cr6.eq) goto loc_8257B7E8;
loc_8257B9E8:
	// stw r31,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r31.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B9F8"))) PPC_WEAK_FUNC(sub_8257B9F8);
PPC_FUNC_IMPL(__imp__sub_8257B9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257BA00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257ba3c
	if (!cr6.eq) goto loc_8257BA3C;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257a440
	ctx.lr = 0x8257BA34;
	sub_8257A440(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
loc_8257BA3C:
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BA4C;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ba64
	if (cr6.eq) goto loc_8257BA64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BA64;
	sub_82473550(ctx, base);
loc_8257BA64:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BA70;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257ba84
	if (cr6.eq) goto loc_8257BA84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BA84;
	sub_82473550(ctx, base);
loc_8257BA84:
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BA90;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257baa4
	if (cr6.eq) goto loc_8257BAA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BAA4;
	sub_82473550(ctx, base);
loc_8257BAA4:
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BAB0;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257bac4
	if (cr6.eq) goto loc_8257BAC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BAC4;
	sub_82473550(ctx, base);
loc_8257BAC4:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BAD0;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257bae4
	if (cr6.eq) goto loc_8257BAE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BAE4;
	sub_82473550(ctx, base);
loc_8257BAE4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257b380
	ctx.lr = 0x8257BAF8;
	sub_8257B380(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,63
	ctx.r4.s64 = 63;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BB10;
	sub_82546008(ctx, base);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257bb28
	if (cr6.eq) goto loc_8257BB28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BB28;
	sub_82473550(ctx, base);
loc_8257BB28:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257BB34;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257bb48
	if (cr6.eq) goto loc_8257BB48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257BB48;
	sub_82473550(ctx, base);
loc_8257BB48:
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BB58"))) PPC_WEAK_FUNC(sub_8257BB58);
PPC_FUNC_IMPL(__imp__sub_8257BB58) {
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257bb94
	if (!cr6.eq) goto loc_8257BB94;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257b668
	ctx.lr = 0x8257BB90;
	sub_8257B668(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8257BB94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r9,r10,-17548
	ctx.r9.s64 = ctx.r10.s64 + -17548;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x8257bbb4
	if (!cr6.eq) goto loc_8257BBB4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// beq cr6,0x8257bbbc
	if (cr6.eq) goto loc_8257BBBC;
loc_8257BBB4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8257bbc0
	goto loc_8257BBC0;
loc_8257BBBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257BBC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257bbcc
	if (!cr6.eq) goto loc_8257BBCC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257BBCC:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257b790
	ctx.lr = 0x8257BBE4;
	sub_8257B790(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BC0C"))) PPC_WEAK_FUNC(sub_8257BC0C);
PPC_FUNC_IMPL(__imp__sub_8257BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BC10"))) PPC_WEAK_FUNC(sub_8257BC10);
PPC_FUNC_IMPL(__imp__sub_8257BC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257BC18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257bc50
	if (!cr6.eq) goto loc_8257BC50;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257BC48;
	sub_8257B668(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
loc_8257BC50:
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BC64;
	sub_8257AAD0(ctx, base);
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BC78;
	sub_8257AAD0(ctx, base);
	// li r30,91
	ctx.r30.s64 = 91;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BC8C;
	sub_8257AAD0(ctx, base);
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCA0;
	sub_8257AAD0(ctx, base);
	// li r8,68
	ctx.r8.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCB4;
	sub_8257AAD0(ctx, base);
	// li r31,65
	ctx.r31.s64 = 65;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCC8;
	sub_8257AAD0(ctx, base);
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCDC;
	sub_8257AAD0(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCEC;
	sub_8257AAD0(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BCFC;
	sub_8257AAD0(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r9,r11,-17548
	ctx.r9.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne cr6,0x8257bd1c
	if (!cr6.eq) goto loc_8257BD1C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// beq cr6,0x8257bd24
	if (cr6.eq) goto loc_8257BD24;
loc_8257BD1C:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x8257bd28
	goto loc_8257BD28;
loc_8257BD24:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257BD28:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257bd34
	if (!cr6.eq) goto loc_8257BD34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257BD34:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257BD48;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,93
	ctx.r30.s64 = 93;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257BD68;
	sub_8257AAD0(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BD78;
	sub_8257AAD0(ctx, base);
	// li r10,62
	ctx.r10.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257BD8C;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BD9C"))) PPC_WEAK_FUNC(sub_8257BD9C);
PPC_FUNC_IMPL(__imp__sub_8257BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BDA0"))) PPC_WEAK_FUNC(sub_8257BDA0);
PPC_FUNC_IMPL(__imp__sub_8257BDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257BDA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257bde0
	if (!cr6.eq) goto loc_8257BDE0;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257BDD8;
	sub_8257B668(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
loc_8257BDE0:
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BDF4;
	sub_8257AAD0(ctx, base);
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BE08;
	sub_8257AAD0(ctx, base);
	// li r30,45
	ctx.r30.s64 = 45;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BE1C;
	sub_8257AAD0(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BE2C;
	sub_8257AAD0(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r4,r11,-17548
	ctx.r4.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257be4c
	if (!cr6.eq) goto loc_8257BE4C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x8257be54
	if (cr6.eq) goto loc_8257BE54;
loc_8257BE4C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8257be58
	goto loc_8257BE58;
loc_8257BE54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257BE58:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257be64
	if (cr6.eq) goto loc_8257BE64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8257BE64:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257BE74;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257BE90;
	sub_8257AAD0(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BEA0;
	sub_8257AAD0(ctx, base);
	// li r10,62
	ctx.r10.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BEB4;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BEC4"))) PPC_WEAK_FUNC(sub_8257BEC4);
PPC_FUNC_IMPL(__imp__sub_8257BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BEC8"))) PPC_WEAK_FUNC(sub_8257BEC8);
PPC_FUNC_IMPL(__imp__sub_8257BEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257BED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257bf08
	if (!cr6.eq) goto loc_8257BF08;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257BF00;
	sub_8257B668(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
loc_8257BF08:
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF1C;
	sub_8257AAD0(ctx, base);
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF30;
	sub_8257AAD0(ctx, base);
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF44;
	sub_8257AAD0(ctx, base);
	// li r8,79
	ctx.r8.s64 = 79;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF58;
	sub_8257AAD0(ctx, base);
	// li r7,67
	ctx.r7.s64 = 67;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF6C;
	sub_8257AAD0(ctx, base);
	// li r6,84
	ctx.r6.s64 = 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF80;
	sub_8257AAD0(ctx, base);
	// li r5,89
	ctx.r5.s64 = 89;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BF94;
	sub_8257AAD0(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BFA8;
	sub_8257AAD0(ctx, base);
	// li r11,69
	ctx.r11.s64 = 69;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BFBC;
	sub_8257AAD0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8257aad0
	ctx.lr = 0x8257BFD0;
	sub_8257AAD0(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r4,r11,-17548
	ctx.r4.s64 = ctx.r11.s64 + -17548;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257bff0
	if (!cr6.eq) goto loc_8257BFF0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// beq cr6,0x8257bff8
	if (cr6.eq) goto loc_8257BFF8;
loc_8257BFF0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8257bffc
	goto loc_8257BFFC;
loc_8257BFF8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257BFFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257c008
	if (cr6.eq) goto loc_8257C008;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8257C008:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257C018;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,62
	ctx.r10.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C038;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C048"))) PPC_WEAK_FUNC(sub_8257C048);
PPC_FUNC_IMPL(__imp__sub_8257C048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257C050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257c088
	if (!cr6.eq) goto loc_8257C088;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257C080;
	sub_8257B668(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
loc_8257C088:
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C09C;
	sub_8257AAD0(ctx, base);
	// li r28,63
	ctx.r28.s64 = 63;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C0B0;
	sub_8257AAD0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r29,r11,-17548
	ctx.r29.s64 = ctx.r11.s64 + -17548;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c0d0
	if (!cr6.eq) goto loc_8257C0D0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x8257c0d8
	if (cr6.eq) goto loc_8257C0D8;
loc_8257C0D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8257c0dc
	goto loc_8257C0DC;
loc_8257C0D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C0DC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c0e8
	if (!cr6.eq) goto loc_8257C0E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8257C0E8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257C0F8;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C118;
	sub_8257AAD0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257c130
	if (!cr6.eq) goto loc_8257C130;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// beq cr6,0x8257c138
	if (cr6.eq) goto loc_8257C138;
loc_8257C130:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8257c13c
	goto loc_8257C13C;
loc_8257C138:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257C13C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257c148
	if (!cr6.eq) goto loc_8257C148;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8257C148:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257C15C;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C178;
	sub_8257AAD0(ctx, base);
	// li r10,62
	ctx.r10.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C18C;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C19C"))) PPC_WEAK_FUNC(sub_8257C19C);
PPC_FUNC_IMPL(__imp__sub_8257C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C1A0"))) PPC_WEAK_FUNC(sub_8257C1A0);
PPC_FUNC_IMPL(__imp__sub_8257C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8257C1A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257c390
	if (cr6.eq) goto loc_8257C390;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r26,61
	ctx.r26.s64 = 61;
	// li r27,39
	ctx.r27.s64 = 39;
	// li r28,34
	ctx.r28.s64 = 34;
	// addi r29,r11,-17548
	ctx.r29.s64 = ctx.r11.s64 + -17548;
loc_8257C1DC:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257C1EC;
	sub_8257AAD0(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c204
	if (!cr6.eq) goto loc_8257C204;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x8257c20c
	if (cr6.eq) goto loc_8257C20C;
loc_8257C204:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8257c210
	goto loc_8257C210;
loc_8257C20C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C210:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c21c
	if (!cr6.eq) goto loc_8257C21C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8257C21C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257C22C;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C248;
	sub_8257AAD0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne cr6,0x8257c260
	if (!cr6.eq) goto loc_8257C260;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// beq cr6,0x8257c268
	if (cr6.eq) goto loc_8257C268;
loc_8257C260:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8257c26c
	goto loc_8257C26C;
loc_8257C268:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257C26C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257c278
	if (!cr6.eq) goto loc_8257C278;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8257C278:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257c29c
	if (cr6.eq) goto loc_8257C29C;
loc_8257C284:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,34
	cr6.compare<uint32_t>(ctx.r9.u32, 34, xer);
	// beq cr6,0x8257c2dc
	if (cr6.eq) goto loc_8257C2DC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257c284
	if (!cr6.eq) goto loc_8257C284;
loc_8257C29C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C2A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// beq cr6,0x8257c310
	if (cr6.eq) goto loc_8257C310;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x8257aad0
	ctx.lr = 0x8257C2BC;
	sub_8257AAD0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c2d4
	if (!cr6.eq) goto loc_8257C2D4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x8257c2e4
	if (cr6.eq) goto loc_8257C2E4;
loc_8257C2D4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8257c2e8
	goto loc_8257C2E8;
loc_8257C2DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8257c2a0
	goto loc_8257C2A0;
loc_8257C2E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C2E8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c2f4
	if (!cr6.eq) goto loc_8257C2F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8257C2F4:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b790
	ctx.lr = 0x8257C308;
	sub_8257B790(ctx, base);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// b 0x8257c360
	goto loc_8257C360;
loc_8257C310:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x8257aad0
	ctx.lr = 0x8257C318;
	sub_8257AAD0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c330
	if (!cr6.eq) goto loc_8257C330;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// beq cr6,0x8257c338
	if (cr6.eq) goto loc_8257C338;
loc_8257C330:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x8257c33c
	goto loc_8257C33C;
loc_8257C338:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C33C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c348
	if (!cr6.eq) goto loc_8257C348;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8257C348:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,39
	ctx.r6.s64 = 39;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257b790
	ctx.lr = 0x8257C35C;
	sub_8257B790(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_8257C360:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C378;
	sub_8257AAD0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257c390
	if (cr6.eq) goto loc_8257C390;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8257c1dc
	if (!cr6.eq) goto loc_8257C1DC;
loc_8257C390:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C3A0"))) PPC_WEAK_FUNC(sub_8257C3A0);
PPC_FUNC_IMPL(__imp__sub_8257C3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257C3A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8257c490
	if (cr6.gt) goto loc_8257C490;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8257c400
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C400;
	// bdzf 4*cr6+eq,0x8257c414
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C414;
	// bdzf 4*cr6+eq,0x8257c428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C428;
	// bdzf 4*cr6+eq,0x8257c450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C450;
	// bdzf 4*cr6+eq,0x8257c43c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C43C;
	// bdzf 4*cr6+eq,0x8257c464
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257C464;
	// bne cr6,0x8257c478
	if (!cr6.eq) goto loc_8257C478;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257c4d0
	ctx.lr = 0x8257C3FC;
	sub_8257C4D0(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C400:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257c528
	ctx.lr = 0x8257C410;
	sub_8257C528(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C414:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257ab50
	ctx.lr = 0x8257C424;
	sub_8257AB50(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C428:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8257ac10
	ctx.lr = 0x8257C438;
	sub_8257AC10(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C43C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257b9f8
	ctx.lr = 0x8257C44C;
	sub_8257B9F8(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C450:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8257ae40
	ctx.lr = 0x8257C460;
	sub_8257AE40(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C464:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257afd0
	ctx.lr = 0x8257C474;
	sub_8257AFD0(ctx, base);
	// b 0x8257c488
	goto loc_8257C488;
loc_8257C478:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8257b1e0
	ctx.lr = 0x8257C488;
	sub_8257B1E0(ctx, base);
loc_8257C488:
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r31,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r31.u64);
loc_8257C490:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257c4c0
	if (!cr6.eq) goto loc_8257C4C0;
	// lwz r30,204(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C4AC;
	sub_82546008(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257c4c0
	if (cr6.eq) goto loc_8257C4C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C4C0;
	sub_82473550(ctx, base);
loc_8257C4C0:
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C4D0"))) PPC_WEAK_FUNC(sub_8257C4D0);
PPC_FUNC_IMPL(__imp__sub_8257C4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257C4D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257c518
	if (cr6.eq) goto loc_8257C518;
loc_8257C4F4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257c3a0
	ctx.lr = 0x8257C508;
	sub_8257C3A0(ctx, base);
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8257c4f4
	if (!cr6.eq) goto loc_8257C4F4;
loc_8257C518:
	// std r4,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r4.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C528"))) PPC_WEAK_FUNC(sub_8257C528);
PPC_FUNC_IMPL(__imp__sub_8257C528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8257C530;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r6,31
	ctx.r28.u64 = ctx.r6.u32 & 0x1;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x8257c570
	if (!cr6.eq) goto loc_8257C570;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257a440
	ctx.lr = 0x8257C568;
	sub_8257A440(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r30,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r30.u64);
loc_8257C570:
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C580;
	sub_82546008(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257c594
	if (cr6.eq) goto loc_8257C594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C594;
	sub_82473550(ctx, base);
loc_8257C594:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r24,r11,-17548
	ctx.r24.s64 = ctx.r11.s64 + -17548;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c5b4
	if (!cr6.eq) goto loc_8257C5B4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// beq cr6,0x8257c5bc
	if (cr6.eq) goto loc_8257C5BC;
loc_8257C5B4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x8257c5c0
	goto loc_8257C5C0;
loc_8257C5BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C5C0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c5cc
	if (!cr6.eq) goto loc_8257C5CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8257C5CC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257a4a8
	ctx.lr = 0x8257C5DC;
	sub_8257A4A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8257b380
	ctx.lr = 0x8257C5F4;
	sub_8257B380(ctx, base);
	// ld r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r27,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r27.u64);
	// beq cr6,0x8257c614
	if (cr6.eq) goto loc_8257C614;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257c678
	if (!cr6.eq) goto loc_8257C678;
loc_8257C614:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257c678
	if (!cr6.eq) goto loc_8257C678;
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C630;
	sub_82546008(ctx, base);
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257c648
	if (cr6.eq) goto loc_8257C648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C648;
	sub_82473550(ctx, base);
loc_8257C648:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C654;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257c668
	if (cr6.eq) goto loc_8257C668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C668;
	sub_82473550(ctx, base);
loc_8257C668:
	// std r27,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r27.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8257C678:
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C688;
	sub_82546008(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257c69c
	if (cr6.eq) goto loc_8257C69C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C69C;
	sub_82473550(ctx, base);
loc_8257C69C:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257c6f0
	if (!cr6.eq) goto loc_8257C6F0;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c6c0
	if (!cr6.eq) goto loc_8257C6C0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// beq cr6,0x8257c6c8
	if (cr6.eq) goto loc_8257C6C8;
loc_8257C6C0:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x8257c6cc
	goto loc_8257C6CC;
loc_8257C6C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C6CC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c6d8
	if (!cr6.eq) goto loc_8257C6D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8257C6D8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a518
	ctx.lr = 0x8257C6EC;
	sub_8257A518(ctx, base);
	// b 0x8257c7f4
	goto loc_8257C7F4;
loc_8257C6F0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257c750
	if (!cr6.eq) goto loc_8257C750;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8257c750
	if (!cr6.eq) goto loc_8257C750;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c720
	if (!cr6.eq) goto loc_8257C720;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// beq cr6,0x8257c728
	if (cr6.eq) goto loc_8257C728;
loc_8257C720:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8257c72c
	goto loc_8257C72C;
loc_8257C728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C72C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c738
	if (!cr6.eq) goto loc_8257C738;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8257C738:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a518
	ctx.lr = 0x8257C74C;
	sub_8257A518(ctx, base);
	// b 0x8257c7f4
	goto loc_8257C7F4;
loc_8257C750:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c768
	if (!cr6.eq) goto loc_8257C768;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// beq cr6,0x8257c770
	if (cr6.eq) goto loc_8257C770;
loc_8257C768:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x8257c774
	goto loc_8257C774;
loc_8257C770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C774:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c780
	if (!cr6.eq) goto loc_8257C780;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8257C780:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a518
	ctx.lr = 0x8257C794;
	sub_8257A518(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// std r31,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r31.u64);
	// bne cr6,0x8257c7b8
	if (!cr6.eq) goto loc_8257C7B8;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8257a3f0
	ctx.lr = 0x8257C7B8;
	sub_8257A3F0(ctx, base);
loc_8257C7B8:
	// addi r7,r26,1
	ctx.r7.s64 = ctx.r26.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257c4d0
	ctx.lr = 0x8257C7D0;
	sub_8257C4D0(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// std r29,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r29.u64);
	// bne cr6,0x8257c7fc
	if (!cr6.eq) goto loc_8257C7FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a440
	ctx.lr = 0x8257C7F4;
	sub_8257A440(ctx, base);
loc_8257C7F4:
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r29,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r29.u64);
loc_8257C7FC:
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C80C;
	sub_82546008(ctx, base);
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257c824
	if (cr6.eq) goto loc_8257C824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C824;
	sub_82473550(ctx, base);
loc_8257C824:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C830;
	sub_82546008(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257c844
	if (cr6.eq) goto loc_8257C844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C844;
	sub_82473550(ctx, base);
loc_8257C844:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257c85c
	if (!cr6.eq) goto loc_8257C85C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// beq cr6,0x8257c864
	if (cr6.eq) goto loc_8257C864;
loc_8257C85C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// b 0x8257c868
	goto loc_8257C868;
loc_8257C864:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C868:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257c874
	if (!cr6.eq) goto loc_8257C874;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8257C874:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257a4a8
	ctx.lr = 0x8257C884;
	sub_8257A4A8(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r31,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r31.u64);
	// lwz r30,220(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546008
	ctx.lr = 0x8257C89C;
	sub_82546008(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8257c8b0
	if (cr6.eq) goto loc_8257C8B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x8257C8B0;
	sub_82473550(ctx, base);
loc_8257C8B0:
	// std r31,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r31.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C8C0"))) PPC_WEAK_FUNC(sub_8257C8C0);
PPC_FUNC_IMPL(__imp__sub_8257C8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257C8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257c904
	if (!cr6.eq) goto loc_8257C904;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257C8FC;
	sub_8257B668(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
loc_8257C904:
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C918;
	sub_8257AAD0(ctx, base);
	// li r28,63
	ctx.r28.s64 = 63;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C92C;
	sub_8257AAD0(ctx, base);
	// li r10,120
	ctx.r10.s64 = 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C940;
	sub_8257AAD0(ctx, base);
	// li r9,109
	ctx.r9.s64 = 109;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C954;
	sub_8257AAD0(ctx, base);
	// li r8,108
	ctx.r8.s64 = 108;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C968;
	sub_8257AAD0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257c1a0
	ctx.lr = 0x8257C97C;
	sub_8257C1A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// bl 0x8257aad0
	ctx.lr = 0x8257C998;
	sub_8257AAD0(ctx, base);
	// li r6,62
	ctx.r6.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x8257aad0
	ctx.lr = 0x8257C9AC;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C9BC"))) PPC_WEAK_FUNC(sub_8257C9BC);
PPC_FUNC_IMPL(__imp__sub_8257C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C9C0"))) PPC_WEAK_FUNC(sub_8257C9C0);
PPC_FUNC_IMPL(__imp__sub_8257C9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257C9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8257cab0
	if (cr6.gt) goto loc_8257CAB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8257ca20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA20;
	// bdzf 4*cr6+eq,0x8257ca34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA34;
	// bdzf 4*cr6+eq,0x8257ca48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA48;
	// bdzf 4*cr6+eq,0x8257ca70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA70;
	// bdzf 4*cr6+eq,0x8257ca5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA5C;
	// bdzf 4*cr6+eq,0x8257ca84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257CA84;
	// bne cr6,0x8257ca98
	if (!cr6.eq) goto loc_8257CA98;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257cae0
	ctx.lr = 0x8257CA1C;
	sub_8257CAE0(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA20:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257cb38
	ctx.lr = 0x8257CA30;
	sub_8257CB38(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA34:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257bb58
	ctx.lr = 0x8257CA44;
	sub_8257BB58(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA48:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257bc10
	ctx.lr = 0x8257CA58;
	sub_8257BC10(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA5C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8257c8c0
	ctx.lr = 0x8257CA6C;
	sub_8257C8C0(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA70:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8257bda0
	ctx.lr = 0x8257CA80;
	sub_8257BDA0(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA84:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8257bec8
	ctx.lr = 0x8257CA94;
	sub_8257BEC8(ctx, base);
	// b 0x8257caa8
	goto loc_8257CAA8;
loc_8257CA98:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257c048
	ctx.lr = 0x8257CAA8;
	sub_8257C048(ctx, base);
loc_8257CAA8:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
loc_8257CAB0:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257cad0
	if (!cr6.eq) goto loc_8257CAD0;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8257aad0
	ctx.lr = 0x8257CAD0;
	sub_8257AAD0(ctx, base);
loc_8257CAD0:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CAE0"))) PPC_WEAK_FUNC(sub_8257CAE0);
PPC_FUNC_IMPL(__imp__sub_8257CAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257CAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257cb28
	if (cr6.eq) goto loc_8257CB28;
loc_8257CB04:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257c9c0
	ctx.lr = 0x8257CB18;
	sub_8257C9C0(ctx, base);
	// lwz r31,44(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8257cb04
	if (!cr6.eq) goto loc_8257CB04;
loc_8257CB28:
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CB38"))) PPC_WEAK_FUNC(sub_8257CB38);
PPC_FUNC_IMPL(__imp__sub_8257CB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8257CB40;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8257cb80
	if (!cr6.eq) goto loc_8257CB80;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b668
	ctx.lr = 0x8257CB78;
	sub_8257B668(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
loc_8257CB80:
	// li r24,60
	ctx.r24.s64 = 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CB94;
	sub_8257AAD0(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r26,r11,-17548
	ctx.r26.s64 = ctx.r11.s64 + -17548;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257cbb4
	if (!cr6.eq) goto loc_8257CBB4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// beq cr6,0x8257cbbc
	if (cr6.eq) goto loc_8257CBBC;
loc_8257CBB4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x8257cbc0
	goto loc_8257CBC0;
loc_8257CBBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257CBC0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257cbcc
	if (!cr6.eq) goto loc_8257CBCC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8257CBCC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257b6f8
	ctx.lr = 0x8257CBDC;
	sub_8257B6F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8257c1a0
	ctx.lr = 0x8257CBF4;
	sub_8257C1A0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// beq cr6,0x8257cc14
	if (cr6.eq) goto loc_8257CC14;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257cc40
	if (!cr6.eq) goto loc_8257CC40;
loc_8257CC14:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257cc40
	if (!cr6.eq) goto loc_8257CC40;
	// li r11,47
	ctx.r11.s64 = 47;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CC34;
	sub_8257AAD0(ctx, base);
	// li r10,62
	ctx.r10.s64 = 62;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// b 0x8257ce28
	goto loc_8257CE28;
loc_8257CC40:
	// li r25,62
	ctx.r25.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CC54;
	sub_8257AAD0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257cca8
	if (!cr6.eq) goto loc_8257CCA8;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257cc78
	if (!cr6.eq) goto loc_8257CC78;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// beq cr6,0x8257cc80
	if (cr6.eq) goto loc_8257CC80;
loc_8257CC78:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8257cc84
	goto loc_8257CC84;
loc_8257CC80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257CC84:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257cc90
	if (!cr6.eq) goto loc_8257CC90;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8257CC90:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b790
	ctx.lr = 0x8257CCA4;
	sub_8257B790(ctx, base);
	// b 0x8257cdac
	goto loc_8257CDAC;
loc_8257CCA8:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257cd08
	if (!cr6.eq) goto loc_8257CD08;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8257cd08
	if (!cr6.eq) goto loc_8257CD08;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257ccd8
	if (!cr6.eq) goto loc_8257CCD8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// beq cr6,0x8257cce0
	if (cr6.eq) goto loc_8257CCE0;
loc_8257CCD8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8257cce4
	goto loc_8257CCE4;
loc_8257CCE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257CCE4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257ccf0
	if (!cr6.eq) goto loc_8257CCF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8257CCF0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b790
	ctx.lr = 0x8257CD04;
	sub_8257B790(ctx, base);
	// b 0x8257cdac
	goto loc_8257CDAC;
loc_8257CD08:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257cd20
	if (!cr6.eq) goto loc_8257CD20;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// beq cr6,0x8257cd28
	if (cr6.eq) goto loc_8257CD28;
loc_8257CD20:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8257cd2c
	goto loc_8257CD2C;
loc_8257CD28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257CD2C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257cd38
	if (!cr6.eq) goto loc_8257CD38;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8257CD38:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b790
	ctx.lr = 0x8257CD4C;
	sub_8257B790(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bne cr6,0x8257cd70
	if (!cr6.eq) goto loc_8257CD70;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CD70;
	sub_8257AAD0(ctx, base);
loc_8257CD70:
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257cae0
	ctx.lr = 0x8257CD88;
	sub_8257CAE0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bne cr6,0x8257cdb4
	if (!cr6.eq) goto loc_8257CDB4;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b668
	ctx.lr = 0x8257CDAC;
	sub_8257B668(ctx, base);
loc_8257CDAC:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
loc_8257CDB4:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CDC4;
	sub_8257AAD0(ctx, base);
	// li r11,47
	ctx.r11.s64 = 47;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CDD8;
	sub_8257AAD0(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8257cdf0
	if (!cr6.eq) goto loc_8257CDF0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// beq cr6,0x8257cdf8
	if (cr6.eq) goto loc_8257CDF8;
loc_8257CDF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x8257cdfc
	goto loc_8257CDFC;
loc_8257CDF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257CDFC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257ce08
	if (!cr6.eq) goto loc_8257CE08;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8257CE08:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8257b6f8
	ctx.lr = 0x8257CE18;
	sub_8257B6F8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
loc_8257CE28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8257aad0
	ctx.lr = 0x8257CE34;
	sub_8257AAD0(ctx, base);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CE44"))) PPC_WEAK_FUNC(sub_8257CE44);
PPC_FUNC_IMPL(__imp__sub_8257CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257CE48"))) PPC_WEAK_FUNC(sub_8257CE48);
PPC_FUNC_IMPL(__imp__sub_8257CE48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257ce80
	if (!cr6.eq) goto loc_8257CE80;
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
loc_8257CE80:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82574d20
	ctx.lr = 0x8257CE88;
	sub_82574D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257c9c0
	ctx.lr = 0x8257CEA0;
	sub_8257C9C0(ctx, base);
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

__attribute__((alias("__imp__sub_8257CEB8"))) PPC_WEAK_FUNC(sub_8257CEB8);
PPC_FUNC_IMPL(__imp__sub_8257CEB8) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8257cee4
	if (!cr6.eq) goto loc_8257CEE4;
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
loc_8257CEE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8257c3a0
	ctx.lr = 0x8257CF04;
	sub_8257C3A0(ctx, base);
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

__attribute__((alias("__imp__sub_8257CF18"))) PPC_WEAK_FUNC(sub_8257CF18);
PPC_FUNC_IMPL(__imp__sub_8257CF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CF28"))) PPC_WEAK_FUNC(sub_8257CF28);
PPC_FUNC_IMPL(__imp__sub_8257CF28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8257cf68
	if (!cr6.lt) goto loc_8257CF68;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
loc_8257CF68:
	// fadds f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CF90"))) PPC_WEAK_FUNC(sub_8257CF90);
PPC_FUNC_IMPL(__imp__sub_8257CF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ori r8,r11,52429
	ctx.r8.u64 = ctx.r11.u64 | 52429;
	// li r3,1
	ctx.r3.s64 = 1;
	// mulhwu r9,r10,r8
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
loc_8257CFD0:
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// divwu r5,r10,r11
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulhwu r4,r5,r8
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r9,r4,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r11,0
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// bge cr6,0x8257cfd0
	if (!cr6.lt) goto loc_8257CFD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D018"))) PPC_WEAK_FUNC(sub_8257D018);
PPC_FUNC_IMPL(__imp__sub_8257D018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// ori r8,r11,52429
	ctx.r8.u64 = ctx.r11.u64 | 52429;
	// ori r7,r9,52428
	ctx.r7.u64 = ctx.r9.u64 | 52428;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// li r11,10
	ctx.r11.s64 = 10;
	// mulhdu r6,r10,r8
	ctx.r6.u64 = ((unsigned __int128)ctx.r10.u64 * (unsigned __int128)ctx.r8.u64) >> 64;
	// rldicl r9,r6,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r7,r9,2,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// rldicr r7,r5,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
loc_8257D064:
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// divdu r5,r10,r11
	ctx.r5.u64 = PPCDivide(ctx.r10.u64, ctx.r11.u64);
	// rldicr r6,r11,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// mulhdu r4,r5,r8
	ctx.r4.u64 = ((unsigned __int128)ctx.r5.u64 * (unsigned __int128)ctx.r8.u64) >> 64;
	// rldicl r9,r4,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// tdllei r11,0
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r6,r9,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rldicr r6,r9,1,62
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// bge cr6,0x8257d064
	if (!cr6.lt) goto loc_8257D064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D0B0"))) PPC_WEAK_FUNC(sub_8257D0B0);
PPC_FUNC_IMPL(__imp__sub_8257D0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8257D0B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x8257D0C0;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r11,r11,52429
	ctx.r11.u64 = ctx.r11.u64 | 52429;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mulhwu r6,r8,r11
	ctx.r6.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,1
	ctx.r27.s64 = 1;
	// subf r10,r3,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r3.s64;
	// lfd f29,20040(r7)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20040);
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8257d16c
	if (cr6.lt) goto loc_8257D16C;
loc_8257D124:
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// bgt cr6,0x8257d16c
	if (cr6.gt) goto loc_8257D16C;
	// fdiv f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 / ctx.f0.f64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fmul f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 * ctx.f29.f64;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulhwu r7,r8,r11
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bge cr6,0x8257d124
	if (!cr6.lt) goto loc_8257D124;
loc_8257D16C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x8257D174;
	sub_831D1CA8(ctx, base);
	// fsub f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 - ctx.f1.f64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8257d2f4
	if (!cr6.gt) goto loc_8257D2F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r29,-2
	ctx.r30.s64 = ctx.r29.s64 + -2;
	// lfs f28,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f27.f64 = double(temp.f32);
loc_8257D194:
	// fmul f31,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64 * ctx.f29.f64;
	// frsp f0,f31
	ctx.f0.f64 = double(float(ctx.f31.f64));
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x8257d1c4
	if (!cr6.lt) goto loc_8257D1C4;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x8257d1e0
	goto loc_8257D1E0;
loc_8257D1C4:
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8257D1E0:
	// fcfid f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// bl 0x831d1ca8
	ctx.lr = 0x8257D1F0;
	sub_831D1CA8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fctidz f13,f30
	ctx.f13.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// sradi r9,r11,63
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 63;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// and r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 & ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,-10
	ctx.r5.s64 = ctx.r11.s64 + -10;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// sradi r3,r4,63
	xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 63;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fsub f0,f31,f11
	ctx.f0.f64 = ctx.f31.f64 - ctx.f11.f64;
	// bne 0x8257d194
	if (!cr0.eq) goto loc_8257D194;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257d2f4
	if (cr6.eq) goto loc_8257D2F4;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x8257d29c
	if (cr6.lt) goto loc_8257D29C;
loc_8257D280:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x8257d2ec
	if (!cr6.eq) goto loc_8257D2EC;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x8257d280
	if (!cr6.lt) goto loc_8257D280;
loc_8257D29C:
	// addi r9,r28,-4
	ctx.r9.s64 = ctx.r28.s64 + -4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8257d2c8
	if (cr6.gt) goto loc_8257D2C8;
loc_8257D2AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x8257d2ec
	if (!cr6.eq) goto loc_8257D2EC;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8257d2ac
	if (!cr6.gt) goto loc_8257D2AC;
loc_8257D2C8:
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// bge cr6,0x8257d2f4
	if (!cr6.lt) goto loc_8257D2F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x8257D2E8;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8257D2EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8257D2F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x8257D304;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D308"))) PPC_WEAK_FUNC(sub_8257D308);
PPC_FUNC_IMPL(__imp__sub_8257D308) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831d8218
	ctx.lr = 0x8257D358;
	sub_831D8218(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8257d368
	if (cr6.lt) goto loc_8257D368;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x8257d374
	if (cr6.lt) goto loc_8257D374;
loc_8257D368:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8257D374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D38C"))) PPC_WEAK_FUNC(sub_8257D38C);
PPC_FUNC_IMPL(__imp__sub_8257D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D390"))) PPC_WEAK_FUNC(sub_8257D390);
PPC_FUNC_IMPL(__imp__sub_8257D390) {
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
	ctx.lr = 0x8257D398;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-2528(r1)
	ea = -2528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2548, ctx.r3.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r21,r1,304
	ctx.r21.s64 = ctx.r1.s64 + 304;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8257d3d8
	if (!cr6.eq) goto loc_8257D3D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8257D3D8:
	// cmplwi cr6,r16,2048
	cr6.compare<uint32_t>(ctx.r16.u32, 2048, xer);
	// blt cr6,0x8257d3e4
	if (cr6.lt) goto loc_8257D3E4;
	// li r16,2048
	ctx.r16.s64 = 2048;
loc_8257D3E4:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8257e394
	if (cr6.eq) goto loc_8257E394;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r14,100
	ctx.r14.s64 = 100;
	// addi r7,r11,20028
	ctx.r7.s64 = ctx.r11.s64 + 20028;
	// li r26,48
	ctx.r26.s64 = 48;
	// lfd f30,9000(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r8.u32 + 9000);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_8257D410:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// bne cr6,0x8257e394
	if (!cr6.eq) goto loc_8257E394;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// beq cr6,0x8257d440
	if (cr6.eq) goto loc_8257D440;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// ble cr6,0x8257e390
	if (!cr6.gt) goto loc_8257E390;
	// stb r10,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r10.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8257e37c
	goto loc_8257E37C;
loc_8257D440:
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bne cr6,0x8257d474
	if (!cr6.eq) goto loc_8257D474;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// ble cr6,0x8257e390
	if (!cr6.gt) goto loc_8257E390;
	// li r11,37
	ctx.r11.s64 = 37;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8257e37c
	goto loc_8257E37C;
loc_8257D474:
	// li r7,117
	ctx.r7.s64 = 117;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r9,76
	ctx.r9.s64 = 76;
	// stb r14,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r14.u8);
	// li r8,108
	ctx.r8.s64 = 108;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// li r6,102
	ctx.r6.s64 = 102;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r5,99
	ctx.r5.s64 = 99;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// li r4,88
	ctx.r4.s64 = 88;
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// li r3,120
	ctx.r3.s64 = 120;
	// stb r5,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r5.u8);
	// li r7,35
	ctx.r7.s64 = 35;
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// li r9,115
	ctx.r9.s64 = 115;
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// li r8,112
	ctx.r8.s64 = 112;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x8257d51c
	if (!cr6.eq) goto loc_8257D51C;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D51C:
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// bne cr6,0x8257d530
	if (!cr6.eq) goto loc_8257D530;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8257D528:
	// li r20,1
	ctx.r20.s64 = 1;
loc_8257D52C:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_8257D530:
	// lbz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
loc_8257D540:
	// lbzx r25,r11,r10
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// cmpw cr6,r9,r25
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, xer);
	// beq cr6,0x8257d588
	if (cr6.eq) goto loc_8257D588;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8257d540
	if (cr6.lt) goto loc_8257D540;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257D560:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8257d64c
	if (!cr6.eq) goto loc_8257D64C;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257d64c
	if (cr6.eq) goto loc_8257D64C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x8257d590
	if (!cr6.eq) goto loc_8257D590;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// b 0x8257d528
	goto loc_8257D528;
loc_8257D588:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8257d560
	goto loc_8257D560;
loc_8257D590:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8257d5b0
	if (cr6.eq) goto loc_8257D5B0;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x8257d5b0
	if (!cr6.eq) goto loc_8257D5B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D5B0:
	// subfic r10,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r6.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// blt cr6,0x8257d60c
	if (cr6.lt) goto loc_8257D60C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8257d60c
	if (cr6.gt) goto loc_8257D60C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8257d5f4
	if (!cr6.eq) goto loc_8257D5F4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D5F4:
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r22,r11,-48
	ctx.r22.s64 = ctx.r11.s64 + -48;
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D60C:
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bne cr6,0x8257d638
	if (!cr6.eq) goto loc_8257D638;
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8257d630
	if (!cr6.eq) goto loc_8257D630;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D630:
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D638:
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// bne cr6,0x8257d52c
	if (!cr6.eq) goto loc_8257D52C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x8257d52c
	goto loc_8257D52C;
loc_8257D64C:
	// subfic r11,r20,0
	xer.ca = ctx.r20.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r20.s64;
	// cmpwi cr6,r9,76
	cr6.compare<int32_t>(ctx.r9.s32, 76, xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// beq cr6,0x8257d668
	if (cr6.eq) goto loc_8257D668;
	// cmpwi cr6,r9,108
	cr6.compare<int32_t>(ctx.r9.s32, 108, xer);
	// bne cr6,0x8257d6ec
	if (!cr6.eq) goto loc_8257D6EC;
loc_8257D668:
	// lbz r11,1(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,76
	cr6.compare<int32_t>(ctx.r11.s32, 76, xer);
	// beq cr6,0x8257d6b8
	if (cr6.eq) goto loc_8257D6B8;
	// cmpwi cr6,r11,108
	cr6.compare<int32_t>(ctx.r11.s32, 108, xer);
	// beq cr6,0x8257d6b8
	if (cr6.eq) goto loc_8257D6B8;
	// lbz r10,1(r15)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r15.u32 + 1);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_8257D698:
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// beq cr6,0x8257d6ec
	if (cr6.eq) goto loc_8257D6EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8257d698
	if (cr6.lt) goto loc_8257D698;
	// b 0x8257d6e8
	goto loc_8257D6E8;
loc_8257D6B8:
	// lbzu r10,2(r15)
	ea = 2 + ctx.r15.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_8257D6CC:
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// beq cr6,0x8257d6ec
	if (cr6.eq) goto loc_8257D6EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8257d6cc
	if (cr6.lt) goto loc_8257D6CC;
loc_8257D6E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257D6EC:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x8257d72c
	if (!cr6.eq) goto loc_8257D72C;
	// lbzu r10,1(r15)
	ea = 1 + ctx.r15.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r15.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_8257D70C:
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// beq cr6,0x8257d72c
	if (cr6.eq) goto loc_8257D72C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x8257d70c
	if (cr6.lt) goto loc_8257D70C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257D72C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8257d73c
	if (!cr6.eq) goto loc_8257D73C;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8257D73C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(ctx.r11.s32, 115, xer);
	// beq cr6,0x8257d76c
	if (cr6.eq) goto loc_8257D76C;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// bne cr6,0x8257d754
	if (!cr6.eq) goto loc_8257D754;
	// li r22,6
	ctx.r22.s64 = 6;
loc_8257D754:
	// addic. r10,r30,-30
	xer.ca = ctx.r30.u32 > 29;
	ctx.r10.s64 = ctx.r30.s64 + -30;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8257d760
	if (cr0.lt) goto loc_8257D760;
	// li r30,30
	ctx.r30.s64 = 30;
loc_8257D760:
	// addic. r10,r22,-16
	xer.ca = ctx.r22.u32 > 15;
	ctx.r10.s64 = ctx.r22.s64 + -16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8257d76c
	if (cr0.lt) goto loc_8257D76C;
	// li r22,16
	ctx.r22.s64 = 16;
loc_8257D76C:
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x8257e36c
	if (cr6.gt) goto loc_8257E36C;
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10352
	ctx.r12.s64 = ctx.r12.s64 + -10352;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8257E134;
	case 1:
		goto loc_8257E36C;
	case 2:
		goto loc_8257E36C;
	case 3:
		goto loc_8257E36C;
	case 4:
		goto loc_8257E36C;
	case 5:
		goto loc_8257E36C;
	case 6:
		goto loc_8257E36C;
	case 7:
		goto loc_8257E36C;
	case 8:
		goto loc_8257E36C;
	case 9:
		goto loc_8257E36C;
	case 10:
		goto loc_8257E36C;
	case 11:
		goto loc_8257DFB8;
	case 12:
		goto loc_8257D818;
	case 13:
		goto loc_8257E36C;
	case 14:
		goto loc_8257DB6C;
	case 15:
		goto loc_8257E36C;
	case 16:
		goto loc_8257E36C;
	case 17:
		goto loc_8257E36C;
	case 18:
		goto loc_8257E36C;
	case 19:
		goto loc_8257E36C;
	case 20:
		goto loc_8257E36C;
	case 21:
		goto loc_8257E36C;
	case 22:
		goto loc_8257E36C;
	case 23:
		goto loc_8257E36C;
	case 24:
		goto loc_8257E128;
	case 25:
		goto loc_8257E36C;
	case 26:
		goto loc_8257E36C;
	case 27:
		goto loc_8257DFF4;
	case 28:
		goto loc_8257E36C;
	case 29:
		goto loc_8257D814;
	case 30:
		goto loc_8257E36C;
	case 31:
		goto loc_8257E36C;
	case 32:
		goto loc_8257E138;
	default:
		return;
	}
	// lwz r18,-7884(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7884);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-8264(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8264);
	// lwz r18,-10216(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10216);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-9364(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -9364);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7896(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7896);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-8204(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8204);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-10220(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -10220);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7316(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7316);
	// lwz r18,-7880(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7880);
loc_8257D814:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8257D818:
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// beq cr6,0x8257d93c
	if (cr6.eq) goto loc_8257D93C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8257d858
	if (cr6.eq) goto loc_8257D858;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8257d018
	ctx.lr = 0x8257D84C;
	sub_8257D018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf. r8,r3,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// b 0x8257da54
	goto loc_8257DA54;
loc_8257D858:
	// ld r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// sradi r11,r28,63
	xer.ca = (ctx.r28.s64 < 0) & ((ctx.r28.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s64 >> 63;
	// xor r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bl 0x8257d018
	ctx.lr = 0x8257D86C;
	sub_8257D018(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(ctx.r28.s64, 0, xer);
	// bge cr6,0x8257d8e0
	if (!cr6.lt) goto loc_8257D8E0;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257d888
	if (!cr0.lt) goto loc_8257D888;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257D888:
	// subf r28,r19,r16
	ctx.r28.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257d8a0
	if (cr0.lt) goto loc_8257D8A0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8257D8A0:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257D8AC;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mullw r9,r24,r20
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r20.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257D8D8;
	sub_8257EFB0(ctx, base);
	// subfic r23,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r23.s64 = 1 - ctx.r20.s64;
	// b 0x8257da80
	goto loc_8257DA80;
loc_8257D8E0:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x8257da50
	if (cr6.eq) goto loc_8257DA50;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257d8f8
	if (!cr0.lt) goto loc_8257D8F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257D8F8:
	// subf r28,r19,r16
	ctx.r28.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257d910
	if (cr0.lt) goto loc_8257D910;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8257D910:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257D91C;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mullw r9,r24,r20
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r20.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// b 0x8257da38
	goto loc_8257DA38;
loc_8257D93C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8257d958
	if (cr6.eq) goto loc_8257D958;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8257cf90
	ctx.lr = 0x8257D94C;
	sub_8257CF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf. r8,r3,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// b 0x8257da54
	goto loc_8257DA54;
loc_8257D958:
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r11,r28,31
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// xor r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bl 0x8257cf90
	ctx.lr = 0x8257D96C;
	sub_8257CF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x8257d9e0
	if (!cr6.lt) goto loc_8257D9E0;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257d988
	if (!cr0.lt) goto loc_8257D988;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257D988:
	// subf r28,r19,r16
	ctx.r28.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257d9a0
	if (cr0.lt) goto loc_8257D9A0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8257D9A0:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257D9AC;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,45
	ctx.r4.s64 = 45;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r8,r20
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257D9D8;
	sub_8257EFB0(ctx, base);
	// subfic r23,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r23.s64 = 1 - ctx.r20.s64;
	// b 0x8257da80
	goto loc_8257DA80;
loc_8257D9E0:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x8257da50
	if (cr6.eq) goto loc_8257DA50;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257d9f8
	if (!cr0.lt) goto loc_8257D9F8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257D9F8:
	// subf r28,r19,r16
	ctx.r28.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257da10
	if (cr0.lt) goto loc_8257DA10;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8257DA10:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DA1C;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r8,r20
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
loc_8257DA38:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DA48;
	sub_8257EFB0(ctx, base);
	// subfic r23,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r23.s64 = 1 - ctx.r20.s64;
	// b 0x8257da80
	goto loc_8257DA80;
loc_8257DA50:
	// subf. r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_8257DA54:
	// bge 0x8257da5c
	if (!cr0.lt) goto loc_8257DA5C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8257DA5C:
	// subf r28,r19,r16
	ctx.r28.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257da74
	if (cr0.lt) goto loc_8257DA74;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8257DA74:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DA80;
	sub_8257EFB0(ctx, base);
loc_8257DA80:
	// add r11,r30,r19
	ctx.r11.u64 = ctx.r30.u64 + ctx.r19.u64;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8257dae4
	if (!cr6.gt) goto loc_8257DAE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257dad8
	if (cr6.eq) goto loc_8257DAD8;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_8257DABC:
	// lwzu r7,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stbx r6,r9,r23
	PPC_STORE_U8(ctx.r9.u32 + ctx.r23.u32, ctx.r6.u8);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8257dabc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257DABC;
loc_8257DAD8:
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DAE4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257db40
	if (cr6.eq) goto loc_8257DB40;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r28,-1
	ctx.r6.s64 = ctx.r28.s64 + -1;
	// mullw r11,r9,r20
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
loc_8257DB10:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257db34
	if (!cr6.gt) goto loc_8257DB34;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stbx r10,r9,r21
	PPC_STORE_U8(ctx.r9.u32 + ctx.r21.u32, ctx.r10.u8);
loc_8257DB34:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x8257db10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257DB10;
loc_8257DB40:
	// subf. r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt 0x8257db50
	if (cr0.lt) goto loc_8257DB50;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8257DB50:
	// subf. r10,r27,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// blt 0x8257db64
	if (cr0.lt) goto loc_8257DB64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8257DB64:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DB6C:
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// li r12,2047
	ctx.r12.s64 = 2047;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// lfd f31,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stfd f31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r7,r9,52,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 52) & 0xFFF0000000000000;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// extsb r29,r8
	ctx.r29.s64 = ctx.r8.s8;
	// cmpld cr6,r6,r7
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, xer);
	// bne cr6,0x8257dbbc
	if (!cr6.eq) goto loc_8257DBBC;
	// clrldi r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8257dbc0
	if (!cr6.eq) goto loc_8257DBC0;
loc_8257DBBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257DBC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257dc3c
	if (cr6.eq) goto loc_8257DC3C;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
	// addi r11,r19,3
	ctx.r11.s64 = ctx.r19.s64 + 3;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x8257dbfc
	if (cr6.lt) goto loc_8257DBFC;
	// li r11,78
	ctx.r11.s64 = 78;
	// li r10,97
	ctx.r10.s64 = 97;
	// stb r11,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r11.u8);
	// li r29,3
	ctx.r29.s64 = 3;
	// stb r10,1(r21)
	PPC_STORE_U8(ctx.r21.u32 + 1, ctx.r10.u8);
	// stb r11,2(r21)
	PPC_STORE_U8(ctx.r21.u32 + 2, ctx.r11.u8);
	// addi r21,r21,3
	ctx.r21.s64 = ctx.r21.s64 + 3;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DBFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r19
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, xer);
	// ble cr6,0x8257dc14
	if (!cr6.gt) goto loc_8257DC14;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r9.u8);
loc_8257DC14:
	// addi r9,r19,1
	ctx.r9.s64 = ctx.r19.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8257dc2c
	if (!cr6.gt) goto loc_8257DC2C;
	// li r10,97
	ctx.r10.s64 = 97;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,1(r21)
	PPC_STORE_U8(ctx.r21.u32 + 1, ctx.r10.u8);
loc_8257DC2C:
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DC3C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// fabs f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8257d0b0
	ctx.lr = 0x8257DC50;
	sub_8257D0B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x8257dc68
	if (cr6.eq) goto loc_8257DC68;
	// subf r11,r22,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r22.s64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_8257DC68:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8257dcd8
	if (!cr6.lt) goto loc_8257DCD8;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257dc80
	if (!cr0.lt) goto loc_8257DC80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257DC80:
	// subf r26,r19,r16
	ctx.r26.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// subf. r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257dc98
	if (cr0.lt) goto loc_8257DC98;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8257DC98:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DCA4;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,45
	ctx.r4.s64 = 45;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r8,r20
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DCD0;
	sub_8257EFB0(ctx, base);
	// subfic r23,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r23.s64 = 1 - ctx.r20.s64;
	// b 0x8257dd80
	goto loc_8257DD80;
loc_8257DCD8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x8257dd48
	if (cr6.eq) goto loc_8257DD48;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subf. r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8257dcf0
	if (!cr0.lt) goto loc_8257DCF0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8257DCF0:
	// subf r26,r19,r16
	ctx.r26.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// subf. r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257dd08
	if (cr0.lt) goto loc_8257DD08;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8257DD08:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DD14;
	sub_8257EFB0(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,43
	ctx.r4.s64 = 43;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r8,r20
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r20.s32);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DD40;
	sub_8257EFB0(ctx, base);
	// subfic r23,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r23.s64 = 1 - ctx.r20.s64;
	// b 0x8257dd80
	goto loc_8257DD80;
loc_8257DD48:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8257dd58
	if (cr6.eq) goto loc_8257DD58;
	// subf. r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x8257dd5c
	if (!cr0.lt) goto loc_8257DD5C;
loc_8257DD58:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8257DD5C:
	// subf r26,r19,r16
	ctx.r26.s64 = ctx.r16.s64 - ctx.r19.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
	// subf. r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257dd74
	if (cr0.lt) goto loc_8257DD74;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8257DD74:
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DD80;
	sub_8257EFB0(ctx, base);
loc_8257DD80:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf. r10,r28,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// blt 0x8257dd9c
	if (cr0.lt) goto loc_8257DD9C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8257DD9C:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r27,r16,-1
	ctx.r27.s64 = ctx.r16.s64 + -1;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x8257df40
	if (!cr6.gt) goto loc_8257DF40;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257ddec
	if (cr6.eq) goto loc_8257DDEC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8257DDD4:
	// lwzu r9,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stbx r7,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8257ddd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257DDD4;
loc_8257DDEC:
	// add r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 + ctx.r21.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// subf r26,r29,r25
	ctx.r26.s64 = ctx.r25.s64 - ctx.r29.s64;
	// ble cr6,0x8257deac
	if (!cr6.gt) goto loc_8257DEAC;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subfic r10,r20,1
	xer.ca = ctx.r20.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r20.s64;
	// subf r9,r23,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r23.s64;
	// mullw r31,r9,r10
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r30,r11,r19
	ctx.r30.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, xer);
	// ble cr6,0x8257db64
	if (!cr6.gt) goto loc_8257DB64;
	// subf r28,r31,r21
	ctx.r28.s64 = ctx.r21.s64 - ctx.r31.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DE30;
	sub_8257EFB0(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x8257df24
	if (!cr6.gt) goto loc_8257DF24;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8257de88
	if (cr6.eq) goto loc_8257DE88;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
loc_8257DE50:
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257de7c
	if (!cr6.gt) goto loc_8257DE7C;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r7,r10,r21
	ctx.r7.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stb r9,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
loc_8257DE7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8257de50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257DE50;
loc_8257DE88:
	// subf r11,r31,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// ble cr6,0x8257defc
	if (!cr6.gt) goto loc_8257DEFC;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
loc_8257DEAC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x8257e370
	if (!cr6.gt) goto loc_8257E370;
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8257dec8
	if (cr6.gt) goto loc_8257DEC8;
	// li r18,1
	ctx.r18.s64 = 1;
loc_8257DEC8:
	// subf r11,r29,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r29.s64;
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf. r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8257dee0
	if (cr0.lt) goto loc_8257DEE0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8257DEE0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257DEF0;
	sub_8257EFB0(ctx, base);
	// add r21,r26,r21
	ctx.r21.u64 = ctx.r26.u64 + ctx.r21.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DEFC:
	// subf r10,r29,r16
	ctx.r10.s64 = ctx.r16.s64 - ctx.r29.s64;
	// subf r10,r19,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r19.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x8257df14
	if (cr0.lt) goto loc_8257DF14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8257DF14:
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DF24:
	// cmplw cr6,r28,r21
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, xer);
	// blt cr6,0x8257df38
	if (cr6.lt) goto loc_8257DF38;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8257DF38:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DF40:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257df8c
	if (cr6.eq) goto loc_8257DF8C;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_8257DF64:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257df80
	if (!cr6.gt) goto loc_8257DF80;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// stbx r5,r6,r21
	PPC_STORE_U8(ctx.r6.u32 + ctx.r21.u32, ctx.r5.u8);
loc_8257DF80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bdnz 0x8257df64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257DF64;
loc_8257DF8C:
	// subf. r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt 0x8257df9c
	if (cr0.lt) goto loc_8257DF9C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8257DF9C:
	// subf. r10,r28,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// blt 0x8257dfb0
	if (cr0.lt) goto loc_8257DFB0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8257DFB0:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DFB8:
	// add r11,r30,r19
	ctx.r11.u64 = ctx.r30.u64 + ctx.r19.u64;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8257db64
	if (!cr6.gt) goto loc_8257DB64;
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x8257efb0
	ctx.lr = 0x8257DFE8;
	sub_8257EFB0(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257DFF4:
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8257E008:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8257e008
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E008;
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8257e030
	if (!cr6.eq) goto loc_8257E030;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_8257E030:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8257E034:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257e034
	if (!cr6.eq) goto loc_8257E034;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf. r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8257e05c
	if (cr0.lt) goto loc_8257E05C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8257E05C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// blt cr6,0x8257e070
	if (cr6.lt) goto loc_8257E070;
	// subf. r11,r22,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r22.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257e070
	if (cr0.lt) goto loc_8257E070;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8257E070:
	// add r11,r30,r19
	ctx.r11.u64 = ctx.r30.u64 + ctx.r19.u64;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8257e0d0
	if (!cr6.gt) goto loc_8257E0D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257E090;
	sub_8257EFB0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8257e0b8
	if (cr6.eq) goto loc_8257E0B8;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x831ce980
	ctx.lr = 0x8257E0AC;
	sub_831CE980(ctx, base);
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E0B8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8257E0C4;
	sub_831CE980(ctx, base);
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E0D0:
	// subf r11,r19,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r19.s64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// subf. r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8257e0e4
	if (cr0.lt) goto loc_8257E0E4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8257E0E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257E0F4;
	sub_8257EFB0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8257e10c
	if (cr6.eq) goto loc_8257E10C;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x8257e110
	goto loc_8257E110;
loc_8257E10C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_8257E110:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8257E118;
	sub_831CE980(ctx, base);
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E128:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8257E134:
	// li r27,-32
	ctx.r27.s64 = -32;
loc_8257E138:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8257e160
	if (cr6.eq) goto loc_8257E160;
	// addi r10,r19,2
	ctx.r10.s64 = ctx.r19.s64 + 2;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257e1c0
	if (!cr6.gt) goto loc_8257E1C0;
	// addi r11,r27,120
	ctx.r11.s64 = ctx.r27.s64 + 120;
	// stb r26,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r26.u8);
	// stb r11,1(r21)
	PPC_STORE_U8(ctx.r21.u32 + 1, ctx.r11.u8);
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
loc_8257E160:
	// addi r11,r17,7
	ctx.r11.s64 = ctx.r17.s64 + 7;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// beq cr6,0x8257e204
	if (cr6.eq) goto loc_8257E204;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rldicl r11,r8,60,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x8257e238
	if (cr6.eq) goto loc_8257E238;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8257E1A4:
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// rldicl r11,r11,60,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x8257e1a4
	if (!cr6.eq) goto loc_8257E1A4;
	// b 0x8257e238
	goto loc_8257E238;
loc_8257E1C0:
	// addi r9,r19,1
	ctx.r9.s64 = ctx.r19.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257e1e0
	if (!cr6.eq) goto loc_8257E1E0;
	// stb r26,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r26.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E1E0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257e1fc
	if (!cr6.eq) goto loc_8257E1FC;
	// addi r11,r27,120
	ctx.r11.s64 = ctx.r27.s64 + 120;
	// stb r26,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r26.u8);
	// li r29,2
	ctx.r29.s64 = 2;
	// stb r11,1(r21)
	PPC_STORE_U8(ctx.r21.u32 + 1, ctx.r11.u8);
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
loc_8257E1FC:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E204:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257e238
	if (cr6.eq) goto loc_8257E238;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8257E220:
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257e220
	if (!cr6.eq) goto loc_8257E220;
loc_8257E238:
	// subf. r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x8257e244
	if (!cr0.lt) goto loc_8257E244;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8257E244:
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// add r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 + ctx.r30.u64;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// add r10,r29,r19
	ctx.r10.u64 = ctx.r29.u64 + ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257e2d4
	if (!cr6.gt) goto loc_8257E2D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257E26C;
	sub_8257EFB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257e2cc
	if (cr6.eq) goto loc_8257E2CC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
loc_8257E298:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8257e2b4
	if (!cr6.lt) goto loc_8257E2B4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// b 0x8257e2c0
	goto loc_8257E2C0;
loc_8257E2B4:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
loc_8257E2C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bdnz 0x8257e298
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E298;
loc_8257E2CC:
	// add r21,r30,r21
	ctx.r21.u64 = ctx.r30.u64 + ctx.r21.u64;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E2D4:
	// subf r11,r28,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r28.s64;
	// subf r11,r19,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r19.s64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8257efb0
	ctx.lr = 0x8257E2E8;
	sub_8257EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257e35c
	if (cr6.eq) goto loc_8257E35C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
loc_8257E308:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x8257e350
	if (!cr6.lt) goto loc_8257E350;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bge cr6,0x8257e338
	if (!cr6.lt) goto loc_8257E338;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// mullw r10,r9,r20
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r20.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// stbx r5,r6,r21
	PPC_STORE_U8(ctx.r6.u32 + ctx.r21.u32, ctx.r5.u8);
	// b 0x8257e350
	goto loc_8257E350;
loc_8257E338:
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mullw r10,r7,r20
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r20.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r9,87
	ctx.r6.s64 = ctx.r9.s64 + 87;
	// stbx r6,r5,r21
	PPC_STORE_U8(ctx.r5.u32 + ctx.r21.u32, ctx.r6.u8);
loc_8257E350:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bdnz 0x8257e308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E308;
loc_8257E35C:
	// add r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 + ctx.r21.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8257e370
	goto loc_8257E370;
loc_8257E36C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8257E370:
	// addi r5,r15,1
	ctx.r5.s64 = ctx.r15.s64 + 1;
	// add r19,r29,r19
	ctx.r19.u64 = ctx.r29.u64 + ctx.r19.u64;
	// li r26,48
	ctx.r26.s64 = 48;
loc_8257E37C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8257d410
	if (!cr6.eq) goto loc_8257D410;
	// b 0x8257e394
	goto loc_8257E394;
loc_8257E390:
	// li r18,1
	ctx.r18.s64 = 1;
loc_8257E394:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, xer);
	// stb r10,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r10.u8);
	// blt cr6,0x8257e3ac
	if (cr6.lt) goto loc_8257E3AC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8257E3AC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,2548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2548);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x831ce980
	ctx.lr = 0x8257E3BC;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8257e3cc
	if (!cr6.eq) goto loc_8257E3CC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8257E3CC:
	// addi r1,r1,2528
	ctx.r1.s64 = ctx.r1.s64 + 2528;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E3DC"))) PPC_WEAK_FUNC(sub_8257E3DC);
PPC_FUNC_IMPL(__imp__sub_8257E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E3E0"))) PPC_WEAK_FUNC(sub_8257E3E0);
PPC_FUNC_IMPL(__imp__sub_8257E3E0) {
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
	// bl 0x8257d390
	ctx.lr = 0x8257E400;
	sub_8257D390(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8257e410
	if (cr6.lt) goto loc_8257E410;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x8257e41c
	if (cr6.lt) goto loc_8257E41C;
loc_8257E410:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8257E41C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E434"))) PPC_WEAK_FUNC(sub_8257E434);
PPC_FUNC_IMPL(__imp__sub_8257E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E438"))) PPC_WEAK_FUNC(sub_8257E438);
PPC_FUNC_IMPL(__imp__sub_8257E438) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257d390
	ctx.lr = 0x8257E480;
	sub_8257D390(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8257e490
	if (cr6.lt) goto loc_8257E490;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x8257e49c
	if (cr6.lt) goto loc_8257E49C;
loc_8257E490:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8257E49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E4B4"))) PPC_WEAK_FUNC(sub_8257E4B4);
PPC_FUNC_IMPL(__imp__sub_8257E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E4B8"))) PPC_WEAK_FUNC(sub_8257E4B8);
PPC_FUNC_IMPL(__imp__sub_8257E4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r11,20084
	ctx.r9.s64 = ctx.r11.s64 + 20084;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257E4D0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// ble cr6,0x8257e504
	if (!cr6.gt) goto loc_8257E504;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,44
	ctx.r8.s64 = ctx.r9.s64 + 44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x8257e4d0
	if (!cr6.gt) goto loc_8257E4D0;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_8257E504:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E51C"))) PPC_WEAK_FUNC(sub_8257E51C);
PPC_FUNC_IMPL(__imp__sub_8257E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E520"))) PPC_WEAK_FUNC(sub_8257E520);
PPC_FUNC_IMPL(__imp__sub_8257E520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// beq cr6,0x8257e548
	if (cr6.eq) goto loc_8257E548;
	// b 0x825730a8
	sub_825730A8(ctx, base);
	return;
loc_8257E548:
	// b 0x825730a8
	sub_825730A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E54C"))) PPC_WEAK_FUNC(sub_8257E54C);
PPC_FUNC_IMPL(__imp__sub_8257E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E550"))) PPC_WEAK_FUNC(sub_8257E550);
PPC_FUNC_IMPL(__imp__sub_8257E550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// beq cr6,0x8257e574
	if (cr6.eq) goto loc_8257E574;
	// b 0x82573040
	sub_82573040(ctx, base);
	return;
loc_8257E574:
	// b 0x82573040
	sub_82573040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E578"))) PPC_WEAK_FUNC(sub_8257E578);
PPC_FUNC_IMPL(__imp__sub_8257E578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8257E580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r3,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257e5fc
	if (cr6.eq) goto loc_8257E5FC;
loc_8257E5C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257E5E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257e608
	if (!cr6.eq) goto loc_8257E608;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8257e5c4
	if (!cr6.eq) goto loc_8257E5C4;
loc_8257E5FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8257E608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E614"))) PPC_WEAK_FUNC(sub_8257E614);
PPC_FUNC_IMPL(__imp__sub_8257E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E618"))) PPC_WEAK_FUNC(sub_8257E618);
PPC_FUNC_IMPL(__imp__sub_8257E618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8257e650
	if (cr6.eq) goto loc_8257E650;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257E630:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8257e630
	if (!cr6.eq) goto loc_8257E630;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_8257E650:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E65C"))) PPC_WEAK_FUNC(sub_8257E65C);
PPC_FUNC_IMPL(__imp__sub_8257E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E660"))) PPC_WEAK_FUNC(sub_8257E660);
PPC_FUNC_IMPL(__imp__sub_8257E660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257E668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257e928
	if (cr6.eq) goto loc_8257E928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x8257e6b4
	if (!cr6.lt) goto loc_8257E6B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8257E6B4;
	sub_831CC150(ctx, base);
loc_8257E6B4:
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r10,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8257e804
	if (!cr6.lt) goto loc_8257E804;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8257e6e4
	if (!cr6.lt) goto loc_8257E6E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8257e6e8
	goto loc_8257E6E8;
loc_8257E6E4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8257E6E8:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8257e6f4
	if (!cr6.lt) goto loc_8257E6F4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8257E6F4:
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825730a8
	ctx.lr = 0x8257E70C;
	sub_825730A8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x8257e748
	if (cr6.eq) goto loc_8257E748;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_8257E730:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257e740
	if (cr6.eq) goto loc_8257E740;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8257E740:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8257e730
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E730;
loc_8257E748:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x8257e778
	if (cr6.eq) goto loc_8257E778;
loc_8257E758:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e768
	if (cr6.eq) goto loc_8257E768;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8257E768:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8257e758
	if (!cr6.eq) goto loc_8257E758;
loc_8257E778:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x8257e7bc
	if (cr6.eq) goto loc_8257E7BC;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_8257E79C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257e7ac
	if (cr6.eq) goto loc_8257E7AC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8257E7AC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257e79c
	if (!cr6.eq) goto loc_8257E79C;
loc_8257E7BC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x8257e7e4
	if (cr6.eq) goto loc_8257E7E4;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257E7E4;
	sub_82573040(ctx, base);
loc_8257E7E4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8257E804:
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x8257e8ac
	if (!cr6.lt) goto loc_8257E8AC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// beq cr6,0x8257e84c
	if (cr6.eq) goto loc_8257E84C;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_8257E82C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e83c
	if (cr6.eq) goto loc_8257E83C;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8257E83C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8257e82c
	if (!cr6.eq) goto loc_8257E82C;
loc_8257E84C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// subf. r10,r9,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8257e878
	if (cr0.eq) goto loc_8257E878;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8257E864:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257e870
	if (cr6.eq) goto loc_8257E870;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8257E870:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8257e864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E864;
loc_8257E878:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8257e928
	if (cr6.eq) goto loc_8257E928;
loc_8257E894:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257e894
	if (!cr6.eq) goto loc_8257E894;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8257E8AC:
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x8257e8e8
	if (cr6.eq) goto loc_8257E8E8;
loc_8257E8C8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e8d8
	if (cr6.eq) goto loc_8257E8D8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_8257E8D8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8257e8c8
	if (!cr6.eq) goto loc_8257E8C8;
loc_8257E8E8:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// subf r10,r31,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x831ce420
	ctx.lr = 0x8257E908;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257e928
	if (cr6.eq) goto loc_8257E928;
loc_8257E918:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257e918
	if (!cr6.eq) goto loc_8257E918;
loc_8257E928:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E930"))) PPC_WEAK_FUNC(sub_8257E930);
PPC_FUNC_IMPL(__imp__sub_8257E930) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,20132
	ctx.r10.s64 = ctx.r11.s64 + 20132;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257e968
	if (cr6.eq) goto loc_8257E968;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257E968;
	sub_82573040(ctx, base);
loc_8257E968:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82573040
	ctx.lr = 0x8257E988;
	sub_82573040(ctx, base);
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

__attribute__((alias("__imp__sub_8257E99C"))) PPC_WEAK_FUNC(sub_8257E99C);
PPC_FUNC_IMPL(__imp__sub_8257E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E9A0"))) PPC_WEAK_FUNC(sub_8257E9A0);
PPC_FUNC_IMPL(__imp__sub_8257E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257E9A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257e9e4
	if (!cr6.gt) goto loc_8257E9E4;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8257e660
	ctx.lr = 0x8257E9DC;
	sub_8257E660(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8257E9E4:
	// bge cr6,0x8257ea18
	if (!cr6.lt) goto loc_8257EA18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8257ea18
	if (cr6.eq) goto loc_8257EA18;
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
	ctx.lr = 0x8257EA10;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8257EA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EA20"))) PPC_WEAK_FUNC(sub_8257EA20);
PPC_FUNC_IMPL(__imp__sub_8257EA20) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x825730a8
	ctx.lr = 0x8257EA48;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ea68
	if (cr6.eq) goto loc_8257EA68;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8257ea6c
	goto loc_8257EA6C;
loc_8257EA68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257EA6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257e9a0
	ctx.lr = 0x8257EA7C;
	sub_8257E9A0(ctx, base);
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

__attribute__((alias("__imp__sub_8257EA98"))) PPC_WEAK_FUNC(sub_8257EA98);
PPC_FUNC_IMPL(__imp__sub_8257EA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257EAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,20132
	ctx.r10.s64 = ctx.r11.s64 + 20132;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ead4
	if (cr6.eq) goto loc_8257EAD4;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257EAD4;
	sub_82573040(ctx, base);
loc_8257EAD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82573040
	ctx.lr = 0x8257EAF4;
	sub_82573040(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257eb14
	if (cr6.eq) goto loc_8257EB14;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257EB10;
	sub_82573040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8257EB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB1C"))) PPC_WEAK_FUNC(sub_8257EB1C);
PPC_FUNC_IMPL(__imp__sub_8257EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EB20"))) PPC_WEAK_FUNC(sub_8257EB20);
PPC_FUNC_IMPL(__imp__sub_8257EB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257EB28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8257ea20
	ctx.lr = 0x8257EB44;
	sub_8257EA20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257ec10
	if (cr6.eq) goto loc_8257EC10;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// beq cr6,0x8257ebd4
	if (cr6.eq) goto loc_8257EBD4;
loc_8257EB64:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8257ebc0
	if (cr6.eq) goto loc_8257EBC0;
	// addi r28,r26,-1
	ctx.r28.s64 = ctx.r26.s64 + -1;
loc_8257EB74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EB8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// and r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 & ctx.r28.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stwx r5,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x8257eb74
	if (!cr6.eq) goto loc_8257EB74;
loc_8257EBC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257eb64
	if (!cr6.eq) goto loc_8257EB64;
loc_8257EBD4:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ebf0
	if (cr6.eq) goto loc_8257EBF0;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257EBF0;
	sub_82573040(ctx, base);
loc_8257EBF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82573040
	ctx.lr = 0x8257EC10;
	sub_82573040(ctx, base);
loc_8257EC10:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EC1C"))) PPC_WEAK_FUNC(sub_8257EC1C);
PPC_FUNC_IMPL(__imp__sub_8257EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EC20"))) PPC_WEAK_FUNC(sub_8257EC20);
PPC_FUNC_IMPL(__imp__sub_8257EC20) {
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
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20132
	ctx.r9.s64 = ctx.r10.s64 + 20132;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,18
	ctx.r10.s64 = ctx.r3.s64 + 18;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r6,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// bl 0x8257e4b8
	ctx.lr = 0x8257EC68;
	sub_8257E4B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257eb20
	ctx.lr = 0x8257EC74;
	sub_8257EB20(ctx, base);
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

__attribute__((alias("__imp__sub_8257EC8C"))) PPC_WEAK_FUNC(sub_8257EC8C);
PPC_FUNC_IMPL(__imp__sub_8257EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EC90"))) PPC_WEAK_FUNC(sub_8257EC90);
PPC_FUNC_IMPL(__imp__sub_8257EC90) {
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
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257ed14
	if (!cr6.eq) goto loc_8257ED14;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8257ed14
	if (!cr6.lt) goto loc_8257ED14;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// ble cr6,0x8257ed14
	if (!cr6.gt) goto loc_8257ED14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,20084
	ctx.r8.s64 = ctx.r10.s64 + 20084;
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
	// rlwinm r7,r9,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFC;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8257eb20
	ctx.lr = 0x8257ED00;
	sub_8257EB20(ctx, base);
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
loc_8257ED14:
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

__attribute__((alias("__imp__sub_8257ED28"))) PPC_WEAK_FUNC(sub_8257ED28);
PPC_FUNC_IMPL(__imp__sub_8257ED28) {
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
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257edb4
	if (!cr6.eq) goto loc_8257EDB4;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257edb4
	if (cr6.eq) goto loc_8257EDB4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x8257edb4
	if (!cr6.lt) goto loc_8257EDB4;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r9,20084
	ctx.r7.s64 = ctx.r9.s64 + 20084;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// rlwinm r8,r10,2,14,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8257eb20
	ctx.lr = 0x8257EDA0;
	sub_8257EB20(ctx, base);
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
loc_8257EDB4:
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

__attribute__((alias("__imp__sub_8257EDC8"))) PPC_WEAK_FUNC(sub_8257EDC8);
PPC_FUNC_IMPL(__imp__sub_8257EDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8257EDD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x8257ec90
	ctx.lr = 0x8257EDEC;
	sub_8257EC90(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r11,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r7,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8257ee5c
	if (cr6.eq) goto loc_8257EE5C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8257EE24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EE40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257ee88
	if (!cr6.eq) goto loc_8257EE88;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r30,r11,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8257ee24
	if (!cr6.eq) goto loc_8257EE24;
loc_8257EE5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8257EE88:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE9C"))) PPC_WEAK_FUNC(sub_8257EE9C);
PPC_FUNC_IMPL(__imp__sub_8257EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EEA0"))) PPC_WEAK_FUNC(sub_8257EEA0);
PPC_FUNC_IMPL(__imp__sub_8257EEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8257EEA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r11,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// rlwinm r24,r3,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r24
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8257ef34
	if (cr6.eq) goto loc_8257EF34;
loc_8257EEF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r29,r31,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8257EF18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8257ef40
	if (!cr6.eq) goto loc_8257EF40;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8257eef4
	if (!cr6.eq) goto loc_8257EEF4;
loc_8257EF34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8257EF40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EF58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8257ef34
	if (cr6.eq) goto loc_8257EF34;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x8257ef7c
	if (!cr6.eq) goto loc_8257EF7C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r29,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r29.u32);
	// b 0x8257ef84
	goto loc_8257EF84;
loc_8257EF7C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stwx r29,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r29.u32);
loc_8257EF84:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8257ed28
	ctx.lr = 0x8257EF98;
	sub_8257ED28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EFA4"))) PPC_WEAK_FUNC(sub_8257EFA4);
PPC_FUNC_IMPL(__imp__sub_8257EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EFA8"))) PPC_WEAK_FUNC(sub_8257EFA8);
PPC_FUNC_IMPL(__imp__sub_8257EFA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d24b8
	sub_832D24B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EFAC"))) PPC_WEAK_FUNC(sub_8257EFAC);
PPC_FUNC_IMPL(__imp__sub_8257EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EFB0"))) PPC_WEAK_FUNC(sub_8257EFB0);
PPC_FUNC_IMPL(__imp__sub_8257EFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d27b0
	sub_832D27B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EFB4"))) PPC_WEAK_FUNC(sub_8257EFB4);
PPC_FUNC_IMPL(__imp__sub_8257EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EFB8"))) PPC_WEAK_FUNC(sub_8257EFB8);
PPC_FUNC_IMPL(__imp__sub_8257EFB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EFC8"))) PPC_WEAK_FUNC(sub_8257EFC8);
PPC_FUNC_IMPL(__imp__sub_8257EFC8) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825749c0
	sub_825749C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EFD4"))) PPC_WEAK_FUNC(sub_8257EFD4);
PPC_FUNC_IMPL(__imp__sub_8257EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257EFD8"))) PPC_WEAK_FUNC(sub_8257EFD8);
PPC_FUNC_IMPL(__imp__sub_8257EFD8) {
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
	// lis r11,-23162
	ctx.r11.s64 = -1517944832;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r31,r11,34817
	ctx.r31.u64 = ctx.r11.u64 | 34817;
loc_8257EFF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574b40
	ctx.lr = 0x8257F008;
	sub_82574B40(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8257f064
	if (cr6.eq) goto loc_8257F064;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8257f058
	if (cr6.eq) goto loc_8257F058;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574b40
	ctx.lr = 0x8257F03C;
	sub_82574B40(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8257f064
	if (!cr6.eq) goto loc_8257F064;
loc_8257F058:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82545850
	ctx.lr = 0x8257F060;
	sub_82545850(ctx, base);
	// b 0x8257eff8
	goto loc_8257EFF8;
loc_8257F064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F07C"))) PPC_WEAK_FUNC(sub_8257F07C);
PPC_FUNC_IMPL(__imp__sub_8257F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F080"))) PPC_WEAK_FUNC(sub_8257F080);
PPC_FUNC_IMPL(__imp__sub_8257F080) {
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
	// lis r11,-23162
	ctx.r11.s64 = -1517944832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r11,34817
	ctx.r30.u64 = ctx.r11.u64 | 34817;
loc_8257F0A0:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b40
	ctx.lr = 0x8257F0B0;
	sub_82574B40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257f0d0
	if (cr6.eq) goto loc_8257F0D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwsync 
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f0d4
	goto loc_8257F0D4;
loc_8257F0D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F0D4:
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f140
	if (cr6.eq) goto loc_8257F140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257f134
	if (cr6.eq) goto loc_8257F134;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b40
	ctx.lr = 0x8257F100;
	sub_82574B40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257f120
	if (cr6.eq) goto loc_8257F120;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwsync 
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f124
	goto loc_8257F124;
loc_8257F120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F124:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257f140
	if (!cr6.eq) goto loc_8257F140;
loc_8257F134:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82545850
	ctx.lr = 0x8257F13C;
	sub_82545850(ctx, base);
	// b 0x8257f0a0
	goto loc_8257F0A0;
loc_8257F140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F158"))) PPC_WEAK_FUNC(sub_8257F158);
PPC_FUNC_IMPL(__imp__sub_8257F158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwsync 
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257f188
	if (cr6.eq) goto loc_8257F188;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwsync 
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x835751c0
	sub_835751C0(ctx, base);
	return;
loc_8257F188:
	// b 0x82574b80
	sub_82574B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F18C"))) PPC_WEAK_FUNC(sub_8257F18C);
PPC_FUNC_IMPL(__imp__sub_8257F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F190"))) PPC_WEAK_FUNC(sub_8257F190);
PPC_FUNC_IMPL(__imp__sub_8257F190) {
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
	// lis r11,-23162
	ctx.r11.s64 = -1517944832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r30,r11,34817
	ctx.r30.u64 = ctx.r11.u64 | 34817;
loc_8257F1B0:
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574af0
	ctx.lr = 0x8257F1BC;
	sub_82574AF0(ctx, base);
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f1d8
	if (cr6.eq) goto loc_8257F1D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b18
	ctx.lr = 0x8257F1D0;
	sub_82574B18(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f204
	goto loc_8257F204;
loc_8257F1D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257f200
	if (cr6.eq) goto loc_8257F200;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257f200
	if (!cr6.eq) goto loc_8257F200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b18
	ctx.lr = 0x8257F1F8;
	sub_82574B18(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f204
	goto loc_8257F204;
loc_8257F200:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F204:
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f290
	if (cr6.eq) goto loc_8257F290;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257f284
	if (cr6.eq) goto loc_8257F284;
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574af0
	ctx.lr = 0x8257F22C;
	sub_82574AF0(ctx, base);
	// rlwinm r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f248
	if (cr6.eq) goto loc_8257F248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b18
	ctx.lr = 0x8257F240;
	sub_82574B18(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f274
	goto loc_8257F274;
loc_8257F248:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257f270
	if (cr6.eq) goto loc_8257F270;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257f270
	if (!cr6.eq) goto loc_8257F270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b18
	ctx.lr = 0x8257F268;
	sub_82574B18(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8257f274
	goto loc_8257F274;
loc_8257F270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F274:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257f290
	if (!cr6.eq) goto loc_8257F290;
loc_8257F284:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82545850
	ctx.lr = 0x8257F28C;
	sub_82545850(ctx, base);
	// b 0x8257f1b0
	goto loc_8257F1B0;
loc_8257F290:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F2A8"))) PPC_WEAK_FUNC(sub_8257F2A8);
PPC_FUNC_IMPL(__imp__sub_8257F2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257F2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82574b80
	ctx.lr = 0x8257F2C4;
	sub_82574B80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257f2f0
	if (!cr6.eq) goto loc_8257F2F0;
	// lwsync 
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825749c0
	ctx.lr = 0x8257F2E0;
	sub_825749C0(ctx, base);
	// lwsync 
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825749c0
	ctx.lr = 0x8257F2F0;
	sub_825749C0(ctx, base);
loc_8257F2F0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F304"))) PPC_WEAK_FUNC(sub_8257F304);
PPC_FUNC_IMPL(__imp__sub_8257F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F308"))) PPC_WEAK_FUNC(sub_8257F308);
PPC_FUNC_IMPL(__imp__sub_8257F308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8257F310;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-23162
	ctx.r11.s64 = -1517944832;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r25,r11,34817
	ctx.r25.u64 = ctx.r11.u64 | 34817;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,24
	ctx.r28.s64 = 24;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8257F334:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwsync 
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257f350
	if (!cr6.eq) goto loc_8257F350;
	// bl 0x82583510
	ctx.lr = 0x8257F34C;
	sub_82583510(ctx, base);
	// stwx r3,r28,r27
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r3.u32);
loc_8257F350:
	// lwzx r30,r28,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8257f3a0
	if (cr6.eq) goto loc_8257F3A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82574b40
	ctx.lr = 0x8257F36C;
	sub_82574B40(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257f384
	if (!cr6.eq) goto loc_8257F384;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8257f3b0
	goto loc_8257F3B0;
loc_8257F384:
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// bl 0x825749c0
	ctx.lr = 0x8257F398;
	sub_825749C0(ctx, base);
	// lwsync 
	// b 0x8257f3ac
	goto loc_8257F3AC;
loc_8257F3A0:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574af0
	ctx.lr = 0x8257F3AC;
	sub_82574AF0(ctx, base);
loc_8257F3AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8257F3B0:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8257f3d0
	if (!cr6.eq) goto loc_8257F3D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82545850
	ctx.lr = 0x8257F3CC;
	sub_82545850(ctx, base);
	// b 0x8257f334
	goto loc_8257F334;
loc_8257F3D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F3DC"))) PPC_WEAK_FUNC(sub_8257F3DC);
PPC_FUNC_IMPL(__imp__sub_8257F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F3E0"))) PPC_WEAK_FUNC(sub_8257F3E0);
PPC_FUNC_IMPL(__imp__sub_8257F3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20149
	ctx.r3.s64 = ctx.r11.s64 + 20149;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F3EC"))) PPC_WEAK_FUNC(sub_8257F3EC);
PPC_FUNC_IMPL(__imp__sub_8257F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F3F0"))) PPC_WEAK_FUNC(sub_8257F3F0);
PPC_FUNC_IMPL(__imp__sub_8257F3F0) {
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
	// lbz r10,29(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,20152
	ctx.r9.s64 = ctx.r11.s64 + 20152;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8257f42c
	if (cr6.eq) goto loc_8257F42C;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257F42C;
	sub_82573040(ctx, base);
loc_8257F42C:
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257F43C;
	sub_82573040(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83102db0
	ctx.lr = 0x8257F444;
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

__attribute__((alias("__imp__sub_8257F458"))) PPC_WEAK_FUNC(sub_8257F458);
PPC_FUNC_IMPL(__imp__sub_8257F458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// lwsync 
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F470"))) PPC_WEAK_FUNC(sub_8257F470);
PPC_FUNC_IMPL(__imp__sub_8257F470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwsync 
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F484"))) PPC_WEAK_FUNC(sub_8257F484);
PPC_FUNC_IMPL(__imp__sub_8257F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F488"))) PPC_WEAK_FUNC(sub_8257F488);
PPC_FUNC_IMPL(__imp__sub_8257F488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x8257F490;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r19,r3,36
	ctx.r19.s64 = ctx.r3.s64 + 36;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x8257f080
	ctx.lr = 0x8257F4A8;
	sub_8257F080(ctx, base);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82574bd0
	ctx.lr = 0x8257F4B0;
	sub_82574BD0(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r28,r31,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r31.s64;
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r22,r31
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r31.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8257f6cc
	if (cr6.gt) goto loc_8257F6CC;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// add r30,r27,r20
	ctx.r30.u64 = ctx.r27.u64 + ctx.r20.u64;
	// ori r21,r11,1
	ctx.r21.u64 = ctx.r11.u64 | 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825730a8
	ctx.lr = 0x8257F4F0;
	sub_825730A8(ctx, base);
	// lbz r10,29(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// lwz r25,16(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257f63c
	if (cr6.eq) goto loc_8257F63C;
	// lhz r11,30(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// beq cr6,0x8257f600
	if (cr6.eq) goto loc_8257F600;
	// bl 0x825730a8
	ctx.lr = 0x8257F520;
	sub_825730A8(ctx, base);
	// lwz r23,32(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// beq cr6,0x8257f5a4
	if (cr6.eq) goto loc_8257F5A4;
loc_8257F530:
	// divwu r11,r31,r30
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r30.u32);
	// lhz r10,30(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// divwu r9,r31,r27
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r27.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// subf r18,r7,r31
	ctx.r18.s64 = ctx.r31.s64 - ctx.r7.s64;
	// mullw r5,r9,r27
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r18,r10
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r10.s32);
	// subf r17,r5,r31
	ctx.r17.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mullw r11,r17,r10
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r10.s32);
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r30,0
	// twllei r27,0
	// bctrl 
	ctx.lr = 0x8257F57C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r17,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// stwx r28,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r28.u32);
	// lwzx r3,r4,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stwx r9,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u32);
	// bne cr6,0x8257f530
	if (!cr6.eq) goto loc_8257F530;
loc_8257F5A4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82573040
	ctx.lr = 0x8257F5B0;
	sub_82573040(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82573040
	ctx.lr = 0x8257F5BC;
	sub_82573040(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8257f5f8
	if (cr6.eq) goto loc_8257F5F8;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
loc_8257F5C8:
	// divwu r11,r31,r30
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r30.u32);
	// lhz r10,30(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// twllei r30,0
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 | 1;
	// stwx r5,r6,r26
	PPC_STORE_U32(ctx.r6.u32 + ctx.r26.u32, ctx.r5.u32);
	// bdnz 0x8257f5c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257F5C8;
loc_8257F5F8:
	// stw r24,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
	// b 0x8257f6c4
	goto loc_8257F6C4;
loc_8257F600:
	// bl 0x825730a8
	ctx.lr = 0x8257F604;
	sub_825730A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257f634
	if (cr6.eq) goto loc_8257F634;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8257F618:
	// lhz r9,30(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8257f618
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257F618;
loc_8257F634:
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// b 0x8257f6c4
	goto loc_8257F6C4;
loc_8257F63C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8257f694
	if (cr6.eq) goto loc_8257F694;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, xer);
	// beq cr6,0x8257f688
	if (cr6.eq) goto loc_8257F688;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_8257F650:
	// divwu r11,r31,r27
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r27.u32);
	// divwu r10,r31,r30
	ctx.r10.u32 = PPCDivide(ctx.r31.u32, ctx.r30.u32);
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r7,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r7.s64;
	// twllei r27,0
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r30,0
	// lwzx r3,r6,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r3,r4,r26
	PPC_STORE_U32(ctx.r4.u32 + ctx.r26.u32, ctx.r3.u32);
	// bdnz 0x8257f650
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257F650;
loc_8257F688:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82573040
	ctx.lr = 0x8257F694;
	sub_82573040(ctx, base);
loc_8257F694:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x8257f6c4
	if (cr6.eq) goto loc_8257F6C4;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257F6A4:
	// divwu r10,r31,r30
	ctx.r10.u32 = PPCDivide(ctx.r31.u32, ctx.r30.u32);
	// twllei r30,0
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r26
	PPC_STORE_U32(ctx.r7.u32 + ctx.r26.u32, ctx.r11.u32);
	// bdnz 0x8257f6a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257F6A4;
loc_8257F6C4:
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
loc_8257F6CC:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8257f158
	ctx.lr = 0x8257F6D4;
	sub_8257F158(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F6DC"))) PPC_WEAK_FUNC(sub_8257F6DC);
PPC_FUNC_IMPL(__imp__sub_8257F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F6E0"))) PPC_WEAK_FUNC(sub_8257F6E0);
PPC_FUNC_IMPL(__imp__sub_8257F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257F6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825730a8
	ctx.lr = 0x8257F708;
	sub_825730A8(ctx, base);
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bl 0x825730a8
	ctx.lr = 0x8257F724;
	sub_825730A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8257f754
	if (cr6.eq) goto loc_8257F754;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_8257F738:
	// lhz r9,30(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8257f738
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257F738;
loc_8257F754:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F768"))) PPC_WEAK_FUNC(sub_8257F768);
PPC_FUNC_IMPL(__imp__sub_8257F768) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20152
	ctx.r9.s64 = ctx.r10.s64 + 20152;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r6,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r6.u8);
	// bne cr6,0x8257f7c4
	if (!cr6.eq) goto loc_8257F7C4;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8257f7c8
	if (!cr6.eq) goto loc_8257F7C8;
loc_8257F7C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8257F7C8:
	// addi r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 3;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r10,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r10.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r8,r9,0,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// sth r8,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r8.u16);
	// bl 0x831f3ad8
	ctx.lr = 0x8257F7E8;
	sub_831F3AD8(ctx, base);
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// bge cr6,0x8257f7f4
	if (!cr6.lt) goto loc_8257F7F4;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8257F7F4:
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f81c
	if (cr6.eq) goto loc_8257F81C;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257f81c
	if (!cr6.eq) goto loc_8257F81C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257f6e0
	ctx.lr = 0x8257F818;
	sub_8257F6E0(ctx, base);
	// b 0x8257f828
	goto loc_8257F828;
loc_8257F81C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257f488
	ctx.lr = 0x8257F828;
	sub_8257F488(ctx, base);
loc_8257F828:
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

__attribute__((alias("__imp__sub_8257F844"))) PPC_WEAK_FUNC(sub_8257F844);
PPC_FUNC_IMPL(__imp__sub_8257F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F848"))) PPC_WEAK_FUNC(sub_8257F848);
PPC_FUNC_IMPL(__imp__sub_8257F848) {
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
	// lbz r10,29(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,20152
	ctx.r9.s64 = ctx.r11.s64 + 20152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8257f88c
	if (cr6.eq) goto loc_8257F88C;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257F88C;
	sub_82573040(ctx, base);
loc_8257F88C:
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8257F89C;
	sub_82573040(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83102db0
	ctx.lr = 0x8257F8A4;
	sub_83102DB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f8bc
	if (cr6.eq) goto loc_8257F8BC;
	// bl 0x82416268
	ctx.lr = 0x8257F8B8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8257F8BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F8D4"))) PPC_WEAK_FUNC(sub_8257F8D4);
PPC_FUNC_IMPL(__imp__sub_8257F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F8D8"))) PPC_WEAK_FUNC(sub_8257F8D8);
PPC_FUNC_IMPL(__imp__sub_8257F8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257F8E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
loc_8257F8F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82574c18
	ctx.lr = 0x8257F8F8;
	sub_82574C18(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8257f930
	if (cr6.gt) goto loc_8257F930;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257f9a8
	if (cr6.eq) goto loc_8257F9A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257f488
	ctx.lr = 0x8257F92C;
	sub_8257F488(ctx, base);
	// b 0x8257f8f0
	goto loc_8257F8F0;
loc_8257F930:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// divwu r9,r31,r11
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r6,r28,31
	ctx.r6.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8257f8f0
	if (!cr6.eq) goto loc_8257F8F0;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82574b40
	ctx.lr = 0x8257F970;
	sub_82574B40(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x8257f8f0
	if (!cr6.eq) goto loc_8257F8F0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bne cr6,0x8257f988
	if (!cr6.eq) goto loc_8257F988;
	// rlwinm r31,r28,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
loc_8257F988:
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x8257F990;
	sub_825749E0(ctx, base);
	// ori r11,r31,2
	ctx.r11.u64 = ctx.r31.u64 | 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwsync 
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8257F9A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F9B4"))) PPC_WEAK_FUNC(sub_8257F9B4);
PPC_FUNC_IMPL(__imp__sub_8257F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F9B8"))) PPC_WEAK_FUNC(sub_8257F9B8);
PPC_FUNC_IMPL(__imp__sub_8257F9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8257F9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
loc_8257F9D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82574c18
	ctx.lr = 0x8257F9D8;
	sub_82574C18(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257fa78
	if (cr6.eq) goto loc_8257FA78;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// divwu r9,r31,r11
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8257f9d0
	if (!cr6.eq) goto loc_8257F9D0;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// ori r28,r11,2
	ctx.r28.u64 = ctx.r11.u64 | 2;
	// bl 0x82574b40
	ctx.lr = 0x8257FA38;
	sub_82574B40(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x8257f9d0
	if (!cr6.eq) goto loc_8257F9D0;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82574a08
	ctx.lr = 0x8257FA48;
	sub_82574A08(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// divwu r9,r31,r11
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwsync 
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8257FA78:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FA84"))) PPC_WEAK_FUNC(sub_8257FA84);
PPC_FUNC_IMPL(__imp__sub_8257FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FA88"))) PPC_WEAK_FUNC(sub_8257FA88);
PPC_FUNC_IMPL(__imp__sub_8257FA88) {
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
	// beq cr6,0x8257fab8
	if (cr6.eq) goto loc_8257FAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2950
	ctx.lr = 0x8257FAB4;
	sub_832D2950(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8257FAB8:
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

__attribute__((alias("__imp__sub_8257FAD0"))) PPC_WEAK_FUNC(sub_8257FAD0);
PPC_FUNC_IMPL(__imp__sub_8257FAD0) {
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
	// bl 0x825904b8
	ctx.lr = 0x8257FAE8;
	sub_825904B8(ctx, base);
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

__attribute__((alias("__imp__sub_8257FB00"))) PPC_WEAK_FUNC(sub_8257FB00);
PPC_FUNC_IMPL(__imp__sub_8257FB00) {
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
	// bl 0x825905d8
	ctx.lr = 0x8257FB18;
	sub_825905D8(ctx, base);
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

__attribute__((alias("__imp__sub_8257FB30"))) PPC_WEAK_FUNC(sub_8257FB30);
PPC_FUNC_IMPL(__imp__sub_8257FB30) {
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
	// bl 0x82590528
	ctx.lr = 0x8257FB48;
	sub_82590528(ctx, base);
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

__attribute__((alias("__imp__sub_8257FB60"))) PPC_WEAK_FUNC(sub_8257FB60);
PPC_FUNC_IMPL(__imp__sub_8257FB60) {
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
	// bl 0x82590598
	ctx.lr = 0x8257FB78;
	sub_82590598(ctx, base);
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

__attribute__((alias("__imp__sub_8257FB90"))) PPC_WEAK_FUNC(sub_8257FB90);
PPC_FUNC_IMPL(__imp__sub_8257FB90) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r7,r9,32768
	ctx.r7.u64 = ctx.r9.u64 | 32768;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lfd f0,20208(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20208);
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// bl 0x82aabcb0
	ctx.lr = 0x8257FBE0;
	sub_82AABCB0(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8257FC00"))) PPC_WEAK_FUNC(sub_8257FC00);
PPC_FUNC_IMPL(__imp__sub_8257FC00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r4,464
	ctx.r3.s64 = ctx.r4.s64 + 464;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8257FC24;
	sub_8257EFD8(ctx, base);
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FC54"))) PPC_WEAK_FUNC(sub_8257FC54);
PPC_FUNC_IMPL(__imp__sub_8257FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FC58"))) PPC_WEAK_FUNC(sub_8257FC58);
PPC_FUNC_IMPL(__imp__sub_8257FC58) {
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
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8258fc18
	ctx.lr = 0x8257FC74;
	sub_8258FC18(ctx, base);
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

__attribute__((alias("__imp__sub_8257FC8C"))) PPC_WEAK_FUNC(sub_8257FC8C);
PPC_FUNC_IMPL(__imp__sub_8257FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FC90"))) PPC_WEAK_FUNC(sub_8257FC90);
PPC_FUNC_IMPL(__imp__sub_8257FC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257FC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,456
	ctx.r29.s64 = ctx.r3.s64 + 456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8257FCB0;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8257fcf8
	if (!cr6.eq) goto loc_8257FCF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257fcf0
	if (cr6.eq) goto loc_8257FCF0;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// b 0x8257fcf8
	goto loc_8257FCF8;
loc_8257FCF0:
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
loc_8257FCF8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8257efc8
	ctx.lr = 0x8257FD0C;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FD14"))) PPC_WEAK_FUNC(sub_8257FD14);
PPC_FUNC_IMPL(__imp__sub_8257FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FD18"))) PPC_WEAK_FUNC(sub_8257FD18);
PPC_FUNC_IMPL(__imp__sub_8257FD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257FD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,456
	ctx.r29.s64 = ctx.r3.s64 + 456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8257FD38;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x8257fd88
	if (!cr0.eq) goto loc_8257FD88;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257fd60
	if (cr6.eq) goto loc_8257FD60;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x8257fd64
	goto loc_8257FD64;
loc_8257FD60:
	// stw r11,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r11.u32);
loc_8257FD64:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257fd74
	if (cr6.eq) goto loc_8257FD74;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8257fd78
	goto loc_8257FD78;
loc_8257FD74:
	// stw r10,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r10.u32);
loc_8257FD78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8257FD88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8257FD90;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FD98"))) PPC_WEAK_FUNC(sub_8257FD98);
PPC_FUNC_IMPL(__imp__sub_8257FD98) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,476
	ctx.r3.s64 = ctx.r3.s64 + 476;
	// b 0x825906c0
	sub_825906C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FDA4"))) PPC_WEAK_FUNC(sub_8257FDA4);
PPC_FUNC_IMPL(__imp__sub_8257FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FDA8"))) PPC_WEAK_FUNC(sub_8257FDA8);
PPC_FUNC_IMPL(__imp__sub_8257FDA8) {
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
	// bl 0x8257efd8
	ctx.lr = 0x8257FDC8;
	sub_8257EFD8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x8257FDD0;
	sub_82574A08(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8257efc8
	ctx.lr = 0x8257FDF4;
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

__attribute__((alias("__imp__sub_8257FE0C"))) PPC_WEAK_FUNC(sub_8257FE0C);
PPC_FUNC_IMPL(__imp__sub_8257FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FE10"))) PPC_WEAK_FUNC(sub_8257FE10);
PPC_FUNC_IMPL(__imp__sub_8257FE10) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82574a08
	ctx.lr = 0x8257FE2C;
	sub_82574A08(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8257FE5C"))) PPC_WEAK_FUNC(sub_8257FE5C);
PPC_FUNC_IMPL(__imp__sub_8257FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FE60"))) PPC_WEAK_FUNC(sub_8257FE60);
PPC_FUNC_IMPL(__imp__sub_8257FE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8257FE68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82590890
	ctx.lr = 0x8257FE78;
	sub_82590890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257fea8
	if (!cr6.eq) goto loc_8257FEA8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8257fea4
	if (cr6.eq) goto loc_8257FEA4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8257FEA4:
	// lwz r30,492(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
loc_8257FEA8:
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x825749e0
	ctx.lr = 0x8257FEB0;
	sub_825749E0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82590058
	ctx.lr = 0x8257FEBC;
	sub_82590058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FED0"))) PPC_WEAK_FUNC(sub_8257FED0);
PPC_FUNC_IMPL(__imp__sub_8257FED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8257fefc
	if (!cr6.eq) goto loc_8257FEFC;
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8257fefc
	if (cr6.lt) goto loc_8257FEFC;
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8257ff00
	if (cr6.eq) goto loc_8257FF00;
loc_8257FEFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257FF00:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FF08"))) PPC_WEAK_FUNC(sub_8257FF08);
PPC_FUNC_IMPL(__imp__sub_8257FF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8257FF10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,296
	ctx.r30.s64 = ctx.r3.s64 + 296;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8257FF24:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8257ff54
	if (cr6.eq) goto loc_8257FF54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8257FF3C;
	sub_8257EFD8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8257ff70
	if (!cr6.eq) goto loc_8257FF70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8257FF54;
	sub_8257EFC8(ctx, base);
loc_8257FF54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x8257ff24
	if (cr6.lt) goto loc_8257FF24;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8257FF70:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x8257FF78;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r28,76
	ctx.r3.s64 = ctx.r28.s64 + 76;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x825749e0
	ctx.lr = 0x8257FF98;
	sub_825749E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8257FFA0;
	sub_8257EFC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FFB4"))) PPC_WEAK_FUNC(sub_8257FFB4);
PPC_FUNC_IMPL(__imp__sub_8257FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FFB8"))) PPC_WEAK_FUNC(sub_8257FFB8);
PPC_FUNC_IMPL(__imp__sub_8257FFB8) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// addi r10,r11,20216
	ctx.r10.s64 = ctx.r11.s64 + 20216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8258bf48
	ctx.lr = 0x8257FFE8;
	sub_8258BF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583b60
	ctx.lr = 0x8257FFF0;
	sub_82583B60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82580010
	if (cr6.eq) goto loc_82580010;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8258000C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82580010:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580028"))) PPC_WEAK_FUNC(sub_82580028);
PPC_FUNC_IMPL(__imp__sub_82580028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82580030;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82580060
	if (cr6.eq) goto loc_82580060;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// ori r10,r11,1025
	ctx.r10.u64 = ctx.r11.u64 | 1025;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82580060:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82580078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825800a4
	if (!cr6.eq) goto loc_825800A4;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r10,r11,1026
	ctx.r10.u64 = ctx.r11.u64 | 1026;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_825800A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8258b108
	ctx.lr = 0x825800B0;
	sub_8258B108(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825749e0
	ctx.lr = 0x825800C4;
	sub_825749E0(ctx, base);
	// addi r30,r29,368
	ctx.r30.s64 = ctx.r29.s64 + 368;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825800D4;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x825800E0;
	sub_825749E0(ctx, base);
	// lwz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// stw r28,392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 392, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x8257efc8
	ctx.lr = 0x825800FC;
	sub_8257EFC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580110"))) PPC_WEAK_FUNC(sub_82580110);
PPC_FUNC_IMPL(__imp__sub_82580110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82580118;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82580148
	if (cr6.eq) goto loc_82580148;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// ori r10,r11,1025
	ctx.r10.u64 = ctx.r11.u64 | 1025;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82580148:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82580160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8258018c
	if (!cr6.eq) goto loc_8258018C;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r10,r11,1026
	ctx.r10.u64 = ctx.r11.u64 | 1026;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8258018C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x825749e0
	ctx.lr = 0x825801A0;
	sub_825749E0(ctx, base);
	// addi r30,r29,404
	ctx.r30.s64 = ctx.r29.s64 + 404;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825801B0;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x825801BC;
	sub_825749E0(ctx, base);
	// lwz r10,428(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// stw r28,428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 428, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x8257efc8
	ctx.lr = 0x825801D8;
	sub_8257EFC8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825801EC"))) PPC_WEAK_FUNC(sub_825801EC);
PPC_FUNC_IMPL(__imp__sub_825801EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825801F0"))) PPC_WEAK_FUNC(sub_825801F0);
PPC_FUNC_IMPL(__imp__sub_825801F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x825801F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580298
	if (cr6.eq) goto loc_82580298;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8258022C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580290
	if (cr6.eq) goto loc_82580290;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82580284
	if (!cr6.eq) goto loc_82580284;
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// stw r24,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r24.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258027c
	if (cr6.eq) goto loc_8258027C;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82580284
	goto loc_82580284;
loc_8258027C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82580284:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_82580290:
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bdnz 0x8258022c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8258022C;
loc_82580298:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r26,r11,60
	ctx.r26.s64 = ctx.r11.s64 + 60;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8258032c
	if (cr6.eq) goto loc_8258032C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_825802B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82580320
	if (cr6.eq) goto loc_82580320;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x825749e0
	ctx.lr = 0x825802D0;
	sub_825749E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82580314
	if (!cr6.eq) goto loc_82580314;
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8258030c
	if (cr6.eq) goto loc_8258030C;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82580314
	goto loc_82580314;
loc_8258030C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
loc_82580314:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82580320:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x825802b4
	if (!cr0.eq) goto loc_825802B4;
loc_8258032C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580334"))) PPC_WEAK_FUNC(sub_82580334);
PPC_FUNC_IMPL(__imp__sub_82580334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580338"))) PPC_WEAK_FUNC(sub_82580338);
PPC_FUNC_IMPL(__imp__sub_82580338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82580340;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r27,r11,48
	ctx.r27.s64 = ctx.r11.s64 + 48;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825803f4
	if (cr6.eq) goto loc_825803F4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82580370:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825803e8
	if (cr6.eq) goto loc_825803E8;
	// addi r29,r30,456
	ctx.r29.s64 = ctx.r30.s64 + 456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580390;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825803d4
	if (!cr6.eq) goto loc_825803D4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825803cc
	if (cr6.eq) goto loc_825803CC;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// b 0x825803d4
	goto loc_825803D4;
loc_825803CC:
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
loc_825803D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8257efc8
	ctx.lr = 0x825803E8;
	sub_8257EFC8(ctx, base);
loc_825803E8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x82580370
	if (!cr0.eq) goto loc_82580370;
loc_825803F4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r11,60
	ctx.r26.s64 = ctx.r11.s64 + 60;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8258049c
	if (cr6.eq) goto loc_8258049C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82580410:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82580490
	if (cr6.eq) goto loc_82580490;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x825749e0
	ctx.lr = 0x8258042C;
	sub_825749E0(ctx, base);
	// addi r29,r30,456
	ctx.r29.s64 = ctx.r30.s64 + 456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580438;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8258047c
	if (!cr6.eq) goto loc_8258047C;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580474
	if (cr6.eq) goto loc_82580474;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// b 0x8258047c
	goto loc_8258047C;
loc_82580474:
	// stw r31,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r31.u32);
	// stw r31,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r31.u32);
loc_8258047C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580490;
	sub_8257EFC8(ctx, base);
loc_82580490:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x82580410
	if (!cr0.eq) goto loc_82580410;
loc_8258049C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825804A4"))) PPC_WEAK_FUNC(sub_825804A4);
PPC_FUNC_IMPL(__imp__sub_825804A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825804A8"))) PPC_WEAK_FUNC(sub_825804A8);
PPC_FUNC_IMPL(__imp__sub_825804A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825804B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8258055c
	if (cr6.eq) goto loc_8258055C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_825804DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82580550
	if (cr6.eq) goto loc_82580550;
	// addi r30,r25,456
	ctx.r30.s64 = ctx.r25.s64 + 456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825804FC;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x82580548
	if (!cr0.eq) goto loc_82580548;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580524
	if (cr6.eq) goto loc_82580524;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82580528
	goto loc_82580528;
loc_82580524:
	// stw r11,440(r25)
	PPC_STORE_U32(ctx.r25.u32 + 440, ctx.r11.u32);
loc_82580528:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580538
	if (cr6.eq) goto loc_82580538;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8258053c
	goto loc_8258053C;
loc_82580538:
	// stw r10,444(r25)
	PPC_STORE_U32(ctx.r25.u32 + 444, ctx.r10.u32);
loc_8258053C:
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_82580548:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82580550;
	sub_8257EFC8(ctx, base);
loc_82580550:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x825804dc
	if (!cr0.eq) goto loc_825804DC;
loc_8258055C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r11,60
	ctx.r27.s64 = ctx.r11.s64 + 60;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580600
	if (cr6.eq) goto loc_82580600;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82580578:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825805f4
	if (cr6.eq) goto loc_825805F4;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82574a08
	ctx.lr = 0x82580594;
	sub_82574A08(ctx, base);
	// addi r30,r25,456
	ctx.r30.s64 = ctx.r25.s64 + 456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825805A0;
	sub_8257EFD8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x825805ec
	if (!cr0.eq) goto loc_825805EC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825805c8
	if (cr6.eq) goto loc_825805C8;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x825805cc
	goto loc_825805CC;
loc_825805C8:
	// stw r11,440(r25)
	PPC_STORE_U32(ctx.r25.u32 + 440, ctx.r11.u32);
loc_825805CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825805dc
	if (cr6.eq) goto loc_825805DC;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x825805e0
	goto loc_825805E0;
loc_825805DC:
	// stw r10,444(r25)
	PPC_STORE_U32(ctx.r25.u32 + 444, ctx.r10.u32);
loc_825805E0:
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_825805EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825805F4;
	sub_8257EFC8(ctx, base);
loc_825805F4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82580578
	if (!cr0.eq) goto loc_82580578;
loc_82580600:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580608"))) PPC_WEAK_FUNC(sub_82580608);
PPC_FUNC_IMPL(__imp__sub_82580608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82580610;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8258062C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825804a8
	ctx.lr = 0x82580638;
	sub_825804A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82580644;
	sub_82572FA0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8258066C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82580674;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82580690
	if (cr6.gt) goto loc_82580690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82580690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82580690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580698"))) PPC_WEAK_FUNC(sub_82580698);
PPC_FUNC_IMPL(__imp__sub_82580698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825806A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82580780
	if (!cr6.eq) goto loc_82580780;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x825806e0
	if (cr6.eq) goto loc_825806E0;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// ori r10,r11,1027
	ctx.r10.u64 = ctx.r11.u64 | 1027;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825806E0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r31,448
	ctx.r29.s64 = ctx.r31.s64 + 448;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x8258073c
	if (!cr6.eq) goto loc_8258073C;
	// bl 0x8257efd8
	ctx.lr = 0x825806FC;
	sub_8257EFD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8257fda8
	ctx.lr = 0x8258071C;
	sub_8257FDA8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82572f50
	ctx.lr = 0x82580724;
	sub_82572F50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257efc8
	ctx.lr = 0x8258072C;
	sub_8257EFC8(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8258073C:
	// bl 0x8257efd8
	ctx.lr = 0x82580740;
	sub_8257EFD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8257fe10
	ctx.lr = 0x82580750;
	sub_8257FE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82580608
	ctx.lr = 0x8258075C;
	sub_82580608(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580770;
	sub_8257EFC8(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82580780:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x825807a8
	if (cr6.eq) goto loc_825807A8;
	// lis r11,-27497
	ctx.r11.s64 = -1802043392;
	// ori r10,r11,1027
	ctx.r10.u64 = ctx.r11.u64 | 1027;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825807A8:
	// bl 0x8258b050
	ctx.lr = 0x825807AC;
	sub_8258B050(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825807B8"))) PPC_WEAK_FUNC(sub_825807B8);
PPC_FUNC_IMPL(__imp__sub_825807B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x825807C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,420(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// addi r23,r4,424
	ctx.r23.s64 = ctx.r4.s64 + 424;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// beq cr6,0x8258083c
	if (cr6.eq) goto loc_8258083C;
loc_825807F4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r25,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r25.u64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82572fa0
	ctx.lr = 0x82580808;
	sub_82572FA0(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825801f0
	ctx.lr = 0x8258081C;
	sub_825801F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82580828;
	sub_82572FA0(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x825807f4
	if (!cr6.eq) goto loc_825807F4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8258083C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82580888
	if (cr6.eq) goto loc_82580888;
	// addi r31,r28,456
	ctx.r31.s64 = ctx.r28.s64 + 456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8258085C;
	sub_8257EFD8(ctx, base);
	// lwz r11,444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580878
	if (cr6.eq) goto loc_82580878;
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// lwz r11,444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x8258087c
	goto loc_8258087C;
loc_82580878:
	// stw r27,440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 440, ctx.r27.u32);
loc_8258087C:
	// stw r29,444(r28)
	PPC_STORE_U32(ctx.r28.u32 + 444, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82580888;
	sub_8257EFC8(ctx, base);
loc_82580888:
	// lwz r30,420(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, xer);
	// beq cr6,0x825809e0
	if (cr6.eq) goto loc_825809E0;
loc_82580894:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,8(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8258afd0
	ctx.lr = 0x825808A8;
	sub_8258AFD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825809d4
	if (!cr6.eq) goto loc_825809D4;
	// addi r3,r28,436
	ctx.r3.s64 = ctx.r28.s64 + 436;
	// bl 0x82574a08
	ctx.lr = 0x825808BC;
	sub_82574A08(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r28,224
	ctx.r29.s64 = ctx.r28.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// bl 0x8257efd8
	ctx.lr = 0x825808E0;
	sub_8257EFD8(ctx, base);
	// addi r26,r29,32
	ctx.r26.s64 = ctx.r29.s64 + 32;
	// addi r27,r29,20
	ctx.r27.s64 = ctx.r29.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825749e0
	ctx.lr = 0x825808F0;
	sub_825749E0(ctx, base);
	// lwz r9,248(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// stw r30,248(r28)
	PPC_STORE_U32(ctx.r28.u32 + 248, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x8257efc8
	ctx.lr = 0x8258090C;
	sub_8257EFC8(ctx, base);
	// lwsync 
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825749c0
	ctx.lr = 0x82580920;
	sub_825749C0(ctx, base);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x8258afd0
	ctx.lr = 0x82580930;
	sub_8258AFD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825809d4
	if (cr6.eq) goto loc_825809D4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574a80
	ctx.lr = 0x8258094C;
	sub_82574A80(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825809d4
	if (!cr6.eq) goto loc_825809D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r27,r31,36
	ctx.r27.s64 = ctx.r31.s64 + 36;
	// bl 0x8257efd8
	ctx.lr = 0x82580960;
	sub_8257EFD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82574a08
	ctx.lr = 0x82580968;
	sub_82574A08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580988;
	sub_8257EFC8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8258afc0
	ctx.lr = 0x82580990;
	sub_8258AFC0(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r29,296
	ctx.r30.s64 = ctx.r29.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825809AC;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x825809B8;
	sub_825749E0(ctx, base);
	// lwz r8,320(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r27,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// bl 0x8257efc8
	ctx.lr = 0x825809D4;
	sub_8257EFC8(ctx, base);
loc_825809D4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r23
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, xer);
	// bne cr6,0x82580894
	if (!cr6.eq) goto loc_82580894;
loc_825809E0:
	// addi r27,r28,404
	ctx.r27.s64 = ctx.r28.s64 + 404;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825809EC;
	sub_8257EFD8(ctx, base);
	// addi r23,r27,20
	ctx.r23.s64 = ctx.r27.s64 + 20;
	// lwz r31,420(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x82580a04
	if (!cr6.eq) goto loc_82580A04;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82580a24
	goto loc_82580A24;
loc_82580A04:
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x82580A0C;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
loc_82580A24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82580A2C;
	sub_8257EFC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82580ad8
	if (cr6.eq) goto loc_82580AD8;
	// li r24,3
	ctx.r24.s64 = 3;
loc_82580A38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8258afc0
	ctx.lr = 0x82580A48;
	sub_8258AFC0(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r29,296
	ctx.r30.s64 = ctx.r29.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580A64;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r26,r30,20
	ctx.r26.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x82580A70;
	sub_825749E0(ctx, base);
	// lwz r9,320(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r31,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580A8C;
	sub_8257EFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580A94;
	sub_8257EFD8(ctx, base);
	// lwz r31,16(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x82580aa8
	if (!cr6.eq) goto loc_82580AA8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82580ac8
	goto loc_82580AC8;
loc_82580AA8:
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x82580AB0;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
loc_82580AC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82580AD0;
	sub_8257EFC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82580a38
	if (!cr6.eq) goto loc_82580A38;
loc_82580AD8:
	// lwz r11,472(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 472);
	// addi r3,r28,464
	ctx.r3.s64 = ctx.r28.s64 + 464;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,472(r28)
	PPC_STORE_U32(ctx.r28.u32 + 472, ctx.r10.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580AEC;
	sub_8257EFC8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r25,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580AFC"))) PPC_WEAK_FUNC(sub_82580AFC);
PPC_FUNC_IMPL(__imp__sub_82580AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580B00"))) PPC_WEAK_FUNC(sub_82580B00);
PPC_FUNC_IMPL(__imp__sub_82580B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82580B08;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r22,68(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// addi r19,r4,60
	ctx.r19.s64 = ctx.r4.s64 + 60;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580ba4
	if (cr6.eq) goto loc_82580BA4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82580B34:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82580b98
	if (cr6.eq) goto loc_82580B98;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825749c0
	ctx.lr = 0x82580B58;
	sub_825749C0(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825749e0
	ctx.lr = 0x82580B64;
	sub_825749E0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x82580b98
	if (cr6.lt) goto loc_82580B98;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x825749c0
	ctx.lr = 0x82580B80;
	sub_825749C0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825749c0
	ctx.lr = 0x82580B8C;
	sub_825749C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825749c0
	ctx.lr = 0x82580B98;
	sub_825749C0(ctx, base);
loc_82580B98:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// bne 0x82580b34
	if (!cr0.eq) goto loc_82580B34;
loc_82580BA4:
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580cf4
	if (cr6.eq) goto loc_82580CF4;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82580BB8:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82580ce8
	if (cr6.eq) goto loc_82580CE8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82580be0
	if (!cr6.eq) goto loc_82580BE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82580bf0
	goto loc_82580BF0;
loc_82580BE0:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r9,r10,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82580BF0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580ce8
	if (cr6.eq) goto loc_82580CE8;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x825832e0
	ctx.lr = 0x82580C08;
	sub_825832E0(ctx, base);
	// addi r23,r31,28
	ctx.r23.s64 = ctx.r31.s64 + 28;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// beq cr6,0x82580ce8
	if (cr6.eq) goto loc_82580CE8;
loc_82580C18:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258b328
	ctx.lr = 0x82580C2C;
	sub_8258B328(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580cd4
	if (cr6.eq) goto loc_82580CD4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82574a80
	ctx.lr = 0x82580C48;
	sub_82574A80(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82580cd4
	if (!cr6.eq) goto loc_82580CD4;
	// addi r30,r26,224
	ctx.r30.s64 = ctx.r26.s64 + 224;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580C60;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x82580C68;
	sub_82574A08(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580C88;
	sub_8257EFC8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8258afc0
	ctx.lr = 0x82580C90;
	sub_8258AFC0(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r30,r28,296
	ctx.r30.s64 = ctx.r28.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580CAC;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x82580CB8;
	sub_825749E0(ctx, base);
	// lwz r8,320(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// stw r29,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r29.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580CD4;
	sub_8257EFC8(ctx, base);
loc_82580CD4:
	// addi r3,r25,20
	ctx.r3.s64 = ctx.r25.s64 + 20;
	// bl 0x825832e0
	ctx.lr = 0x82580CDC;
	sub_825832E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// bne cr6,0x82580c18
	if (!cr6.eq) goto loc_82580C18;
loc_82580CE8:
	// addic. r20,r20,-1
	xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// addi r21,r21,24
	ctx.r21.s64 = ctx.r21.s64 + 24;
	// bne 0x82580bb8
	if (!cr0.eq) goto loc_82580BB8;
loc_82580CF4:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r31,r26,260
	ctx.r31.s64 = ctx.r26.s64 + 260;
	// stw r11,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r11.u32);
	// addi r30,r18,36
	ctx.r30.s64 = ctx.r18.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82580D0C;
	sub_8257EFD8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x82580D18;
	sub_825749E0(ctx, base);
	// lwz r10,284(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 284);
	// stw r30,284(r26)
	PPC_STORE_U32(ctx.r26.u32 + 284, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r10,40(r18)
	PPC_STORE_U32(ctx.r18.u32 + 40, ctx.r10.u32);
	// stw r29,44(r18)
	PPC_STORE_U32(ctx.r18.u32 + 44, ctx.r29.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82580D34;
	sub_8257EFC8(ctx, base);
	// addi r3,r26,76
	ctx.r3.s64 = ctx.r26.s64 + 76;
	// bl 0x82574a08
	ctx.lr = 0x82580D3C;
	sub_82574A08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580D44"))) PPC_WEAK_FUNC(sub_82580D44);
PPC_FUNC_IMPL(__imp__sub_82580D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580D48"))) PPC_WEAK_FUNC(sub_82580D48);
PPC_FUNC_IMPL(__imp__sub_82580D48) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82580d80
	if (cr6.eq) goto loc_82580D80;
loc_82580D6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583730
	ctx.lr = 0x82580D74;
	sub_82583730(ctx, base);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82580d6c
	if (!cr6.eq) goto loc_82580D6C;
loc_82580D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580D98"))) PPC_WEAK_FUNC(sub_82580D98);
PPC_FUNC_IMPL(__imp__sub_82580D98) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x825767c8
	ctx.lr = 0x82580DE8;
	sub_825767C8(ctx, base);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580E14"))) PPC_WEAK_FUNC(sub_82580E14);
PPC_FUNC_IMPL(__imp__sub_82580E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580E18"))) PPC_WEAK_FUNC(sub_82580E18);
PPC_FUNC_IMPL(__imp__sub_82580E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82580E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82580e98
	if (cr6.eq) goto loc_82580E98;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82580E38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82580e84
	if (cr6.eq) goto loc_82580E84;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// bl 0x825767c8
	ctx.lr = 0x82580E74;
	sub_825767C8(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r6,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r6.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r5,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r5.u32);
loc_82580E84:
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82580e38
	if (!cr6.eq) goto loc_82580E38;
loc_82580E98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580EA4"))) PPC_WEAK_FUNC(sub_82580EA4);
PPC_FUNC_IMPL(__imp__sub_82580EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580EA8"))) PPC_WEAK_FUNC(sub_82580EA8);
PPC_FUNC_IMPL(__imp__sub_82580EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82580EB0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r4,r8,r10
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// bl 0x82590a20
	ctx.lr = 0x82580ED4;
	sub_82590A20(ctx, base);
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r6,r7,12264
	ctx.r6.s64 = ctx.r7.s64 + 12264;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
	// bl 0x82534518
	ctx.lr = 0x82580EF0;
	sub_82534518(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r5,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r5.u32);
	// addi r29,r28,32
	ctx.r29.s64 = ctx.r28.s64 + 32;
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r4,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r27,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r27.u32);
	// bl 0x82534518
	ctx.lr = 0x82580F14;
	sub_82534518(ctx, base);
	// stw r3,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// lwz r22,8(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82580ffc
	if (cr6.eq) goto loc_82580FFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// addi r23,r11,20216
	ctx.r23.s64 = ctx.r11.s64 + 20216;
	// ori r21,r10,65534
	ctx.r21.u64 = ctx.r10.u64 | 65534;
loc_82580F48:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x825730a8
	ctx.lr = 0x82580F5C;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82580fec
	if (cr6.eq) goto loc_82580FEC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r4,r25,r11
	ctx.r4.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x825839e0
	ctx.lr = 0x82580F74;
	sub_825839E0(ctx, base);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8258bee8
	ctx.lr = 0x82580F84;
	sub_8258BEE8(ctx, base);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r27.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stb r27,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r27.u8);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r20,4(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82534518
	ctx.lr = 0x82580FA0;
	sub_82534518(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// beq 0x82580fb8
	if (cr0.eq) goto loc_82580FB8;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_82580FB8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r10,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x82581008
	if (cr6.lt) goto loc_82581008;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bl 0x82583340
	ctx.lr = 0x82580FEC;
	sub_82583340(ctx, base);
loc_82580FEC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,72
	ctx.r25.s64 = ctx.r25.s64 + 72;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, xer);
	// blt cr6,0x82580f48
	if (cr6.lt) goto loc_82580F48;
loc_82580FFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82581008:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82581014;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82581014"))) PPC_WEAK_FUNC(sub_82581014);
PPC_FUNC_IMPL(__imp__sub_82581014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581018"))) PPC_WEAK_FUNC(sub_82581018);
PPC_FUNC_IMPL(__imp__sub_82581018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82581020;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825749e0
	ctx.lr = 0x82581038;
	sub_825749E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835753c0
	ctx.lr = 0x82581040;
	sub_835753C0(ctx, base);
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82581198
	if (!cr6.eq) goto loc_82581198;
loc_8258104C:
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8258be28
	ctx.lr = 0x82581060;
	sub_8258BE28(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x8258109c
	if (cr6.gt) goto loc_8258109C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82581084
	if (cr6.lt) goto loc_82581084;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8258be88
	ctx.lr = 0x82581084;
	sub_8258BE88(ctx, base);
loc_82581084:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82581184
	if (cr6.eq) goto loc_82581184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// bl 0x825834e0
	ctx.lr = 0x82581098;
	sub_825834E0(ctx, base);
	// b 0x8258118c
	goto loc_8258118C;
loc_8258109C:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x825810e4
	if (cr6.eq) goto loc_825810E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x8386d088
	ctx.lr = 0x825810D8;
	sub_8386D088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_825810E4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x825810f8
	if (cr6.lt) goto loc_825810F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258be88
	ctx.lr = 0x825810F8;
	sub_8258BE88(ctx, base);
loc_825810F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581084
	if (cr6.eq) goto loc_82581084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825908a0
	ctx.lr = 0x82581108;
	sub_825908A0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r31,120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x8258111C;
	sub_8258BE28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82581138
	if (cr6.lt) goto loc_82581138;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8258be88
	ctx.lr = 0x82581138;
	sub_8258BE88(ctx, base);
loc_82581138:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82581174
	if (!cr6.eq) goto loc_82581174;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x82581154;
	sub_8258BE28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8258bdc8
	ctx.lr = 0x82581160;
	sub_8258BDC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8258be88
	ctx.lr = 0x8258116C;
	sub_8258BE88(ctx, base);
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x8258118c
	goto loc_8258118C;
loc_82581174:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// bl 0x83575980
	ctx.lr = 0x82581180;
	sub_83575980(ctx, base);
	// b 0x8258118c
	goto loc_8258118C;
loc_82581184:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835753c0
	ctx.lr = 0x8258118C;
	sub_835753C0(ctx, base);
loc_8258118C:
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8258104c
	if (cr6.eq) goto loc_8258104C;
loc_82581198:
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82574a08
	ctx.lr = 0x825811A4;
	sub_82574A08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825811AC"))) PPC_WEAK_FUNC(sub_825811AC);
PPC_FUNC_IMPL(__imp__sub_825811AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825811B0"))) PPC_WEAK_FUNC(sub_825811B0);
PPC_FUNC_IMPL(__imp__sub_825811B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x825811B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,64
	ctx.r22.s64 = ctx.r3.s64 + 64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825749c0
	ctx.lr = 0x825811D0;
	sub_825749C0(ctx, base);
	// lwz r3,492(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// bl 0x825908a0
	ctx.lr = 0x825811D8;
	sub_825908A0(ctx, base);
	// lwz r3,496(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825811e8
	if (cr6.eq) goto loc_825811E8;
	// bl 0x835b12f0
	ctx.lr = 0x825811E8;
	sub_835B12F0(ctx, base);
loc_825811E8:
	// lwz r11,472(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 472);
	// addi r25,r26,260
	ctx.r25.s64 = ctx.r26.s64 + 260;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r24,r25,20
	ctx.r24.s64 = ctx.r25.s64 + 20;
	// stw r10,472(r26)
	PPC_STORE_U32(ctx.r26.u32 + 472, ctx.r10.u32);
	// li r23,2
	ctx.r23.s64 = 2;
loc_82581204:
	// lwz r31,16(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// beq cr6,0x82581304
	if (cr6.eq) goto loc_82581304;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x82581218;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82581280
	if (!cr6.eq) goto loc_82581280;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581280
	if (!cr6.eq) goto loc_82581280;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// addi r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x82581264;
	sub_825749E0(ctx, base);
	// lwz r11,248(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// stw r31,248(r26)
	PPC_STORE_U32(ctx.r26.u32 + 248, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r23,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r23.u32);
	// b 0x82581204
	goto loc_82581204;
loc_82581280:
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82581290;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825804a8
	ctx.lr = 0x8258129C;
	sub_825804A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x825812A8;
	sub_82572FA0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825812D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x825812D8;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825812f4
	if (cr6.gt) goto loc_825812F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825812F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825812F4:
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r11.u32);
	// b 0x82581204
	goto loc_82581204;
loc_82581304:
	// lwz r31,804(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 804);
	// addi r28,r26,804
	ctx.r28.s64 = ctx.r26.s64 + 804;
	// lwz r11,808(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8258133c
	if (cr6.eq) goto loc_8258133C;
loc_82581318:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258132C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,808(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82581318
	if (!cr6.eq) goto loc_82581318;
loc_8258133C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825813a0
	if (cr6.eq) goto loc_825813A0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581374
	if (cr6.eq) goto loc_82581374;
loc_82581358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82581364;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581358
	if (!cr6.eq) goto loc_82581358;
loc_82581374:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258139c
	if (cr6.eq) goto loc_8258139C;
loc_82581384:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581390;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581384
	if (!cr6.eq) goto loc_82581384;
loc_8258139C:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_825813A0:
	// addi r25,r26,368
	ctx.r25.s64 = ctx.r26.s64 + 368;
	// addi r24,r25,20
	ctx.r24.s64 = ctx.r25.s64 + 20;
loc_825813A8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825813B0;
	sub_8257EFD8(ctx, base);
	// lwz r29,16(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x825813c4
	if (!cr6.eq) goto loc_825813C4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x825813e4
	goto loc_825813E4;
loc_825813C4:
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x825813CC;
	sub_82574A08(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
loc_825813E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825813EC;
	sub_8257EFC8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82581518
	if (cr6.eq) goto loc_82581518;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825814a8
	if (cr6.eq) goto loc_825814A8;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82581418;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82580338
	ctx.lr = 0x82581424;
	sub_82580338(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82581430;
	sub_82572FA0(ctx, base);
	// std r27,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r27.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x82581440;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825804a8
	ctx.lr = 0x8258144C;
	sub_825804A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x82581458;
	sub_82572FA0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82581480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82581488;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x825813a8
	if (cr6.gt) goto loc_825813A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825814A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825813a8
	goto loc_825813A8;
loc_825814A8:
	// addi r31,r26,224
	ctx.r31.s64 = ctx.r26.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825814B4;
	sub_8257EFD8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x825814C0;
	sub_825749E0(ctx, base);
	// lwz r11,248(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// stw r29,248(r26)
	PPC_STORE_U32(ctx.r26.u32 + 248, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// bl 0x8257efc8
	ctx.lr = 0x825814DC;
	sub_8257EFC8(ctx, base);
	// stw r23,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r23.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x825814FC;
	sub_82572FA0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82580338
	ctx.lr = 0x82581508;
	sub_82580338(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82581514;
	sub_82572FA0(ctx, base);
	// b 0x825813a8
	goto loc_825813A8;
loc_82581518:
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r27,r26,740
	ctx.r27.s64 = ctx.r26.s64 + 740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82581528;
	sub_8257EFD8(ctx, base);
	// addi r28,r26,708
	ctx.r28.s64 = ctx.r26.s64 + 708;
	// lwz r31,708(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 708);
	// lwz r30,712(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 712);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82581558
	if (cr6.eq) goto loc_82581558;
	// addi r29,r26,692
	ctx.r29.s64 = ctx.r26.s64 + 692;
loc_82581540:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247d6b0
	ctx.lr = 0x8258154C;
	sub_8247D6B0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82581540
	if (!cr6.eq) goto loc_82581540;
loc_82581558:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825815bc
	if (cr6.eq) goto loc_825815BC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581590
	if (cr6.eq) goto loc_82581590;
loc_82581574:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82581580;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581574
	if (!cr6.eq) goto loc_82581574;
loc_82581590:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825815b8
	if (cr6.eq) goto loc_825815B8;
loc_825815A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x825815AC;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x825815a0
	if (!cr6.eq) goto loc_825815A0;
loc_825815B8:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_825815BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825815C4;
	sub_8257EFC8(ctx, base);
	// addi r23,r26,748
	ctx.r23.s64 = ctx.r26.s64 + 748;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825815D0;
	sub_8257EFD8(ctx, base);
	// addi r24,r26,724
	ctx.r24.s64 = ctx.r26.s64 + 724;
	// lwz r27,724(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 724);
	// lwz r25,728(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 728);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// beq cr6,0x82581688
	if (cr6.eq) goto loc_82581688;
	// addi r28,r26,692
	ctx.r28.s64 = ctx.r26.s64 + 692;
loc_825815E8:
	// lwz r10,696(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258167c
	if (cr6.eq) goto loc_8258167C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_825815FC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82581614
	if (cr6.eq) goto loc_82581614;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825815fc
	if (!cr6.eq) goto loc_825815FC;
loc_82581614:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258167c
	if (cr6.eq) goto loc_8258167C;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82581648
	if (cr6.eq) goto loc_82581648;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82581630:
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8258163C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82581630
	if (!cr6.eq) goto loc_82581630;
loc_82581648:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82581670
	if (cr6.eq) goto loc_82581670;
loc_82581658:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581664;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82581658
	if (!cr6.eq) goto loc_82581658;
loc_82581670:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8258167C:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x825815e8
	if (!cr6.eq) goto loc_825815E8;
loc_82581688:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825816ec
	if (cr6.eq) goto loc_825816EC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x825816c0
	if (cr6.eq) goto loc_825816C0;
loc_825816A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x825816B0;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x825816a4
	if (!cr6.eq) goto loc_825816A4;
loc_825816C0:
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825816e8
	if (cr6.eq) goto loc_825816E8;
loc_825816D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x825816DC;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x825816d0
	if (!cr6.eq) goto loc_825816D0;
loc_825816E8:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
loc_825816EC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825816F4;
	sub_8257EFC8(ctx, base);
	// lwz r31,692(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 692);
	// lwz r30,696(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 696);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82581728
	if (cr6.eq) goto loc_82581728;
loc_82581704:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258171C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82581704
	if (!cr6.eq) goto loc_82581704;
loc_82581728:
	// lwz r11,772(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 772);
	// addi r28,r26,772
	ctx.r28.s64 = ctx.r26.s64 + 772;
	// lwz r10,776(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825817e8
	if (cr0.eq) goto loc_825817E8;
	// addi r27,r26,796
	ctx.r27.s64 = ctx.r26.s64 + 796;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8258174C;
	sub_8257EFD8(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,776(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8258177c
	if (cr6.eq) goto loc_8258177C;
loc_8258175C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82581770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8258175c
	if (!cr6.eq) goto loc_8258175C;
loc_8258177C:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825817e0
	if (cr6.eq) goto loc_825817E0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x825817b4
	if (cr6.eq) goto loc_825817B4;
loc_82581798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x825817A4;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581798
	if (!cr6.eq) goto loc_82581798;
loc_825817B4:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x825817dc
	if (cr6.eq) goto loc_825817DC;
loc_825817C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x825817D0;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x825817c4
	if (!cr6.eq) goto loc_825817C4;
loc_825817DC:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_825817E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825817E8;
	sub_8257EFC8(ctx, base);
loc_825817E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825817F0"))) PPC_WEAK_FUNC(sub_825817F0);
PPC_FUNC_IMPL(__imp__sub_825817F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825817F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,740
	ctx.r31.s64 = ctx.r3.s64 + 740;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82581810;
	sub_8257EFD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82581824;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,708
	ctx.r3.s64 = ctx.r30.s64 + 708;
	// bl 0x8247d6b0
	ctx.lr = 0x82581830;
	sub_8247D6B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8258183C;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82581844;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258184C"))) PPC_WEAK_FUNC(sub_8258184C);
PPC_FUNC_IMPL(__imp__sub_8258184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581850"))) PPC_WEAK_FUNC(sub_82581850);
PPC_FUNC_IMPL(__imp__sub_82581850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82581858;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,20224
	ctx.r9.s64 = ctx.r11.s64 + 20224;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8258187c
	if (cr6.eq) goto loc_8258187C;
	// bl 0x825811b0
	ctx.lr = 0x8258187C;
	sub_825811B0(ctx, base);
loc_8258187C:
	// lwz r11,804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// addi r23,r31,804
	ctx.r23.s64 = ctx.r31.s64 + 804;
	// lwz r10,808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825818dc
	if (cr0.eq) goto loc_825818DC;
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x825818c8
	if (cr6.eq) goto loc_825818C8;
loc_825818A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825818B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x825818a4
	if (!cr6.eq) goto loc_825818A4;
loc_825818C8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8247d010
	ctx.lr = 0x825818DC;
	sub_8247D010(ctx, base);
loc_825818DC:
	// addi r24,r31,224
	ctx.r24.s64 = ctx.r31.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825818E8;
	sub_8257EFD8(ctx, base);
	// addi r25,r31,244
	ctx.r25.s64 = ctx.r31.s64 + 244;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// beq cr6,0x825819a8
	if (cr6.eq) goto loc_825819A8;
	// addi r26,r31,256
	ctx.r26.s64 = ctx.r31.s64 + 256;
loc_82581900:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82574a08
	ctx.lr = 0x8258190C;
	sub_82574A08(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82581938;
	sub_82572FA0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825804a8
	ctx.lr = 0x82581944;
	sub_825804A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82581950;
	sub_82572FA0(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82581978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x82581980;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8258199c
	if (cr6.gt) goto loc_8258199C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258199C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8258199C:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x82581900
	if (!cr6.eq) goto loc_82581900;
loc_825819A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825819B0;
	sub_8257EFC8(ctx, base);
	// addi r25,r31,388
	ctx.r25.s64 = ctx.r31.s64 + 388;
	// lwz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// beq cr6,0x82581a30
	if (cr6.eq) goto loc_82581A30;
	// addi r26,r31,400
	ctx.r26.s64 = ctx.r31.s64 + 400;
loc_825819C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82574a08
	ctx.lr = 0x825819D0;
	sub_82574A08(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// stw r28,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// bl 0x82574b18
	ctx.lr = 0x82581A08;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82581a24
	if (cr6.gt) goto loc_82581A24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82581A24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82581A24:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x825819c4
	if (!cr6.eq) goto loc_825819C4;
loc_82581A30:
	// lwz r3,496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82581a50
	if (cr6.eq) goto loc_82581A50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82581A50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82581A50:
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82581aa0
	if (cr6.eq) goto loc_82581AA0;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r27,r10,-4
	ctx.r27.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r30,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt 0x82581a90
	if (cr0.lt) goto loc_82581A90;
loc_82581A7C:
	// addi r29,r29,-40
	ctx.r29.s64 = ctx.r29.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825907d8
	ctx.lr = 0x82581A88;
	sub_825907D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82581a7c
	if (!cr0.lt) goto loc_82581A7C;
loc_82581A90:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x82581AA0;
	sub_82573040(ctx, base);
loc_82581AA0:
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581ad8
	if (cr6.eq) goto loc_82581AD8;
	// lwz r29,4(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581ad0
	if (cr6.eq) goto loc_82581AD0;
loc_82581AB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581AC4;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581ab8
	if (!cr6.eq) goto loc_82581AB8;
loc_82581AD0:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82581AD8;
	sub_8386D088(ctx, base);
loc_82581AD8:
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// stw r28,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r28.u32);
	// lwz r30,772(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581b1c
	if (cr6.eq) goto loc_82581B1C;
	// lwz r29,776(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581b14
	if (cr6.eq) goto loc_82581B14;
loc_82581AFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581B08;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581afc
	if (!cr6.eq) goto loc_82581AFC;
loc_82581B14:
	// lwz r3,772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// bl 0x8386d088
	ctx.lr = 0x82581B1C;
	sub_8386D088(ctx, base);
loc_82581B1C:
	// stw r28,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r28.u32);
	// stw r28,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r28.u32);
	// stw r28,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r28.u32);
	// lwz r30,756(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581b60
	if (cr6.eq) goto loc_82581B60;
	// lwz r29,760(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581b58
	if (cr6.eq) goto loc_82581B58;
loc_82581B40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581B4C;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581b40
	if (!cr6.eq) goto loc_82581B40;
loc_82581B58:
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// bl 0x8386d088
	ctx.lr = 0x82581B60;
	sub_8386D088(ctx, base);
loc_82581B60:
	// stw r28,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r28.u32);
	// stw r28,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r28.u32);
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// lwz r30,724(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581ba4
	if (cr6.eq) goto loc_82581BA4;
	// lwz r29,728(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581b9c
	if (cr6.eq) goto loc_82581B9C;
loc_82581B84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581B90;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581b84
	if (!cr6.eq) goto loc_82581B84;
loc_82581B9C:
	// lwz r3,724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// bl 0x8386d088
	ctx.lr = 0x82581BA4;
	sub_8386D088(ctx, base);
loc_82581BA4:
	// stw r28,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r28.u32);
	// stw r28,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r28.u32);
	// stw r28,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r28.u32);
	// lwz r30,708(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581be8
	if (cr6.eq) goto loc_82581BE8;
	// lwz r29,712(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581be0
	if (cr6.eq) goto loc_82581BE0;
loc_82581BC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581BD4;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581bc8
	if (!cr6.eq) goto loc_82581BC8;
loc_82581BE0:
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// bl 0x8386d088
	ctx.lr = 0x82581BE8;
	sub_8386D088(ctx, base);
loc_82581BE8:
	// stw r28,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r28.u32);
	// stw r28,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r28.u32);
	// stw r28,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r28.u32);
	// lwz r30,692(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581c2c
	if (cr6.eq) goto loc_82581C2C;
	// lwz r29,696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581c24
	if (cr6.eq) goto loc_82581C24;
loc_82581C0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581C18;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581c0c
	if (!cr6.eq) goto loc_82581C0C;
loc_82581C24:
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x8386d088
	ctx.lr = 0x82581C2C;
	sub_8386D088(ctx, base);
loc_82581C2C:
	// stw r28,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r28.u32);
	// stw r28,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r28.u32);
	// stw r28,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r28.u32);
	// lwz r30,660(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581c70
	if (cr6.eq) goto loc_82581C70;
	// lwz r29,664(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581c68
	if (cr6.eq) goto loc_82581C68;
loc_82581C50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581C5C;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581c50
	if (!cr6.eq) goto loc_82581C50;
loc_82581C68:
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// bl 0x8386d088
	ctx.lr = 0x82581C70;
	sub_8386D088(ctx, base);
loc_82581C70:
	// stw r28,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r28.u32);
	// stw r28,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r28.u32);
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// lwz r30,644(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581cb4
	if (cr6.eq) goto loc_82581CB4;
	// lwz r29,648(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581cac
	if (cr6.eq) goto loc_82581CAC;
loc_82581C94:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581CA0;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581c94
	if (!cr6.eq) goto loc_82581C94;
loc_82581CAC:
	// lwz r3,644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x8386d088
	ctx.lr = 0x82581CB4;
	sub_8386D088(ctx, base);
loc_82581CB4:
	// stw r28,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r28.u32);
	// stw r28,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r28.u32);
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// lwz r30,628(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581cf8
	if (cr6.eq) goto loc_82581CF8;
	// lwz r29,632(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581cf0
	if (cr6.eq) goto loc_82581CF0;
loc_82581CD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581CE4;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581cd8
	if (!cr6.eq) goto loc_82581CD8;
loc_82581CF0:
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// bl 0x8386d088
	ctx.lr = 0x82581CF8;
	sub_8386D088(ctx, base);
loc_82581CF8:
	// stw r28,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r28.u32);
	// stw r28,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r28.u32);
	// stw r28,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r28.u32);
	// lwz r30,596(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581d3c
	if (cr6.eq) goto loc_82581D3C;
	// lwz r29,600(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581d34
	if (cr6.eq) goto loc_82581D34;
loc_82581D1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581D28;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581d1c
	if (!cr6.eq) goto loc_82581D1C;
loc_82581D34:
	// lwz r3,596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// bl 0x8386d088
	ctx.lr = 0x82581D3C;
	sub_8386D088(ctx, base);
loc_82581D3C:
	// stw r28,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r28.u32);
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
	// stw r28,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r28.u32);
	// lwz r30,580(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581d80
	if (cr6.eq) goto loc_82581D80;
	// lwz r29,584(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581d78
	if (cr6.eq) goto loc_82581D78;
loc_82581D60:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581D6C;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581d60
	if (!cr6.eq) goto loc_82581D60;
loc_82581D78:
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// bl 0x8386d088
	ctx.lr = 0x82581D80;
	sub_8386D088(ctx, base);
loc_82581D80:
	// stw r28,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r28.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r28,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// lwz r30,564(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581dc4
	if (cr6.eq) goto loc_82581DC4;
	// lwz r29,568(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581dbc
	if (cr6.eq) goto loc_82581DBC;
loc_82581DA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581DB0;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581da4
	if (!cr6.eq) goto loc_82581DA4;
loc_82581DBC:
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8386d088
	ctx.lr = 0x82581DC4;
	sub_8386D088(ctx, base);
loc_82581DC4:
	// stw r28,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r28.u32);
	// stw r28,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r28.u32);
	// stw r28,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r28.u32);
	// lwz r30,532(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581e08
	if (cr6.eq) goto loc_82581E08;
	// lwz r29,536(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581e00
	if (cr6.eq) goto loc_82581E00;
loc_82581DE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581DF4;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581de8
	if (!cr6.eq) goto loc_82581DE8;
loc_82581E00:
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// bl 0x8386d088
	ctx.lr = 0x82581E08;
	sub_8386D088(ctx, base);
loc_82581E08:
	// stw r28,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r28.u32);
	// stw r28,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r28.u32);
	// stw r28,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r28.u32);
	// lwz r30,516(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581e4c
	if (cr6.eq) goto loc_82581E4C;
	// lwz r29,520(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581e44
	if (cr6.eq) goto loc_82581E44;
loc_82581E2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581E38;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581e2c
	if (!cr6.eq) goto loc_82581E2C;
loc_82581E44:
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x8386d088
	ctx.lr = 0x82581E4C;
	sub_8386D088(ctx, base);
loc_82581E4C:
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// lwz r30,500(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82581e90
	if (cr6.eq) goto loc_82581E90;
	// lwz r29,504(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581e88
	if (cr6.eq) goto loc_82581E88;
loc_82581E70:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82581E7C;
	sub_82572FA0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581e70
	if (!cr6.eq) goto loc_82581E70;
loc_82581E88:
	// lwz r3,500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// bl 0x8386d088
	ctx.lr = 0x82581E90;
	sub_8386D088(ctx, base);
loc_82581E90:
	// stw r28,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// bl 0x8258fe90
	ctx.lr = 0x82581EA4;
	sub_8258FE90(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82581EB8"))) PPC_WEAK_FUNC(sub_82581EB8);
PPC_FUNC_IMPL(__imp__sub_82581EB8) {
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
	ctx.lr = 0x82581EC0;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825891b8
	ctx.lr = 0x82581ED4;
	sub_825891B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lfd f31,8(r26)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,48(r26)
	PPC_STORE_U64(ctx.r26.u32 + 48, ctx.r11.u64);
	// bl 0x82589200
	ctx.lr = 0x82581EE4;
	sub_82589200(ctx, base);
	// bl 0x831ce710
	ctx.lr = 0x82581EE8;
	sub_831CE710(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 48);
	// addi r30,r26,756
	ctx.r30.s64 = ctx.r26.s64 + 756;
	// lfd f0,15760(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 15760);
	// fmadd f0,f1,f31,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,56(r26)
	PPC_STORE_U64(ctx.r26.u32 + 56, ctx.r11.u64);
	// lwz r8,760(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 760);
	// lwz r7,756(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 756);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82581f7c
	if (cr0.eq) goto loc_82581F7C;
	// addi r28,r26,788
	ctx.r28.s64 = ctx.r26.s64 + 788;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82581F30;
	sub_8257EFD8(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,760(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 760);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581f60
	if (cr6.eq) goto loc_82581F60;
loc_82581F40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82581F54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581f40
	if (!cr6.eq) goto loc_82581F40;
loc_82581F60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8247d010
	ctx.lr = 0x82581F74;
	sub_8247D010(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82581F7C;
	sub_8257EFC8(ctx, base);
loc_82581F7C:
	// addi r27,r26,676
	ctx.r27.s64 = ctx.r26.s64 + 676;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82581F88;
	sub_8257EFD8(ctx, base);
	// addi r28,r26,644
	ctx.r28.s64 = ctx.r26.s64 + 644;
	// lwz r31,644(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 644);
	// lwz r30,648(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 648);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82581fb8
	if (cr6.eq) goto loc_82581FB8;
	// addi r29,r26,628
	ctx.r29.s64 = ctx.r26.s64 + 628;
loc_82581FA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247d6b0
	ctx.lr = 0x82581FAC;
	sub_8247D6B0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82581fa0
	if (!cr6.eq) goto loc_82581FA0;
loc_82581FB8:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258201c
	if (cr6.eq) goto loc_8258201C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82581ff0
	if (cr6.eq) goto loc_82581FF0;
loc_82581FD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82581FE0;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82581fd4
	if (!cr6.eq) goto loc_82581FD4;
loc_82581FF0:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582018
	if (cr6.eq) goto loc_82582018;
loc_82582000:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8258200C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582000
	if (!cr6.eq) goto loc_82582000;
loc_82582018:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_8258201C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582024;
	sub_8257EFC8(ctx, base);
	// addi r23,r26,684
	ctx.r23.s64 = ctx.r26.s64 + 684;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82582030;
	sub_8257EFD8(ctx, base);
	// addi r24,r26,660
	ctx.r24.s64 = ctx.r26.s64 + 660;
	// lwz r27,660(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 660);
	// lwz r25,664(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 664);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// beq cr6,0x825820e8
	if (cr6.eq) goto loc_825820E8;
	// addi r28,r26,628
	ctx.r28.s64 = ctx.r26.s64 + 628;
loc_82582048:
	// lwz r10,632(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825820dc
	if (cr6.eq) goto loc_825820DC;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8258205C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82582074
	if (cr6.eq) goto loc_82582074;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8258205c
	if (!cr6.eq) goto loc_8258205C;
loc_82582074:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825820dc
	if (cr6.eq) goto loc_825820DC;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825820a8
	if (cr6.eq) goto loc_825820A8;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82582090:
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8258209C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82582090
	if (!cr6.eq) goto loc_82582090;
loc_825820A8:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825820d0
	if (cr6.eq) goto loc_825820D0;
loc_825820B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x825820C4;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825820b8
	if (!cr6.eq) goto loc_825820B8;
loc_825820D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_825820DC:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x82582048
	if (!cr6.eq) goto loc_82582048;
loc_825820E8:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258214c
	if (cr6.eq) goto loc_8258214C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582120
	if (cr6.eq) goto loc_82582120;
loc_82582104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82582110;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582104
	if (!cr6.eq) goto loc_82582104;
loc_82582120:
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582148
	if (cr6.eq) goto loc_82582148;
loc_82582130:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8258213C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582130
	if (!cr6.eq) goto loc_82582130;
loc_82582148:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
loc_8258214C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582154;
	sub_8257EFC8(ctx, base);
	// lwz r31,628(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// lwz r30,632(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82582188
	if (cr6.eq) goto loc_82582188;
loc_82582164:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258217C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82582164
	if (!cr6.eq) goto loc_82582164;
loc_82582188:
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,1
	ctx.r19.s64 = 1;
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r20,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r20.u32);
	// stw r11,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r11.u32);
	// bgt 0x825821a8
	if (cr0.gt) goto loc_825821A8;
	// stw r19,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r19.u32);
loc_825821A8:
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r29,r26,804
	ctx.r29.s64 = ctx.r26.s64 + 804;
	// subfc r9,r19,r10
	xer.ca = ctx.r10.u32 >= ctx.r19.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r19.s64;
	// lwz r6,808(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r31,804(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 804);
	// subfze r10,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r20,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r20.u32);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r10,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r3.u32);
	// beq cr6,0x8258223c
	if (cr6.eq) goto loc_8258223C;
loc_82582218:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8258222C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,808(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 808);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82582218
	if (!cr6.eq) goto loc_82582218;
loc_8258223C:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x825822a0
	if (cr6.eq) goto loc_825822A0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r28
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r28.u32, xer);
	// beq cr6,0x82582274
	if (cr6.eq) goto loc_82582274;
loc_82582258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82582264;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82582258
	if (!cr6.eq) goto loc_82582258;
loc_82582274:
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x8258229c
	if (cr6.eq) goto loc_8258229C;
loc_82582284:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582290;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82582284
	if (!cr6.eq) goto loc_82582284;
loc_8258229C:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_825822A0:
	// addi r30,r26,368
	ctx.r30.s64 = ctx.r26.s64 + 368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825822AC;
	sub_8257EFD8(ctx, base);
	// addi r24,r30,20
	ctx.r24.s64 = ctx.r30.s64 + 20;
	// lwz r31,384(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 384);
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x825822c4
	if (!cr6.eq) goto loc_825822C4;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x825822e4
	goto loc_825822E4;
loc_825822C4:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x825822CC;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
loc_825822E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825822EC;
	sub_8257EFC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825823b8
	if (cr6.eq) goto loc_825823B8;
	// addi r28,r26,224
	ctx.r28.s64 = ctx.r26.s64 + 224;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
loc_82582304:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8257efd8
	ctx.lr = 0x82582310;
	sub_8257EFD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825749e0
	ctx.lr = 0x82582318;
	sub_825749E0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82582334;
	sub_8257EFC8(ctx, base);
	// stw r25,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r25.u32);
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// std r20,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r20.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r10.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582354;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82580338
	ctx.lr = 0x82582360;
	sub_82580338(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8258236C;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82582374;
	sub_8257EFD8(ctx, base);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// bne cr6,0x82582388
	if (!cr6.eq) goto loc_82582388;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x825823a8
	goto loc_825823A8;
loc_82582388:
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82574a08
	ctx.lr = 0x82582390;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
loc_825823A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825823B0;
	sub_8257EFC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82582304
	if (!cr6.eq) goto loc_82582304;
loc_825823B8:
	// addi r27,r26,548
	ctx.r27.s64 = ctx.r26.s64 + 548;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825823C4;
	sub_8257EFD8(ctx, base);
	// addi r28,r26,516
	ctx.r28.s64 = ctx.r26.s64 + 516;
	// lwz r31,516(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// lwz r30,520(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825823f4
	if (cr6.eq) goto loc_825823F4;
	// addi r29,r26,500
	ctx.r29.s64 = ctx.r26.s64 + 500;
loc_825823DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247d6b0
	ctx.lr = 0x825823E8;
	sub_8247D6B0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825823dc
	if (!cr6.eq) goto loc_825823DC;
loc_825823F4:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582458
	if (cr6.eq) goto loc_82582458;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258242c
	if (cr6.eq) goto loc_8258242C;
loc_82582410:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8258241C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582410
	if (!cr6.eq) goto loc_82582410;
loc_8258242C:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582454
	if (cr6.eq) goto loc_82582454;
loc_8258243C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582448;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8258243c
	if (!cr6.eq) goto loc_8258243C;
loc_82582454:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82582458:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582460;
	sub_8257EFC8(ctx, base);
	// addi r23,r26,556
	ctx.r23.s64 = ctx.r26.s64 + 556;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8258246C;
	sub_8257EFD8(ctx, base);
	// addi r24,r26,532
	ctx.r24.s64 = ctx.r26.s64 + 532;
	// lwz r27,532(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// lwz r25,536(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 536);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// beq cr6,0x82582524
	if (cr6.eq) goto loc_82582524;
	// addi r28,r26,500
	ctx.r28.s64 = ctx.r26.s64 + 500;
loc_82582484:
	// lwz r10,504(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 504);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82582518
	if (cr6.eq) goto loc_82582518;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82582498:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x825824b0
	if (cr6.eq) goto loc_825824B0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82582498
	if (!cr6.eq) goto loc_82582498;
loc_825824B0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82582518
	if (cr6.eq) goto loc_82582518;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825824e4
	if (cr6.eq) goto loc_825824E4;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_825824CC:
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x825824D8;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825824cc
	if (!cr6.eq) goto loc_825824CC;
loc_825824E4:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x8258250c
	if (cr6.eq) goto loc_8258250C;
loc_825824F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582500;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825824f4
	if (!cr6.eq) goto loc_825824F4;
loc_8258250C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82582518:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x82582484
	if (!cr6.eq) goto loc_82582484;
loc_82582524:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582588
	if (cr6.eq) goto loc_82582588;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258255c
	if (cr6.eq) goto loc_8258255C;
loc_82582540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8258254C;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582540
	if (!cr6.eq) goto loc_82582540;
loc_8258255C:
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582584
	if (cr6.eq) goto loc_82582584;
loc_8258256C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582578;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8258256c
	if (!cr6.eq) goto loc_8258256C;
loc_82582584:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
loc_82582588:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582590;
	sub_8257EFC8(ctx, base);
	// addi r27,r26,612
	ctx.r27.s64 = ctx.r26.s64 + 612;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efd8
	ctx.lr = 0x8258259C;
	sub_8257EFD8(ctx, base);
	// addi r28,r26,580
	ctx.r28.s64 = ctx.r26.s64 + 580;
	// lwz r31,580(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 580);
	// lwz r30,584(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 584);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825825cc
	if (cr6.eq) goto loc_825825CC;
	// addi r29,r26,564
	ctx.r29.s64 = ctx.r26.s64 + 564;
loc_825825B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247d6b0
	ctx.lr = 0x825825C0;
	sub_8247D6B0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825825b4
	if (!cr6.eq) goto loc_825825B4;
loc_825825CC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582630
	if (cr6.eq) goto loc_82582630;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582604
	if (cr6.eq) goto loc_82582604;
loc_825825E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x825825F4;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x825825e8
	if (!cr6.eq) goto loc_825825E8;
loc_82582604:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258262c
	if (cr6.eq) goto loc_8258262C;
loc_82582614:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582620;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582614
	if (!cr6.eq) goto loc_82582614;
loc_8258262C:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_82582630:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582638;
	sub_8257EFC8(ctx, base);
	// addi r23,r26,620
	ctx.r23.s64 = ctx.r26.s64 + 620;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82582644;
	sub_8257EFD8(ctx, base);
	// addi r24,r26,596
	ctx.r24.s64 = ctx.r26.s64 + 596;
	// lwz r27,596(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 596);
	// lwz r25,600(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 600);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// beq cr6,0x825826fc
	if (cr6.eq) goto loc_825826FC;
	// addi r28,r26,564
	ctx.r28.s64 = ctx.r26.s64 + 564;
loc_8258265C:
	// lwz r10,568(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 568);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825826f0
	if (cr6.eq) goto loc_825826F0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82582670:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82582688
	if (cr6.eq) goto loc_82582688;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82582670
	if (!cr6.eq) goto loc_82582670;
loc_82582688:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825826f0
	if (cr6.eq) goto loc_825826F0;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825826bc
	if (cr6.eq) goto loc_825826BC;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_825826A4:
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x825826B0;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825826a4
	if (!cr6.eq) goto loc_825826A4;
loc_825826BC:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x825826e4
	if (cr6.eq) goto loc_825826E4;
loc_825826CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x825826D8;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x825826cc
	if (!cr6.eq) goto loc_825826CC;
loc_825826E4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_825826F0:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x8258265c
	if (!cr6.eq) goto loc_8258265C;
loc_825826FC:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582760
	if (cr6.eq) goto loc_82582760;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x82582734
	if (cr6.eq) goto loc_82582734;
loc_82582718:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82582724;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582718
	if (!cr6.eq) goto loc_82582718;
loc_82582734:
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8258275c
	if (cr6.eq) goto loc_8258275C;
loc_82582744:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82582750;
	sub_82572FA0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82582744
	if (!cr6.eq) goto loc_82582744;
loc_8258275C:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
loc_82582760:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582768;
	sub_8257EFC8(ctx, base);
	// lwz r11,472(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 472);
	// lwz r10,496(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 496);
	// oris r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 1073741824;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,472(r26)
	PPC_STORE_U32(ctx.r26.u32 + 472, ctx.r9.u32);
	// beq cr6,0x82582864
	if (cr6.eq) goto loc_82582864;
	// lwz r22,40(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// ble cr6,0x82582848
	if (!cr6.gt) goto loc_82582848;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r25,40
	ctx.r25.s64 = 40;
	// ori r21,r11,65534
	ctx.r21.u64 = ctx.r11.u64 | 65534;
loc_8258279C:
	// lwz r31,496(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 496);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8258be28
	ctx.lr = 0x825827B8;
	sub_8258BE28(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// lwz r18,4(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82534518
	ctx.lr = 0x825827D4;
	sub_82534518(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// beq 0x825827e8
	if (cr0.eq) goto loc_825827E8;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825827E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82582944
	if (cr6.lt) goto loc_82582944;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82582824
	if (cr6.eq) goto loc_82582824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83575980
	ctx.lr = 0x82582824;
	sub_83575980(ctx, base);
loc_82582824:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x82582838
	if (cr6.lt) goto loc_82582838;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258be88
	ctx.lr = 0x82582838;
	sub_8258BE88(ctx, base);
loc_82582838:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r23,r22
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, xer);
	// blt cr6,0x8258279c
	if (cr6.lt) goto loc_8258279C;
loc_82582848:
	// lwz r31,496(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83575980
	ctx.lr = 0x82582858;
	sub_83575980(ctx, base);
	// stb r19,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r19.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825834e0
	ctx.lr = 0x82582864;
	sub_825834E0(ctx, base);
loc_82582864:
	// addi r24,r26,224
	ctx.r24.s64 = ctx.r26.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82582870;
	sub_8257EFD8(ctx, base);
	// addi r25,r26,244
	ctx.r25.s64 = ctx.r26.s64 + 244;
	// lwz r31,240(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// beq cr6,0x82582930
	if (cr6.eq) goto loc_82582930;
loc_82582880:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,68(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8258b328
	ctx.lr = 0x82582894;
	sub_8258B328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82582924
	if (cr6.eq) goto loc_82582924;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82574a80
	ctx.lr = 0x825828B0;
	sub_82574A80(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82582924
	if (!cr6.eq) goto loc_82582924;
	// addi r3,r26,256
	ctx.r3.s64 = ctx.r26.s64 + 256;
	// bl 0x82574a08
	ctx.lr = 0x825828C0;
	sub_82574A08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8258afc0
	ctx.lr = 0x825828E0;
	sub_8258AFC0(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r30,r29,296
	ctx.r30.s64 = ctx.r29.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825828FC;
	sub_8257EFD8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// bl 0x825749e0
	ctx.lr = 0x82582908;
	sub_825749E0(ctx, base);
	// lwz r8,320(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r31,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x8257efc8
	ctx.lr = 0x82582924;
	sub_8257EFC8(ctx, base);
loc_82582924:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bne cr6,0x82582880
	if (!cr6.eq) goto loc_82582880;
loc_82582930:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582938;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82582944:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82582950;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82582950"))) PPC_WEAK_FUNC(sub_82582950);
PPC_FUNC_IMPL(__imp__sub_82582950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82582958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,788
	ctx.r31.s64 = ctx.r3.s64 + 788;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x82582970;
	sub_8257EFD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,756
	ctx.r3.s64 = ctx.r30.s64 + 756;
	// bl 0x8247d6b0
	ctx.lr = 0x8258297C;
	sub_8247D6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x82582984;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258298C"))) PPC_WEAK_FUNC(sub_8258298C);
PPC_FUNC_IMPL(__imp__sub_8258298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582990"))) PPC_WEAK_FUNC(sub_82582990);
PPC_FUNC_IMPL(__imp__sub_82582990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82582998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,796
	ctx.r31.s64 = ctx.r3.s64 + 796;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x825829B0;
	sub_8257EFD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,772
	ctx.r3.s64 = ctx.r30.s64 + 772;
	// bl 0x8247d6b0
	ctx.lr = 0x825829BC;
	sub_8247D6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x825829C4;
	sub_8257EFC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

