#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839B0C7C"))) PPC_WEAK_FUNC(sub_839B0C7C);
PPC_FUNC_IMPL(__imp__sub_839B0C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0C80"))) PPC_WEAK_FUNC(sub_839B0C80);
PPC_FUNC_IMPL(__imp__sub_839B0C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B0C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0C9C;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B0CAC;
	sub_8399FE30(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x839b0cec
	if (cr6.gt) goto loc_839B0CEC;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x839b0cec
	if (cr6.eq) goto loc_839B0CEC;
	// bdz 0x839b0ccc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0CCC;
	// bdz 0x839b0cd4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0CD4;
	// b 0x839b0ce0
	goto loc_839B0CE0;
loc_839B0CCC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b0cf0
	goto loc_839B0CF0;
loc_839B0CD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x839b0cf4
	goto loc_839B0CF4;
loc_839B0CE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b0cf4
	goto loc_839B0CF4;
loc_839B0CEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_839B0CF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839B0CF4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r3,r5,24
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 24;
	// bl 0x839b0bc0
	ctx.lr = 0x839B0D18;
	sub_839B0BC0(ctx, base);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stb r4,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r4.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0D2C"))) PPC_WEAK_FUNC(sub_839B0D2C);
PPC_FUNC_IMPL(__imp__sub_839B0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0D30"))) PPC_WEAK_FUNC(sub_839B0D30);
PPC_FUNC_IMPL(__imp__sub_839B0D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B0D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0D4C;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B0D5C;
	sub_8399FE30(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x839b0bc0
	ctx.lr = 0x839B0D64;
	sub_839B0BC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// rlwimi r11,r3,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// bgt cr6,0x839b0db8
	if (cr6.gt) goto loc_839B0DB8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x839b0db8
	if (cr6.eq) goto loc_839B0DB8;
	// bdz 0x839b0d98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0D98;
	// bdz 0x839b0da0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_839B0DA0;
	// b 0x839b0dac
	goto loc_839B0DAC;
loc_839B0D98:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b0dbc
	goto loc_839B0DBC;
loc_839B0DA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x839b0dc0
	goto loc_839B0DC0;
loc_839B0DAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b0dc0
	goto loc_839B0DC0;
loc_839B0DB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_839B0DBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839B0DC0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r1,204
	ctx.r8.s64 = ctx.r1.s64 + 204;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r6,r8
	PPC_STORE_U64(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u64);
	// bl 0x8399f8b8
	ctx.lr = 0x839B0DDC;
	sub_8399F8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B0DE4;
	sub_8399F950(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0DEC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ed80
	ctx.lr = 0x839B0E04;
	sub_8399ED80(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0E0C"))) PPC_WEAK_FUNC(sub_839B0E0C);
PPC_FUNC_IMPL(__imp__sub_839B0E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B0E10"))) PPC_WEAK_FUNC(sub_839B0E10);
PPC_FUNC_IMPL(__imp__sub_839B0E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B0E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x839B0E28;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839B0E2C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0ee8
	if (!cr6.eq) goto loc_839B0EE8;
	// bl 0x839a9dd0
	ctx.lr = 0x839B0E3C;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b0ee8
	if (!cr6.eq) goto loc_839B0EE8;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x831156e8
	ctx.lr = 0x839B0E50;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
loc_839B0E60:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,45(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 45);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839b0e88
	if (cr6.eq) goto loc_839B0E88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839b0e8c
	if (!cr6.eq) goto loc_839B0E8C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b0e8c
	goto loc_839B0E8C;
loc_839B0E88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_839B0E8C:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x839b0eb0
	if (!cr6.eq) goto loc_839B0EB0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,69(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r6,69(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x839b0eb0
	if (cr6.eq) goto loc_839B0EB0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_839B0EB0:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x839b0ef4
	if (cr6.gt) goto loc_839B0EF4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// blt cr6,0x839b0e60
	if (cr6.lt) goto loc_839B0E60;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x839b0ee8
	if (!cr6.eq) goto loc_839B0EE8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r31,69(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// bl 0x8399f8b8
	ctx.lr = 0x839B0EDC;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399fac8
	ctx.lr = 0x839B0EE8;
	sub_8399FAC8(ctx, base);
loc_839B0EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B0EF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B0F00"))) PPC_WEAK_FUNC(sub_839B0F00);
PPC_FUNC_IMPL(__imp__sub_839B0F00) {
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
	// bl 0x8399f8b8
	ctx.lr = 0x839B0F20;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839a0c28
	ctx.lr = 0x839B0F28;
	sub_839A0C28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa498
	ctx.lr = 0x839B0F30;
	sub_839AA498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B0F38;
	sub_831156E8(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r31,705(r9)
	PPC_STORE_U8(ctx.r9.u32 + 705, ctx.r31.u8);
loc_839B0F50:
	// bl 0x8399f8b8
	ctx.lr = 0x839B0F54;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8399fb00
	ctx.lr = 0x839B0F64;
	sub_8399FB00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b0f50
	if (cr6.lt) goto loc_839B0F50;
	// bl 0x8399f8b8
	ctx.lr = 0x839B0F74;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8399f970
	ctx.lr = 0x839B0F80;
	sub_8399F970(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B0F98"))) PPC_WEAK_FUNC(sub_839B0F98);
PPC_FUNC_IMPL(__imp__sub_839B0F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839B0FA0;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4432(r1)
	ea = -4432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B0FB8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r30,2800
	ctx.r10.s64 = ctx.r30.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// bl 0x831ce980
	ctx.lr = 0x839B0FD4;
	sub_831CE980(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,2264
	ctx.r11.s64 = ctx.r1.s64 + 2264;
	// subfc r9,r10,r31
	xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,696
	ctx.r5.s64 = 696;
	// and r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ctx.r31.u64;
	// mulli r10,r6,696
	ctx.r10.s64 = ctx.r6.s64 * 696;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B0FFC;
	sub_831CE980(ctx, base);
	// lbz r4,855(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 855);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839b12fc
	if (cr6.eq) goto loc_839B12FC;
	// mulli r24,r26,532
	ctx.r24.s64 = ctx.r26.s64 * 532;
	// bl 0x8399f8b8
	ctx.lr = 0x839B1010;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// addi r30,r1,232
	ctx.r30.s64 = ctx.r1.s64 + 232;
loc_839B1020:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x839b1030
	if (cr6.lt) goto loc_839B1030;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
loc_839B1030:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B103C;
	sub_8399ED80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b1020
	if (cr6.lt) goto loc_839B1020;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,850(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 850);
	// bl 0x8399eb98
	ctx.lr = 0x839B1058;
	sub_8399EB98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,851(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 851);
	// bl 0x8399ebb0
	ctx.lr = 0x839B1064;
	sub_8399EBB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,853(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 853);
	// bl 0x8399ebc0
	ctx.lr = 0x839B1070;
	sub_8399EBC0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1074;
	sub_8399F8B8(ctx, base);
	// mulli r11,r26,460
	ctx.r11.s64 = ctx.r26.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839B1084;
	sub_8399F760(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x839b109c
	if (cr6.eq) goto loc_839B109C;
	// lbz r4,852(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 852);
loc_839B109C:
	// bl 0x8399ebd0
	ctx.lr = 0x839B10A0;
	sub_8399EBD0(ctx, base);
	// bl 0x839a9a80
	ctx.lr = 0x839B10A4;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b12e8
	if (!cr6.eq) goto loc_839B12E8;
	// bl 0x8399f8b8
	ctx.lr = 0x839B10B4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r26,528
	ctx.r11.s64 = ctx.r26.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x839B10CC;
	sub_831CE980(ctx, base);
	// lbz r11,846(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 846);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839b111c
	if (cr6.eq) goto loc_839B111C;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x839b10fc
	if (!cr6.lt) goto loc_839B10FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839b1100
	goto loc_839B1100;
loc_839B10FC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_839B1100:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839aa698
	ctx.lr = 0x839B1108;
	sub_839AA698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x839b111c
	if (cr6.eq) goto loc_839B111C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ea60
	ctx.lr = 0x839B111C;
	sub_8399EA60(ctx, base);
loc_839B111C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,840
	ctx.r11.s64 = ctx.r1.s64 + 840;
loc_839B1124:
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839b117c
	if (cr6.eq) goto loc_839B117C;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x839b1154
	if (!cr6.lt) goto loc_839B1154;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839b1158
	goto loc_839B1158;
loc_839B1154:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_839B1158:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839aa698
	ctx.lr = 0x839B1160;
	sub_839AA698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x839b117c
	if (cr6.eq) goto loc_839B117C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839a0818
	ctx.lr = 0x839B117C;
	sub_839A0818(ctx, base);
loc_839B117C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,840
	ctx.r11.s64 = ctx.r1.s64 + 840;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x839b1124
	if (cr6.lt) goto loc_839B1124;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,847
	ctx.r11.s64 = ctx.r1.s64 + 847;
loc_839B1194:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839b11e4
	if (cr6.eq) goto loc_839B11E4;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x839b11c0
	if (!cr6.lt) goto loc_839B11C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839b11c4
	goto loc_839B11C4;
loc_839B11C0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_839B11C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839aa698
	ctx.lr = 0x839B11CC;
	sub_839AA698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x839b11e4
	if (cr6.eq) goto loc_839B11E4;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399eb18
	ctx.lr = 0x839B11E4;
	sub_8399EB18(ctx, base);
loc_839B11E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,847
	ctx.r11.s64 = ctx.r1.s64 + 847;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b1194
	if (cr6.lt) goto loc_839B1194;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31768
	ctx.r29.s64 = -2081947648;
loc_839B11FC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b1218
	if (!cr6.lt) goto loc_839B1218;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839b121c
	goto loc_839B121C;
loc_839B1218:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_839B121C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839B1220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839B122C;
	sub_8399EA10(ctx, base);
	// ld r11,25824(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 25824);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x839b1260
	if (cr6.eq) goto loc_839B1260;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839B124C;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839B1250;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1260
	if (cr6.eq) goto loc_839B1260;
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_839B1260:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x839b127c
	if (!cr6.eq) goto loc_839B127C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399e9b8
	ctx.lr = 0x839B127C;
	sub_8399E9B8(ctx, base);
loc_839B127C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// blt cr6,0x839b1220
	if (cr6.lt) goto loc_839B1220;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x839b11fc
	if (cr6.lt) goto loc_839B11FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399ee20
	ctx.lr = 0x839B12A0;
	sub_8399EE20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x8399edb0
	ctx.lr = 0x839B12B0;
	sub_8399EDB0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B12B4;
	sub_8399F8B8(ctx, base);
	// addi r11,r26,1028
	ctx.r11.s64 = ctx.r26.s64 + 1028;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// lwzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x839a8390
	ctx.lr = 0x839B12DC;
	sub_839A8390(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839B12E8;
	sub_8399EE10(ctx, base);
loc_839B12E8:
	// bl 0x8399f8b8
	ctx.lr = 0x839B12EC;
	sub_8399F8B8(ctx, base);
	// add r11,r24,r3
	ctx.r11.u64 = ctx.r24.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82abff78
	ctx.lr = 0x839B12FC;
	sub_82ABFF78(ctx, base);
loc_839B12FC:
	// addi r1,r1,4432
	ctx.r1.s64 = ctx.r1.s64 + 4432;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1304"))) PPC_WEAK_FUNC(sub_839B1304);
PPC_FUNC_IMPL(__imp__sub_839B1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1308"))) PPC_WEAK_FUNC(sub_839B1308);
PPC_FUNC_IMPL(__imp__sub_839B1308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839B1310;
	__savegprlr_23(ctx, base);
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B1324;
	sub_831156E8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r31,2800
	ctx.r10.s64 = ctx.r31.s64 * 2800;
	// subfc r8,r9,r25
	xer.ca = ctx.r25.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r25.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// and r5,r6,r25
	ctx.r5.u64 = ctx.r6.u64 & ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mulli r11,r5,696
	ctx.r11.s64 = ctx.r5.s64 * 696;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,696
	ctx.r5.s64 = 696;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x831ce980
	ctx.lr = 0x839B135C;
	sub_831CE980(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1360;
	sub_8399F8B8(ctx, base);
	// mulli r4,r27,532
	ctx.r4.s64 = ctx.r27.s64 * 532;
	// li r23,0
	ctx.r23.s64 = 0;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// addi r30,r1,232
	ctx.r30.s64 = ctx.r1.s64 + 232;
loc_839B1378:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x8399edb0
	ctx.lr = 0x839B1388;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839b139c
	if (!cr6.lt) goto loc_839B139C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B139C;
	sub_82ABFDA0(ctx, base);
loc_839B139C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b1378
	if (cr6.lt) goto loc_839B1378;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399eba8
	ctx.lr = 0x839B13B4;
	sub_8399EBA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,850(r1)
	PPC_STORE_U8(ctx.r1.u32 + 850, ctx.r11.u8);
	// bl 0x8399ebb8
	ctx.lr = 0x839B13C4;
	sub_8399EBB8(ctx, base);
	// stb r3,851(r1)
	PPC_STORE_U8(ctx.r1.u32 + 851, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ebc8
	ctx.lr = 0x839B13D0;
	sub_8399EBC8(ctx, base);
	// stb r3,853(r1)
	PPC_STORE_U8(ctx.r1.u32 + 853, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ec18
	ctx.lr = 0x839B13DC;
	sub_8399EC18(ctx, base);
	// stb r3,852(r1)
	PPC_STORE_U8(ctx.r1.u32 + 852, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea78
	ctx.lr = 0x839B13E8;
	sub_8399EA78(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stb r3,846(r1)
	PPC_STORE_U8(ctx.r1.u32 + 846, ctx.r3.u8);
loc_839B13F0:
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399ead0
	ctx.lr = 0x839B1400;
	sub_8399EAD0(ctx, base);
	// addi r11,r1,840
	ctx.r11.s64 = ctx.r1.s64 + 840;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// blt cr6,0x839b13f0
	if (cr6.lt) goto loc_839B13F0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_839B141C:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399eb50
	ctx.lr = 0x839B1428;
	sub_8399EB50(ctx, base);
	// addi r11,r1,847
	ctx.r11.s64 = ctx.r1.s64 + 847;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b141c
	if (cr6.lt) goto loc_839B141C;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r26,255
	ctx.r26.s64 = 255;
loc_839B1448:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b1464
	if (!cr6.lt) goto loc_839B1464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
loc_839B1464:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ea10
	ctx.lr = 0x839B1470;
	sub_8399EA10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x839b14c4
	if (!cr6.lt) goto loc_839B14C4;
	// bl 0x8399f8b8
	ctx.lr = 0x839B1480;
	sub_8399F8B8(ctx, base);
	// mulli r11,r27,528
	ctx.r11.s64 = ctx.r27.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x839a0478
	ctx.lr = 0x839B1498;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839B149C;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b14c4
	if (cr6.eq) goto loc_839B14C4;
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bge cr6,0x839b14c4
	if (!cr6.lt) goto loc_839B14C4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,712
	ctx.r9.s64 = ctx.r1.s64 + 712;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_839B14C4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(ctx.r28.s32, 32, xer);
	// blt cr6,0x839b1448
	if (cr6.lt) goto loc_839B1448;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839ab000
	ctx.lr = 0x839B14EC;
	sub_839AB000(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839b1574
	if (cr6.lt) goto loc_839B1574;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839b1514
	if (cr6.eq) goto loc_839B1514;
loc_839B1504:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,70
	ctx.r5.s64 = 70;
	// bl 0x831ce980
	ctx.lr = 0x839B1510;
	sub_831CE980(ctx, base);
	// stb r23,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r23.u8);
loc_839B1514:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// stb r31,855(r1)
	PPC_STORE_U8(ctx.r1.u32 + 855, ctx.r31.u8);
	// bge cr6,0x839b1538
	if (!cr6.lt) goto loc_839B1538;
	// mulli r11,r25,696
	ctx.r11.s64 = ctx.r25.s64 * 696;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// bl 0x82b47a48
	ctx.lr = 0x839B1538;
	sub_82B47A48(ctx, base);
loc_839B1538:
	// bl 0x831156e8
	ctx.lr = 0x839B153C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37446
	ctx.r9.u64 = ctx.r11.u64 | 37446;
	// stbx r31,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x839b156c
	if (cr6.lt) goto loc_839B156C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B156C;
	sub_825952B8(ctx, base);
loc_839B156C:
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839B1574:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x839b1504
	goto loc_839B1504;
}

__attribute__((alias("__imp__sub_839B157C"))) PPC_WEAK_FUNC(sub_839B157C);
PPC_FUNC_IMPL(__imp__sub_839B157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1580"))) PPC_WEAK_FUNC(sub_839B1580);
PPC_FUNC_IMPL(__imp__sub_839B1580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B1588"))) PPC_WEAK_FUNC(sub_839B1588);
PPC_FUNC_IMPL(__imp__sub_839B1588) {
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
	// bl 0x82d19a68
	ctx.lr = 0x839B15A8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b15f0
	if (cr6.eq) goto loc_839B15F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B15B8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2d580
	ctx.lr = 0x839B15C4;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b15f0
	if (cr6.eq) goto loc_839B15F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B15DC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b15f0
	if (cr6.eq) goto loc_839B15F0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B15F0;
	sub_82D2AEC8(ctx, base);
loc_839B15F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B1608"))) PPC_WEAK_FUNC(sub_839B1608);
PPC_FUNC_IMPL(__imp__sub_839B1608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839B1610;
	__savegprlr_25(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_839B1644:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839b1660
	if (!cr6.lt) goto loc_839B1660;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839b1664
	goto loc_839B1664;
loc_839B1660:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839B1664:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x839b16d8
	if (cr6.gt) goto loc_839B16D8;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5768
	ctx.r12.s64 = ctx.r12.s64 + 5768;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B16BC;
	case 1:
		goto loc_839B16B8;
	case 2:
		goto loc_839B16B8;
	case 3:
		goto loc_839B16C8;
	case 4:
		goto loc_839B16C8;
	case 5:
		goto loc_839B16C4;
	case 6:
		goto loc_839B16C4;
	case 7:
		goto loc_839B16C8;
	case 8:
		goto loc_839B16D0;
	case 9:
		goto loc_839B16D0;
	case 10:
		goto loc_839B16D4;
	case 11:
		goto loc_839B16D4;
	default:
		return;
	}
	// lwz r28,5820(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5820);
	// lwz r28,5816(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5816);
	// lwz r28,5816(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5816);
	// lwz r28,5832(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5832);
	// lwz r28,5832(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5832);
	// lwz r28,5828(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5828);
	// lwz r28,5828(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5828);
	// lwz r28,5832(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5832);
	// lwz r28,5840(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5840);
	// lwz r28,5840(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5840);
	// lwz r28,5844(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5844);
	// lwz r28,5844(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5844);
loc_839B16B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_839B16BC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x839b16d8
	goto loc_839B16D8;
loc_839B16C4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_839B16C8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x839b16d8
	goto loc_839B16D8;
loc_839B16D0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_839B16D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_839B16D8:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839b16ec
	if (!cr6.lt) goto loc_839B16EC;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839b16f0
	goto loc_839B16F0;
loc_839B16EC:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839B16F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x839b1764
	if (cr6.gt) goto loc_839B1764;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5908
	ctx.r12.s64 = ctx.r12.s64 + 5908;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B1748;
	case 1:
		goto loc_839B1744;
	case 2:
		goto loc_839B1744;
	case 3:
		goto loc_839B1754;
	case 4:
		goto loc_839B1754;
	case 5:
		goto loc_839B1750;
	case 6:
		goto loc_839B1750;
	case 7:
		goto loc_839B1754;
	case 8:
		goto loc_839B175C;
	case 9:
		goto loc_839B175C;
	case 10:
		goto loc_839B1760;
	case 11:
		goto loc_839B1760;
	default:
		return;
	}
	// lwz r28,5960(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5960);
	// lwz r28,5956(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5956);
	// lwz r28,5956(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5956);
	// lwz r28,5972(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5972);
	// lwz r28,5972(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5972);
	// lwz r28,5968(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5968);
	// lwz r28,5968(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5968);
	// lwz r28,5972(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5972);
	// lwz r28,5980(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5980);
	// lwz r28,5980(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5980);
	// lwz r28,5984(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5984);
	// lwz r28,5984(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5984);
loc_839B1744:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_839B1748:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x839b1764
	goto loc_839B1764;
loc_839B1750:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_839B1754:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x839b1764
	goto loc_839B1764;
loc_839B175C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_839B1760:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_839B1764:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x839b1644
	if (cr6.lt) goto loc_839B1644;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x839b17a4
	if (!cr6.eq) goto loc_839B17A4;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x839b17a4
	if (!cr6.eq) goto loc_839B17A4;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x839b17a4
	if (!cr6.eq) goto loc_839B17A4;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x839b17a4
	if (!cr6.eq) goto loc_839B17A4;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// bne cr6,0x839b17a4
	if (!cr6.eq) goto loc_839B17A4;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x839b17a8
	if (cr6.eq) goto loc_839B17A8;
loc_839B17A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839B17A8:
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B17AC"))) PPC_WEAK_FUNC(sub_839B17AC);
PPC_FUNC_IMPL(__imp__sub_839B17AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B17B0"))) PPC_WEAK_FUNC(sub_839B17B0);
PPC_FUNC_IMPL(__imp__sub_839B17B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B17B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B17C8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1908
	if (cr6.eq) goto loc_839B1908;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B17D8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2d580
	ctx.lr = 0x839B17E4;
	sub_82D2D580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1908
	if (cr6.eq) goto loc_839B1908;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b18ec
	if (cr6.eq) goto loc_839B18EC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r30,r11,32724
	ctx.r30.s64 = ctx.r11.s64 + 32724;
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B181C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1820;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b188c
	if (cr6.eq) goto loc_839B188C;
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x839aa9a8
	ctx.lr = 0x839B1830;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b188c
	if (cr6.eq) goto loc_839B188C;
	// lwz r30,100(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1844;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B184C;
	sub_8399F988(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// subfc r8,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r6,r9,26072
	ctx.r6.s64 = ctx.r9.s64 + 26072;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// and r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 & ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x839B1884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B188C:
	// lwz r29,100(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1894;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B18A4;
	sub_8399FE30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839b1608
	ctx.lr = 0x839B18AC;
	sub_839B1608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x839b18dc
	if (cr6.eq) goto loc_839B18DC;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// bctrl 
	ctx.lr = 0x839B18D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B18DC:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bctrl 
	ctx.lr = 0x839B18E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B18EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,32724
	ctx.r4.s64 = ctx.r10.s64 + 32724;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B1908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B1908:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1910"))) PPC_WEAK_FUNC(sub_839B1910);
PPC_FUNC_IMPL(__imp__sub_839B1910) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B1934;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32376
	ctx.r9.s64 = ctx.r11.s64 + -32376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// stw r7,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r7.u32);
	// addi r9,r31,164
	ctx.r9.s64 = ctx.r31.s64 + 164;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// blt cr6,0x839b1980
	if (cr6.lt) goto loc_839B1980;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x839b1984
	goto loc_839B1984;
loc_839B1980:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_839B1984:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// stb r11,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r11.u8);
	// stb r11,29(r9)
	PPC_STORE_U8(ctx.r9.u32 + 29, ctx.r11.u8);
	// stb r11,30(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30, ctx.r11.u8);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// blt cr6,0x839b19b8
	if (cr6.lt) goto loc_839B19B8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x839b19bc
	goto loc_839B19BC;
loc_839B19B8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_839B19BC:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// addi r30,r9,25928
	ctx.r30.s64 = ctx.r9.s64 + 25928;
	// stb r11,30(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30, ctx.r11.u8);
	// lwz r4,25928(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25928);
	// bl 0x82d20ae0
	ctx.lr = 0x839B19E0;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B19F0;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_839B1A0C"))) PPC_WEAK_FUNC(sub_839B1A0C);
PPC_FUNC_IMPL(__imp__sub_839B1A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1A10"))) PPC_WEAK_FUNC(sub_839B1A10);
PPC_FUNC_IMPL(__imp__sub_839B1A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B1A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32376
	ctx.r9.s64 = ctx.r11.s64 + -32376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r29,r3,196
	ctx.r29.s64 = ctx.r3.s64 + 196;
	// lwz r7,216(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x839b1a5c
	if (cr6.lt) goto loc_839B1A5C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839B1A5C;
	sub_825952B8(ctx, base);
loc_839B1A5C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b1a90
	if (cr6.lt) goto loc_839B1A90;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839B1A90;
	sub_825952B8(ctx, base);
loc_839B1A90:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r9,r11,-32704
	ctx.r9.s64 = ctx.r11.s64 + -32704;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B1ABC;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x839B1AC4;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1ACC"))) PPC_WEAK_FUNC(sub_839B1ACC);
PPC_FUNC_IMPL(__imp__sub_839B1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1AD0"))) PPC_WEAK_FUNC(sub_839B1AD0);
PPC_FUNC_IMPL(__imp__sub_839B1AD0) {
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
	// bl 0x839b1a10
	ctx.lr = 0x839B1AF0;
	sub_839B1A10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b1b08
	if (cr6.eq) goto loc_839B1B08;
	// bl 0x82416268
	ctx.lr = 0x839B1B04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B1B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B1B20"))) PPC_WEAK_FUNC(sub_839B1B20);
PPC_FUNC_IMPL(__imp__sub_839B1B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B1B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b1b50
	if (cr6.lt) goto loc_839B1B50;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x839b1b54
	goto loc_839B1B54;
loc_839B1B50:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_839B1B54:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1B60;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x825832e8
	ctx.lr = 0x839B1B70;
	sub_825832E8(ctx, base);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1B78;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B1B80;
	sub_8399F988(ctx, base);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B1B8C;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8399fd48
	ctx.lr = 0x839B1B94;
	sub_8399FD48(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b1bac
	if (!cr6.eq) goto loc_839B1BAC;
	// bl 0x830ff290
	ctx.lr = 0x839B1BA0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B1BA4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x839b1be4
	if (!cr6.eq) goto loc_839B1BE4;
loc_839B1BAC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839aa9a8
	ctx.lr = 0x839B1BB4;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b1be4
	if (cr6.eq) goto loc_839B1BE4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x839afd18
	ctx.lr = 0x839B1BDC;
	sub_839AFD18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839B1BE4;
	sub_8387E8E0(ctx, base);
loc_839B1BE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1BEC"))) PPC_WEAK_FUNC(sub_839B1BEC);
PPC_FUNC_IMPL(__imp__sub_839B1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1BF0"))) PPC_WEAK_FUNC(sub_839B1BF0);
PPC_FUNC_IMPL(__imp__sub_839B1BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B1BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B1C28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1c50
	if (cr6.eq) goto loc_839B1C50;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b1910
	ctx.lr = 0x839B1C48;
	sub_839B1910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B1C50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1C5C"))) PPC_WEAK_FUNC(sub_839B1C5C);
PPC_FUNC_IMPL(__imp__sub_839B1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1C60"))) PPC_WEAK_FUNC(sub_839B1C60);
PPC_FUNC_IMPL(__imp__sub_839B1C60) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B1C80;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1ce8
	if (cr6.eq) goto loc_839B1CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B1C90;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2d580
	ctx.lr = 0x839B1C9C;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1ce8
	if (cr6.eq) goto loc_839B1CE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B1CB4;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b1ce8
	if (cr6.eq) goto loc_839B1CE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x839B1CCC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B1CE0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839B1CE8;
	sub_8387E8E0(ctx, base);
loc_839B1CE8:
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

__attribute__((alias("__imp__sub_839B1D00"))) PPC_WEAK_FUNC(sub_839B1D00);
PPC_FUNC_IMPL(__imp__sub_839B1D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B1D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12316
	ctx.r10.u64 = ctx.r10.u64 | 12316;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b1e04
	if (cr6.gt) goto loc_839B1E04;
	// beq cr6,0x839b1de4
	if (cr6.eq) goto loc_839B1DE4;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r10,r10,12306
	ctx.r10.u64 = ctx.r10.u64 | 12306;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b1da8
	if (cr6.gt) goto loc_839B1DA8;
	// beq cr6,0x839b1e78
	if (cr6.eq) goto loc_839B1E78;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12291
	xer.ca = ctx.r11.u32 > 12290;
	ctx.r11.s64 = ctx.r11.s64 + -12291;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b1d70
	if (cr0.eq) goto loc_839B1D70;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b1e80
	if (!cr6.eq) goto loc_839B1E80;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r3,196
	ctx.r4.s64 = ctx.r3.s64 + 196;
	// bl 0x839b1b20
	ctx.lr = 0x839B1D64;
	sub_839B1B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1D70:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B1D78;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B1D88;
	sub_8399FE30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b1b20
	ctx.lr = 0x839B1D9C;
	sub_839B1B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1DA8:
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12312
	xer.ca = ctx.r11.u32 > 12311;
	ctx.r11.s64 = ctx.r11.s64 + -12312;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b1dd0
	if (cr0.eq) goto loc_839B1DD0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b1e80
	if (!cr6.eq) goto loc_839B1E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1DD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1DE4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8259cb28
	ctx.lr = 0x839B1DF8;
	sub_8259CB28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1E04:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r10,r10,12342
	ctx.r10.u64 = ctx.r10.u64 | 12342;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b1e68
	if (cr6.gt) goto loc_839B1E68;
	// beq cr6,0x839b1e54
	if (cr6.eq) goto loc_839B1E54;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12317
	xer.ca = ctx.r11.u32 > 12316;
	ctx.r11.s64 = ctx.r11.s64 + -12317;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b1e40
	if (cr0.eq) goto loc_839B1E40;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b1e80
	if (!cr6.eq) goto loc_839B1E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1E40:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1E54:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B1E68:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12343
	ctx.r9.u64 = ctx.r10.u64 | 12343;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x839b1e80
	if (!cr6.eq) goto loc_839B1E80;
loc_839B1E78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
loc_839B1E80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1E8C"))) PPC_WEAK_FUNC(sub_839B1E8C);
PPC_FUNC_IMPL(__imp__sub_839B1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B1E90"))) PPC_WEAK_FUNC(sub_839B1E90);
PPC_FUNC_IMPL(__imp__sub_839B1E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B1E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x839b1eb0
	if (!cr6.eq) goto loc_839B1EB0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_839B1EB0:
	// lbz r11,194(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 194);
	// lbz r10,226(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 226);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839b1f18
	if (!cr6.eq) goto loc_839B1F18;
	// lbz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 224);
	// lbz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b1f18
	if (!cr6.eq) goto loc_839B1F18;
	// lbz r11,225(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 225);
	// lbz r10,193(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 193);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b1f18
	if (!cr6.eq) goto loc_839B1F18;
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// addi r31,r29,196
	ctx.r31.s64 = ctx.r29.s64 + 196;
	// lwz r7,212(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// addi r3,r29,164
	ctx.r3.s64 = ctx.r29.s64 + 164;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b1f00
	if (cr6.lt) goto loc_839B1F00;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x839b1f04
	goto loc_839B1F04;
loc_839B1F00:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_839B1F04:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x839B1F10;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839b1f4c
	if (cr6.eq) goto loc_839B1F4C;
loc_839B1F18:
	// addi r31,r29,196
	ctx.r31.s64 = ctx.r29.s64 + 196;
	// addi r3,r29,164
	ctx.r3.s64 = ctx.r29.s64 + 164;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x8259cb28
	ctx.lr = 0x839B1F34;
	sub_8259CB28(ctx, base);
	// lbz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 224);
	// stb r11,192(r29)
	PPC_STORE_U8(ctx.r29.u32 + 192, ctx.r11.u8);
	// lbz r10,225(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 225);
	// stb r10,193(r29)
	PPC_STORE_U8(ctx.r29.u32 + 193, ctx.r10.u8);
	// lbz r9,226(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 226);
	// stb r9,194(r29)
	PPC_STORE_U8(ctx.r29.u32 + 194, ctx.r9.u8);
loc_839B1F4C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b1fb8
	if (cr6.eq) goto loc_839B1FB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b1f6c
	if (cr6.lt) goto loc_839B1F6C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x839b1f70
	goto loc_839B1F70;
loc_839B1F6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839B1F70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839b1c60
	ctx.lr = 0x839B1F78;
	sub_839B1C60(ctx, base);
	// lbz r11,226(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 226);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b1fa4
	if (cr6.eq) goto loc_839B1FA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839b1588
	ctx.lr = 0x839B1F90;
	sub_839B1588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839b17b0
	ctx.lr = 0x839B1F9C;
	sub_839B17B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B1FA4:
	// lbz r4,224(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 224);
	// bl 0x839b1588
	ctx.lr = 0x839B1FAC;
	sub_839B1588(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,225(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 225);
	// bl 0x839b17b0
	ctx.lr = 0x839B1FB8;
	sub_839B17B0(ctx, base);
loc_839B1FB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B1FC0"))) PPC_WEAK_FUNC(sub_839B1FC0);
PPC_FUNC_IMPL(__imp__sub_839B1FC0) {
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
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x839b1fec
	if (cr6.eq) goto loc_839B1FEC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x839b201c
	if (!cr6.eq) goto loc_839B201C;
loc_839B1FEC:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x839b2010
	if (cr6.eq) goto loc_839B2010;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// bl 0x839b1e90
	ctx.lr = 0x839B2010;
	sub_839B1E90(ctx, base);
loc_839B2010:
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb638
	ctx.lr = 0x839B201C;
	sub_839CB638(ctx, base);
loc_839B201C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2034"))) PPC_WEAK_FUNC(sub_839B2034);
PPC_FUNC_IMPL(__imp__sub_839B2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2038"))) PPC_WEAK_FUNC(sub_839B2038);
PPC_FUNC_IMPL(__imp__sub_839B2038) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2054;
	sub_82D19A68(ctx, base);
	// li r4,-4416
	ctx.r4.s64 = -4416;
	// bl 0x83545640
	ctx.lr = 0x839B205C;
	sub_83545640(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B2064;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fd48
	ctx.lr = 0x839B206C;
	sub_8399FD48(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b2094
	if (!cr6.eq) goto loc_839B2094;
	// bl 0x830ff290
	ctx.lr = 0x839B207C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B2080;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x839b2094
	if (cr6.eq) goto loc_839B2094;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// b 0x839b2098
	goto loc_839B2098;
loc_839B2094:
	// stb r30,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r30.u8);
loc_839B2098:
	// stb r30,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r30.u8);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B20A4;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B20B4;
	sub_8399FE30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b1b20
	ctx.lr = 0x839B20C8;
	sub_839B1B20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b1e90
	ctx.lr = 0x839B20D4;
	sub_839B1E90(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B20EC"))) PPC_WEAK_FUNC(sub_839B20EC);
PPC_FUNC_IMPL(__imp__sub_839B20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B20F0"))) PPC_WEAK_FUNC(sub_839B20F0);
PPC_FUNC_IMPL(__imp__sub_839B20F0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839b1e90
	ctx.lr = 0x839B2104;
	sub_839B1E90(ctx, base);
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

__attribute__((alias("__imp__sub_839B2118"))) PPC_WEAK_FUNC(sub_839B2118);
PPC_FUNC_IMPL(__imp__sub_839B2118) {
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
	// bl 0x839cbb00
	ctx.lr = 0x839B2130;
	sub_839CBB00(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31392
	ctx.r9.s64 = ctx.r11.s64 + -31392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// stw r7,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,26084(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26084);
	// bl 0x82d23390
	ctx.lr = 0x839B2164;
	sub_82D23390(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r31,884
	ctx.r11.s64 = ctx.r31.s64 + 884;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839B2178:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x839b2178
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839B2178;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 601, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_839B21A0"))) PPC_WEAK_FUNC(sub_839B21A0);
PPC_FUNC_IMPL(__imp__sub_839B21A0) {
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
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B21B8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x839B21C8;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x839b21ec
	if (cr6.gt) goto loc_839B21EC;
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
loc_839B21EC:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// addi r3,r11,-11
	ctx.r3.s64 = ctx.r11.s64 + -11;
	// blt cr6,0x839b21fc
	if (cr6.lt) goto loc_839B21FC;
	// li r3,12
	ctx.r3.s64 = 12;
loc_839B21FC:
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

__attribute__((alias("__imp__sub_839B2210"))) PPC_WEAK_FUNC(sub_839B2210);
PPC_FUNC_IMPL(__imp__sub_839B2210) {
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
	// bl 0x839cc3a0
	ctx.lr = 0x839B2230;
	sub_839CC3A0(ctx, base);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b2264
	if (cr6.eq) goto loc_839B2264;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,26092(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26092);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B2264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B2264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B227C"))) PPC_WEAK_FUNC(sub_839B227C);
PPC_FUNC_IMPL(__imp__sub_839B227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2280"))) PPC_WEAK_FUNC(sub_839B2280);
PPC_FUNC_IMPL(__imp__sub_839B2280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B2288;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8399f4f8
	ctx.lr = 0x839B22A0;
	sub_8399F4F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B22BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825832d8
	ctx.lr = 0x839B22C4;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b22e8
	if (cr6.eq) goto loc_839B22E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x839B22E0;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_839B22E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B22F0"))) PPC_WEAK_FUNC(sub_839B22F0);
PPC_FUNC_IMPL(__imp__sub_839B22F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2300"))) PPC_WEAK_FUNC(sub_839B2300);
PPC_FUNC_IMPL(__imp__sub_839B2300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26088);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839B2334"))) PPC_WEAK_FUNC(sub_839B2334);
PPC_FUNC_IMPL(__imp__sub_839B2334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2338"))) PPC_WEAK_FUNC(sub_839B2338);
PPC_FUNC_IMPL(__imp__sub_839B2338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,26088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26088);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839B236C"))) PPC_WEAK_FUNC(sub_839B236C);
PPC_FUNC_IMPL(__imp__sub_839B236C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2370"))) PPC_WEAK_FUNC(sub_839B2370);
PPC_FUNC_IMPL(__imp__sub_839B2370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B2378;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B238C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x839B239C;
	sub_82A47D40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B23B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// blt cr6,0x839b23d8
	if (cr6.lt) goto loc_839B23D8;
	// addi r11,r30,221
	ctx.r11.s64 = ctx.r30.s64 + 221;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B23D8:
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B23E0;
	sub_8399F8B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B23FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea10
	ctx.lr = 0x839B2410;
	sub_8399EA10(ctx, base);
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B241C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0478
	ctx.lr = 0x839B2434;
	sub_839A0478(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x839B2438;
	sub_825832D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2454
	if (cr6.eq) goto loc_839B2454;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x839B2454;
	sub_83120738(ctx, base);
loc_839B2454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B245C"))) PPC_WEAK_FUNC(sub_839B245C);
PPC_FUNC_IMPL(__imp__sub_839B245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2460"))) PPC_WEAK_FUNC(sub_839B2460);
PPC_FUNC_IMPL(__imp__sub_839B2460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B2468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,932
	ctx.r4.s64 = 932;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B2498;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b24c0
	if (cr6.eq) goto loc_839B24C0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b2118
	ctx.lr = 0x839B24B8;
	sub_839B2118(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B24C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B24CC"))) PPC_WEAK_FUNC(sub_839B24CC);
PPC_FUNC_IMPL(__imp__sub_839B24CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B24D0"))) PPC_WEAK_FUNC(sub_839B24D0);
PPC_FUNC_IMPL(__imp__sub_839B24D0) {
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
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x839B24EC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B24F0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839b2510
	if (!cr6.eq) goto loc_839B2510;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2500;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// b 0x839b2604
	goto loc_839B2604;
loc_839B2510:
	// bl 0x830ff290
	ctx.lr = 0x839B2514;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B2518;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,25
	cr6.compare<uint32_t>(ctx.r3.u32, 25, xer);
	// bne cr6,0x839b2538
	if (!cr6.eq) goto loc_839B2538;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2528;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// b 0x839b2604
	goto loc_839B2604;
loc_839B2538:
	// bl 0x839a9a80
	ctx.lr = 0x839B253C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b2560
	if (cr6.eq) goto loc_839B2560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2550;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x839b2604
	goto loc_839B2604;
loc_839B2560:
	// bl 0x839aa3a0
	ctx.lr = 0x839B2564;
	sub_839AA3A0(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x839aab88
	ctx.lr = 0x839B2570;
	sub_839AAB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839B2580;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839b25f4
	if (cr6.lt) goto loc_839B25F4;
	// lwz r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// rlwinm r10,r11,16,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b25f4
	if (cr6.gt) goto loc_839B25F4;
	// lwz r11,880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x839b25b0
	if (!cr6.lt) goto loc_839B25B0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839b25cc
	goto loc_839B25CC;
loc_839B25B0:
	// addi r10,r11,23
	ctx.r10.s64 = ctx.r11.s64 + 23;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x839b25c4
	if (cr6.lt) goto loc_839B25C4;
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x839b25cc
	goto loc_839B25CC;
loc_839B25C4:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r31,r11,-11
	ctx.r31.s64 = ctx.r11.s64 + -11;
loc_839B25CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B25D4;
	sub_82D19A68(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,26232
	ctx.r9.s64 = ctx.r11.s64 + 26232;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// b 0x839b2610
	goto loc_839B2610;
loc_839B25F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B25FC;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,-31664
	ctx.r4.s64 = ctx.r11.s64 + -31664;
loc_839B2604:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839B2610:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x839B2618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2630"))) PPC_WEAK_FUNC(sub_839B2630);
PPC_FUNC_IMPL(__imp__sub_839B2630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B2638;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2644;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,-31720
	ctx.r4.s64 = ctx.r11.s64 + -31720;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B2660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B2684;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b26ec
	if (cr6.eq) goto loc_839B26EC;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B2694;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r11,1072
	ctx.r30.s64 = ctx.r11.s64 + 1072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a47da0
	ctx.lr = 0x839B26A8;
	sub_82A47DA0(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x839b26ec
	if (!cr6.gt) goto loc_839B26EC;
loc_839B26B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a0368
	ctx.lr = 0x839B26C4;
	sub_839A0368(ctx, base);
	// bl 0x8399eed0
	ctx.lr = 0x839B26C8;
	sub_8399EED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b26d8
	if (!cr6.eq) goto loc_839B26D8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_839B26D8:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// blt cr6,0x839b26b8
	if (cr6.lt) goto loc_839B26B8;
loc_839B26EC:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x839B2704;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B2718;
	sub_82D291E0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b2738
	if (cr6.lt) goto loc_839B2738;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B2738;
	sub_825952B8(ctx, base);
loc_839B2738:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B2740"))) PPC_WEAK_FUNC(sub_839B2740);
PPC_FUNC_IMPL(__imp__sub_839B2740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B2748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cbce0
	ctx.lr = 0x839B2754;
	sub_839CBCE0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_839B2758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2770;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b2370
	ctx.lr = 0x839B277C;
	sub_839B2370(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x839b2758
	if (cr6.lt) goto loc_839B2758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b24d0
	ctx.lr = 0x839B2790;
	sub_839B24D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2798;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r30,r11,-31728
	ctx.r30.s64 = ctx.r11.s64 + -31728;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B27B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x839a9a80
	ctx.lr = 0x839B27C0;
	sub_839A9A80(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839b27fc
	if (cr6.eq) goto loc_839B27FC;
	// bl 0x830ff290
	ctx.lr = 0x839B27D0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839B27D4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// beq cr6,0x839b27fc
	if (cr6.eq) goto loc_839B27FC;
	// lis r4,21
	ctx.r4.s64 = 1376256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// bl 0x82d29598
	ctx.lr = 0x839B27EC;
	sub_82D29598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b2630
	ctx.lr = 0x839B27F4;
	sub_839B2630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B27FC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B280C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2814;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B282C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839B2838;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B2840"))) PPC_WEAK_FUNC(sub_839B2840);
PPC_FUNC_IMPL(__imp__sub_839B2840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B2848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12299
	ctx.r10.u64 = ctx.r10.u64 | 12299;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b2950
	if (cr6.gt) goto loc_839B2950;
	// beq cr6,0x839b293c
	if (cr6.eq) goto loc_839B293C;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12295
	xer.ca = ctx.r11.u32 > 12294;
	ctx.r11.s64 = ctx.r11.s64 + -12295;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b28e0
	if (cr0.eq) goto loc_839B28E0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839b2898
	if (cr6.eq) goto loc_839B2898;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x839b29a0
	if (!cr6.eq) goto loc_839B29A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x839b2994
	goto loc_839B2994;
loc_839B2898:
	// bl 0x839a9a80
	ctx.lr = 0x839B289C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b28b0
	if (cr6.eq) goto loc_839B28B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b2630
	ctx.lr = 0x839B28B0;
	sub_839B2630(ctx, base);
loc_839B28B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_839B28B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b2370
	ctx.lr = 0x839B28C0;
	sub_839B2370(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x839b28b4
	if (cr6.lt) goto loc_839B28B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cf0e8
	ctx.lr = 0x839B28D8;
	sub_839CF0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B28E0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r4,600(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 600);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,328(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B2904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_839B2908:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b2370
	ctx.lr = 0x839B2914;
	sub_839B2370(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x839b2908
	if (cr6.lt) goto loc_839B2908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b24d0
	ctx.lr = 0x839B2928;
	sub_839B24D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cf0e8
	ctx.lr = 0x839B2934;
	sub_839CF0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B293C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x839b2998
	goto loc_839B2998;
loc_839B2950:
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12353
	xer.ca = ctx.r11.u32 > 12352;
	ctx.r11.s64 = ctx.r11.s64 + -12353;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b2980
	if (cr0.eq) goto loc_839B2980;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b29a0
	if (!cr6.eq) goto loc_839B29A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x839b2998
	goto loc_839B2998;
loc_839B2980:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839B2994:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839B2998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x839B29A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B29A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cf0e8
	ctx.lr = 0x839B29AC;
	sub_839CF0E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B29B4"))) PPC_WEAK_FUNC(sub_839B29B4);
PPC_FUNC_IMPL(__imp__sub_839B29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B29B8"))) PPC_WEAK_FUNC(sub_839B29B8);
PPC_FUNC_IMPL(__imp__sub_839B29B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B29C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cbb00
	ctx.lr = 0x839B29CC;
	sub_839CBB00(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r8,r10,-30448
	ctx.r8.s64 = ctx.r10.s64 + -30448;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r30,884(r31)
	PPC_STORE_U8(ctx.r31.u32 + 884, ctx.r30.u8);
	// stb r30,885(r31)
	PPC_STORE_U8(ctx.r31.u32 + 885, ctx.r30.u8);
	// stw r6,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r6.u32);
	// bl 0x839b0650
	ctx.lr = 0x839B2A0C;
	sub_839B0650(ctx, base);
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r5,26284
	ctx.r29.s64 = ctx.r5.s64 + 26284;
	// lwz r4,26284(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26284);
	// bl 0x82d20ae0
	ctx.lr = 0x839B2A20;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x839B2A30;
	sub_82D23390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,603(r31)
	PPC_STORE_U8(ctx.r31.u32 + 603, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 602, ctx.r4.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B2A48"))) PPC_WEAK_FUNC(sub_839B2A48);
PPC_FUNC_IMPL(__imp__sub_839B2A48) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30448
	ctx.r9.s64 = ctx.r11.s64 + -30448;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,892
	ctx.r3.s64 = ctx.r3.s64 + 892;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B2A7C;
	sub_8387E8E0(ctx, base);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,-32704
	ctx.r5.s64 = ctx.r7.s64 + -32704;
	// addi r4,r6,-17088
	ctx.r4.s64 = ctx.r6.s64 + -17088;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B2A9C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x839B2AA4;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_839B2AB8"))) PPC_WEAK_FUNC(sub_839B2AB8);
PPC_FUNC_IMPL(__imp__sub_839B2AB8) {
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
	// bl 0x839b2a48
	ctx.lr = 0x839B2AD8;
	sub_839B2A48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b2af0
	if (cr6.eq) goto loc_839B2AF0;
	// bl 0x82416268
	ctx.lr = 0x839B2AEC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B2AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2B08"))) PPC_WEAK_FUNC(sub_839B2B08);
PPC_FUNC_IMPL(__imp__sub_839B2B08) {
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
	// bl 0x839cd390
	ctx.lr = 0x839B2B20;
	sub_839CD390(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b2b44
	if (!cr6.eq) goto loc_839B2B44;
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
loc_839B2B44:
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x839b0560
	ctx.lr = 0x839B2B4C;
	sub_839B0560(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2B6C"))) PPC_WEAK_FUNC(sub_839B2B6C);
PPC_FUNC_IMPL(__imp__sub_839B2B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2B70"))) PPC_WEAK_FUNC(sub_839B2B70);
PPC_FUNC_IMPL(__imp__sub_839B2B70) {
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
	// addi r3,r3,892
	ctx.r3.s64 = ctx.r3.s64 + 892;
	// bl 0x839b04a0
	ctx.lr = 0x839B2B8C;
	sub_839B04A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b2bb0
	if (!cr6.eq) goto loc_839B2BB0;
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
loc_839B2BB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cf8f0
	ctx.lr = 0x839B2BB8;
	sub_839CF8F0(ctx, base);
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

__attribute__((alias("__imp__sub_839B2BCC"))) PPC_WEAK_FUNC(sub_839B2BCC);
PPC_FUNC_IMPL(__imp__sub_839B2BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2BD0"))) PPC_WEAK_FUNC(sub_839B2BD0);
PPC_FUNC_IMPL(__imp__sub_839B2BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subfic r3,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2BDC"))) PPC_WEAK_FUNC(sub_839B2BDC);
PPC_FUNC_IMPL(__imp__sub_839B2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2BE0"))) PPC_WEAK_FUNC(sub_839B2BE0);
PPC_FUNC_IMPL(__imp__sub_839B2BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-30628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30628);
	ctx.f1.f64 = double(temp.f32);
	// b 0x839cee68
	sub_839CEE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B2BF0"))) PPC_WEAK_FUNC(sub_839B2BF0);
PPC_FUNC_IMPL(__imp__sub_839B2BF0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839B2C10;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2c40
	if (cr6.eq) goto loc_839B2C40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x839aa9a8
	ctx.lr = 0x839B2C30;
	sub_839AA9A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839b2c44
	if (!cr6.eq) goto loc_839B2C44;
loc_839B2C40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_839B2C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2C5C"))) PPC_WEAK_FUNC(sub_839B2C5C);
PPC_FUNC_IMPL(__imp__sub_839B2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2C60"))) PPC_WEAK_FUNC(sub_839B2C60);
PPC_FUNC_IMPL(__imp__sub_839B2C60) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x839cee68
	ctx.lr = 0x839B2C94;
	sub_839CEE68(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_839B2C98:
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839cee68
	ctx.lr = 0x839B2CAC;
	sub_839CEE68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839b2c98
	if (cr6.lt) goto loc_839B2C98;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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
}

__attribute__((alias("__imp__sub_839B2CD4"))) PPC_WEAK_FUNC(sub_839B2CD4);
PPC_FUNC_IMPL(__imp__sub_839B2CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2CD8"))) PPC_WEAK_FUNC(sub_839B2CD8);
PPC_FUNC_IMPL(__imp__sub_839B2CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B2CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,928
	ctx.r4.s64 = 928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B2D10;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2d38
	if (cr6.eq) goto loc_839B2D38;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b29b8
	ctx.lr = 0x839B2D30;
	sub_839B29B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B2D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B2D44"))) PPC_WEAK_FUNC(sub_839B2D44);
PPC_FUNC_IMPL(__imp__sub_839B2D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2D48"))) PPC_WEAK_FUNC(sub_839B2D48);
PPC_FUNC_IMPL(__imp__sub_839B2D48) {
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
	// lfs f1,880(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839b2c60
	ctx.lr = 0x839B2D68;
	sub_839B2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839cc968
	ctx.lr = 0x839B2D74;
	sub_839CC968(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2D8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2de4
	if (cr6.eq) goto loc_839B2DE4;
loc_839B2D94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,884(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 884);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc848
	ctx.lr = 0x839B2DA4;
	sub_839CC848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,885(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 885);
	// bl 0x839cc878
	ctx.lr = 0x839B2DB4;
	sub_839CC878(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc8f0
	ctx.lr = 0x839B2DC4;
	sub_839CC8F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b2d94
	if (cr6.lt) goto loc_839B2D94;
loc_839B2DE4:
	// lwz r4,888(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 888);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x839b2dfc
	if (cr6.eq) goto loc_839B2DFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc980
	ctx.lr = 0x839B2DFC;
	sub_839CC980(ctx, base);
loc_839B2DFC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839a9ec0
	ctx.lr = 0x839B2E04;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b2e28
	if (cr6.eq) goto loc_839B2E28;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a30
	ctx.lr = 0x839B2E1C;
	sub_82D19A30(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x839B2E28;
	sub_82D196E0(ctx, base);
loc_839B2E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B2E30;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,26428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26428);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B2E4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B2E64"))) PPC_WEAK_FUNC(sub_839B2E64);
PPC_FUNC_IMPL(__imp__sub_839B2E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B2E68"))) PPC_WEAK_FUNC(sub_839B2E68);
PPC_FUNC_IMPL(__imp__sub_839B2E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B2E70;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addi r11,r11,-12312
	ctx.r11.s64 = ctx.r11.s64 + -12312;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x839b3098
	if (cr6.gt) goto loc_839B3098;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11948
	ctx.r12.s64 = ctx.r12.s64 + 11948;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B3078;
	case 1:
		goto loc_839B3080;
	case 2:
		goto loc_839B3098;
	case 3:
		goto loc_839B3098;
	case 4:
		goto loc_839B3098;
	case 5:
		goto loc_839B3098;
	case 6:
		goto loc_839B3098;
	case 7:
		goto loc_839B2FC0;
	case 8:
		goto loc_839B301C;
	case 9:
		goto loc_839B2ED8;
	case 10:
		goto loc_839B2F4C;
	default:
		return;
	}
	// lwz r28,12408(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12408);
	// lwz r28,12416(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12416);
	// lwz r28,12440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12440);
	// lwz r28,12440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12440);
	// lwz r28,12440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12440);
	// lwz r28,12440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12440);
	// lwz r28,12440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12440);
	// lwz r28,12224(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12224);
	// lwz r28,12316(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12316);
	// lwz r28,11992(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11992);
	// lwz r28,12108(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12108);
loc_839B2ED8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x839b2c60
	ctx.lr = 0x839B2EEC;
	sub_839B2C60(ctx, base);
	// stfs f31,880(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,336(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B2F08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2f40
	if (cr6.eq) goto loc_839B2F40;
loc_839B2F10:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc878
	ctx.lr = 0x839B2F20;
	sub_839CC878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2F38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b2f10
	if (cr6.lt) goto loc_839B2F10;
loc_839B2F40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,885(r31)
	PPC_STORE_U8(ctx.r31.u32 + 885, ctx.r11.u8);
	// b 0x839b3098
	goto loc_839B3098;
loc_839B2F4C:
	// lis r30,-32208
	ctx.r30.s64 = -2110783488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-30628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -30628);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x839b2c60
	ctx.lr = 0x839B2F5C;
	sub_839B2C60(ctx, base);
	// lfs f0,-30628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -30628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2F7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b2fb4
	if (cr6.eq) goto loc_839B2FB4;
loc_839B2F84:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc878
	ctx.lr = 0x839B2F94;
	sub_839CC878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2FAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b2f84
	if (cr6.lt) goto loc_839B2F84;
loc_839B2FB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,885(r31)
	PPC_STORE_U8(ctx.r31.u32 + 885, ctx.r11.u8);
	// b 0x839b3098
	goto loc_839B3098;
loc_839B2FC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B2FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b3010
	if (cr6.eq) goto loc_839B3010;
loc_839B2FE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc848
	ctx.lr = 0x839B2FF0;
	sub_839CC848(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b2fe0
	if (cr6.lt) goto loc_839B2FE0;
loc_839B3010:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,884(r31)
	PPC_STORE_U8(ctx.r31.u32 + 884, ctx.r11.u8);
	// b 0x839b3098
	goto loc_839B3098;
loc_839B301C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b306c
	if (cr6.eq) goto loc_839B306C;
loc_839B303C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cc848
	ctx.lr = 0x839B304C;
	sub_839CC848(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3064;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b303c
	if (cr6.lt) goto loc_839B303C;
loc_839B306C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,884(r31)
	PPC_STORE_U8(ctx.r31.u32 + 884, ctx.r11.u8);
	// b 0x839b3098
	goto loc_839B3098;
loc_839B3078:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839b3084
	goto loc_839B3084;
loc_839B3080:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839B3084:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3098;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B3098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cf0e8
	ctx.lr = 0x839B30A4;
	sub_839CF0E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B30B0"))) PPC_WEAK_FUNC(sub_839B30B0);
PPC_FUNC_IMPL(__imp__sub_839B30B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B30B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82a688d0
	ctx.lr = 0x839B30E8;
	sub_82A688D0(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x839a5e28
	ctx.lr = 0x839B30F8;
	sub_839A5E28(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
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
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bctrl 
	ctx.lr = 0x839B3148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x839a6660
	ctx.lr = 0x839B3158;
	sub_839A6660(ctx, base);
	// cntlzw r6,r30
	ctx.r6.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x839a6a30
	ctx.lr = 0x839B3174;
	sub_839A6A30(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,352(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 352);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839B3198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B31A4"))) PPC_WEAK_FUNC(sub_839B31A4);
PPC_FUNC_IMPL(__imp__sub_839B31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B31A8"))) PPC_WEAK_FUNC(sub_839B31A8);
PPC_FUNC_IMPL(__imp__sub_839B31A8) {
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
	// bl 0x82d19a68
	ctx.lr = 0x839B31C8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b31fc
	if (cr6.eq) goto loc_839B31FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B31D8;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x839B31E4;
	sub_82D2AEC8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d199d0
	ctx.lr = 0x839B31F8;
	sub_82D199D0(ctx, base);
	// b 0x839b3200
	goto loc_839B3200;
loc_839B31FC:
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
loc_839B3200:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B3218"))) PPC_WEAK_FUNC(sub_839B3218);
PPC_FUNC_IMPL(__imp__sub_839B3218) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B3238;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29392
	ctx.r9.s64 = ctx.r11.s64 + -29392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stb r7,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r7.u8);
	// bl 0x839b0650
	ctx.lr = 0x839B3260;
	sub_839B0650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d195d8
	ctx.lr = 0x839B326C;
	sub_82D195D8(ctx, base);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,26432
	ctx.r30.s64 = ctx.r6.s64 + 26432;
	// lwz r4,26432(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26432);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3280;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x839B328C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3298;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x839B32A4;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82d23390
	ctx.lr = 0x839B32B4;
	sub_82D23390(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B32B8;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x839b32e4
	if (cr6.eq) goto loc_839B32E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d19788
	ctx.lr = 0x839B32D0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839B32E0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B32E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B32FC"))) PPC_WEAK_FUNC(sub_839B32FC);
PPC_FUNC_IMPL(__imp__sub_839B32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3300"))) PPC_WEAK_FUNC(sub_839B3300);
PPC_FUNC_IMPL(__imp__sub_839B3300) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29392
	ctx.r9.s64 = ctx.r11.s64 + -29392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B3334;
	sub_8387E8E0(ctx, base);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// addi r5,r7,-32704
	ctx.r5.s64 = ctx.r7.s64 + -32704;
	// addi r4,r6,-17088
	ctx.r4.s64 = ctx.r6.s64 + -17088;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B3354;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x839B335C;
	sub_82D25548(ctx, base);
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

__attribute__((alias("__imp__sub_839B3370"))) PPC_WEAK_FUNC(sub_839B3370);
PPC_FUNC_IMPL(__imp__sub_839B3370) {
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
	// bl 0x839b3300
	ctx.lr = 0x839B3390;
	sub_839B3300(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b33a8
	if (cr6.eq) goto loc_839B33A8;
	// bl 0x82416268
	ctx.lr = 0x839B33A4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B33A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B33C0"))) PPC_WEAK_FUNC(sub_839B33C0);
PPC_FUNC_IMPL(__imp__sub_839B33C0) {
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
	// bl 0x82dd3a30
	ctx.lr = 0x839B33D8;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b33fc
	if (!cr6.eq) goto loc_839B33FC;
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
loc_839B33FC:
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x839b0560
	ctx.lr = 0x839B3404;
	sub_839B0560(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B3424"))) PPC_WEAK_FUNC(sub_839B3424);
PPC_FUNC_IMPL(__imp__sub_839B3424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3428"))) PPC_WEAK_FUNC(sub_839B3428);
PPC_FUNC_IMPL(__imp__sub_839B3428) {
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
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// bl 0x839b04a0
	ctx.lr = 0x839B3444;
	sub_839B04A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b3468
	if (!cr6.eq) goto loc_839B3468;
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
loc_839B3468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb750
	ctx.lr = 0x839B3470;
	sub_839CB750(ctx, base);
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

__attribute__((alias("__imp__sub_839B3484"))) PPC_WEAK_FUNC(sub_839B3484);
PPC_FUNC_IMPL(__imp__sub_839B3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3488"))) PPC_WEAK_FUNC(sub_839B3488);
PPC_FUNC_IMPL(__imp__sub_839B3488) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addi r11,r11,-12298
	ctx.r11.s64 = ctx.r11.s64 + -12298;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x839b352c
	if (cr6.gt) goto loc_839B352C;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13512
	ctx.r12.s64 = ctx.r12.s64 + 13512;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B3510;
	case 1:
		goto loc_839B3518;
	case 2:
		goto loc_839B3508;
	case 3:
		goto loc_839B3508;
	case 4:
		goto loc_839B352C;
	case 5:
		goto loc_839B352C;
	case 6:
		goto loc_839B352C;
	case 7:
		goto loc_839B352C;
	case 8:
		goto loc_839B352C;
	case 9:
		goto loc_839B352C;
	case 10:
		goto loc_839B352C;
	case 11:
		goto loc_839B352C;
	case 12:
		goto loc_839B352C;
	case 13:
		goto loc_839B352C;
	case 14:
		goto loc_839B3518;
	case 15:
		goto loc_839B3510;
	default:
		return;
	}
	// lwz r28,13584(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13584);
	// lwz r28,13592(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13592);
	// lwz r28,13576(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13576);
	// lwz r28,13576(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13576);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13612(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13612);
	// lwz r28,13592(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13592);
	// lwz r28,13584(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13584);
loc_839B3508:
	// bl 0x839cae30
	ctx.lr = 0x839B350C;
	sub_839CAE30(ctx, base);
	// b 0x839b352c
	goto loc_839B352C;
loc_839B3510:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x839b351c
	goto loc_839B351C;
loc_839B3518:
	// li r4,0
	ctx.r4.s64 = 0;
loc_839B351C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B352C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B352C:
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

__attribute__((alias("__imp__sub_839B3544"))) PPC_WEAK_FUNC(sub_839B3544);
PPC_FUNC_IMPL(__imp__sub_839B3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3548"))) PPC_WEAK_FUNC(sub_839B3548);
PPC_FUNC_IMPL(__imp__sub_839B3548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B3550;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B3584;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b35b0
	if (cr6.eq) goto loc_839B35B0;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b3218
	ctx.lr = 0x839B35A8;
	sub_839B3218(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B35B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B35BC"))) PPC_WEAK_FUNC(sub_839B35BC);
PPC_FUNC_IMPL(__imp__sub_839B35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B35C0"))) PPC_WEAK_FUNC(sub_839B35C0);
PPC_FUNC_IMPL(__imp__sub_839B35C0) {
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
	// bl 0x82d19a78
	ctx.lr = 0x839B35DC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b35fc
	if (cr6.eq) goto loc_839B35FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x839B35F0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399e250
	ctx.lr = 0x839B35FC;
	sub_8399E250(ctx, base);
loc_839B35FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B3604;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b3624
	if (cr6.eq) goto loc_839B3624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x839B3618;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399e250
	ctx.lr = 0x839B3624;
	sub_8399E250(ctx, base);
loc_839B3624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B363C"))) PPC_WEAK_FUNC(sub_839B363C);
PPC_FUNC_IMPL(__imp__sub_839B363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3640"))) PPC_WEAK_FUNC(sub_839B3640);
PPC_FUNC_IMPL(__imp__sub_839B3640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B3648;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x839b3694
	if (cr6.eq) goto loc_839B3694;
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x839B3670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B3678;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839B3690;
	sub_8399F6E8(ctx, base);
	// b 0x839b369c
	goto loc_839B369C;
loc_839B3694:
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x839B369C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B369C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x839b36d0
	if (!cr6.lt) goto loc_839B36D0;
loc_839B36A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B36B0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b36d0
	if (cr6.eq) goto loc_839B36D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x839B36C4;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399e250
	ctx.lr = 0x839B36D0;
	sub_8399E250(ctx, base);
loc_839B36D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839b36a8
	if (cr6.lt) goto loc_839B36A8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B36E4"))) PPC_WEAK_FUNC(sub_839B36E4);
PPC_FUNC_IMPL(__imp__sub_839B36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B36E8"))) PPC_WEAK_FUNC(sub_839B36E8);
PPC_FUNC_IMPL(__imp__sub_839B36E8) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B3708;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28392
	ctx.r9.s64 = ctx.r11.s64 + -28392;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// stb r7,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,26592
	ctx.r30.s64 = ctx.r6.s64 + 26592;
	// lwz r4,26592(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26592);
	// bl 0x82d20ae0
	ctx.lr = 0x839B373C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3748;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B3758;
	sub_82D23390(ctx, base);
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

__attribute__((alias("__imp__sub_839B3774"))) PPC_WEAK_FUNC(sub_839B3774);
PPC_FUNC_IMPL(__imp__sub_839B3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3778"))) PPC_WEAK_FUNC(sub_839B3778);
PPC_FUNC_IMPL(__imp__sub_839B3778) {
	PPC_FUNC_PROLOGUE();
	// stb r4,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r4.u8);
	// b 0x839cadd8
	sub_839CADD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3780"))) PPC_WEAK_FUNC(sub_839B3780);
PPC_FUNC_IMPL(__imp__sub_839B3780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B3788;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B3798;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b3840
	if (cr6.eq) goto loc_839B3840;
	// lwz r30,100(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B37A8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839B37C0;
	sub_8399EDB0(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26604
	ctx.r30.s64 = ctx.r11.s64 + 26604;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-28536
	ctx.r27.s64 = ctx.r11.s64 + -28536;
loc_839B37D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B37E0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B37F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bge cr6,0x839b380c
	if (!cr6.lt) goto loc_839B380C;
	// addi r11,r1,179
	ctx.r11.s64 = ctx.r1.s64 + 179;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// b 0x839b3810
	goto loc_839B3810;
loc_839B380C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839B3810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x839b382c
	if (!cr6.lt) goto loc_839B382C;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x82d29598
	ctx.lr = 0x839B382C;
	sub_82D29598(ctx, base);
loc_839B382C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x839b37d8
	if (cr6.lt) goto loc_839B37D8;
loc_839B3840:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3848"))) PPC_WEAK_FUNC(sub_839B3848);
PPC_FUNC_IMPL(__imp__sub_839B3848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B3850;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B3880;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b38a8
	if (cr6.eq) goto loc_839B38A8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b36e8
	ctx.lr = 0x839B38A0;
	sub_839B36E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B38A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B38B4"))) PPC_WEAK_FUNC(sub_839B38B4);
PPC_FUNC_IMPL(__imp__sub_839B38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B38B8"))) PPC_WEAK_FUNC(sub_839B38B8);
PPC_FUNC_IMPL(__imp__sub_839B38B8) {
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
	// lbz r4,160(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cadd8
	ctx.lr = 0x839B38D8;
	sub_839CADD8(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B38E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B38E8;
	sub_8399F950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b3780
	ctx.lr = 0x839B38F4;
	sub_839B3780(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B390C"))) PPC_WEAK_FUNC(sub_839B390C);
PPC_FUNC_IMPL(__imp__sub_839B390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3910"))) PPC_WEAK_FUNC(sub_839B3910);
PPC_FUNC_IMPL(__imp__sub_839B3910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B3918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12353
	ctx.r10.u64 = ctx.r10.u64 | 12353;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b39c8
	if (cr6.gt) goto loc_839B39C8;
	// beq cr6,0x839b39c0
	if (cr6.eq) goto loc_839B39C0;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12291
	xer.ca = ctx.r11.u32 > 12290;
	ctx.r11.s64 = ctx.r11.s64 + -12291;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b3990
	if (cr0.eq) goto loc_839B3990;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x839b3a18
	if (!cr6.eq) goto loc_839B3A18;
	// lwz r30,100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B395C;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f8e0
	ctx.lr = 0x839B3964;
	sub_8399F8E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839b3984
	if (!cr6.eq) goto loc_839B3984;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B3984:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B3990:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B3998;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B39A0;
	sub_8399F950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b3780
	ctx.lr = 0x839B39AC;
	sub_839B3780(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B39B8;
	sub_839CAE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B39C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839b3a04
	goto loc_839B3A04;
loc_839B39C8:
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12354
	xer.ca = ctx.r11.u32 > 12353;
	ctx.r11.s64 = ctx.r11.s64 + -12354;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b3a00
	if (cr0.eq) goto loc_839B3A00;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x839b3a18
	if (!cr6.eq) goto loc_839B3A18;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x839b3780
	ctx.lr = 0x839B39EC;
	sub_839B3780(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B39F8;
	sub_839CAE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B3A00:
	// li r4,1
	ctx.r4.s64 = 1;
loc_839B3A04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3A18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B3A18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B3A24;
	sub_839CAE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3A2C"))) PPC_WEAK_FUNC(sub_839B3A2C);
PPC_FUNC_IMPL(__imp__sub_839B3A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3A30"))) PPC_WEAK_FUNC(sub_839B3A30);
PPC_FUNC_IMPL(__imp__sub_839B3A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B3A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B3A4C;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// addi r9,r11,-27408
	ctx.r9.s64 = ctx.r11.s64 + -27408;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r7,26760
	ctx.r29.s64 = ctx.r7.s64 + 26760;
	// lwz r4,26760(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26760);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3A84;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B3A94;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3AA0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3AAC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82d20ae0
	ctx.lr = 0x839B3AB8;
	sub_82D20AE0(ctx, base);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// bl 0x82d19788
	ctx.lr = 0x839B3ADC;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d19788
	ctx.lr = 0x839B3AEC;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839B3AFC;
	sub_82D19788(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,114
	ctx.r5.u64 = ctx.r5.u64 | 114;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82d20eb8
	ctx.lr = 0x839B3B10;
	sub_82D20EB8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r6.u8);
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B3B28;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x839B3B34;
	sub_83102DB0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x839B3B38;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x839B3B40;
	sub_82D26B18(ctx, base);
	// li r4,805
	ctx.r4.s64 = 805;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839B3B4C;
	sub_839AB720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3B58"))) PPC_WEAK_FUNC(sub_839B3B58);
PPC_FUNC_IMPL(__imp__sub_839B3B58) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-32704
	ctx.r9.s64 = ctx.r11.s64 + -32704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x839B3B94;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x839B3B9C;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839b3bb4
	if (cr6.eq) goto loc_839B3BB4;
	// bl 0x82416268
	ctx.lr = 0x839B3BB0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B3BB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B3BCC"))) PPC_WEAK_FUNC(sub_839B3BCC);
PPC_FUNC_IMPL(__imp__sub_839B3BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3BD0"))) PPC_WEAK_FUNC(sub_839B3BD0);
PPC_FUNC_IMPL(__imp__sub_839B3BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b3bf4
	if (cr6.eq) goto loc_839B3BF4;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
loc_839B3BF4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B3BFC"))) PPC_WEAK_FUNC(sub_839B3BFC);
PPC_FUNC_IMPL(__imp__sub_839B3BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3C00"))) PPC_WEAK_FUNC(sub_839B3C00);
PPC_FUNC_IMPL(__imp__sub_839B3C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B3C08;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r10,21716
	ctx.r29.s64 = ctx.r10.s64 + 21716;
	// ori r8,r9,12338
	ctx.r8.u64 = ctx.r9.u64 | 12338;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B3C4C;
	sub_83103068(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r6,12298
	ctx.r5.u64 = ctx.r6.u64 | 12298;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// bl 0x83103068
	ctx.lr = 0x839B3C70;
	sub_83103068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B3C78;
	sub_82D19638(ctx, base);
	// lis r4,264
	ctx.r4.s64 = 17301504;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r10,r4,12313
	ctx.r10.u64 = ctx.r4.u64 | 12313;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x83103068
	ctx.lr = 0x839B3CA4;
	sub_83103068(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3CAC"))) PPC_WEAK_FUNC(sub_839B3CAC);
PPC_FUNC_IMPL(__imp__sub_839B3CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3CB0"))) PPC_WEAK_FUNC(sub_839B3CB0);
PPC_FUNC_IMPL(__imp__sub_839B3CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b3cc8
	if (cr6.lt) goto loc_839B3CC8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_839B3CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B3CD0"))) PPC_WEAK_FUNC(sub_839B3CD0);
PPC_FUNC_IMPL(__imp__sub_839B3CD0) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b3cfc
	if (cr6.eq) goto loc_839B3CFC;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x839b3d38
	goto loc_839B3D38;
loc_839B3CFC:
	// lwz r30,100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B3D04;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839B3D1C;
	sub_8399F6E8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8399f8b8
	ctx.lr = 0x839B3D24;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x839B3D34;
	sub_82A47D40(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
loc_839B3D38:
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

__attribute__((alias("__imp__sub_839B3D50"))) PPC_WEAK_FUNC(sub_839B3D50);
PPC_FUNC_IMPL(__imp__sub_839B3D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B3D58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B3D8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b3db8
	if (cr6.eq) goto loc_839B3DB8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b3a30
	ctx.lr = 0x839B3DB0;
	sub_839B3A30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B3DB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3DC4"))) PPC_WEAK_FUNC(sub_839B3DC4);
PPC_FUNC_IMPL(__imp__sub_839B3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B3DC8"))) PPC_WEAK_FUNC(sub_839B3DC8);
PPC_FUNC_IMPL(__imp__sub_839B3DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B3DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B3DE4;
	sub_82D19638(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-27588
	ctx.r3.s64 = ctx.r11.s64 + -27588;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839d0de0
	ctx.lr = 0x839B3E00;
	sub_839D0DE0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x83103100
	ctx.lr = 0x839B3E20;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B3E28;
	sub_82D19A68(ctx, base);
	// li r4,30779
	ctx.r4.s64 = 30779;
	// bl 0x83545640
	ctx.lr = 0x839B3E30;
	sub_83545640(ctx, base);
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,-27080
	ctx.r6.s64 = ctx.r7.s64 + -27080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x839cb928
	ctx.lr = 0x839B3E4C;
	sub_839CB928(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_839B3E54:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_839B3E58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x839B3E64;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8399e250
	ctx.lr = 0x839B3E70;
	sub_8399E250(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839b3e58
	if (cr6.lt) goto loc_839B3E58;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x839b3e54
	if (!cr0.eq) goto loc_839B3E54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12299
	ctx.r9.u64 = ctx.r10.u64 | 12299;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B3EB0;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r28,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r28.u8);
	// ori r5,r8,12338
	ctx.r5.u64 = ctx.r8.u64 | 12338;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B3EE8;
	sub_83103068(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B3EF0"))) PPC_WEAK_FUNC(sub_839B3EF0);
PPC_FUNC_IMPL(__imp__sub_839B3EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B3EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12301
	ctx.r10.u64 = ctx.r10.u64 | 12301;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b4050
	if (cr6.gt) goto loc_839B4050;
	// beq cr6,0x839b3fb4
	if (cr6.eq) goto loc_839B3FB4;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12298
	ctx.r9.u64 = ctx.r10.u64 | 12298;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x839b40c8
	if (cr6.lt) goto loc_839B40C8;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12299
	ctx.r9.u64 = ctx.r10.u64 | 12299;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x839b4044
	if (!cr6.gt) goto loc_839B4044;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12300
	ctx.r9.u64 = ctx.r10.u64 | 12300;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x839b40c8
	if (!cr6.eq) goto loc_839B40C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839b40c8
	if (cr6.eq) goto loc_839B40C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B3FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B3FAC;
	sub_839CAE30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B3FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B3FC0;
	sub_83103068(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B3FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839b4044
	if (cr6.eq) goto loc_839B4044;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B4014;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// addi r5,r7,21716
	ctx.r5.s64 = ctx.r7.s64 + 21716;
	// ori r4,r6,12299
	ctx.r4.u64 = ctx.r6.u64 | 12299;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B4044;
	sub_83103068(ctx, base);
loc_839B4044:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B4050:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12339
	ctx.r9.u64 = ctx.r10.u64 | 12339;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x839b40c8
	if (!cr6.eq) goto loc_839B40C8;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r29,r10,21716
	ctx.r29.s64 = ctx.r10.s64 + 21716;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ori r6,r9,12338
	ctx.r6.u64 = ctx.r9.u64 | 12338;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B40A8;
	sub_83103068(ctx, base);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-27080
	ctx.r10.s64 = ctx.r11.s64 + -27080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x839cb928
	ctx.lr = 0x839B40C4;
	sub_839CB928(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_839B40C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B40D4;
	sub_839CAE30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B40DC"))) PPC_WEAK_FUNC(sub_839B40DC);
PPC_FUNC_IMPL(__imp__sub_839B40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B40E0"))) PPC_WEAK_FUNC(sub_839B40E0);
PPC_FUNC_IMPL(__imp__sub_839B40E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B40E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x839b4110
	if (cr6.lt) goto loc_839B4110;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r30,r30,-11
	ctx.r30.s64 = ctx.r30.s64 + -11;
loc_839B4110:
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B4118;
	sub_8399F8B8(ctx, base);
	// mulli r11,r26,460
	ctx.r11.s64 = ctx.r26.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399f6e8
	ctx.lr = 0x839B4130;
	sub_8399F6E8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r7,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x839aabc8
	ctx.lr = 0x839B415C;
	sub_839AABC8(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
loc_839B4160:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839B4164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a78
	ctx.lr = 0x839B4170;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8399e250
	ctx.lr = 0x839B417C;
	sub_8399E250(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x839b4164
	if (cr6.lt) goto loc_839B4164;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x839b4160
	if (!cr0.eq) goto loc_839B4160;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b41bc
	if (cr6.eq) goto loc_839B41BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83824e88
	ctx.lr = 0x839B41B0;
	sub_83824E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b41f4
	if (cr6.eq) goto loc_839B41F4;
loc_839B41BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r27.u8);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// ori r8,r10,12314
	ctx.r8.u64 = ctx.r10.u64 | 12314;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 + 40;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x83102fe0
	ctx.lr = 0x839B41F4;
	sub_83102FE0(ctx, base);
loc_839B41F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B41FC"))) PPC_WEAK_FUNC(sub_839B41FC);
PPC_FUNC_IMPL(__imp__sub_839B41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4200"))) PPC_WEAK_FUNC(sub_839B4200);
PPC_FUNC_IMPL(__imp__sub_839B4200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B4208;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,96(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x839b437c
	if (cr6.gt) goto loc_839B437C;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b42a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B42A4;
	// bdzf 4*cr6+eq,0x839b42dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B42DC;
	// bne cr6,0x839b426c
	if (!cr6.eq) goto loc_839B426C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B4240;
	sub_82D19638(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-27512
	ctx.r11.s64 = ctx.r11.s64 + -27512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839d0de0
	ctx.lr = 0x839B4260;
	sub_839D0DE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// b 0x839b430c
	goto loc_839B430C;
loc_839B426C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B4278;
	sub_82D19638(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-27512
	ctx.r11.s64 = ctx.r11.s64 + -27512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839d1a90
	ctx.lr = 0x839B4298;
	sub_839D1A90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// b 0x839b430c
	goto loc_839B430C;
loc_839B42A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B42B0;
	sub_82D19638(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-27512
	ctx.r11.s64 = ctx.r11.s64 + -27512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839d1970
	ctx.lr = 0x839B42D0;
	sub_839D1970(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// b 0x839b430c
	goto loc_839B430C;
loc_839B42DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B42E8;
	sub_82D19638(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-27512
	ctx.r3.s64 = ctx.r11.s64 + -27512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x839d18a0
	ctx.lr = 0x839B4304;
	sub_839D18A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
loc_839B430C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x839B4318;
	sub_83103100(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r6,r10,12338
	ctx.r6.u64 = ctx.r10.u64 | 12338;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B435C;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb540
	ctx.lr = 0x839B4364;
	sub_839CB540(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-27080
	ctx.r9.s64 = ctx.r11.s64 + -27080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x839cb928
	ctx.lr = 0x839B437C;
	sub_839CB928(ctx, base);
loc_839B437C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B4384"))) PPC_WEAK_FUNC(sub_839B4384);
PPC_FUNC_IMPL(__imp__sub_839B4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4388"))) PPC_WEAK_FUNC(sub_839B4388);
PPC_FUNC_IMPL(__imp__sub_839B4388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B4390;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d26ed8
	ctx.lr = 0x839B439C;
	sub_82D26ED8(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x82d26b18
	ctx.lr = 0x839B43A4;
	sub_82D26B18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B43B0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839B43C8;
	sub_8399F6E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839b43d8
	if (cr6.eq) goto loc_839B43D8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839B43D8:
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B43E0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839B43F8;
	sub_8399F6E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839aa018
	ctx.lr = 0x839B4408;
	sub_839AA018(ctx, base);
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x839b4564
	if (!cr6.eq) goto loc_839B4564;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839b44f0
	if (!cr6.eq) goto loc_839B44F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4430;
	sub_839B3CD0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4454
	if (!cr6.eq) goto loc_839B4454;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b4450
	if (cr6.lt) goto loc_839B4450;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// ble cr6,0x839b4454
	if (!cr6.gt) goto loc_839B4454;
loc_839B4450:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839B4454:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x839aaad0
	ctx.lr = 0x839B4460;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b4630
	if (!cr6.eq) goto loc_839B4630;
loc_839B446C:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b4484
	if (cr6.eq) goto loc_839B4484;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x839b44c0
	goto loc_839B44C0;
loc_839B4484:
	// lwz r28,100(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B448C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839B44A4;
	sub_8399F6E8(ctx, base);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399f8b8
	ctx.lr = 0x839B44AC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x839B44BC;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_839B44C0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b44d4
	if (!cr6.eq) goto loc_839B44D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cb0
	ctx.lr = 0x839B44D0;
	sub_839B3CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B44D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x839aaad0
	ctx.lr = 0x839B44E0;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b446c
	if (cr6.eq) goto loc_839B446C;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B44F0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b4508
	if (!cr6.eq) goto loc_839B4508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4504;
	sub_839B3CD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_839B4508:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839aaad0
	ctx.lr = 0x839B4518;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b4630
	if (!cr6.eq) goto loc_839B4630;
loc_839B4524:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cb0
	ctx.lr = 0x839B452C;
	sub_839B3CB0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4544
	if (!cr6.eq) goto loc_839B4544;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4540;
	sub_839B3CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B4544:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839aaad0
	ctx.lr = 0x839B4554;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b4524
	if (cr6.eq) goto loc_839B4524;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B4564:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x839b45c8
	if (!cr6.eq) goto loc_839B45C8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839b45a8
	if (!cr6.eq) goto loc_839B45A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4584;
	sub_839B3CD0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4630
	if (!cr6.eq) goto loc_839B4630;
loc_839B458C:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b45f4
	if (cr6.lt) goto loc_839B45F4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x839b45f4
	if (cr6.gt) goto loc_839B45F4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B45A8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b45c0
	if (!cr6.eq) goto loc_839B45C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B45BC;
	sub_839B3CD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_839B45C0:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B45C8:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839b45fc
	if (cr6.lt) goto loc_839B45FC;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bne cr6,0x839b4630
	if (!cr6.eq) goto loc_839B4630;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x839b45f4
	if (cr6.lt) goto loc_839B45F4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bgt cr6,0x839b45f4
	if (cr6.gt) goto loc_839B45F4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B45F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B45FC:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x839b462c
	if (!cr6.eq) goto loc_839B462C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4610;
	sub_839B3CD0(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// ble cr6,0x839b458c
	if (!cr6.gt) goto loc_839B458C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4624;
	sub_839B3CD0(ctx, base);
	// addi r31,r3,-1
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// b 0x839b4630
	goto loc_839B4630;
loc_839B462C:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_839B4630:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b40e0
	ctx.lr = 0x839B4640;
	sub_839B40E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B4648"))) PPC_WEAK_FUNC(sub_839B4648);
PPC_FUNC_IMPL(__imp__sub_839B4648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B4650;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d26ed8
	ctx.lr = 0x839B465C;
	sub_82D26ED8(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x82d26b18
	ctx.lr = 0x839B4664;
	sub_82D26B18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B4670;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839B4688;
	sub_8399F6E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x839b4698
	if (cr6.eq) goto loc_839B4698;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839B4698:
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B46A0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f6e8
	ctx.lr = 0x839B46B8;
	sub_8399F6E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x839aa018
	ctx.lr = 0x839B46C8;
	sub_839AA018(ctx, base);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x839b4824
	if (!cr6.eq) goto loc_839B4824;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839b4754
	if (!cr6.eq) goto loc_839B4754;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x839b46f8
	if (!cr6.eq) goto loc_839B46F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B46F4;
	sub_839B3CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B46F8:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839aaad0
	ctx.lr = 0x839B4708;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b4850
	if (!cr6.eq) goto loc_839B4850;
loc_839B4714:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cb0
	ctx.lr = 0x839B471C;
	sub_839B3CB0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4734
	if (!cr6.eq) goto loc_839B4734;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4730;
	sub_839B3CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B4734:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839aaad0
	ctx.lr = 0x839B4744;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b4714
	if (cr6.eq) goto loc_839B4714;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B4754:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4764;
	sub_839B3CD0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4788
	if (!cr6.eq) goto loc_839B4788;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b4784
	if (cr6.lt) goto loc_839B4784;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// ble cr6,0x839b4788
	if (!cr6.gt) goto loc_839B4788;
loc_839B4784:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839B4788:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x839aaad0
	ctx.lr = 0x839B4794;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b4850
	if (!cr6.eq) goto loc_839B4850;
loc_839B47A0:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839b47b8
	if (cr6.eq) goto loc_839B47B8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x839b47f4
	goto loc_839B47F4;
loc_839B47B8:
	// lwz r28,100(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B47C0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8399f6e8
	ctx.lr = 0x839B47D8;
	sub_8399F6E8(ctx, base);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8399f8b8
	ctx.lr = 0x839B47E0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a47d40
	ctx.lr = 0x839B47F0;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_839B47F4:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b4808
	if (!cr6.eq) goto loc_839B4808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cb0
	ctx.lr = 0x839B4804;
	sub_839B3CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B4808:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x839aaad0
	ctx.lr = 0x839B4814;
	sub_839AAAD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b47a0
	if (cr6.eq) goto loc_839B47A0;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B4824:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839b48a4
	if (!cr6.eq) goto loc_839B48A4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x839b4868
	if (!cr6.eq) goto loc_839B4868;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x839b484c
	if (!cr6.eq) goto loc_839B484C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4848;
	sub_839B3CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839B484C:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_839B4850:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b40e0
	ctx.lr = 0x839B4860;
	sub_839B40E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B4868:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4878;
	sub_839B3CD0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x839b4850
	if (!cr6.eq) goto loc_839B4850;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b489c
	if (cr6.lt) goto loc_839B489C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x839b489c
	if (cr6.gt) goto loc_839B489C;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B489C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B48A4:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839b48d4
	if (cr6.lt) goto loc_839B48D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B48B8;
	sub_839B3CD0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b48cc
	if (!cr6.eq) goto loc_839B48CC;
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B48CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B48D4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839b48e8
	if (cr6.lt) goto loc_839B48E8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x839b48ec
	if (!cr6.gt) goto loc_839B48EC;
loc_839B48E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839B48EC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x839b484c
	if (!cr6.eq) goto loc_839B484C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4900;
	sub_839B3CD0(ctx, base);
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bgt cr6,0x839b491c
	if (cr6.gt) goto loc_839B491C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b3cd0
	ctx.lr = 0x839B4914;
	sub_839B3CD0(ctx, base);
	// addi r31,r3,-1
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// b 0x839b4850
	goto loc_839B4850;
loc_839B491C:
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x839b4850
	goto loc_839B4850;
}

__attribute__((alias("__imp__sub_839B4924"))) PPC_WEAK_FUNC(sub_839B4924);
PPC_FUNC_IMPL(__imp__sub_839B4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4928"))) PPC_WEAK_FUNC(sub_839B4928);
PPC_FUNC_IMPL(__imp__sub_839B4928) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b4968
	if (cr6.eq) goto loc_839B4968;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83824e88
	ctx.lr = 0x839B495C;
	sub_83824E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b49e0
	if (cr6.eq) goto loc_839B49E0;
loc_839B4968:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b49a8
	if (cr6.eq) goto loc_839B49A8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
loc_839B49A8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x839b49c4
	if (!cr6.gt) goto loc_839B49C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839b49d0
	goto loc_839B49D0;
loc_839B49C4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x839b49d0
	if (!cr6.lt) goto loc_839B49D0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_839B49D0:
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4200
	ctx.lr = 0x839B49E0;
	sub_839B4200(ctx, base);
loc_839B49E0:
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

__attribute__((alias("__imp__sub_839B49F4"))) PPC_WEAK_FUNC(sub_839B49F4);
PPC_FUNC_IMPL(__imp__sub_839B49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B49F8"))) PPC_WEAK_FUNC(sub_839B49F8);
PPC_FUNC_IMPL(__imp__sub_839B49F8) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b4a38
	if (cr6.eq) goto loc_839B4A38;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83824e88
	ctx.lr = 0x839B4A2C;
	sub_83824E88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b4ab0
	if (cr6.eq) goto loc_839B4AB0;
loc_839B4A38:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b4a78
	if (cr6.eq) goto loc_839B4A78;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4A64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u32);
loc_839B4A78:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x839b4a94
	if (!cr6.gt) goto loc_839B4A94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x839b4aa0
	goto loc_839B4AA0;
loc_839B4A94:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x839b4aa0
	if (!cr6.lt) goto loc_839B4AA0;
	// li r11,3
	ctx.r11.s64 = 3;
loc_839B4AA0:
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4200
	ctx.lr = 0x839B4AB0;
	sub_839B4200(ctx, base);
loc_839B4AB0:
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

__attribute__((alias("__imp__sub_839B4AC4"))) PPC_WEAK_FUNC(sub_839B4AC4);
PPC_FUNC_IMPL(__imp__sub_839B4AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4AC8"))) PPC_WEAK_FUNC(sub_839B4AC8);
PPC_FUNC_IMPL(__imp__sub_839B4AC8) {
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
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B4AEC;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r9,r11,-26376
	ctx.r9.s64 = ctx.r11.s64 + -26376;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,26916
	ctx.r30.s64 = ctx.r7.s64 + 26916;
	// lwz r4,26916(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26916);
	// bl 0x82d20ae0
	ctx.lr = 0x839B4B1C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B4B2C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19730
	ctx.lr = 0x839B4B38;
	sub_82D19730(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B4B50;
	sub_839CB540(ctx, base);
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

__attribute__((alias("__imp__sub_839B4B6C"))) PPC_WEAK_FUNC(sub_839B4B6C);
PPC_FUNC_IMPL(__imp__sub_839B4B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4B70"))) PPC_WEAK_FUNC(sub_839B4B70);
PPC_FUNC_IMPL(__imp__sub_839B4B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b4b94
	if (cr6.eq) goto loc_839B4B94;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x839b4b8c
	if (!cr6.gt) goto loc_839B4B8C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x839b4b94
	if (!cr6.eq) goto loc_839B4B94;
loc_839B4B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_839B4B94:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B4B9C"))) PPC_WEAK_FUNC(sub_839B4B9C);
PPC_FUNC_IMPL(__imp__sub_839B4B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4BA0"))) PPC_WEAK_FUNC(sub_839B4BA0);
PPC_FUNC_IMPL(__imp__sub_839B4BA0) {
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
	// bl 0x82d19bb0
	ctx.lr = 0x839B4BB8;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839b4bdc
	if (cr6.lt) goto loc_839B4BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19230
	ctx.lr = 0x839B4BCC;
	sub_82D19230(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x839B4BDC;
	sub_82D20DA8(ctx, base);
loc_839B4BDC:
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

__attribute__((alias("__imp__sub_839B4BF0"))) PPC_WEAK_FUNC(sub_839B4BF0);
PPC_FUNC_IMPL(__imp__sub_839B4BF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19230
	ctx.lr = 0x839B4C0C;
	sub_82D19230(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x839B4C1C;
	sub_82D20DA8(ctx, base);
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

__attribute__((alias("__imp__sub_839B4C30"))) PPC_WEAK_FUNC(sub_839B4C30);
PPC_FUNC_IMPL(__imp__sub_839B4C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B4C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B4C44;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B4C4C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b4e0c
	if (cr6.eq) goto loc_839B4E0C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r31,r11,-26472
	ctx.r31.s64 = ctx.r11.s64 + -26472;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82d2f098
	ctx.lr = 0x839B4C68;
	sub_82D2F098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4C84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d29598
	ctx.lr = 0x839B4C90;
	sub_82D29598(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x839B4C9C;
	sub_82D2F098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,100(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B4CB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x82d29598
	ctx.lr = 0x839B4CC4;
	sub_82D29598(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x839B4CD0;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839B4CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d29598
	ctx.lr = 0x839B4CF8;
	sub_82D29598(ctx, base);
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x839b4e0c
	if (cr6.gt) goto loc_839B4E0C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b4d30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4D30;
	// bdzf 4*cr6+eq,0x839b4d30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4D30;
	// bdzf 4*cr6+eq,0x839b4d28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4D28;
	// bdzf 4*cr6+eq,0x839b4d28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4D28;
	// bdzf 4*cr6+eq,0x839b4d30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4D30;
	// bdzf 4*cr6+eq,0x839b4dbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B4DBC;
	// bne cr6,0x839b4d30
	if (!cr6.eq) goto loc_839B4D30;
loc_839B4D28:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// b 0x839b4dc0
	goto loc_839B4DC0;
loc_839B4D30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4D4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839B4D60;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B4D70;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839B4D84;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B4D94;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B4DA4;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B4DB4;
	sub_82D1EAC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B4DBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_839B4DC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839B4DEC;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B4DFC;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B4E0C;
	sub_82D1EAC0(ctx, base);
loc_839B4E0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B4E14"))) PPC_WEAK_FUNC(sub_839B4E14);
PPC_FUNC_IMPL(__imp__sub_839B4E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4E18"))) PPC_WEAK_FUNC(sub_839B4E18);
PPC_FUNC_IMPL(__imp__sub_839B4E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B4E20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B4E54;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b4e80
	if (cr6.eq) goto loc_839B4E80;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b4ac8
	ctx.lr = 0x839B4E78;
	sub_839B4AC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B4E80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B4E8C"))) PPC_WEAK_FUNC(sub_839B4E8C);
PPC_FUNC_IMPL(__imp__sub_839B4E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B4E90"))) PPC_WEAK_FUNC(sub_839B4E90);
PPC_FUNC_IMPL(__imp__sub_839B4E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B4E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x839B4EBC;
	sub_82D291E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d31b0
	ctx.lr = 0x839B4EC4;
	sub_835D31B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04828
	ctx.lr = 0x839B4EE0;
	sub_82D04828(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x839B4EEC;
	sub_82D28370(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82d04d80
	ctx.lr = 0x839B4F0C;
	sub_82D04D80(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,28
	ctx.r29.s64 = 28;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// bge cr6,0x839b4f68
	if (!cr6.lt) goto loc_839B4F68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B4F30;
	sub_82D19A68(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r8,r10,27060
	ctx.r8.s64 = ctx.r10.s64 + 27060;
	// divw r4,r7,r29
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B4F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_839B4F68:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b4f94
	if (cr6.eq) goto loc_839B4F94;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x838adab0
	ctx.lr = 0x839B4F80;
	sub_838ADAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B4F94;
	sub_825952B8(ctx, base);
loc_839B4F94:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82d04b60
	ctx.lr = 0x839B4FA8;
	sub_82D04B60(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B4FB0"))) PPC_WEAK_FUNC(sub_839B4FB0);
PPC_FUNC_IMPL(__imp__sub_839B4FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B4FB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,100(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x8399f8b8
	ctx.lr = 0x839B4FFC;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B5004;
	sub_8399F950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83150518
	ctx.lr = 0x839B5010;
	sub_83150518(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x839aa760
	ctx.lr = 0x839B501C;
	sub_839AA760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83150518
	ctx.lr = 0x839B5028;
	sub_83150518(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839b503c
	if (!cr6.lt) goto loc_839B503C;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_839B503C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x839b5050
	if (!cr6.lt) goto loc_839B5050;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_839B5050:
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d042a8
	ctx.lr = 0x839B5060;
	sub_82D042A8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839b4e90
	ctx.lr = 0x839B5070;
	sub_839B4E90(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b5090
	if (cr6.lt) goto loc_839B5090;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x839B5090;
	sub_825952B8(ctx, base);
loc_839B5090:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x839b50b8
	if (cr6.lt) goto loc_839B50B8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839B50B8;
	sub_825952B8(ctx, base);
loc_839B50B8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x839b50e0
	if (cr6.lt) goto loc_839B50E0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x839B50E0;
	sub_825952B8(ctx, base);
loc_839B50E0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B50E8"))) PPC_WEAK_FUNC(sub_839B50E8);
PPC_FUNC_IMPL(__imp__sub_839B50E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B50F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5104;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-26716
	ctx.r4.s64 = ctx.r11.s64 + -26716;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B5120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d042a8
	ctx.lr = 0x839B5140;
	sub_82D042A8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4e90
	ctx.lr = 0x839B5150;
	sub_839B4E90(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x839b5170
	if (cr6.lt) goto loc_839B5170;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B5170;
	sub_825952B8(ctx, base);
loc_839B5170:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B5178"))) PPC_WEAK_FUNC(sub_839B5178);
PPC_FUNC_IMPL(__imp__sub_839B5178) {
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
	// bl 0x82d19a78
	ctx.lr = 0x839B5190;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B51AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x839b52c4
	if (cr6.gt) goto loc_839B52C4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b51fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B51FC;
	// bdzf 4*cr6+eq,0x839b521c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B521C;
	// bdzf 4*cr6+eq,0x839b525c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B525C;
	// bdzf 4*cr6+eq,0x839b5280
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B5280;
	// bdzf 4*cr6+eq,0x839b523c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B523C;
	// bdzf 4*cr6+eq,0x839b52a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B52A4;
	// bne cr6,0x839b52b0
	if (!cr6.eq) goto loc_839B52B0;
	// lis r4,240
	ctx.r4.s64 = 15728640;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// bl 0x82d29598
	ctx.lr = 0x839B51E8;
	sub_82D29598(ctx, base);
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
loc_839B51FC:
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d29598
	ctx.lr = 0x839B5208;
	sub_82D29598(ctx, base);
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
loc_839B521C:
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d29598
	ctx.lr = 0x839B5228;
	sub_82D29598(ctx, base);
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
loc_839B523C:
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
	// bl 0x82d29598
	ctx.lr = 0x839B5248;
	sub_82D29598(ctx, base);
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
loc_839B525C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4fb0
	ctx.lr = 0x839B526C;
	sub_839B4FB0(ctx, base);
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
loc_839B5280:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4fb0
	ctx.lr = 0x839B5290;
	sub_839B4FB0(ctx, base);
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
loc_839B52A4:
	// lis r5,210
	ctx.r5.s64 = 13762560;
	// ori r5,r5,171
	ctx.r5.u64 = ctx.r5.u64 | 171;
	// b 0x839b52b8
	goto loc_839B52B8;
loc_839B52B0:
	// lis r5,210
	ctx.r5.s64 = 13762560;
	// ori r5,r5,172
	ctx.r5.u64 = ctx.r5.u64 | 172;
loc_839B52B8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b50e8
	ctx.lr = 0x839B52C4;
	sub_839B50E8(ctx, base);
loc_839B52C4:
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

__attribute__((alias("__imp__sub_839B52D8"))) PPC_WEAK_FUNC(sub_839B52D8);
PPC_FUNC_IMPL(__imp__sub_839B52D8) {
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
	// bl 0x82d19a68
	ctx.lr = 0x839B52F0;
	sub_82D19A68(ctx, base);
	// li r4,-4369
	ctx.r4.s64 = -4369;
	// bl 0x83545640
	ctx.lr = 0x839B52F8;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5178
	ctx.lr = 0x839B5300;
	sub_839B5178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b4c30
	ctx.lr = 0x839B5308;
	sub_839B4C30(ctx, base);
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

__attribute__((alias("__imp__sub_839B531C"))) PPC_WEAK_FUNC(sub_839B531C);
PPC_FUNC_IMPL(__imp__sub_839B531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B5320"))) PPC_WEAK_FUNC(sub_839B5320);
PPC_FUNC_IMPL(__imp__sub_839B5320) {
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
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b5378
	if (cr6.eq) goto loc_839B5378;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// bne 0x839b5378
	if (!cr0.eq) goto loc_839B5378;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839B5358;
	sub_82D19788(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-25998
	ctx.r5.s64 = ctx.r11.s64 + -25998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B5378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B5378:
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

__attribute__((alias("__imp__sub_839B5390"))) PPC_WEAK_FUNC(sub_839B5390);
PPC_FUNC_IMPL(__imp__sub_839B5390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839B5398;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x839b5540
	if (cr6.gt) goto loc_839B5540;
	// beq cr6,0x839b54c4
	if (cr6.eq) goto loc_839B54C4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b5480
	if (cr6.eq) goto loc_839B5480;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x839b5410
	if (cr6.eq) goto loc_839B5410;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x839b5680
	if (!cr6.eq) goto loc_839B5680;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r11,r11,-25640
	ctx.r11.s64 = ctx.r11.s64 + -25640;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x839c8e50
	ctx.lr = 0x839B53F4;
	sub_839C8E50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B5408;
	sub_83103100(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B5410:
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B5418;
	sub_8399F8B8(ctx, base);
	// mulli r11,r28,460
	ctx.r11.s64 = ctx.r28.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839B5428;
	sub_8399F760(ctx, base);
	// stb r3,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r3.u8);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B5434;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B543C;
	sub_8399F950(ctx, base);
	// stb r3,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r3.u8);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r10,-25640
	ctx.r11.s64 = ctx.r10.s64 + -25640;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839ba808
	ctx.lr = 0x839B5464;
	sub_839BA808(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x83103100
	ctx.lr = 0x839B5478;
	sub_83103100(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B5480:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-25640
	ctx.r11.s64 = ctx.r11.s64 + -25640;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839c8e50
	ctx.lr = 0x839B54A8;
	sub_839C8E50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B54BC;
	sub_83103100(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B54C4:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839aa9a8
	ctx.lr = 0x839B54CC;
	sub_839AA9A8(ctx, base);
	// stb r3,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r3.u8);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-25640
	ctx.r11.s64 = ctx.r11.s64 + -25640;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839c2580
	ctx.lr = 0x839B54F4;
	sub_839C2580(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B5508;
	sub_83103100(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// ori r6,r8,12291
	ctx.r6.u64 = ctx.r8.u64 | 12291;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B5538;
	sub_83103068(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B5540:
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x839b5650
	if (cr6.eq) goto loc_839B5650;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bne cr6,0x839b5680
	if (!cr6.eq) goto loc_839B5680;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x839B5560;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r10,r11,8
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// oris r11,r10,256
	ctx.r11.u64 = ctx.r10.u64 | 16777216;
	// clrlwi r9,r11,8
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// oris r11,r9,1536
	ctx.r11.u64 = ctx.r9.u64 | 100663296;
	// std r8,236(r1)
	PPC_STORE_U64(ctx.r1.u32 + 236, ctx.r8.u64);
	// clrlwi r7,r11,8
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// oris r11,r7,2048
	ctx.r11.u64 = ctx.r7.u64 | 134217728;
	// std r6,244(r1)
	PPC_STORE_U64(ctx.r1.u32 + 244, ctx.r6.u64);
	// clrlwi r5,r11,8
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,252(r1)
	PPC_STORE_U64(ctx.r1.u32 + 252, ctx.r4.u64);
	// std r3,260(r1)
	PPC_STORE_U64(ctx.r1.u32 + 260, ctx.r3.u64);
	// bl 0x8399f8b8
	ctx.lr = 0x839B55C0;
	sub_8399F8B8(ctx, base);
	// lwz r25,100(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B55CC;
	sub_8399F8B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B55D4;
	sub_8399F950(ctx, base);
	// mulli r11,r26,532
	ctx.r11.s64 = ctx.r26.s64 * 532;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8399ed80
	ctx.lr = 0x839B55EC;
	sub_8399ED80(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839bd430
	ctx.lr = 0x839B5608;
	sub_839BD430(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B561C;
	sub_83103100(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r7,r9,21716
	ctx.r7.s64 = ctx.r9.s64 + 21716;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// ori r6,r8,12299
	ctx.r6.u64 = ctx.r8.u64 | 12299;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B5648;
	sub_83103068(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B5650:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12350
	ctx.r8.u64 = ctx.r10.u64 | 12350;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B5680;
	sub_83103068(ctx, base);
loc_839B5680:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B5688"))) PPC_WEAK_FUNC(sub_839B5688);
PPC_FUNC_IMPL(__imp__sub_839B5688) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// bgt cr6,0x839b57dc
	if (cr6.gt) goto loc_839B57DC;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22208
	ctx.r12.s64 = ctx.r12.s64 + 22208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B5730;
	case 1:
		goto loc_839B57DC;
	case 2:
		goto loc_839B57DC;
	case 3:
		goto loc_839B5730;
	case 4:
		goto loc_839B57DC;
	case 5:
		goto loc_839B57DC;
	case 6:
		goto loc_839B5758;
	case 7:
		goto loc_839B57DC;
	case 8:
		goto loc_839B57DC;
	case 9:
		goto loc_839B5758;
	case 10:
		goto loc_839B57DC;
	case 11:
		goto loc_839B57DC;
	case 12:
		goto loc_839B57DC;
	case 13:
		goto loc_839B57DC;
	case 14:
		goto loc_839B57DC;
	case 15:
		goto loc_839B57DC;
	case 16:
		goto loc_839B5758;
	case 17:
		goto loc_839B57DC;
	case 18:
		goto loc_839B57DC;
	case 19:
		goto loc_839B57DC;
	case 20:
		goto loc_839B57DC;
	case 21:
		goto loc_839B57A8;
	case 22:
		goto loc_839B57DC;
	case 23:
		goto loc_839B57A8;
	case 24:
		goto loc_839B57A8;
	case 25:
		goto loc_839B57A8;
	case 26:
		goto loc_839B5780;
	case 27:
		goto loc_839B57A8;
	default:
		return;
	}
	// lwz r28,22320(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22320);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22320(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22320);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22360(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22360);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22360(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22360);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22360(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22360);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22440);
	// lwz r28,22492(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22492);
	// lwz r28,22440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22440);
	// lwz r28,22440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22440);
	// lwz r28,22440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22440);
	// lwz r28,22400(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22400);
	// lwz r28,22440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22440);
loc_839B5730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5738;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b57dc
	if (cr6.eq) goto loc_839B57DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5748;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// b 0x839b57c8
	goto loc_839B57C8;
loc_839B5758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5760;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b57dc
	if (cr6.eq) goto loc_839B57DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5770;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// b 0x839b57c8
	goto loc_839B57C8;
loc_839B5780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5788;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b57dc
	if (cr6.eq) goto loc_839B57DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5798;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// b 0x839b57c8
	goto loc_839B57C8;
loc_839B57A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B57B0;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b57dc
	if (cr6.eq) goto loc_839B57DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B57C0;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,-25488
	ctx.r4.s64 = ctx.r11.s64 + -25488;
loc_839B57C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B57DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B57DC:
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

__attribute__((alias("__imp__sub_839B57F0"))) PPC_WEAK_FUNC(sub_839B57F0);
PPC_FUNC_IMPL(__imp__sub_839B57F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x839b5898
	if (cr6.gt) goto loc_839B5898;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22572
	ctx.r12.s64 = ctx.r12.s64 + 22572;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B5890;
	case 1:
		goto loc_839B5890;
	case 2:
		goto loc_839B5890;
	case 3:
		goto loc_839B5898;
	case 4:
		goto loc_839B5898;
	case 5:
		goto loc_839B5898;
	case 6:
		goto loc_839B5898;
	case 7:
		goto loc_839B5898;
	case 8:
		goto loc_839B5898;
	case 9:
		goto loc_839B5890;
	case 10:
		goto loc_839B5890;
	case 11:
		goto loc_839B5890;
	case 12:
		goto loc_839B5890;
	case 13:
		goto loc_839B5890;
	case 14:
		goto loc_839B5890;
	case 15:
		goto loc_839B5890;
	case 16:
		goto loc_839B5890;
	case 17:
		goto loc_839B5890;
	case 18:
		goto loc_839B5898;
	case 19:
		goto loc_839B5898;
	case 20:
		goto loc_839B5898;
	case 21:
		goto loc_839B5890;
	case 22:
		goto loc_839B5890;
	case 23:
		goto loc_839B5890;
	case 24:
		goto loc_839B5890;
	default:
		return;
	}
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22680(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22680);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
	// lwz r28,22672(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 22672);
loc_839B5890:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_839B5898:
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12352
	ctx.r8.u64 = ctx.r10.u64 | 12352;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B58C4;
	sub_83103068(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B58D4"))) PPC_WEAK_FUNC(sub_839B58D4);
PPC_FUNC_IMPL(__imp__sub_839B58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B58D8"))) PPC_WEAK_FUNC(sub_839B58D8);
PPC_FUNC_IMPL(__imp__sub_839B58D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B58E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B58F4;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-25384
	ctx.r9.s64 = ctx.r11.s64 + -25384;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stb r30,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r30.u8);
	// bl 0x82ac0af0
	ctx.lr = 0x839B592C;
	sub_82AC0AF0(ctx, base);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// stw r7,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r6,27100
	ctx.r28.s64 = ctx.r6.s64 + 27100;
	// lwz r4,27100(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27100);
	// bl 0x82d20ae0
	ctx.lr = 0x839B594C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B595C;
	sub_82D23390(ctx, base);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B5970;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B5980;
	sub_8399FE30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B598C;
	sub_82ABFDA0(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B5994;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839B59A8;
	sub_8399EE20(ctx, base);
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B59BC;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x839B59CC;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x839B59DC;
	sub_82D19788(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839aabc8
	ctx.lr = 0x839B59FC;
	sub_839AABC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb540
	ctx.lr = 0x839B5A04;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B5A10"))) PPC_WEAK_FUNC(sub_839B5A10);
PPC_FUNC_IMPL(__imp__sub_839B5A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B5A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B5A4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b5a78
	if (cr6.eq) goto loc_839B5A78;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b58d8
	ctx.lr = 0x839B5A70;
	sub_839B58D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B5A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B5A84"))) PPC_WEAK_FUNC(sub_839B5A84);
PPC_FUNC_IMPL(__imp__sub_839B5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B5A88"))) PPC_WEAK_FUNC(sub_839B5A88);
PPC_FUNC_IMPL(__imp__sub_839B5A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B5A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x839b5d6c
	if (cr6.gt) goto loc_839B5D6C;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23256
	ctx.r12.s64 = ctx.r12.s64 + 23256;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B5B98;
	case 1:
		goto loc_839B5B10;
	case 2:
		goto loc_839B5D6C;
	case 3:
		goto loc_839B5C20;
	case 4:
		goto loc_839B5D6C;
	case 5:
		goto loc_839B5D6C;
	case 6:
		goto loc_839B5D6C;
	case 7:
		goto loc_839B5D6C;
	case 8:
		goto loc_839B5D6C;
	case 9:
		goto loc_839B5D6C;
	case 10:
		goto loc_839B5B98;
	case 11:
		goto loc_839B5D6C;
	case 12:
		goto loc_839B5D6C;
	case 13:
		goto loc_839B5CE4;
	default:
		return;
	}
	// lwz r28,23448(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23448);
	// lwz r28,23312(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23312);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23584(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23584);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23448(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23448);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23916);
	// lwz r28,23780(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23780);
loc_839B5B10:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// bl 0x82d042a8
	ctx.lr = 0x839B5B20;
	sub_82D042A8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-25560
	ctx.r29.s64 = ctx.r11.s64 + -25560;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// bl 0x82a6b900
	ctx.lr = 0x839B5B38;
	sub_82A6B900(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5B50;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5B58;
	sub_8387E8E0(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d042a8
	ctx.lr = 0x839B5B68;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a6b900
	ctx.lr = 0x839B5B78;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5B8C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5B94;
	sub_8387E8E0(ctx, base);
	// b 0x839b5e30
	goto loc_839B5E30;
loc_839B5B98:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// bl 0x82d042a8
	ctx.lr = 0x839B5BA8;
	sub_82D042A8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-25560
	ctx.r29.s64 = ctx.r11.s64 + -25560;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// bl 0x82a6b900
	ctx.lr = 0x839B5BC0;
	sub_82A6B900(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5BD8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5BE0;
	sub_8387E8E0(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// bl 0x82d042a8
	ctx.lr = 0x839B5BF0;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82a6b900
	ctx.lr = 0x839B5C00;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5C14;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5C1C;
	sub_8387E8E0(ctx, base);
	// b 0x839b5e30
	goto loc_839B5E30;
loc_839B5C20:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d042a8
	ctx.lr = 0x839B5C30;
	sub_82D042A8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-25560
	ctx.r29.s64 = ctx.r11.s64 + -25560;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// bl 0x82a6b900
	ctx.lr = 0x839B5C48;
	sub_82A6B900(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5C60;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5C68;
	sub_8387E8E0(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,63
	ctx.r4.u64 = ctx.r4.u64 | 63;
	// bl 0x82d042a8
	ctx.lr = 0x839B5C78;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a6b900
	ctx.lr = 0x839B5C88;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5C9C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5CA4;
	sub_8387E8E0(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// bl 0x82d042a8
	ctx.lr = 0x839B5CB4;
	sub_82D042A8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82a6b900
	ctx.lr = 0x839B5CC4;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5CD8;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5CE0;
	sub_8387E8E0(ctx, base);
	// b 0x839b5e30
	goto loc_839B5E30;
loc_839B5CE4:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,118
	ctx.r4.u64 = ctx.r4.u64 | 118;
	// bl 0x82d042a8
	ctx.lr = 0x839B5CF4;
	sub_82D042A8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-25560
	ctx.r29.s64 = ctx.r11.s64 + -25560;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// bl 0x82a6b900
	ctx.lr = 0x839B5D0C;
	sub_82A6B900(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5D24;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5D2C;
	sub_8387E8E0(ctx, base);
	// lis r4,62
	ctx.r4.s64 = 4063232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// bl 0x82d042a8
	ctx.lr = 0x839B5D3C;
	sub_82D042A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82a6b900
	ctx.lr = 0x839B5D4C;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5D60;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x839B5D68;
	sub_8387E8E0(ctx, base);
	// b 0x839b5e30
	goto loc_839B5E30;
loc_839B5D6C:
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// bl 0x82d042a8
	ctx.lr = 0x839B5D7C;
	sub_82D042A8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-25560
	ctx.r28.s64 = ctx.r11.s64 + -25560;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// bl 0x82a6b900
	ctx.lr = 0x839B5D94;
	sub_82A6B900(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5DAC;
	sub_825A1DA8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b5dc8
	if (cr6.lt) goto loc_839B5DC8;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839B5DC8;
	sub_825952B8(ctx, base);
loc_839B5DC8:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// bl 0x82d042a8
	ctx.lr = 0x839B5DE4;
	sub_82D042A8(ctx, base);
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6b900
	ctx.lr = 0x839B5DF4;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x839B5E08;
	sub_825A1DA8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b5e24
	if (cr6.lt) goto loc_839B5E24;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x839B5E24;
	sub_825952B8(ctx, base);
loc_839B5E24:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
loc_839B5E30:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b5e4c
	if (cr6.lt) goto loc_839B5E4C;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x839B5E4C;
	sub_825952B8(ctx, base);
loc_839B5E4C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B5E54"))) PPC_WEAK_FUNC(sub_839B5E54);
PPC_FUNC_IMPL(__imp__sub_839B5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B5E58"))) PPC_WEAK_FUNC(sub_839B5E58);
PPC_FUNC_IMPL(__imp__sub_839B5E58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,25
	ctx.r11.s64 = 25;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// bl 0x82d19a68
	ctx.lr = 0x839B5E7C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r4,r10,-25612
	ctx.r4.s64 = ctx.r10.s64 + -25612;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B5E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r11,r5,-25056
	ctx.r11.s64 = ctx.r5.s64 + -25056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x82d042a8
	ctx.lr = 0x839B5ECC;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5a88
	ctx.lr = 0x839B5ED8;
	sub_839B5A88(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B5EEC;
	sub_82D291E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839b5f0c
	if (cr6.lt) goto loc_839B5F0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B5F0C;
	sub_825952B8(ctx, base);
loc_839B5F0C:
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

__attribute__((alias("__imp__sub_839B5F24"))) PPC_WEAK_FUNC(sub_839B5F24);
PPC_FUNC_IMPL(__imp__sub_839B5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B5F28"))) PPC_WEAK_FUNC(sub_839B5F28);
PPC_FUNC_IMPL(__imp__sub_839B5F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B5F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12318
	ctx.r9.u64 = ctx.r10.u64 | 12318;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B5F64;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r7,r8,12343
	ctx.r7.u64 = ctx.r8.u64 | 12343;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B5F8C;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x839B5F94;
	sub_82D26ED8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82d26b18
	ctx.lr = 0x839B5F9C;
	sub_82D26B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d199f0
	ctx.lr = 0x839B5FA8;
	sub_82D199F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x839b5390
	ctx.lr = 0x839B5FB8;
	sub_839B5390(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// beq cr6,0x839b5fcc
	if (cr6.eq) goto loc_839B5FCC;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x839b5ff4
	if (!cr6.eq) goto loc_839B5FF4;
loc_839B5FCC:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,12291
	ctx.r10.u64 = ctx.r11.u64 | 12291;
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B5FF0;
	sub_83103068(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_839B5FF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B5FFC;
	sub_82D19A68(ctx, base);
	// li r4,-4367
	ctx.r4.s64 = -4367;
	// bl 0x83545640
	ctx.lr = 0x839B6004;
	sub_83545640(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bge cr6,0x839b60a8
	if (!cr6.lt) goto loc_839B60A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5e58
	ctx.lr = 0x839B601C;
	sub_839B5E58(ctx, base);
	// bl 0x839a9dd0
	ctx.lr = 0x839B6020;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b6044
	if (cr6.eq) goto loc_839B6044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B6034;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r11,r11,-25704
	ctx.r11.s64 = ctx.r11.s64 + -25704;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x839b6060
	goto loc_839B6060;
loc_839B6044:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839b6074
	if (!cr6.eq) goto loc_839B6074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B6058;
	sub_82D19A68(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,-25704
	ctx.r4.s64 = ctx.r11.s64 + -25704;
loc_839B6060:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B6074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B6074:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x839a9ec0
	ctx.lr = 0x839B607C;
	sub_839A9EC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b60a0
	if (cr6.eq) goto loc_839B60A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a30
	ctx.lr = 0x839B6094;
	sub_82D19A30(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x839B60A0;
	sub_82D196E0(ctx, base);
loc_839B60A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5688
	ctx.lr = 0x839B60A8;
	sub_839B5688(ctx, base);
loc_839B60A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B60B0"))) PPC_WEAK_FUNC(sub_839B60B0);
PPC_FUNC_IMPL(__imp__sub_839B60B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B60B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgt cr6,0x839b6174
	if (cr6.gt) goto loc_839B6174;
	// lis r12,-31845
	ctx.r12.s64 = -2086993920;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24808
	ctx.r12.s64 = ctx.r12.s64 + 24808;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839B61CC;
	case 1:
		goto loc_839B61EC;
	case 2:
		goto loc_839B61CC;
	case 3:
		goto loc_839B6174;
	case 4:
		goto loc_839B61EC;
	case 5:
		goto loc_839B61CC;
	case 6:
		goto loc_839B6154;
	case 7:
		goto loc_839B6174;
	case 8:
		goto loc_839B6174;
	case 9:
		goto loc_839B61CC;
	case 10:
		goto loc_839B61EC;
	case 11:
		goto loc_839B6174;
	case 12:
		goto loc_839B61CC;
	case 13:
		goto loc_839B6154;
	case 14:
		goto loc_839B6154;
	case 15:
		goto loc_839B61CC;
	case 16:
		goto loc_839B6154;
	case 17:
		goto loc_839B6174;
	case 18:
		goto loc_839B6174;
	case 19:
		goto loc_839B6154;
	case 20:
		goto loc_839B621C;
	case 21:
		goto loc_839B6174;
	case 22:
		goto loc_839B6314;
	case 23:
		goto loc_839B6460;
	case 24:
		goto loc_839B6174;
	case 25:
		goto loc_839B6174;
	case 26:
		goto loc_839B63EC;
	default:
		return;
	}
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,25068(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25068);
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,25068(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25068);
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,24916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24916);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,25068(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25068);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,24916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24916);
	// lwz r28,24916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24916);
	// lwz r28,25036(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25036);
	// lwz r28,24916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24916);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,24916(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24916);
	// lwz r28,25116(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25116);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,25364(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25364);
	// lwz r28,25696(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25696);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,24948(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24948);
	// lwz r28,25580(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25580);
loc_839B6154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d195d8
	ctx.lr = 0x839B6160;
	sub_82D195D8(ctx, base);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6174
	if (cr6.eq) goto loc_839B6174;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_839B6170:
	// bl 0x82d195d8
	ctx.lr = 0x839B6174;
	sub_82D195D8(ctx, base);
loc_839B6174:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x839B6184;
	sub_82D26ED8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82d26b18
	ctx.lr = 0x839B618C;
	sub_82D26B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d199f0
	ctx.lr = 0x839B6198;
	sub_82D199F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839b5390
	ctx.lr = 0x839B61A8;
	sub_839B5390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5e58
	ctx.lr = 0x839B61B4;
	sub_839B5E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b5688
	ctx.lr = 0x839B61BC;
	sub_839B5688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b57f0
	ctx.lr = 0x839B61C4;
	sub_839B57F0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B61CC:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b61e0
	if (cr6.eq) goto loc_839B61E0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d195d8
	ctx.lr = 0x839B61E0;
	sub_82D195D8(ctx, base);
loc_839B61E0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839b6170
	goto loc_839B6170;
loc_839B61EC:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6210
	if (cr6.eq) goto loc_839B6210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B6208;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r9.u32);
loc_839B6210:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839b6170
	goto loc_839B6170;
loc_839B621C:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6224;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B622C;
	sub_8399F950(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac0af0
	ctx.lr = 0x839B6238;
	sub_82AC0AF0(ctx, base);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6240;
	sub_8399F8B8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fda0
	ctx.lr = 0x839B624C;
	sub_8399FDA0(ctx, base);
	// lbz r11,166(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 166);
	// stb r11,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r11.u8);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B625C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ed80
	ctx.lr = 0x839B6274;
	sub_8399ED80(ctx, base);
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839b6288
	if (!cr6.eq) goto loc_839B6288;
	// stb r30,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r30.u8);
loc_839B6288:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6290;
	sub_8399F8B8(ctx, base);
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// mulli r11,r29,460
	ctx.r11.s64 = ctx.r29.s64 * 460;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f718
	ctx.lr = 0x839B62AC;
	sub_8399F718(ctx, base);
	// lbz r29,165(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B62B8;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399f938
	ctx.lr = 0x839B62C4;
	sub_8399F938(ctx, base);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B62CC;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8399f970
	ctx.lr = 0x839B62D8;
	sub_8399F970(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,264
	ctx.r7.s64 = 17301504;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r6,r8,21716
	ctx.r6.s64 = ctx.r8.s64 + 21716;
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// ori r5,r7,12291
	ctx.r5.u64 = ctx.r7.u64 | 12291;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6304;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B630C;
	sub_839CB150(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B6314:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12351
	ctx.r9.u64 = ctx.r10.u64 | 12351;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6344;
	sub_83103068(ctx, base);
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B634C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee10
	ctx.lr = 0x839B6360;
	sub_8399EE10(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r7,r8,12296
	ctx.r7.u64 = ctx.r8.u64 | 12296;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B6384;
	sub_83103068(ctx, base);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B638C;
	sub_8399F8B8(ctx, base);
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B6398;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B63A0;
	sub_8399F950(ctx, base);
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// bl 0x8399ed80
	ctx.lr = 0x839B63B8;
	sub_8399ED80(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r5,r6,12291
	ctx.r5.u64 = ctx.r6.u64 | 12291;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x83103068
	ctx.lr = 0x839B63DC;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B63E4;
	sub_839CB150(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B63EC:
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B63F4;
	sub_8399F8B8(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B6400;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B6408;
	sub_8399F950(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// bl 0x8399ed80
	ctx.lr = 0x839B6420;
	sub_8399ED80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12298
	ctx.r8.u64 = ctx.r10.u64 | 12298;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6450;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B6458;
	sub_839CB150(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B6460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B6474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B647C"))) PPC_WEAK_FUNC(sub_839B647C);
PPC_FUNC_IMPL(__imp__sub_839B647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6480"))) PPC_WEAK_FUNC(sub_839B6480);
PPC_FUNC_IMPL(__imp__sub_839B6480) {
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
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,12299
	ctx.r10.u64 = ctx.r10.u64 | 12299;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839b652c
	if (cr6.gt) goto loc_839B652C;
	// beq cr6,0x839b6524
	if (cr6.eq) goto loc_839B6524;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addi r11,r11,-12288
	ctx.r11.s64 = ctx.r11.s64 + -12288;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839b6588
	if (cr6.gt) goto loc_839B6588;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839b6588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B6588;
	// bdzf 4*cr6+eq,0x839b6588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B6588;
	// bdzf 4*cr6+eq,0x839b650c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B650C;
	// bdzf 4*cr6+eq,0x839b657c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B657C;
	// bdzf 4*cr6+eq,0x839b657c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B657C;
	// bdzf 4*cr6+eq,0x839b6588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B6588;
	// bdzf 4*cr6+eq,0x839b6588
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839B6588;
	// bne cr6,0x839b657c
	if (!cr6.eq) goto loc_839B657C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x839b6500
	if (cr6.eq) goto loc_839B6500;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x839b6588
	if (!cr6.eq) goto loc_839B6588;
loc_839B6500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b60b0
	ctx.lr = 0x839B6508;
	sub_839B60B0(ctx, base);
	// b 0x839b6588
	goto loc_839B6588;
loc_839B650C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B6520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x839b657c
	goto loc_839B657C;
loc_839B6524:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839b6594
	goto loc_839B6594;
loc_839B652C:
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12330
	ctx.r9.u64 = ctx.r10.u64 | 12330;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x839b6560
	if (cr6.gt) goto loc_839B6560;
	// ori r9,r10,12329
	ctx.r9.u64 = ctx.r10.u64 | 12329;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x839b657c
	if (!cr6.lt) goto loc_839B657C;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12311
	ctx.r9.u64 = ctx.r10.u64 | 12311;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x839b657c
	if (cr6.eq) goto loc_839B657C;
	// b 0x839b6588
	goto loc_839B6588;
loc_839B6560:
	// ori r9,r10,12342
	ctx.r9.u64 = ctx.r10.u64 | 12342;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x839b6588
	if (cr6.lt) goto loc_839B6588;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,12343
	ctx.r9.u64 = ctx.r10.u64 | 12343;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x839b6588
	if (cr6.gt) goto loc_839B6588;
loc_839B657C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6588;
	sub_83103068(ctx, base);
loc_839B6588:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B6594;
	sub_839CAE30(ctx, base);
loc_839B6594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B65AC"))) PPC_WEAK_FUNC(sub_839B65AC);
PPC_FUNC_IMPL(__imp__sub_839B65AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B65B0"))) PPC_WEAK_FUNC(sub_839B65B0);
PPC_FUNC_IMPL(__imp__sub_839B65B0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x839B65D0;
	sub_82D19788(ctx, base);
	// li r11,25
	ctx.r11.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// bl 0x839b60b0
	ctx.lr = 0x839B65E0;
	sub_839B60B0(ctx, base);
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

__attribute__((alias("__imp__sub_839B65F4"))) PPC_WEAK_FUNC(sub_839B65F4);
PPC_FUNC_IMPL(__imp__sub_839B65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B65F8"))) PPC_WEAK_FUNC(sub_839B65F8);
PPC_FUNC_IMPL(__imp__sub_839B65F8) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B6618;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24496
	ctx.r9.s64 = ctx.r11.s64 + -24496;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31768
	ctx.r6.s64 = -2081947648;
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,27244
	ctx.r30.s64 = ctx.r6.s64 + 27244;
	// lwz r4,27244(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27244);
	// bl 0x82d20ae0
	ctx.lr = 0x839B664C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B665C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x839B666C;
	sub_82D19788(ctx, base);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-24894
	ctx.r5.s64 = ctx.r5.s64 + -24894;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d1e950
	ctx.lr = 0x839B6680;
	sub_82D1E950(ctx, base);
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

__attribute__((alias("__imp__sub_839B669C"))) PPC_WEAK_FUNC(sub_839B669C);
PPC_FUNC_IMPL(__imp__sub_839B669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B66A0"))) PPC_WEAK_FUNC(sub_839B66A0);
PPC_FUNC_IMPL(__imp__sub_839B66A0) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839b66e0
	if (cr6.gt) goto loc_839B66E0;
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
loc_839B66E0:
	// bl 0x8399f8b8
	ctx.lr = 0x839B66E4;
	sub_8399F8B8(ctx, base);
	// bl 0x8399fd08
	ctx.lr = 0x839B66E8;
	sub_8399FD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b6708
	if (cr6.eq) goto loc_839B6708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B66FC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x839B6708;
	sub_82D2AEC8(ctx, base);
loc_839B6708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb750
	ctx.lr = 0x839B6710;
	sub_839CB750(ctx, base);
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

__attribute__((alias("__imp__sub_839B6724"))) PPC_WEAK_FUNC(sub_839B6724);
PPC_FUNC_IMPL(__imp__sub_839B6724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6728"))) PPC_WEAK_FUNC(sub_839B6728);
PPC_FUNC_IMPL(__imp__sub_839B6728) {
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
	// bl 0x82d19a78
	ctx.lr = 0x839B6740;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B6748;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b67a0
	if (cr6.eq) goto loc_839B67A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r10,-24588
	ctx.r30.s64 = ctx.r10.s64 + -24588;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B6774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839B678C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b67a0
	if (cr6.eq) goto loc_839B67A0;
	// lis r4,63
	ctx.r4.s64 = 4128768;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// bl 0x82d29598
	ctx.lr = 0x839B67A0;
	sub_82D29598(ctx, base);
loc_839B67A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B67B8"))) PPC_WEAK_FUNC(sub_839B67B8);
PPC_FUNC_IMPL(__imp__sub_839B67B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B67C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,164
	ctx.r4.s64 = 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B67F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6818
	if (cr6.eq) goto loc_839B6818;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b65f8
	ctx.lr = 0x839B6810;
	sub_839B65F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B6818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6824"))) PPC_WEAK_FUNC(sub_839B6824);
PPC_FUNC_IMPL(__imp__sub_839B6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6828"))) PPC_WEAK_FUNC(sub_839B6828);
PPC_FUNC_IMPL(__imp__sub_839B6828) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B6848;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23720
	ctx.r9.s64 = ctx.r11.s64 + -23720;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,27380
	ctx.r30.s64 = ctx.r7.s64 + 27380;
	// lwz r4,27380(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27380);
	// bl 0x82d20ae0
	ctx.lr = 0x839B6874;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B6884;
	sub_82D23390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B6898;
	sub_839CB540(ctx, base);
	// li r4,863
	ctx.r4.s64 = 863;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839B68A4;
	sub_839AB720(ctx, base);
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

__attribute__((alias("__imp__sub_839B68C0"))) PPC_WEAK_FUNC(sub_839B68C0);
PPC_FUNC_IMPL(__imp__sub_839B68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B68C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r9,r10,12318
	ctx.r9.u64 = ctx.r10.u64 | 12318;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x83103068
	ctx.lr = 0x839B68FC;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r7,r8,12343
	ctx.r7.u64 = ctx.r8.u64 | 12343;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83103068
	ctx.lr = 0x839B6924;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B6930;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B6938;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6a00
	if (cr6.eq) goto loc_839B6A00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B694C;
	sub_82D19A78(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-23808
	ctx.r28.s64 = ctx.r11.s64 + -23808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B696C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B697C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6a00
	if (cr6.eq) goto loc_839B6A00;
	// lis r4,632
	ctx.r4.s64 = 41418752;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d29598
	ctx.lr = 0x839B6990;
	sub_82D29598(ctx, base);
	// addi r11,r28,-20
	ctx.r11.s64 = ctx.r28.s64 + -20;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_839B6998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B69A4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6a00
	if (cr6.eq) goto loc_839B6A00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B69BC;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6a00
	if (cr6.eq) goto loc_839B6A00;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d29598
	ctx.lr = 0x839B69CC;
	sub_82D29598(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839b6998
	if (cr6.lt) goto loc_839B6998;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2f098
	ctx.lr = 0x839B69E4;
	sub_82D2F098(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839B69F0;
	sub_82D2AEC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B6A00;
	sub_82D1EAC0(ctx, base);
loc_839B6A00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6A08"))) PPC_WEAK_FUNC(sub_839B6A08);
PPC_FUNC_IMPL(__imp__sub_839B6A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B6A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x839B6A1C;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x839b6ab8
	if (!cr6.eq) goto loc_839B6AB8;
	// bl 0x8399f8b8
	ctx.lr = 0x839B6A28;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6ab8
	if (cr6.eq) goto loc_839B6AB8;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b0f00
	ctx.lr = 0x839B6A3C;
	sub_839B0F00(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198e0
	ctx.lr = 0x839B6A48;
	sub_82D198E0(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6A50;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8399f938
	ctx.lr = 0x839B6A5C;
	sub_8399F938(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6A8C;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r7,r8,12296
	ctx.r7.u64 = ctx.r8.u64 | 12296;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B6AB0;
	sub_83103068(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_839B6AB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb1c0
	ctx.lr = 0x839B6AC0;
	sub_839CB1C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6AC8"))) PPC_WEAK_FUNC(sub_839B6AC8);
PPC_FUNC_IMPL(__imp__sub_839B6AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B6AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B6B00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6b28
	if (cr6.eq) goto loc_839B6B28;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b6828
	ctx.lr = 0x839B6B20;
	sub_839B6828(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B6B28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6B34"))) PPC_WEAK_FUNC(sub_839B6B34);
PPC_FUNC_IMPL(__imp__sub_839B6B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6B38"))) PPC_WEAK_FUNC(sub_839B6B38);
PPC_FUNC_IMPL(__imp__sub_839B6B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B6B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,113(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b6c0c
	if (cr6.eq) goto loc_839B6C0C;
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6B60;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B6B68;
	sub_8399F988(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// ble cr6,0x839b6b7c
	if (!cr6.gt) goto loc_839B6B7C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839b6b88
	goto loc_839B6B88;
loc_839B6B7C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x839b6b88
	if (!cr6.lt) goto loc_839B6B88;
	// li r31,2
	ctx.r31.s64 = 2;
loc_839B6B88:
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6B90;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8399f970
	ctx.lr = 0x839B6B9C;
	sub_8399F970(ctx, base);
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B6BA4;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B6BAC;
	sub_8399F950(ctx, base);
	// lwz r29,100(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B6BB8;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x8399feb8
	ctx.lr = 0x839B6BCC;
	sub_8399FEB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,12292
	ctx.r8.u64 = ctx.r10.u64 | 12292;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103068
	ctx.lr = 0x839B6C00;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B6C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6C18"))) PPC_WEAK_FUNC(sub_839B6C18);
PPC_FUNC_IMPL(__imp__sub_839B6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B6C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B6C34;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// addi r9,r11,-22744
	ctx.r9.s64 = ctx.r11.s64 + -22744;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r31,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r7,27524
	ctx.r29.s64 = ctx.r7.s64 + 27524;
	// lwz r4,27524(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27524);
	// bl 0x82d20ae0
	ctx.lr = 0x839B6C6C;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x839B6C78;
	sub_82D20AE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x839B6C88;
	sub_82D23390(ctx, base);
	// stb r31,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r31.u8);
	// stb r31,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,115(r30)
	PPC_STORE_U8(ctx.r30.u32 + 115, ctx.r31.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B6C9C;
	sub_839CB540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6CA8"))) PPC_WEAK_FUNC(sub_839B6CA8);
PPC_FUNC_IMPL(__imp__sub_839B6CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,27696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6CB4"))) PPC_WEAK_FUNC(sub_839B6CB4);
PPC_FUNC_IMPL(__imp__sub_839B6CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6CB8"))) PPC_WEAK_FUNC(sub_839B6CB8);
PPC_FUNC_IMPL(__imp__sub_839B6CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,27700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6CC4"))) PPC_WEAK_FUNC(sub_839B6CC4);
PPC_FUNC_IMPL(__imp__sub_839B6CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6CC8"))) PPC_WEAK_FUNC(sub_839B6CC8);
PPC_FUNC_IMPL(__imp__sub_839B6CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,40
	ctx.r3.s64 = 2621440;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6CD4"))) PPC_WEAK_FUNC(sub_839B6CD4);
PPC_FUNC_IMPL(__imp__sub_839B6CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6CD8"))) PPC_WEAK_FUNC(sub_839B6CD8);
PPC_FUNC_IMPL(__imp__sub_839B6CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B6CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82d19a68
	ctx.lr = 0x839B6CF0;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B6D00;
	sub_82D19638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839B6D0C;
	sub_82D199F0(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x839b4e18
	ctx.lr = 0x839B6D2C;
	sub_839B4E18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B6D40;
	sub_83103100(ctx, base);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839b6d70
	if (cr6.eq) goto loc_839B6D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B6D54;
	sub_82D19638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82d195d8
	ctx.lr = 0x839B6D60;
	sub_82D195D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82d19788
	ctx.lr = 0x839B6D70;
	sub_82D19788(ctx, base);
loc_839B6D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6D78"))) PPC_WEAK_FUNC(sub_839B6D78);
PPC_FUNC_IMPL(__imp__sub_839B6D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,27704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6D84"))) PPC_WEAK_FUNC(sub_839B6D84);
PPC_FUNC_IMPL(__imp__sub_839B6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6D88"))) PPC_WEAK_FUNC(sub_839B6D88);
PPC_FUNC_IMPL(__imp__sub_839B6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// lwz r3,27708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27708);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6D94"))) PPC_WEAK_FUNC(sub_839B6D94);
PPC_FUNC_IMPL(__imp__sub_839B6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6D98"))) PPC_WEAK_FUNC(sub_839B6D98);
PPC_FUNC_IMPL(__imp__sub_839B6D98) {
	PPC_FUNC_PROLOGUE();
	// lis r3,262
	ctx.r3.s64 = 17170432;
	// ori r3,r3,218
	ctx.r3.u64 = ctx.r3.u64 | 218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6DA4"))) PPC_WEAK_FUNC(sub_839B6DA4);
PPC_FUNC_IMPL(__imp__sub_839B6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6DA8"))) PPC_WEAK_FUNC(sub_839B6DA8);
PPC_FUNC_IMPL(__imp__sub_839B6DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B6DBC"))) PPC_WEAK_FUNC(sub_839B6DBC);
PPC_FUNC_IMPL(__imp__sub_839B6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B6DC0"))) PPC_WEAK_FUNC(sub_839B6DC0);
PPC_FUNC_IMPL(__imp__sub_839B6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B6DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x839B6DD4;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b6df0
	if (!cr6.eq) goto loc_839B6DF0;
loc_839B6DDC:
	// bl 0x82d26ed8
	ctx.lr = 0x839B6DE0;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x839B6DE8;
	sub_82D26B30(ctx, base);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B6DF0:
	// bl 0x831156e8
	ctx.lr = 0x839B6DF4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x82d19bb0
	ctx.lr = 0x839B6E14;
	sub_82D19BB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// li r5,696
	ctx.r5.s64 = 696;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x831ce980
	ctx.lr = 0x839B6E40;
	sub_831CE980(ctx, base);
	// lbz r9,807(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 807);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839b6ddc
	if (cr6.eq) goto loc_839B6DDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x82d19bb0
	ctx.lr = 0x839B6E58;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b0f98
	ctx.lr = 0x839B6E68;
	sub_839B0F98(ctx, base);
	// bl 0x839a9a80
	ctx.lr = 0x839B6E6C;
	sub_839A9A80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x839b6eac
	if (!cr6.eq) goto loc_839B6EAC;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,12296
	ctx.r10.u64 = ctx.r11.u64 | 12296;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B6EA8;
	sub_83103068(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839B6EAC:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,12291
	ctx.r10.u64 = ctx.r11.u64 | 12291;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B6ED0;
	sub_83103068(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82d19a68
	ctx.lr = 0x839B6ED8;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19638
	ctx.lr = 0x839B6EE8;
	sub_82D19638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839B6EF4;
	sub_82D199F0(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,-22848
	ctx.r3.s64 = ctx.r9.s64 + -22848;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// bl 0x839b4e18
	ctx.lr = 0x839B6F14;
	sub_839B4E18(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x83103100
	ctx.lr = 0x839B6F28;
	sub_83103100(ctx, base);
	// lwz r7,164(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839b6f58
	if (cr6.eq) goto loc_839B6F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B6F3C;
	sub_82D19638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82d195d8
	ctx.lr = 0x839B6F48;
	sub_82D195D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82d19788
	ctx.lr = 0x839B6F58;
	sub_82D19788(ctx, base);
loc_839B6F58:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B6F60"))) PPC_WEAK_FUNC(sub_839B6F60);
PPC_FUNC_IMPL(__imp__sub_839B6F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839B6F68;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B6F9C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b6ff4
	if (cr6.eq) goto loc_839B6FF4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839b6c18
	ctx.lr = 0x839B6FC4;
	sub_839B6C18(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r9,r11,-22400
	ctx.r9.s64 = ctx.r11.s64 + -22400;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,861
	ctx.r4.s64 = 861;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x839ab720
	ctx.lr = 0x839B6FE8;
	sub_839AB720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B6FF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7000"))) PPC_WEAK_FUNC(sub_839B7000);
PPC_FUNC_IMPL(__imp__sub_839B7000) {
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
	// bl 0x82d19bb0
	ctx.lr = 0x839B7018;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b1308
	ctx.lr = 0x839B7028;
	sub_839B1308(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B703C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b6cd8
	ctx.lr = 0x839B7044;
	sub_839B6CD8(ctx, base);
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

__attribute__((alias("__imp__sub_839B7058"))) PPC_WEAK_FUNC(sub_839B7058);
PPC_FUNC_IMPL(__imp__sub_839B7058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839B7060;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B7094;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b70ec
	if (cr6.eq) goto loc_839B70EC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839b6c18
	ctx.lr = 0x839B70BC;
	sub_839B6C18(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r9,r11,-22056
	ctx.r9.s64 = ctx.r11.s64 + -22056;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,862
	ctx.r4.s64 = 862;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x839ab720
	ctx.lr = 0x839B70E0;
	sub_839AB720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839B70EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B70F8"))) PPC_WEAK_FUNC(sub_839B70F8);
PPC_FUNC_IMPL(__imp__sub_839B70F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bne cr6,0x839b714c
	if (!cr6.eq) goto loc_839B714C;
	// bl 0x82d19bb0
	ctx.lr = 0x839B7120;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x839b1308
	ctx.lr = 0x839B7130;
	sub_839B1308(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B7144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b6cd8
	ctx.lr = 0x839B714C;
	sub_839B6CD8(ctx, base);
loc_839B714C:
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

__attribute__((alias("__imp__sub_839B7160"))) PPC_WEAK_FUNC(sub_839B7160);
PPC_FUNC_IMPL(__imp__sub_839B7160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B7168;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x839B7174;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b7190
	if (!cr6.eq) goto loc_839B7190;
	// bl 0x82d26ed8
	ctx.lr = 0x839B7180;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x839B7188;
	sub_82D26B30(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B7190:
	// bl 0x831156e8
	ctx.lr = 0x839B7194;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x82d19bb0
	ctx.lr = 0x839B71B4;
	sub_82D19BB0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// li r5,696
	ctx.r5.s64 = 696;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// mulli r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 * 696;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x831ce980
	ctx.lr = 0x839B71E0;
	sub_831CE980(ctx, base);
	// lbz r9,775(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 775);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839b726c
	if (cr6.eq) goto loc_839B726C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82d19a68
	ctx.lr = 0x839B71F4;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B7204;
	sub_82D19638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839B7210;
	sub_82D199F0(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-22912
	ctx.r3.s64 = ctx.r11.s64 + -22912;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x839b4e18
	ctx.lr = 0x839B7230;
	sub_839B4E18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839B7244;
	sub_83103100(ctx, base);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839b7274
	if (cr6.eq) goto loc_839B7274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B7258;
	sub_82D19638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82d195d8
	ctx.lr = 0x839B7264;
	sub_82D195D8(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B726C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b7000
	ctx.lr = 0x839B7274;
	sub_839B7000(ctx, base);
loc_839B7274:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B727C"))) PPC_WEAK_FUNC(sub_839B727C);
PPC_FUNC_IMPL(__imp__sub_839B727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7280"))) PPC_WEAK_FUNC(sub_839B7280);
PPC_FUNC_IMPL(__imp__sub_839B7280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839B7288;
	__savegprlr_24(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r9,r10,12318
	ctx.r9.u64 = ctx.r10.u64 | 12318;
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B72BC;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,12343
	ctx.r7.u64 = ctx.r8.u64 | 12343;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B72E4;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B72F0;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B72F8;
	sub_82D33DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b74c8
	if (cr6.eq) goto loc_839B74C8;
	// bl 0x831156e8
	ctx.lr = 0x839B7308;
	sub_831156E8(ctx, base);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r25,3
	ctx.r25.s64 = 3;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// li r27,15
	ctx.r27.s64 = 15;
loc_839B7328:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B7334;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b74c8
	if (cr6.eq) goto loc_839B74C8;
	// subfc r11,r25,r28
	xer.ca = ctx.r28.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r25.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,696
	ctx.r5.s64 = 696;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// mulli r11,r8,696
	ctx.r11.s64 = ctx.r8.s64 * 696;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x831ce980
	ctx.lr = 0x839B7364;
	sub_831CE980(ctx, base);
	// lbz r6,871(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 871);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x839b7498
	if (!cr6.eq) goto loc_839B7498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B7384;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
loc_839B7398:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839b7398
	if (!cr6.eq) goto loc_839B7398;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839B73BC;
	sub_8259CC28(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x839b73d0
	if (!cr6.lt) goto loc_839B73D0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_839B73D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B73E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B73FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_839B7410:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839b7410
	if (!cr6.eq) goto loc_839B7410;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839B7434;
	sub_8259CC28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x839b7448
	if (!cr6.lt) goto loc_839B7448;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_839B7448:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B745C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b74d0
	if (cr6.eq) goto loc_839B74D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B747C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29598
	ctx.lr = 0x839B7488;
	sub_82D29598(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x839B7490;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839B7498;
	sub_8387E8E0(ctx, base);
loc_839B7498:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x839b7328
	if (cr6.lt) goto loc_839B7328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839B74AC;
	sub_82D19A68(ctx, base);
	// li r4,-4370
	ctx.r4.s64 = -4370;
	// bl 0x83545640
	ctx.lr = 0x839B74B4;
	sub_83545640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B74C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B74C8:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_839B74D0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x839B74D8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839B74E0;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B74E8"))) PPC_WEAK_FUNC(sub_839B74E8);
PPC_FUNC_IMPL(__imp__sub_839B74E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x839B74F0;
	__savegprlr_16(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x839B74FC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,160(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 160);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mulli r10,r10,2800
	ctx.r10.s64 = ctx.r10.s64 * 2800;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// bl 0x82d19a78
	ctx.lr = 0x839B751C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B7524;
	sub_82D33DB0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b776c
	if (cr6.eq) goto loc_839B776C;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// li r19,3
	ctx.r19.s64 = 3;
	// li r24,15
	ctx.r24.s64 = 15;
	// addi r20,r11,-22948
	ctx.r20.s64 = ctx.r11.s64 + -22948;
	// addi r23,r10,27548
	ctx.r23.s64 = ctx.r10.s64 + 27548;
loc_839B7550:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B755C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b776c
	if (cr6.eq) goto loc_839B776C;
	// subfc r11,r19,r21
	xer.ca = ctx.r21.u32 >= ctx.r19.u32;
	ctx.r11.s64 = ctx.r21.s64 - ctx.r19.s64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,696
	ctx.r5.s64 = 696;
	// and r8,r9,r21
	ctx.r8.u64 = ctx.r9.u64 & ctx.r21.u64;
	// mulli r11,r8,696
	ctx.r11.s64 = ctx.r8.s64 * 696;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x831ce980
	ctx.lr = 0x839B758C;
	sub_831CE980(ctx, base);
	// lbz r6,1031(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1031);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839b7760
	if (cr6.eq) goto loc_839B7760;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r20,-20
	ctx.r4.s64 = ctx.r20.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B75B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r26,r31,100
	ctx.r26.s64 = ctx.r31.s64 + 100;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B75D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b776c
	if (cr6.eq) goto loc_839B776C;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x839B75E8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B75FC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x839B7604;
	sub_8387E8E0(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_839B760C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r23,-12
	ctx.r10.s64 = ctx.r23.s64 + -12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B7628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b776c
	if (cr6.eq) goto loc_839B776C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r30,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B764C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b776c
	if (cr6.eq) goto loc_839B776C;
	// lwz r16,100(r22)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r22.u32 + 100);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B7664;
	sub_8399F8B8(ctx, base);
	// mulli r11,r16,460
	ctx.r11.s64 = ctx.r16.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839B7674;
	sub_8399F760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b76ac
	if (!cr6.eq) goto loc_839B76AC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// beq cr6,0x839b76ac
	if (cr6.eq) goto loc_839B76AC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B769C;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x839B76AC;
	sub_82D2AEC8(ctx, base);
loc_839B76AC:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// bl 0x83150518
	ctx.lr = 0x839B76C4;
	sub_83150518(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839b76e4
	if (!cr6.lt) goto loc_839B76E4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,408
	ctx.r10.s64 = ctx.r1.s64 + 408;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839b76e8
	goto loc_839B76E8;
loc_839B76E4:
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
loc_839B76E8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x839B76F4;
	sub_831CE980(ctx, base);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 332);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r5,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x839aae50
	ctx.lr = 0x839B7718;
	sub_839AAE50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B772C;
	sub_82D291E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B7740;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839B7748;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x839B7750;
	sub_8387E8E0(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x839b760c
	if (cr6.lt) goto loc_839B760C;
loc_839B7760:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// blt cr6,0x839b7550
	if (cr6.lt) goto loc_839B7550;
loc_839B776C:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7774"))) PPC_WEAK_FUNC(sub_839B7774);
PPC_FUNC_IMPL(__imp__sub_839B7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7778"))) PPC_WEAK_FUNC(sub_839B7778);
PPC_FUNC_IMPL(__imp__sub_839B7778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B778C"))) PPC_WEAK_FUNC(sub_839B778C);
PPC_FUNC_IMPL(__imp__sub_839B778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7790"))) PPC_WEAK_FUNC(sub_839B7790);
PPC_FUNC_IMPL(__imp__sub_839B7790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B7798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x839B77A4;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b77c0
	if (!cr6.eq) goto loc_839B77C0;
	// bl 0x82d26ed8
	ctx.lr = 0x839B77B0;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x839B77B8;
	sub_82D26B30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839B77C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839B77C8;
	sub_82D1C1A8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x839B77CC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19bb0
	ctx.lr = 0x839B77DC;
	sub_82D19BB0(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839b7800
	if (cr6.gt) goto loc_839B7800;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839B7800;
	sub_831CC188(ctx, base);
loc_839B7800:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// ori r8,r9,35289
	ctx.r8.u64 = ctx.r9.u64 | 35289;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r30,r6,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839B7824;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399fac8
	ctx.lr = 0x839B7830;
	sub_8399FAC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B7838;
	sub_839CB150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7840"))) PPC_WEAK_FUNC(sub_839B7840);
PPC_FUNC_IMPL(__imp__sub_839B7840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B7848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20992
	ctx.r9.s64 = ctx.r11.s64 + -20992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r29,160(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x839b789c
	if (cr6.eq) goto loc_839B789C;
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
	ctx.lr = 0x839B7894;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_839B789C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839b78b8
	if (cr6.eq) goto loc_839B78B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839B78B8;
	sub_825952B8(ctx, base);
loc_839B78B8:
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-32704
	ctx.r8.s64 = ctx.r10.s64 + -32704;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x839B78E8;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d25548
	ctx.lr = 0x839B78F0;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B78F8"))) PPC_WEAK_FUNC(sub_839B78F8);
PPC_FUNC_IMPL(__imp__sub_839B78F8) {
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
	// bl 0x839b7840
	ctx.lr = 0x839B7918;
	sub_839B7840(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b7930
	if (cr6.eq) goto loc_839B7930;
	// bl 0x82416268
	ctx.lr = 0x839B792C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839B7930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B7948"))) PPC_WEAK_FUNC(sub_839B7948);
PPC_FUNC_IMPL(__imp__sub_839B7948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x839B7950;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r27,r3,160
	ctx.r27.s64 = ctx.r3.s64 + 160;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x839b79ac
	if (cr0.eq) goto loc_839B79AC;
	// bl 0x82d19a78
	ctx.lr = 0x839B7974;
	sub_82D19A78(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r9,27880
	ctx.r11.s64 = ctx.r9.s64 + 27880;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x839B79AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B79AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,12318
	ctx.r9.u64 = ctx.r10.u64 | 12318;
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x83103068
	ctx.lr = 0x839B79DC;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r7,r8,12343
	ctx.r7.u64 = ctx.r8.u64 | 12343;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x83103068
	ctx.lr = 0x839B7A04;
	sub_83103068(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B7A10;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B7A18;
	sub_82D33DB0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b7bdc
	if (cr6.eq) goto loc_839B7BDC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x839b7bdc
	if (cr0.eq) goto loc_839B7BDC;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// ori r28,r9,35289
	ctx.r28.u64 = ctx.r9.u64 | 35289;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r23,r11,-21662
	ctx.r23.s64 = ctx.r11.s64 + -21662;
	// addi r22,r10,27848
	ctx.r22.s64 = ctx.r10.s64 + 27848;
loc_839B7A60:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B7A6C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b7bdc
	if (cr6.eq) goto loc_839B7BDC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x839b7be4
	if (!cr6.gt) goto loc_839B7BE4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwzx r4,r8,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839B7AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r23,574
	ctx.r4.s64 = ctx.r23.s64 + 574;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839B7AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b7bdc
	if (cr6.eq) goto loc_839B7BDC;
	// bl 0x831156e8
	ctx.lr = 0x839B7AD8;
	sub_831156E8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// ble cr6,0x839b7bf0
	if (!cr6.gt) goto loc_839B7BF0;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r31,r9,r28
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x831156e8
	ctx.lr = 0x839B7B08;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r11,r31,2800
	ctx.r11.s64 = ctx.r31.s64 * 2800;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839B7B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839b7b28
	if (!cr6.eq) goto loc_839B7B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839B7B4C;
	sub_8259CC28(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x839B7B64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839b7b80
	if (!cr6.eq) goto loc_839B7B80;
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// ori r4,r4,308
	ctx.r4.u64 = ctx.r4.u64 | 308;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x839B7B80;
	sub_82D042A8(ctx, base);
loc_839B7B80:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839B7B94;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839b7bb0
	if (cr6.lt) goto loc_839B7BB0;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839B7BB0;
	sub_825952B8(ctx, base);
loc_839B7BB0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, xer);
	// blt cr6,0x839b7a60
	if (cr6.lt) goto loc_839B7A60;
loc_839B7BDC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_839B7BE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839B7BF0;
	sub_831CC188(ctx, base);
loc_839B7BF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839B7BFC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839B7BFC"))) PPC_WEAK_FUNC(sub_839B7BFC);
PPC_FUNC_IMPL(__imp__sub_839B7BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7C00"))) PPC_WEAK_FUNC(sub_839B7C00);
PPC_FUNC_IMPL(__imp__sub_839B7C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B7C08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B7C18;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20992
	ctx.r9.s64 = ctx.r11.s64 + -20992;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// stw r26,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r26.u32);
	// addi r27,r31,160
	ctx.r27.s64 = ctx.r31.s64 + 160;
	// stw r26,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r26.u32);
	// addi r30,r7,27712
	ctx.r30.s64 = ctx.r7.s64 + 27712;
	// lwz r4,27712(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27712);
	// bl 0x82d20ae0
	ctx.lr = 0x839B7C58;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x839B7C68;
	sub_82D23390(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x839B7C6C;
	sub_831156E8(ctx, base);
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addis r28,r6,6
	ctx.r28.s64 = ctx.r6.s64 + 393216;
	// addi r28,r28,-30316
	ctx.r28.s64 = ctx.r28.s64 + -30316;
loc_839B7C80:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839b7ca8
	if (cr6.eq) goto loc_839B7CA8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839b7cac
	if (!cr6.eq) goto loc_839B7CAC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x839b7cac
	goto loc_839B7CAC;
loc_839B7CA8:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_839B7CAC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x839b7cfc
	if (!cr6.eq) goto loc_839B7CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19638
	ctx.lr = 0x839B7CC0;
	sub_82D19638(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// beq cr6,0x839b7cec
	if (cr6.eq) goto loc_839B7CEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,69(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// bl 0x82d19638
	ctx.lr = 0x839B7CD4;
	sub_82D19638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r8,69(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 69);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x839b7cfc
	if (cr6.eq) goto loc_839B7CFC;
loc_839B7CEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x839B7CF8;
	sub_835977D8(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_839B7CFC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x839b7c80
	if (cr6.lt) goto loc_839B7C80;
	// stb r26,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r26.u8);
	// stb r26,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r26.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B7D20;
	sub_839CB540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7D2C"))) PPC_WEAK_FUNC(sub_839B7D2C);
PPC_FUNC_IMPL(__imp__sub_839B7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7D30"))) PPC_WEAK_FUNC(sub_839B7D30);
PPC_FUNC_IMPL(__imp__sub_839B7D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B7D38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B7D68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b7d90
	if (cr6.eq) goto loc_839B7D90;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b7c00
	ctx.lr = 0x839B7D88;
	sub_839B7C00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B7D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7D9C"))) PPC_WEAK_FUNC(sub_839B7D9C);
PPC_FUNC_IMPL(__imp__sub_839B7D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B7DA0"))) PPC_WEAK_FUNC(sub_839B7DA0);
PPC_FUNC_IMPL(__imp__sub_839B7DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B7DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B7DB4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b7eb0
	if (cr6.eq) goto loc_839B7EB0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x839B7DC4;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x839b7de0
	if (!cr6.eq) goto loc_839B7DE0;
	// bl 0x82d26ed8
	ctx.lr = 0x839B7DD0;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x839B7DD8;
	sub_82D26B30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B7DE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839B7DE8;
	sub_82D1C1A8(ctx, base);
	// lwz r30,100(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B7DF8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fa90
	ctx.lr = 0x839B7E04;
	sub_8399FA90(ctx, base);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x839b7e74
	if (cr6.lt) goto loc_839B7E74;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8399f8b8
	ctx.lr = 0x839B7E14;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// addi r30,r28,164
	ctx.r30.s64 = ctx.r28.s64 + 164;
loc_839B7E28:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B7E38;
	sub_8399ED80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b7e28
	if (cr6.lt) goto loc_839B7E28;
	// bl 0x839a9a80
	ctx.lr = 0x839B7E4C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b7ea8
	if (!cr6.eq) goto loc_839B7EA8;
	// addi r4,r28,644
	ctx.r4.s64 = ctx.r28.s64 + 644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839B7E64;
	sub_8399EE10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B7E6C;
	sub_839CB150(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839B7E74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r31,r11,21716
	ctx.r31.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12304
	ctx.r9.u64 = ctx.r10.u64 | 12304;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103068
	ctx.lr = 0x839B7EA4;
	sub_83103068(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_839B7EA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B7EB0;
	sub_839CB150(ctx, base);
loc_839B7EB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7EB8"))) PPC_WEAK_FUNC(sub_839B7EB8);
PPC_FUNC_IMPL(__imp__sub_839B7EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B7EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B7ED0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
loc_839B7EE8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B7EF8;
	sub_8399ED80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x839b7ee8
	if (cr6.lt) goto loc_839B7EE8;
	// bl 0x839a9a80
	ctx.lr = 0x839B7F0C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b7f24
	if (!cr6.eq) goto loc_839B7F24;
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839B7F24;
	sub_8399EE10(ctx, base);
loc_839B7F24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B7F50;
	sub_83103068(ctx, base);
	// bl 0x839a9a80
	ctx.lr = 0x839B7F54;
	sub_839A9A80(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839b7f88
	if (!cr6.eq) goto loc_839B7F88;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,12296
	ctx.r10.u64 = ctx.r11.u64 | 12296;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B7F84;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_839B7F88:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// ori r9,r11,12356
	ctx.r9.u64 = ctx.r11.u64 | 12356;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B7FB8;
	sub_83103068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb1c0
	ctx.lr = 0x839B7FC0;
	sub_839CB1C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B7FC8"))) PPC_WEAK_FUNC(sub_839B7FC8);
PPC_FUNC_IMPL(__imp__sub_839B7FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B7FD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x839b80ac
	if (!cr6.eq) goto loc_839B80AC;
	// bl 0x8399f8b8
	ctx.lr = 0x839B7FE8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_839B7FFC:
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8008;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8399feb8
	ctx.lr = 0x839B801C;
	sub_8399FEB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B802C;
	sub_8399ED80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x839b7ffc
	if (cr6.lt) goto loc_839B7FFC;
	// bl 0x839a9a80
	ctx.lr = 0x839B803C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b8104
	if (!cr6.eq) goto loc_839B8104;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8050;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399ffd0
	ctx.lr = 0x839B8060;
	sub_8399FFD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8399edb0
	ctx.lr = 0x839B8070;
	sub_8399EDB0(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8078;
	sub_8399F8B8(ctx, base);
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x839a8390
	ctx.lr = 0x839B80A0;
	sub_839A8390(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x839b8100
	goto loc_839B8100;
loc_839B80AC:
	// bl 0x8399f8b8
	ctx.lr = 0x839B80B0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// addi r29,r31,164
	ctx.r29.s64 = ctx.r31.s64 + 164;
loc_839B80C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B80D8;
	sub_8399ED80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x839b80c8
	if (cr6.lt) goto loc_839B80C8;
	// bl 0x839a9a80
	ctx.lr = 0x839B80EC;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b8104
	if (!cr6.eq) goto loc_839B8104;
	// addi r4,r31,644
	ctx.r4.s64 = ctx.r31.s64 + 644;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_839B8100:
	// bl 0x8399ee10
	ctx.lr = 0x839B8104;
	sub_8399EE10(ctx, base);
loc_839B8104:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r27,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r27.u8);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8130;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r7,r8,12296
	ctx.r7.u64 = ctx.r8.u64 | 12296;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8154;
	sub_83103068(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// ori r4,r6,12356
	ctx.r4.u64 = ctx.r6.u64 | 12356;
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8184;
	sub_83103068(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B818C"))) PPC_WEAK_FUNC(sub_839B818C);
PPC_FUNC_IMPL(__imp__sub_839B818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8190"))) PPC_WEAK_FUNC(sub_839B8190);
PPC_FUNC_IMPL(__imp__sub_839B8190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B8198;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B81A4;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8238
	if (cr6.eq) goto loc_839B8238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B81B4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B81BC;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B81C8;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B81D8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839B81F0;
	sub_82D2B608(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x839B8204;
	sub_82D2B608(ctx, base);
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b8238
	if (!cr6.eq) goto loc_839B8238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x839B8218;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839b8228
	if (cr6.eq) goto loc_839B8228;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x839b8238
	if (!cr6.eq) goto loc_839B8238;
loc_839B8228:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B8238;
	sub_82D1EAC0(ctx, base);
loc_839B8238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8240"))) PPC_WEAK_FUNC(sub_839B8240);
PPC_FUNC_IMPL(__imp__sub_839B8240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B8248;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,21716
	ctx.r27.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,12317
	ctx.r9.u64 = ctx.r10.u64 | 12317;
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r26.u8);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x83103068
	ctx.lr = 0x839B827C;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,12342
	ctx.r7.u64 = ctx.r8.u64 | 12342;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// bl 0x83103068
	ctx.lr = 0x839B82A4;
	sub_83103068(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B82B0;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-20324
	ctx.r4.s64 = ctx.r6.s64 + -20324;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B82CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B82D4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B82DC;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8418
	if (cr6.eq) goto loc_839B8418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B8300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8378
	if (cr6.eq) goto loc_839B8378;
loc_839B8308:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x839B831C;
	sub_82D21408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B8328;
	sub_82D33DB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B8338;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8418
	if (cr6.eq) goto loc_839B8418;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839aff70
	ctx.lr = 0x839B834C;
	sub_839AFF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d29598
	ctx.lr = 0x839B8358;
	sub_82D29598(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B8370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b8308
	if (cr6.lt) goto loc_839B8308;
loc_839B8378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b8190
	ctx.lr = 0x839B8380;
	sub_839B8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839B8388;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b8418
	if (cr6.eq) goto loc_839B8418;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8398;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b83f0
	if (cr6.eq) goto loc_839B83F0;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B83A8;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399faa8
	ctx.lr = 0x839B83B0;
	sub_8399FAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x839b83cc
	if (!cr6.lt) goto loc_839B83CC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B83CC;
	sub_82D1EAC0(ctx, base);
loc_839B83CC:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x839b83f0
	if (!cr6.eq) goto loc_839B83F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B83F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839B83F0:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// ori r9,r11,12305
	ctx.r9.u64 = ctx.r11.u64 | 12305;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8418;
	sub_83103068(ctx, base);
loc_839B8418:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8420"))) PPC_WEAK_FUNC(sub_839B8420);
PPC_FUNC_IMPL(__imp__sub_839B8420) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839B8440;
	sub_82D1C1A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-12304
	xer.ca = ctx.r11.u32 > 12303;
	ctx.r11.s64 = ctx.r11.s64 + -12304;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839b845c
	if (cr0.eq) goto loc_839B845C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839b846c
	if (!cr6.eq) goto loc_839B846C;
	// b 0x839b8460
	goto loc_839B8460;
loc_839B845C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839B8460:
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b8190
	ctx.lr = 0x839B846C;
	sub_839B8190(ctx, base);
loc_839B846C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cae30
	ctx.lr = 0x839B8478;
	sub_839CAE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B8490"))) PPC_WEAK_FUNC(sub_839B8490);
PPC_FUNC_IMPL(__imp__sub_839B8490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B8498;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x839B84A8;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839b85a0
	if (!cr6.eq) goto loc_839B85A0;
	// lbz r11,113(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839b8594
	if (cr6.eq) goto loc_839B8594;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B84C4;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f988
	ctx.lr = 0x839B84CC;
	sub_8399F988(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// ble cr6,0x839b84e4
	if (!cr6.gt) goto loc_839B84E4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x839b84f0
	goto loc_839B84F0;
loc_839B84E4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x839b84f0
	if (!cr6.lt) goto loc_839B84F0;
	// li r30,2
	ctx.r30.s64 = 2;
loc_839B84F0:
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B84F8;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399f970
	ctx.lr = 0x839B8504;
	sub_8399F970(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B850C;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B8514;
	sub_8399F950(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8520;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// bl 0x8399feb8
	ctx.lr = 0x839B8534;
	sub_8399FEB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// ori r9,r10,12342
	ctx.r9.u64 = ctx.r10.u64 | 12342;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8560;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// ori r6,r8,12292
	ctx.r6.u64 = ctx.r8.u64 | 12292;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8588;
	sub_83103068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B8594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B85A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb830
	ctx.lr = 0x839B85AC;
	sub_839CB830(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B85B4"))) PPC_WEAK_FUNC(sub_839B85B4);
PPC_FUNC_IMPL(__imp__sub_839B85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B85B8"))) PPC_WEAK_FUNC(sub_839B85B8);
PPC_FUNC_IMPL(__imp__sub_839B85B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B85C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B85D8;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stb r31,160(r30)
	PPC_STORE_U8(ctx.r30.u32 + 160, ctx.r31.u8);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20224
	ctx.r9.s64 = ctx.r11.s64 + -20224;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// addi r29,r30,164
	ctx.r29.s64 = ctx.r30.s64 + 164;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r8.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_839B8600:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x839B8608;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// bge 0x839b8600
	if (!cr0.lt) goto loc_839B8600;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,27912
	ctx.r31.s64 = ctx.r11.s64 + 27912;
	// lwz r4,27912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27912);
	// bl 0x82d20ae0
	ctx.lr = 0x839B8628;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d23390
	ctx.lr = 0x839B8638;
	sub_82D23390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r10.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B8648;
	sub_839CB540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199f0
	ctx.lr = 0x839B8650;
	sub_82D199F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839b8668
	if (!cr6.eq) goto loc_839B8668;
	// li r4,860
	ctx.r4.s64 = 860;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839B8668;
	sub_839AB720(ctx, base);
loc_839B8668:
	// mulli r27,r27,532
	ctx.r27.s64 = ctx.r27.s64 * 532;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
loc_839B8674:
	// bl 0x8399f8b8
	ctx.lr = 0x839B8678;
	sub_8399F8B8(ctx, base);
	// add r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 + ctx.r3.u64;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399edb0
	ctx.lr = 0x839B8688;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B8694;
	sub_82ABFDA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839b8674
	if (cr6.lt) goto loc_839B8674;
	// bl 0x8399f8b8
	ctx.lr = 0x839B86A8;
	sub_8399F8B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839B86BC;
	sub_8399EE20(ctx, base);
	// addi r11,r30,644
	ctx.r11.s64 = ctx.r30.s64 + 644;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B86D0;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B86DC"))) PPC_WEAK_FUNC(sub_839B86DC);
PPC_FUNC_IMPL(__imp__sub_839B86DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B86E0"))) PPC_WEAK_FUNC(sub_839B86E0);
PPC_FUNC_IMPL(__imp__sub_839B86E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B86E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,692
	ctx.r4.s64 = 692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82595718
	ctx.lr = 0x839B871C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8748
	if (cr6.eq) goto loc_839B8748;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b85b8
	ctx.lr = 0x839B8740;
	sub_839B85B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_839B8748:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8754"))) PPC_WEAK_FUNC(sub_839B8754);
PPC_FUNC_IMPL(__imp__sub_839B8754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8758"))) PPC_WEAK_FUNC(sub_839B8758);
PPC_FUNC_IMPL(__imp__sub_839B8758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B8760;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,12317
	ctx.r9.u64 = ctx.r10.u64 | 12317;
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8794;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,12342
	ctx.r7.u64 = ctx.r8.u64 | 12342;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B87BC;
	sub_83103068(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,296(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 296);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839B87D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8810
	if (cr6.eq) goto loc_839B8810;
loc_839B87DC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x839B87F0;
	sub_82D21408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B8808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b87dc
	if (cr6.lt) goto loc_839B87DC;
loc_839B8810:
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfic r5,r11,12
	xer.ca = ctx.r11.u32 <= 12;
	ctx.r5.s64 = 12 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x839B882C;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B883C;
	sub_82D1EAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b870
	ctx.lr = 0x839B8844;
	sub_82D1B870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B884C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B8854;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1cda8
	ctx.lr = 0x839B8860;
	sub_82D1CDA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8868"))) PPC_WEAK_FUNC(sub_839B8868);
PPC_FUNC_IMPL(__imp__sub_839B8868) {
	PPC_FUNC_PROLOGUE();
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B8870"))) PPC_WEAK_FUNC(sub_839B8870);
PPC_FUNC_IMPL(__imp__sub_839B8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B8878;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,12291
	ctx.r10.u64 = ctx.r10.u64 | 12291;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x839B88AC;
	sub_83103068(ctx, base);
	// li r4,836
	ctx.r4.s64 = 836;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839B88B8;
	sub_839AB720(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B88C0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B88C8;
	sub_8399F950(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B88D4;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fb28
	ctx.lr = 0x839B88E0;
	sub_8399FB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab830
	ctx.lr = 0x839B88EC;
	sub_839AB830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B88F4;
	sub_839CB150(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B88FC"))) PPC_WEAK_FUNC(sub_839B88FC);
PPC_FUNC_IMPL(__imp__sub_839B88FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8900"))) PPC_WEAK_FUNC(sub_839B8900);
PPC_FUNC_IMPL(__imp__sub_839B8900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B8908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B8928;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b894c
	if (cr6.eq) goto loc_839B894C;
	// lbz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 368);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x839aff48
	ctx.lr = 0x839B8940;
	sub_839AFF48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x839B894C;
	sub_82D29598(ctx, base);
loc_839B894C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8954"))) PPC_WEAK_FUNC(sub_839B8954);
PPC_FUNC_IMPL(__imp__sub_839B8954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8958"))) PPC_WEAK_FUNC(sub_839B8958);
PPC_FUNC_IMPL(__imp__sub_839B8958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B8960;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B8974;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19464
	ctx.r9.s64 = ctx.r11.s64 + -19464;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r28,r31,208
	ctx.r28.s64 = ctx.r31.s64 + 208;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x839B8998;
	sub_82AC0AF0(ctx, base);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r7,28056
	ctx.r30.s64 = ctx.r7.s64 + 28056;
	// lwz r4,28056(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28056);
	// bl 0x82d20ae0
	ctx.lr = 0x839B89AC;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x839B89BC;
	sub_82D23390(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r30.u8);
	// bl 0x839a9cd8
	ctx.lr = 0x839B89C8;
	sub_839A9CD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839b89d8
	if (cr6.eq) goto loc_839B89D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r11.u8);
loc_839B89D8:
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B89E0;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B89F0;
	sub_8399FE30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B89FC;
	sub_82ABFDA0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8A00;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839B8A14;
	sub_8399EE20(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B8A28;
	sub_831CE980(ctx, base);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B8A3C;
	sub_839CB540(ctx, base);
	// bl 0x839a2350
	ctx.lr = 0x839B8A40;
	sub_839A2350(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839b8a64
	if (cr6.eq) goto loc_839B8A64;
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,10
	ctx.r4.s64 = 10;
	// ori r5,r5,113
	ctx.r5.u64 = ctx.r5.u64 | 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x839B8A64;
	sub_82D20EB8(ctx, base);
loc_839B8A64:
	// bl 0x839aaa10
	ctx.lr = 0x839B8A68;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x839b8a84
	if (!cr6.eq) goto loc_839B8A84;
	// li r5,2
	ctx.r5.s64 = 2;
loc_839B8A84:
	// bl 0x82d19788
	ctx.lr = 0x839B8A88;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8A94"))) PPC_WEAK_FUNC(sub_839B8A94);
PPC_FUNC_IMPL(__imp__sub_839B8A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8A98"))) PPC_WEAK_FUNC(sub_839B8A98);
PPC_FUNC_IMPL(__imp__sub_839B8A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839B8AA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8AB4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8AC8;
	sub_8399F8B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B8AD0;
	sub_8399F950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ac0af0
	ctx.lr = 0x839B8ADC;
	sub_82AC0AF0(ctx, base);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8AE4;
	sub_8399F8B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8399fda0
	ctx.lr = 0x839B8AF0;
	sub_8399FDA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8399ee20
	ctx.lr = 0x839B8AFC;
	sub_8399EE20(ctx, base);
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8B04;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8399fb00
	ctx.lr = 0x839B8B14;
	sub_8399FB00(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x839b8b40
	if (!cr6.eq) goto loc_839B8B40;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839B8B30;
	sub_8399ED80(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ee10
	ctx.lr = 0x839B8B3C;
	sub_8399EE10(ctx, base);
	// b 0x839b8cc4
	goto loc_839B8CC4;
loc_839B8B40:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x839b8c68
	if (!cr6.eq) goto loc_839B8C68;
	// bl 0x839a9a80
	ctx.lr = 0x839B8B4C;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839b8c58
	if (!cr6.eq) goto loc_839B8C58;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x8399f8b8
	ctx.lr = 0x839B8B64;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399feb8
	ctx.lr = 0x839B8B78;
	sub_8399FEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82abfda0
	ctx.lr = 0x839B8B84;
	sub_82ABFDA0(ctx, base);
	// lbz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 364);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r11.u8);
	// bl 0x8399ed80
	ctx.lr = 0x839B8B9C;
	sub_8399ED80(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8BA4;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8399ffd0
	ctx.lr = 0x839B8BB4;
	sub_8399FFD0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839B8BC0:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b8bd4
	if (!cr6.lt) goto loc_839B8BD4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x839b8bd8
	goto loc_839B8BD8;
loc_839B8BD4:
	// li r10,255
	ctx.r10.s64 = 255;
loc_839B8BD8:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b8be8
	if (!cr6.lt) goto loc_839B8BE8;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_839B8BE8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839b8bc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839B8BC0;
	// addi r11,r1,214
	ctx.r11.s64 = ctx.r1.s64 + 214;
	// lbz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,209(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// lbz r7,210(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// addi r8,r1,166
	ctx.r8.s64 = ctx.r1.s64 + 166;
	// lbz r6,211(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 211);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lbz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,213(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 213);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r25,217(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 217);
	// stb r10,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// stb r9,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r9.u8);
	// stb r7,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r7.u8);
	// stb r6,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r6.u8);
	// stb r5,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r5.u8);
	// stb r30,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r30.u8);
	// stb r28,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r28.u8);
	// stb r26,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r26.u8);
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stb r25,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r25.u8);
	// bl 0x8399ee10
	ctx.lr = 0x839B8C54;
	sub_8399EE10(ctx, base);
	// b 0x839b8cc4
	goto loc_839B8CC4;
loc_839B8C58:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x839b8cb0
	goto loc_839B8CB0;
loc_839B8C68:
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x839a9cd8
	ctx.lr = 0x839B8C70;
	sub_839A9CD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839b8c7c
	if (cr6.eq) goto loc_839B8C7C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_839B8C7C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x839b8ca0
	if (!cr6.eq) goto loc_839B8CA0;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82abfda0
	ctx.lr = 0x839B8C90;
	sub_82ABFDA0(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839B8CA0;
	sub_831CE980(ctx, base);
loc_839B8CA0:
	// bl 0x839a9a80
	ctx.lr = 0x839B8CA4;
	sub_839A9A80(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_839B8CB0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x839b0a08
	ctx.lr = 0x839B8CC4;
	sub_839B0A08(ctx, base);
loc_839B8CC4:
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8CCC;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B8CD4;
	sub_8399F950(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// addi r30,r11,21716
	ctx.r30.s64 = ctx.r11.s64 + 21716;
	// bne cr6,0x839b8d34
	if (!cr6.eq) goto loc_839B8D34;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,12291
	ctx.r10.u64 = ctx.r11.u64 | 12291;
	// stb r27,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8D08;
	sub_83103068(ctx, base);
	// lis r9,264
	ctx.r9.s64 = 17301504;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r8,r9,12296
	ctx.r8.u64 = ctx.r9.u64 | 12296;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8D2C;
	sub_83103068(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_839B8D34:
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r27,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r27.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r10,r11,12356
	ctx.r10.u64 = ctx.r11.u64 | 12356;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8D58;
	sub_83103068(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8D60"))) PPC_WEAK_FUNC(sub_839B8D60);
PPC_FUNC_IMPL(__imp__sub_839B8D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B8D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,372
	ctx.r4.s64 = 372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B8D98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8dc0
	if (cr6.eq) goto loc_839B8DC0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b8958
	ctx.lr = 0x839B8DB8;
	sub_839B8958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B8DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8DCC"))) PPC_WEAK_FUNC(sub_839B8DCC);
PPC_FUNC_IMPL(__imp__sub_839B8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B8DD0"))) PPC_WEAK_FUNC(sub_839B8DD0);
PPC_FUNC_IMPL(__imp__sub_839B8DD0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839b8a98
	ctx.lr = 0x839B8DEC;
	sub_839B8A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb1c0
	ctx.lr = 0x839B8DF4;
	sub_839CB1C0(ctx, base);
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

__attribute__((alias("__imp__sub_839B8E08"))) PPC_WEAK_FUNC(sub_839B8E08);
PPC_FUNC_IMPL(__imp__sub_839B8E08) {
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
	// bl 0x82d19a78
	ctx.lr = 0x839B8E28;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B8E30;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B8E38;
	sub_82D33DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839B8E40;
	sub_82D1C1A8(ctx, base);
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b8a98
	ctx.lr = 0x839B8E50;
	sub_839B8A98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B8E68"))) PPC_WEAK_FUNC(sub_839B8E68);
PPC_FUNC_IMPL(__imp__sub_839B8E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B8E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,12318
	ctx.r9.u64 = ctx.r10.u64 | 12318;
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8EA4;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,12343
	ctx.r7.u64 = ctx.r8.u64 | 12343;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B8ECC;
	sub_83103068(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,296(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 296);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839B8EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b8f20
	if (cr6.eq) goto loc_839B8F20;
loc_839B8EEC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x839B8F00;
	sub_82D21408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839B8F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x839b8eec
	if (cr6.lt) goto loc_839B8EEC;
loc_839B8F20:
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x839a9cd8
	ctx.lr = 0x839B8F28;
	sub_839A9CD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839b8f34
	if (cr6.eq) goto loc_839B8F34;
	// li r30,2
	ctx.r30.s64 = 2;
loc_839B8F34:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x839B8F4C;
	sub_82D20F50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x839B8F5C;
	sub_82D1EAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1b870
	ctx.lr = 0x839B8F64;
	sub_82D1B870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839B8F6C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B8F74;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1cda8
	ctx.lr = 0x839B8F80;
	sub_82D1CDA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B8F88"))) PPC_WEAK_FUNC(sub_839B8F88);
PPC_FUNC_IMPL(__imp__sub_839B8F88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,12291
	ctx.r10.u64 = ctx.r10.u64 | 12291;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x839B8FCC;
	sub_83103068(ctx, base);
	// li r4,851
	ctx.r4.s64 = 851;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab720
	ctx.lr = 0x839B8FD8;
	sub_839AB720(ctx, base);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B8FE0;
	sub_8399F8B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8399fb78
	ctx.lr = 0x839B8FE8;
	sub_8399FB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x839ab790
	ctx.lr = 0x839B8FF4;
	sub_839AB790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb150
	ctx.lr = 0x839B8FFC;
	sub_839CB150(ctx, base);
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

__attribute__((alias("__imp__sub_839B9014"))) PPC_WEAK_FUNC(sub_839B9014);
PPC_FUNC_IMPL(__imp__sub_839B9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9018"))) PPC_WEAK_FUNC(sub_839B9018);
PPC_FUNC_IMPL(__imp__sub_839B9018) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x839B9044;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b9064
	if (cr6.eq) goto loc_839B9064;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x839aff20
	ctx.lr = 0x839B9058;
	sub_839AFF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x839B9064;
	sub_82D29598(ctx, base);
loc_839B9064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B907C"))) PPC_WEAK_FUNC(sub_839B907C);
PPC_FUNC_IMPL(__imp__sub_839B907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9080"))) PPC_WEAK_FUNC(sub_839B9080);
PPC_FUNC_IMPL(__imp__sub_839B9080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839B9088;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x839cb9c8
	ctx.lr = 0x839B909C;
	sub_839CB9C8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-18704
	ctx.r9.s64 = ctx.r11.s64 + -18704;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x839B90C0;
	sub_82AC0AF0(ctx, base);
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r7,28200
	ctx.r28.s64 = ctx.r7.s64 + 28200;
	// lwz r4,28200(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28200);
	// bl 0x82d20ae0
	ctx.lr = 0x839B90D4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x839B90E4;
	sub_82D23390(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B90EC;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839B90FC;
	sub_8399FE30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x839B9108;
	sub_82ABFDA0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839B910C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839B9120;
	sub_8399EE20(ctx, base);
	// addi r6,r31,160
	ctx.r6.s64 = ctx.r31.s64 + 160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x831ce980
	ctx.lr = 0x839B9134;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// stb r5,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r5.u8);
	// bl 0x839cb540
	ctx.lr = 0x839B9150;
	sub_839CB540(ctx, base);
	// bl 0x839a2350
	ctx.lr = 0x839B9154;
	sub_839A2350(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839b9178
	if (cr6.eq) goto loc_839B9178;
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// li r4,10
	ctx.r4.s64 = 10;
	// ori r5,r5,113
	ctx.r5.u64 = ctx.r5.u64 | 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x839B9178;
	sub_82D20EB8(ctx, base);
loc_839B9178:
	// bl 0x839aaa10
	ctx.lr = 0x839B917C;
	sub_839AAA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x839b9198
	if (!cr6.eq) goto loc_839B9198;
	// li r5,2
	ctx.r5.s64 = 2;
loc_839B9198:
	// bl 0x82d19788
	ctx.lr = 0x839B919C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B91A8"))) PPC_WEAK_FUNC(sub_839B91A8);
PPC_FUNC_IMPL(__imp__sub_839B91A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839B91B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,100(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B91C4;
	sub_8399F8B8(ctx, base);
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B91D0;
	sub_8399F8B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8399f950
	ctx.lr = 0x839B91D8;
	sub_8399F950(ctx, base);
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839B91E4;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8399fb58
	ctx.lr = 0x839B91F0;
	sub_8399FB58(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ac0af0
	ctx.lr = 0x839B91F8;
	sub_82AC0AF0(ctx, base);
	// lwz r26,100(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8399f8b8
	ctx.lr = 0x839B9200;
	sub_8399F8B8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8399fda0
	ctx.lr = 0x839B920C;
	sub_8399FDA0(ctx, base);
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ee20
	ctx.lr = 0x839B9220;
	sub_8399EE20(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x839b92b8
	if (!cr6.eq) goto loc_839B92B8;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839B9238:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b924c
	if (!cr6.lt) goto loc_839B924C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,160(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 160);
	// b 0x839b9250
	goto loc_839B9250;
loc_839B924C:
	// li r10,255
	ctx.r10.s64 = 255;
loc_839B9250:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x839b9260
	if (!cr6.lt) goto loc_839B9260;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_839B9260:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839b9238
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839B9238;
	// lbz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// lbz r10,193(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 193);
	// lbz r9,194(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// lbz r8,195(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 195);
	// lbz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// lbz r6,197(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lbz r5,198(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 198);
	// lbz r4,199(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 199);
	// lbz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lbz r27,201(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stb r10,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// stb r9,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r9.u8);
	// stb r8,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r8.u8);
	// stb r7,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r7.u8);
	// stb r6,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r6.u8);
	// stb r5,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r5.u8);
	// stb r4,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r4.u8);
	// stb r3,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r3.u8);
	// stb r27,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r27.u8);
loc_839B92B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x839b0a08
	ctx.lr = 0x839B92D8;
	sub_839B0A08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// ori r9,r10,12291
	ctx.r9.u64 = ctx.r10.u64 | 12291;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839B9304;
	sub_83103068(ctx, base);
	// lis r8,264
	ctx.r8.s64 = 17301504;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r7,r8,12296
	ctx.r7.u64 = ctx.r8.u64 | 12296;
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x83103068
	ctx.lr = 0x839B9328;
	sub_83103068(ctx, base);
	// lis r6,264
	ctx.r6.s64 = 17301504;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r6,12356
	ctx.r5.u64 = ctx.r6.u64 | 12356;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x83103068
	ctx.lr = 0x839B934C;
	sub_83103068(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B9354"))) PPC_WEAK_FUNC(sub_839B9354);
PPC_FUNC_IMPL(__imp__sub_839B9354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9358"))) PPC_WEAK_FUNC(sub_839B9358);
PPC_FUNC_IMPL(__imp__sub_839B9358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839B9360;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
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
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x839B9390;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839b93b8
	if (cr6.eq) goto loc_839B93B8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839b9080
	ctx.lr = 0x839B93B0;
	sub_839B9080(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839B93B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B93C4"))) PPC_WEAK_FUNC(sub_839B93C4);
PPC_FUNC_IMPL(__imp__sub_839B93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B93C8"))) PPC_WEAK_FUNC(sub_839B93C8);
PPC_FUNC_IMPL(__imp__sub_839B93C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x839b91a8
	ctx.lr = 0x839B93E4;
	sub_839B91A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839cb1c0
	ctx.lr = 0x839B93EC;
	sub_839CB1C0(ctx, base);
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

__attribute__((alias("__imp__sub_839B9400"))) PPC_WEAK_FUNC(sub_839B9400);
PPC_FUNC_IMPL(__imp__sub_839B9400) {
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
	// bl 0x82d19a78
	ctx.lr = 0x839B9420;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839B9428;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839B9430;
	sub_82D33DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x839B9438;
	sub_82D1C1A8(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839b91a8
	ctx.lr = 0x839B9444;
	sub_839B91A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B945C"))) PPC_WEAK_FUNC(sub_839B945C);
PPC_FUNC_IMPL(__imp__sub_839B945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9460"))) PPC_WEAK_FUNC(sub_839B9460);
PPC_FUNC_IMPL(__imp__sub_839B9460) {
	PPC_FUNC_PROLOGUE();
	// b 0x839cae30
	sub_839CAE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B9464"))) PPC_WEAK_FUNC(sub_839B9464);
PPC_FUNC_IMPL(__imp__sub_839B9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9468"))) PPC_WEAK_FUNC(sub_839B9468);
PPC_FUNC_IMPL(__imp__sub_839B9468) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839B9474"))) PPC_WEAK_FUNC(sub_839B9474);
PPC_FUNC_IMPL(__imp__sub_839B9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839B9478"))) PPC_WEAK_FUNC(sub_839B9478);
PPC_FUNC_IMPL(__imp__sub_839B9478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839B9480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x839b94d4
	if (cr6.eq) goto loc_839B94D4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r11,r9,-17912
	ctx.r11.s64 = ctx.r9.s64 + -17912;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839B94C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x839B94CC;
	sub_82D19D40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x839b94fc
	goto loc_839B94FC;
loc_839B94D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r4,r10,-17912
	ctx.r4.s64 = ctx.r10.s64 + -17912;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839B94EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x839B94F8;
	sub_82D19D40(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
loc_839B94FC:
	// subf r6,r3,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r3.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21408
	ctx.lr = 0x839B950C;
	sub_82D21408(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839B9514"))) PPC_WEAK_FUNC(sub_839B9514);
PPC_FUNC_IMPL(__imp__sub_839B9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

