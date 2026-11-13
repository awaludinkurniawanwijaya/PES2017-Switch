#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BEBC18"))) PPC_WEAK_FUNC(sub_82BEBC18);
PPC_FUNC_IMPL(__imp__sub_82BEBC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8232
	ctx.r9.s64 = ctx.r11.s64 + 8232;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82bed1d0
	sub_82BED1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBC34"))) PPC_WEAK_FUNC(sub_82BEBC34);
PPC_FUNC_IMPL(__imp__sub_82BEBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBC38"))) PPC_WEAK_FUNC(sub_82BEBC38);
PPC_FUNC_IMPL(__imp__sub_82BEBC38) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f00728
	ctx.lr = 0x82BEBC50;
	sub_82F00728(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,19024
	ctx.r3.s64 = ctx.r3.s64 + 19024;
	// bl 0x82f04500
	ctx.lr = 0x82BEBC60;
	sub_82F04500(ctx, base);
	// bl 0x82c1f678
	ctx.lr = 0x82BEBC64;
	sub_82C1F678(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c1f568
	ctx.lr = 0x82BEBC6C;
	sub_82C1F568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bedc48
	ctx.lr = 0x82BEBC74;
	sub_82BEDC48(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82BEBC94"))) PPC_WEAK_FUNC(sub_82BEBC94);
PPC_FUNC_IMPL(__imp__sub_82BEBC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBC98"))) PPC_WEAK_FUNC(sub_82BEBC98);
PPC_FUNC_IMPL(__imp__sub_82BEBC98) {
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
	// bl 0x82c1f678
	ctx.lr = 0x82BEBCB0;
	sub_82C1F678(ctx, base);
	// bl 0x82c1f5b0
	ctx.lr = 0x82BEBCB4;
	sub_82C1F5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becc90
	ctx.lr = 0x82BEBCBC;
	sub_82BECC90(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8140
	ctx.r5.s64 = ctx.r11.s64 + 8140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BEBCD0;
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

__attribute__((alias("__imp__sub_82BEBCE4"))) PPC_WEAK_FUNC(sub_82BEBCE4);
PPC_FUNC_IMPL(__imp__sub_82BEBCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEBCE8"))) PPC_WEAK_FUNC(sub_82BEBCE8);
PPC_FUNC_IMPL(__imp__sub_82BEBCE8) {
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
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// beq cr6,0x82bebd10
	if (cr6.eq) goto loc_82BEBD10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bebd70
	goto loc_82BEBD70;
loc_82BEBD10:
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// bge cr6,0x82bebd6c
	if (!cr6.lt) goto loc_82BEBD6C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,7984
	ctx.r8.s64 = ctx.r10.s64 + 7984;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82BEBD3C;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82bebd6c
	if (cr6.eq) goto loc_82BEBD6C;
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r5,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 & ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,92(r4)
	PPC_STORE_U8(ctx.r4.u32 + 92, ctx.r6.u8);
loc_82BEBD6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEBD70:
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

__attribute__((alias("__imp__sub_82BEBD88"))) PPC_WEAK_FUNC(sub_82BEBD88);
PPC_FUNC_IMPL(__imp__sub_82BEBD88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r4.u32);
	// stb r11,244(r10)
	PPC_STORE_U8(ctx.r10.u32 + 244, ctx.r11.u8);
	// lwz r7,148(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r5,252(r7)
	PPC_STORE_U32(ctx.r7.u32 + 252, ctx.r5.u32);
	// stb r11,244(r7)
	PPC_STORE_U8(ctx.r7.u32 + 244, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBDB0"))) PPC_WEAK_FUNC(sub_82BEBDB0);
PPC_FUNC_IMPL(__imp__sub_82BEBDB0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,8232
	ctx.r9.s64 = ctx.r11.s64 + 8232;
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
	// bl 0x82bed1d0
	ctx.lr = 0x82BEBDE8;
	sub_82BED1D0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bebe00
	if (cr6.eq) goto loc_82BEBE00;
	// bl 0x82416268
	ctx.lr = 0x82BEBDFC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BEBE00:
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x82bebf18
	if (cr6.gt) goto loc_82BEBF18;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16832
	ctx.r12.s64 = ctx.r12.s64 + -16832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82BEBE74;
	case 1:
		goto loc_82BEBE88;
	case 2:
		goto loc_82BEBED0;
	case 3:
		goto loc_82BEBEEC;
	case 4:
		goto loc_82BEBF18;
	case 5:
		goto loc_82BEBF18;
	case 6:
		goto loc_82BEBF18;
	case 7:
		goto loc_82BEBF18;
	case 8:
		goto loc_82BEBF1C;
	case 9:
		goto loc_82BEBF28;
	case 10:
		goto loc_82BEBF30;
	case 11:
		goto loc_82BEBF60;
	case 12:
		goto loc_82BEBF90;
	default:
		return;
	}
	// lwz r21,-16780(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16780);
	// lwz r21,-16760(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16760);
	// lwz r21,-16688(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16688);
	// lwz r21,-16660(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16660);
	// lwz r21,-16616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16616);
	// lwz r21,-16616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16616);
	// lwz r21,-16616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16616);
	// lwz r21,-16616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16616);
	// lwz r21,-16612(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16612);
	// lwz r21,-16600(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16600);
	// lwz r21,-16592(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16592);
	// lwz r21,-16544(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16544);
	// lwz r21,-16496(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16496);
loc_82BEBE74:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82BEBE88:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bebebc
	if (!cr6.eq) goto loc_82BEBEBC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bebec0
	if (cr6.eq) goto loc_82BEBEC0;
loc_82BEBEBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEBEC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82BEBED0:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 158);
	// lhz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 156);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82BEBEEC:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEBEF8:
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bebfc0
	if (!cr6.eq) goto loc_82BEBFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bebef8
	if (cr6.lt) goto loc_82BEBEF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BEBF18:
	// blr 
	return;
loc_82BEBF1C:
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lbz r3,244(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// blr 
	return;
loc_82BEBF28:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x82b29100
	sub_82B29100(ctx, base);
	return;
loc_82BEBF30:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEBF3C:
	// lbz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bebfc0
	if (!cr6.eq) goto loc_82BEBFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bebf3c
	if (cr6.lt) goto loc_82BEBF3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BEBF60:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEBF6C:
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bebfc0
	if (!cr6.eq) goto loc_82BEBFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bebf6c
	if (cr6.lt) goto loc_82BEBF6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BEBF90:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEBF9C:
	// lbz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bebfc0
	if (!cr6.eq) goto loc_82BEBFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bebf9c
	if (cr6.lt) goto loc_82BEBF9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BEBFC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBFC8"))) PPC_WEAK_FUNC(sub_82BEBFC8);
PPC_FUNC_IMPL(__imp__sub_82BEBFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BEBFD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bec108
	if (cr6.eq) goto loc_82BEC108;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bne cr6,0x82bec108
	if (!cr6.eq) goto loc_82BEC108;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,18
	ctx.r30.s64 = 18;
	// addi r31,r11,7984
	ctx.r31.s64 = ctx.r11.s64 + 7984;
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BEC008:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83160b90
	ctx.lr = 0x82BEC014;
	sub_83160B90(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bec028
	if (!cr6.lt) goto loc_82BEC028;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BEC028:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82BEC030;
	sub_82D3B548(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bec04c
	if (cr6.lt) goto loc_82BEC04C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BEC04C;
	sub_825952B8(ctx, base);
loc_82BEC04C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// bne 0x82bec008
	if (!cr0.eq) goto loc_82BEC008;
	// lwz r10,148(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82BEC070:
	// lbz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bec0b0
	if (!cr6.eq) goto loc_82BEC0B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bec070
	if (cr6.lt) goto loc_82BEC070;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BEC090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bec0b8
	if (!cr6.eq) goto loc_82BEC0B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82BEC0A8;
	sub_82D3B298(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BEC0B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bec090
	goto loc_82BEC090;
loc_82BEC0B8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82BEC0BC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,18
	ctx.r11.s64 = 18;
	// lwz r10,148(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// subfc r8,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 & ctx.r9.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,92(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bec0f8
	if (cr6.eq) goto loc_82BEC0F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82BEC0F8;
	sub_82D3B298(ctx, base);
loc_82BEC0F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// ble cr6,0x82bec0bc
	if (!cr6.gt) goto loc_82BEC0BC;
loc_82BEC108:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEC110"))) PPC_WEAK_FUNC(sub_82BEC110);
PPC_FUNC_IMPL(__imp__sub_82BEC110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BEC118;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bec194
	if (!cr6.eq) goto loc_82BEC194;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,7755
	ctx.r4.s64 = ctx.r11.s64 + 7755;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC148;
	sub_837B0C10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bed628
	ctx.lr = 0x82BEC158;
	sub_82BED628(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bec178
	if (cr6.lt) goto loc_82BEC178;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BEC178;
	sub_825952B8(ctx, base);
loc_82BEC178:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BEC194:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BEC1BC;
	sub_8259CB28(ctx, base);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82BEC1DC;
	sub_8259CB28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bed628
	ctx.lr = 0x82BEC1EC;
	sub_82BED628(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bec20c
	if (cr6.lt) goto loc_82BEC20C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BEC20C;
	sub_825952B8(ctx, base);
loc_82BEC20C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82bec234
	if (cr6.lt) goto loc_82BEC234;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BEC234;
	sub_825952B8(ctx, base);
loc_82BEC234:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
	// blr 
	return;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15696
	ctx.r12.s64 = ctx.r12.s64 + -15696;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BEC2E4;
	case 1:
		goto loc_82BEC2F8;
	case 2:
		goto loc_82BEC334;
	case 3:
		goto loc_82BEC340;
	case 4:
		goto loc_82BEC424;
	case 5:
		goto loc_82BEC424;
	case 6:
		goto loc_82BEC424;
	case 7:
		goto loc_82BEC424;
	case 8:
		goto loc_82BEC364;
	case 9:
		goto loc_82BEC384;
	case 10:
		goto loc_82BEC3CC;
	case 11:
		goto loc_82BEC3E0;
	case 12:
		goto loc_82BEC400;
	default:
		return;
	}
	// lwz r21,-15644(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15644);
	// lwz r21,-15624(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15624);
	// lwz r21,-15564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15564);
	// lwz r21,-15552(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15552);
	// lwz r21,-15324(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15324);
	// lwz r21,-15324(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15324);
	// lwz r21,-15324(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15324);
	// lwz r21,-15324(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15324);
	// lwz r21,-15516(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15516);
	// lwz r21,-15484(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15484);
	// lwz r21,-15412(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15412);
	// lwz r21,-15392(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15392);
	// lwz r21,-15360(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15360);
loc_82BEC2E4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
loc_82BEC2F8:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82BEC334:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x82b28dc8
	sub_82B28DC8(ctx, base);
	return;
loc_82BEC340:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_82BEC364:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lwz r8,260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// stb r10,244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// stw r9,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r9.u32);
	// stw r8,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r8.u32);
	// blr 
	return;
loc_82BEC384:
	// li r11,98
	ctx.r11.s64 = 98;
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r8,344
	ctx.r10.s64 = ctx.r8.s64 + 344;
	// addi r10,r10,1172
	ctx.r10.s64 = ctx.r10.s64 + 1172;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEC3A0:
	// stw r11,-1172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1172, ctx.r11.u32);
	// stw r9,-780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -780, ctx.r9.u32);
	// stw r11,-388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -388, ctx.r11.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bec3a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BEC3A0;
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// lwz r9,240(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// stb r11,224(r8)
	PPC_STORE_U8(ctx.r8.u32 + 224, ctx.r11.u8);
	// stw r10,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r10.u32);
	// stw r9,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r9.u32);
	// blr 
	return;
loc_82BEC3CC:
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
loc_82BEC3E0:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82BEC400:
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BEC418:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82bec418
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BEC418;
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
loc_82BEC424:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC428"))) PPC_WEAK_FUNC(sub_82BEC428);
PPC_FUNC_IMPL(__imp__sub_82BEC428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEC430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bec480
	if (cr6.eq) goto loc_82BEC480;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bec47c
	if (cr6.eq) goto loc_82BEC47C;
loc_82BEC454:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bec454
	if (!cr6.eq) goto loc_82BEC454;
loc_82BEC47C:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82BEC480:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r30,r11,8560
	ctx.r30.s64 = ctx.r11.s64 + 8560;
loc_82BEC48C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d54828
	ctx.lr = 0x82BEC498;
	sub_82D54828(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82bec48c
	if (!cr0.eq) goto loc_82BEC48C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEC4AC"))) PPC_WEAK_FUNC(sub_82BEC4AC);
PPC_FUNC_IMPL(__imp__sub_82BEC4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEC4B0"))) PPC_WEAK_FUNC(sub_82BEC4B0);
PPC_FUNC_IMPL(__imp__sub_82BEC4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BEC4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82bec910
	if (cr6.gt) goto loc_82BEC910;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15124
	ctx.r12.s64 = ctx.r12.s64 + -15124;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BEC51C;
	case 1:
		goto loc_82BEC60C;
	case 2:
		goto loc_82BEC6C8;
	case 3:
		goto loc_82BEC910;
	case 4:
		goto loc_82BEC910;
	case 5:
		goto loc_82BEC910;
	case 6:
		goto loc_82BEC910;
	case 7:
		goto loc_82BEC7D4;
	case 8:
		goto loc_82BEC804;
	case 9:
		goto loc_82BEC910;
	case 10:
		goto loc_82BEC830;
	case 11:
		goto loc_82BEC888;
	default:
		return;
	}
	// lwz r21,-15076(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15076);
	// lwz r21,-14836(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14836);
	// lwz r21,-14648(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14648);
	// lwz r21,-14064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14064);
	// lwz r21,-14064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14064);
	// lwz r21,-14064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14064);
	// lwz r21,-14064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14064);
	// lwz r21,-14380(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14380);
	// lwz r21,-14332(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14332);
	// lwz r21,-14064(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14064);
	// lwz r21,-14288(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14288);
	// lwz r21,-14200(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14200);
loc_82BEC51C:
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r11,r9,160
	ctx.r11.s64 = ctx.r9.s64 + 160;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// lwz r10,168(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 168);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82bec550
	if (!cr6.eq) goto loc_82BEC550;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bec554
	if (cr6.eq) goto loc_82BEC554;
loc_82BEC550:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bec5a4
	if (!cr6.eq) goto loc_82BEC5A4;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// lwz r10,-28788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82bec590
	if (!cr6.eq) goto loc_82BEC590;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bec594
	if (cr6.eq) goto loc_82BEC594;
loc_82BEC590:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82bec5a8
	if (cr6.eq) goto loc_82BEC5A8;
loc_82BEC5A4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC5A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82bec5cc
	if (!cr6.eq) goto loc_82BEC5CC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC5CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a68228
	ctx.lr = 0x82BEC5D4;
	sub_82A68228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC5E0;
	sub_837B0C10(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7972
	ctx.r4.s64 = ctx.r11.s64 + 7972;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC5F4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BEC604;
	sub_82A69AD0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEC60C:
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lhz r11,158(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 158);
	// lhz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bec664
	if (cr6.eq) goto loc_82BEC664;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lwz r11,140(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r10,-28788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82bec650
	if (!cr6.eq) goto loc_82BEC650;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bec654
	if (cr6.eq) goto loc_82BEC654;
loc_82BEC650:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82bec668
	if (!cr6.eq) goto loc_82BEC668;
loc_82BEC664:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// lhz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 156);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82bec688
	if (!cr6.eq) goto loc_82BEC688;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC688:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82be2738
	ctx.lr = 0x82BEC690;
	sub_82BE2738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC69C;
	sub_837B0C10(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7972
	ctx.r4.s64 = ctx.r11.s64 + 7972;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC6B0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BEC6C0;
	sub_82A69AD0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEC6C8:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82BEC6D4:
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bec724
	if (!cr6.eq) goto loc_82BEC724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bec6d4
	if (cr6.lt) goto loc_82BEC6D4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC6F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_82BEC710:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// blt cr6,0x82bec72c
	if (cr6.lt) goto loc_82BEC72C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82bec738
	goto loc_82BEC738;
loc_82BEC724:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bec6f4
	goto loc_82BEC6F4;
loc_82BEC72C:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
loc_82BEC738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec750
	if (cr6.eq) goto loc_82BEC750;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82BEC750;
	sub_835977D8(ctx, base);
loc_82BEC750:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x82bec710
	if (cr6.lt) goto loc_82BEC710;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bedeb8
	ctx.lr = 0x82BEC77C;
	sub_82BEDEB8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82bec78c
	if (!cr6.eq) goto loc_82BEC78C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC78C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292a3f8
	ctx.lr = 0x82BEC798;
	sub_8292A3F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,7972
	ctx.r4.s64 = ctx.r11.s64 + 7972;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC7AC;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82BEC7BC;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82BEC7C4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82BEC7CC;
	sub_82F73D60(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEC7D4:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bec908
	if (cr6.eq) goto loc_82BEC908;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,252(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// bl 0x82bed080
	ctx.lr = 0x82BEC7FC;
	sub_82BED080(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEC804:
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82b29100
	ctx.lr = 0x82BEC80C;
	sub_82B29100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82bec828
	if (!cr6.eq) goto loc_82BEC828;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC828:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x82bec8d4
	goto loc_82BEC8D4;
loc_82BEC830:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82BEC83C:
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bec880
	if (!cr6.eq) goto loc_82BEC880;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bec83c
	if (cr6.lt) goto loc_82BEC83C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC85C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82bec878
	if (!cr6.eq) goto loc_82BEC878;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC878:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// b 0x82bec8d4
	goto loc_82BEC8D4;
loc_82BEC880:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bec85c
	goto loc_82BEC85C;
loc_82BEC888:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_82BEC894:
	// lbz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bec8fc
	if (!cr6.eq) goto loc_82BEC8FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82bec894
	if (cr6.lt) goto loc_82BEC894;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BEC8B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bec904
	if (cr6.eq) goto loc_82BEC904;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82bec8d0
	if (!cr6.eq) goto loc_82BEC8D0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82BEC8D0:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
loc_82BEC8D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,7972
	ctx.r4.s64 = ctx.r11.s64 + 7972;
	// bl 0x837b0c10
	ctx.lr = 0x82BEC8E0;
	sub_837B0C10(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,52
	ctx.r5.u64 = ctx.r5.u64 | 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82BEC8F4;
	sub_82A69A28(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEC8FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bec8b4
	goto loc_82BEC8B4;
loc_82BEC904:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BEC908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bed728
	ctx.lr = 0x82BEC910;
	sub_82BED728(ctx, base);
loc_82BEC910:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEC918"))) PPC_WEAK_FUNC(sub_82BEC918);
PPC_FUNC_IMPL(__imp__sub_82BEC918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BEC920;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4112(r1)
	ea = -4112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BEC930;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82bec9f0
	if (!cr6.eq) goto loc_82BEC9F0;
	// bl 0x82f00728
	ctx.lr = 0x82BEC93C;
	sub_82F00728(ctx, base);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,22936
	ctx.r11.s64 = ctx.r11.s64 + 22936;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bec9b0
	if (cr0.eq) goto loc_82BEC9B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4183
	ctx.r8.u64 = ctx.r10.u64 | 4183;
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
	ctx.lr = 0x82BEC988;
	sub_83103068(ctx, base);
	// bl 0x82c1f678
	ctx.lr = 0x82BEC98C;
	sub_82C1F678(ctx, base);
	// bl 0x82c1f5b0
	ctx.lr = 0x82BEC990;
	sub_82C1F5B0(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r6,8132
	ctx.r11.s64 = ctx.r6.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-76
	ctx.r5.s64 = ctx.r11.s64 + -76;
	// bl 0x82d20da8
	ctx.lr = 0x82BEC9A8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BEC9B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,8132
	ctx.r11.s64 = ctx.r11.s64 + 8132;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-68
	ctx.r3.s64 = ctx.r11.s64 + -68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f8b8
	ctx.lr = 0x82BEC9CC;
	sub_82D2F8B8(ctx, base);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d2ada8
	ctx.lr = 0x82BEC9DC;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BEC9E8;
	sub_83103100(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BEC9F0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82becc84
	if (!cr6.eq) goto loc_82BECC84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BECA00;
	sub_82D1C1A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r26,12
	ctx.r26.s64 = 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// ble cr6,0x82becc84
	if (!cr6.gt) goto loc_82BECC84;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x82becc84
	if (cr6.gt) goto loc_82BECC84;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13736
	ctx.r12.s64 = ctx.r12.s64 + -13736;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BECAAC;
	case 1:
		goto loc_82BECA8C;
	case 2:
		goto loc_82BECAC0;
	case 3:
		goto loc_82BECAE0;
	case 4:
		goto loc_82BECC84;
	case 5:
		goto loc_82BECC84;
	case 6:
		goto loc_82BECC84;
	case 7:
		goto loc_82BECBB0;
	case 8:
		goto loc_82BECB30;
	case 9:
		goto loc_82BECC50;
	case 10:
		goto loc_82BECC84;
	case 11:
		goto loc_82BECC30;
	case 12:
		goto loc_82BECC70;
	default:
		return;
	}
	// lwz r21,-13652(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13652);
	// lwz r21,-13684(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13684);
	// lwz r21,-13632(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13632);
	// lwz r21,-13600(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13600);
	// lwz r21,-13180(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13180);
	// lwz r21,-13180(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13180);
	// lwz r21,-13180(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13180);
	// lwz r21,-13392(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13392);
	// lwz r21,-13520(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13520);
	// lwz r21,-13232(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13232);
	// lwz r21,-13180(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13180);
	// lwz r21,-13264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13264);
	// lwz r21,-13200(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13200);
loc_82BECA8C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,8132
	ctx.r11.s64 = ctx.r11.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// bl 0x82d20da8
	ctx.lr = 0x82BECAA4;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECAAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BECAB8;
	sub_82D19858(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECAC0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,8132
	ctx.r11.s64 = ctx.r11.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
	// bl 0x82d20da8
	ctx.lr = 0x82BECAD8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECAE0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,4188
	ctx.r8.u64 = ctx.r10.u64 | 4188;
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
	// bl 0x83102fe0
	ctx.lr = 0x82BECB10;
	sub_83102FE0(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r6,8132
	ctx.r11.s64 = ctx.r6.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// bl 0x82d20da8
	ctx.lr = 0x82BECB28;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECB30:
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r28,248(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// lwz r27,252(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// bl 0x82b29ec0
	ctx.lr = 0x82BECB44;
	sub_82B29EC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82becb68
	if (cr6.gt) goto loc_82BECB68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BECB68;
	sub_831CC188(ctx, base);
loc_82BECB68:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82BECBA0;
	sub_82BECCD8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82BECBA8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECBB0:
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// ld r28,272(r4)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// ld r27,280(r4)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 280);
	// bl 0x82b29ec0
	ctx.lr = 0x82BECBC4;
	sub_82B29EC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82becbe8
	if (cr6.gt) goto loc_82BECBE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BECBE8;
	sub_831CC188(ctx, base);
loc_82BECBE8:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ld r9,2392(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2392);
	// ld r7,2384(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 2384);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82beccd8
	ctx.lr = 0x82BECC20;
	sub_82BECCD8(ctx, base);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x8387e8e0
	ctx.lr = 0x82BECC28;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECC30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,8132
	ctx.r11.s64 = ctx.r11.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// bl 0x82d20da8
	ctx.lr = 0x82BECC48;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECC50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,8132
	ctx.r11.s64 = ctx.r11.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x82d20da8
	ctx.lr = 0x82BECC68;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BECC70:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,8132
	ctx.r5.s64 = ctx.r11.s64 + 8132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82BECC84;
	sub_82D20DA8(ctx, base);
loc_82BECC84:
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECC8C"))) PPC_WEAK_FUNC(sub_82BECC8C);
PPC_FUNC_IMPL(__imp__sub_82BECC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECC90"))) PPC_WEAK_FUNC(sub_82BECC90);
PPC_FUNC_IMPL(__imp__sub_82BECC90) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,4184
	ctx.r10.u64 = ctx.r10.u64 | 4184;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x83103068
	ctx.lr = 0x82BECCC8;
	sub_83103068(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BECCD8"))) PPC_WEAK_FUNC(sub_82BECCD8);
PPC_FUNC_IMPL(__imp__sub_82BECCD8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// bl 0x82be9e70
	ctx.lr = 0x82BECD00;
	sub_82BE9E70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82becd14
	if (cr6.eq) goto loc_82BECD14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BECD14;
	sub_83103100(ctx, base);
loc_82BECD14:
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

__attribute__((alias("__imp__sub_82BECD28"))) PPC_WEAK_FUNC(sub_82BECD28);
PPC_FUNC_IMPL(__imp__sub_82BECD28) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// ble cr6,0x82becd8c
	if (!cr6.gt) goto loc_82BECD8C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19aa8
	ctx.lr = 0x82BECD64;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82becd8c
	if (cr6.eq) goto loc_82BECD8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BECD7C;
	sub_82D2D510(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BECD8C;
	sub_82D291E0(ctx, base);
loc_82BECD8C:
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

__attribute__((alias("__imp__sub_82BECDA0"))) PPC_WEAK_FUNC(sub_82BECDA0);
PPC_FUNC_IMPL(__imp__sub_82BECDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BECDA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// ble cr6,0x82bece7c
	if (!cr6.gt) goto loc_82BECE7C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82becdfc
	if (cr6.eq) goto loc_82BECDFC;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x82bece00
	if (!cr6.eq) goto loc_82BECE00;
loc_82BECDFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BECE00:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BECE0C;
	sub_82D19788(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BECE14;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bece6c
	if (!cr6.eq) goto loc_82BECE6C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82bece40
	if (cr6.gt) goto loc_82BECE40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BECE40;
	sub_831CC188(ctx, base);
loc_82BECE40:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,324(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BECE5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bece70
	if (!cr6.eq) goto loc_82BECE70;
loc_82BECE6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BECE70:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BECE7C;
	sub_82D19788(ctx, base);
loc_82BECE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECE84"))) PPC_WEAK_FUNC(sub_82BECE84);
PPC_FUNC_IMPL(__imp__sub_82BECE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECE88"))) PPC_WEAK_FUNC(sub_82BECE88);
PPC_FUNC_IMPL(__imp__sub_82BECE88) {
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
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82becec0
	if (!cr6.eq) goto loc_82BECEC0;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BECEAC;
	sub_82D1C1A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becda0
	ctx.lr = 0x82BECEB8;
	sub_82BECDA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
loc_82BECEC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BECED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82BECEEC"))) PPC_WEAK_FUNC(sub_82BECEEC);
PPC_FUNC_IMPL(__imp__sub_82BECEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECEF0"))) PPC_WEAK_FUNC(sub_82BECEF0);
PPC_FUNC_IMPL(__imp__sub_82BECEF0) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82BECF0C;
	sub_82D19BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BECF18;
	sub_82D19BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82becf48
	if (!cr6.eq) goto loc_82BECF48;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x82becf48
	if (!cr6.lt) goto loc_82BECF48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becda0
	ctx.lr = 0x82BECF48;
	sub_82BECDA0(ctx, base);
loc_82BECF48:
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

__attribute__((alias("__imp__sub_82BECF60"))) PPC_WEAK_FUNC(sub_82BECF60);
PPC_FUNC_IMPL(__imp__sub_82BECF60) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82becfd4
	if (!cr6.eq) goto loc_82BECFD4;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82becfd4
	if (!cr6.gt) goto loc_82BECFD4;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,320(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 320);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bctrl 
	ctx.lr = 0x82BECFC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becda0
	ctx.lr = 0x82BECFD4;
	sub_82BECDA0(ctx, base);
loc_82BECFD4:
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

__attribute__((alias("__imp__sub_82BECFEC"))) PPC_WEAK_FUNC(sub_82BECFEC);
PPC_FUNC_IMPL(__imp__sub_82BECFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BECFF0"))) PPC_WEAK_FUNC(sub_82BECFF0);
PPC_FUNC_IMPL(__imp__sub_82BECFF0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82becda0
	sub_82BECDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BECFF8"))) PPC_WEAK_FUNC(sub_82BECFF8);
PPC_FUNC_IMPL(__imp__sub_82BECFF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82BED038;
	sub_82D042A8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becd28
	ctx.lr = 0x82BED048;
	sub_82BECD28(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bed068
	if (cr6.lt) goto loc_82BED068;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BED068;
	sub_825952B8(ctx, base);
loc_82BED068:
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

__attribute__((alias("__imp__sub_82BED080"))) PPC_WEAK_FUNC(sub_82BED080);
PPC_FUNC_IMPL(__imp__sub_82BED080) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// bl 0x82d042a8
	ctx.lr = 0x82BED0B8;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bed0e0
	if (cr6.eq) goto loc_82BED0E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BED0D0;
	sub_82D2D510(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82BED0E0;
	sub_82D291E0(ctx, base);
loc_82BED0E0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bed100
	if (cr6.lt) goto loc_82BED100;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BED100;
	sub_825952B8(ctx, base);
loc_82BED100:
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

__attribute__((alias("__imp__sub_82BED114"))) PPC_WEAK_FUNC(sub_82BED114);
PPC_FUNC_IMPL(__imp__sub_82BED114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED118"))) PPC_WEAK_FUNC(sub_82BED118);
PPC_FUNC_IMPL(__imp__sub_82BED118) {
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
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// blt cr6,0x82bed150
	if (cr6.lt) goto loc_82BED150;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82BED150:
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bed160
	if (cr6.lt) goto loc_82BED160;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82BED160:
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// bl 0x82d042a8
	ctx.lr = 0x82BED170;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bed198
	if (cr6.eq) goto loc_82BED198;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BED188;
	sub_82D2D510(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82BED198;
	sub_82D291E0(ctx, base);
loc_82BED198:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bed1b8
	if (cr6.lt) goto loc_82BED1B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BED1B8;
	sub_825952B8(ctx, base);
loc_82BED1B8:
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

__attribute__((alias("__imp__sub_82BED1CC"))) PPC_WEAK_FUNC(sub_82BED1CC);
PPC_FUNC_IMPL(__imp__sub_82BED1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED1D0"))) PPC_WEAK_FUNC(sub_82BED1D0);
PPC_FUNC_IMPL(__imp__sub_82BED1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BED1D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9512
	ctx.r9.s64 = ctx.r11.s64 + 9512;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r30,r3,116
	ctx.r30.s64 = ctx.r3.s64 + 116;
	// lwz r7,136(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82bed21c
	if (cr6.lt) goto loc_82BED21C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82BED21C;
	sub_825952B8(ctx, base);
loc_82BED21C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bed248
	if (cr6.eq) goto loc_82BED248;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BED248;
	sub_825952B8(ctx, base);
loc_82BED248:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// bl 0x82d25548
	ctx.lr = 0x82BED25C;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED264"))) PPC_WEAK_FUNC(sub_82BED264);
PPC_FUNC_IMPL(__imp__sub_82BED264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED268"))) PPC_WEAK_FUNC(sub_82BED268);
PPC_FUNC_IMPL(__imp__sub_82BED268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BED270;
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
	// bl 0x8308e078
	ctx.lr = 0x82BED284;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BED29C;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,9512
	ctx.r9.s64 = ctx.r11.s64 + 9512;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r6,9044
	ctx.r29.s64 = ctx.r6.s64 + 9044;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82BED2F0;
	sub_8259CC28(ctx, base);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28740(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28740);
	// bl 0x82d20ae0
	ctx.lr = 0x82BED304;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82BED314;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED320"))) PPC_WEAK_FUNC(sub_82BED320);
PPC_FUNC_IMPL(__imp__sub_82BED320) {
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
	// bl 0x82bed1d0
	ctx.lr = 0x82BED340;
	sub_82BED1D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bed358
	if (cr6.eq) goto loc_82BED358;
	// bl 0x82416268
	ctx.lr = 0x82BED354;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BED358:
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

__attribute__((alias("__imp__sub_82BED370"))) PPC_WEAK_FUNC(sub_82BED370);
PPC_FUNC_IMPL(__imp__sub_82BED370) {
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
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x82bed3f8
	if (!cr6.lt) goto loc_82BED3F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// bne cr6,0x82bed3b0
	if (!cr6.eq) goto loc_82BED3B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BED3B0:
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82bed3c4
	if (cr6.gt) goto loc_82BED3C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED3C4;
	sub_831CC188(ctx, base);
loc_82BED3C4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r4,r9,8956
	ctx.r4.s64 = ctx.r9.s64 + 8956;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x837b0c10
	ctx.lr = 0x82BED3E8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82BED3F8;
	sub_82A69A28(ctx, base);
loc_82BED3F8:
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

__attribute__((alias("__imp__sub_82BED410"))) PPC_WEAK_FUNC(sub_82BED410);
PPC_FUNC_IMPL(__imp__sub_82BED410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82BED418;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BED434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r8,96(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 96;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// divw. r22,r7,r27
	ctx.r22.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq 0x82bed5ec
	if (cr0.eq) goto loc_82BED5EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r21,15
	ctx.r21.s64 = 15;
	// addi r25,r11,9408
	ctx.r25.s64 = ctx.r11.s64 + 9408;
loc_82BED468:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BED474;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bed370
	ctx.lr = 0x82BED488;
	sub_82BED370(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82bed5f4
	if (!cr6.gt) goto loc_82BED5F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21408
	ctx.lr = 0x82BED4B4;
	sub_82D21408(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// ble cr6,0x82bed600
	if (!cr6.gt) goto loc_82BED600;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bed578
	if (cr6.eq) goto loc_82BED578;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82bed52c
	if (cr6.eq) goto loc_82BED52C;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x82bed5dc
	if (!cr6.eq) goto loc_82BED5DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BED504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// ble cr6,0x82bed60c
	if (!cr6.gt) goto loc_82BED60C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,308(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// b 0x82bed5c8
	goto loc_82BED5C8;
loc_82BED52C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-24
	ctx.r4.s64 = ctx.r25.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BED548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r4,r25,-685
	ctx.r4.s64 = ctx.r25.s64 + -685;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82BED564;
	sub_8259CC28(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,300(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	// b 0x82bed5d0
	goto loc_82BED5D0;
loc_82BED578:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BED594;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BED5A4;
	sub_82D2D510(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// ble cr6,0x82bed618
	if (!cr6.gt) goto loc_82BED618;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,304(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
loc_82BED5C8:
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82BED5D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BED5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BED5DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// blt cr6,0x82bed468
	if (cr6.lt) goto loc_82BED468;
loc_82BED5EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82BED5F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED600;
	sub_831CC188(ctx, base);
loc_82BED600:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED60C;
	sub_831CC188(ctx, base);
loc_82BED60C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED618;
	sub_831CC188(ctx, base);
loc_82BED618:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED624;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82BED624"))) PPC_WEAK_FUNC(sub_82BED624);
PPC_FUNC_IMPL(__imp__sub_82BED624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BED628"))) PPC_WEAK_FUNC(sub_82BED628);
PPC_FUNC_IMPL(__imp__sub_82BED628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BED630;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BED64C;
	sub_82D2D510(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82BED688;
	sub_8259CB28(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,8754
	ctx.r4.s64 = ctx.r11.s64 + 8754;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82BED69C;
	sub_8259CC28(ctx, base);
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r9,r10,329
	ctx.r9.u64 = ctx.r10.u64 | 329;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x82d3a988
	ctx.lr = 0x82BED6C0;
	sub_82D3A988(ctx, base);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82bed6e4
	if (!cr6.eq) goto loc_82BED6E4;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d3a878
	ctx.lr = 0x82BED6E0;
	sub_82D3A878(ctx, base);
	// b 0x82bed6ec
	goto loc_82BED6EC;
loc_82BED6E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d3a520
	ctx.lr = 0x82BED6EC;
	sub_82D3A520(ctx, base);
loc_82BED6EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8378e240
	ctx.lr = 0x82BED6F4;
	sub_8378E240(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bed714
	if (cr6.lt) goto loc_82BED714;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BED714;
	sub_825952B8(ctx, base);
loc_82BED714:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED728"))) PPC_WEAK_FUNC(sub_82BED728);
PPC_FUNC_IMPL(__imp__sub_82BED728) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// bne cr6,0x82bed74c
	if (!cr6.eq) goto loc_82BED74C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82BED74C:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,8968
	ctx.r4.s64 = ctx.r9.s64 + 8968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82BED770;
	sub_8259CC28(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82BED784;
	sub_82A69A28(ctx, base);
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

__attribute__((alias("__imp__sub_82BED798"))) PPC_WEAK_FUNC(sub_82BED798);
PPC_FUNC_IMPL(__imp__sub_82BED798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BED7A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BED7B0;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bed9f0
	if (!cr6.eq) goto loc_82BED9F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BED7C0;
	sub_82D19BB0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r26,12
	ctx.r26.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// ble cr6,0x82bed9f0
	if (!cr6.gt) goto loc_82BED9F0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addis r10,r10,-264
	ctx.r10.s64 = ctx.r10.s64 + -17301504;
	// addi r10,r10,-17
	ctx.r10.s64 = ctx.r10.s64 + -17;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82bed9e4
	if (cr6.gt) goto loc_82BED9E4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bed9e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BED9E4;
	// bdzf 4*cr6+eq,0x82bed9e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BED9E4;
	// bdzf 4*cr6+eq,0x82bed900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BED900;
	// bne cr6,0x82bed950
	if (!cr6.eq) goto loc_82BED950;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,7
	cr6.compare<int32_t>(ctx.r9.s32, 7, xer);
	// bne cr6,0x82bed9f0
	if (!cr6.eq) goto loc_82BED9F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BED834;
	sub_82D19A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BED83C;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bed9f0
	if (cr6.eq) goto loc_82BED9F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BED858;
	sub_82D2D510(ctx, base);
	// bl 0x82d3a1c8
	ctx.lr = 0x82BED85C;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292a3f8
	ctx.lr = 0x82BED868;
	sub_8292A3F8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82bed88c
	if (cr6.gt) goto loc_82BED88C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED88C;
	sub_831CC188(ctx, base);
loc_82BED88C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,312(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BED8AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,8785
	ctx.r29.s64 = ctx.r11.s64 + 8785;
	// addi r4,r29,-30
	ctx.r4.s64 = ctx.r29.s64 + -30;
	// bl 0x82450880
	ctx.lr = 0x82BED8C0;
	sub_82450880(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bed8f4
	if (cr6.eq) goto loc_82BED8F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82BED8DC;
	sub_837B0C10(ctx, base);
	// lwz r11,300(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BED8F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BED8F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BED8FC;
	sub_8387E8E0(ctx, base);
	// b 0x82bed9e4
	goto loc_82BED9E4;
loc_82BED900:
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82bed9f0
	if (cr6.eq) goto loc_82BED9F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82BED918;
	sub_82CD58A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82BED928;
	sub_82CD58A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82bed9a0
	if (cr6.gt) goto loc_82BED9A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED950;
	sub_831CC188(ctx, base);
loc_82BED950:
	// lwz r27,12(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82bed9f0
	if (cr6.eq) goto loc_82BED9F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82BED968;
	sub_82CD58A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd58a0
	ctx.lr = 0x82BED978;
	sub_82CD58A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82bed9a0
	if (cr6.gt) goto loc_82BED9A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BED9A0;
	sub_831CC188(ctx, base);
loc_82BED9A0:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r5,r29,32
	ctx.r5.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,316(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bctrl 
	ctx.lr = 0x82BED9D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82becff8
	ctx.lr = 0x82BED9E4;
	sub_82BECFF8(ctx, base);
loc_82BED9E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82becda0
	ctx.lr = 0x82BED9F0;
	sub_82BECDA0(ctx, base);
loc_82BED9F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED9FC"))) PPC_WEAK_FUNC(sub_82BED9FC);
PPC_FUNC_IMPL(__imp__sub_82BED9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDA00"))) PPC_WEAK_FUNC(sub_82BEDA00);
PPC_FUNC_IMPL(__imp__sub_82BEDA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEDA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// bgt cr6,0x82bedb64
	if (cr6.gt) goto loc_82BEDB64;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9680
	ctx.r12.s64 = ctx.r12.s64 + -9680;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_82BEDAF4;
	case 1:
		goto loc_82BEDAE8;
	case 2:
		goto loc_82BEDAD0;
	case 3:
		goto loc_82BEDADC;
	case 4:
		goto loc_82BEDAC4;
	case 5:
		goto loc_82BEDAB8;
	case 6:
		goto loc_82BEDAA0;
	case 7:
		goto loc_82BEDAAC;
	case 8:
		goto loc_82BEDA94;
	case 9:
		goto loc_82BEDA7C;
	case 10:
		goto loc_82BEDA88;
	case 11:
		goto loc_82BEDA70;
	case 12:
		goto loc_82BEDA64;
	default:
		return;
	}
	// lwz r21,-9484(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9484);
	// lwz r21,-9496(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9496);
	// lwz r21,-9520(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9520);
	// lwz r21,-9508(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9508);
	// lwz r21,-9532(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9532);
	// lwz r21,-9544(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9544);
	// lwz r21,-9568(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9568);
	// lwz r21,-9556(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9556);
	// lwz r21,-9580(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9580);
	// lwz r21,-9604(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9604);
	// lwz r21,-9592(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9592);
	// lwz r21,-9616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9616);
	// lwz r21,-9628(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9628);
loc_82BEDA64:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDA70:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDA7C:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDA88:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDA94:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAA0:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAAC:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAB8:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAC4:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAD0:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,13
	ctx.r4.u64 = ctx.r4.u64 | 13;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDADC:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAE8:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// b 0x82bedafc
	goto loc_82BEDAFC;
loc_82BEDAF4:
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_82BEDAFC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82BEDB18;
	sub_82D04220(ctx, base);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BEDB38;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bedb74
	if (cr6.lt) goto loc_82BEDB74;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BEDB58;
	sub_825952B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEDB64:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,8786
	ctx.r4.s64 = ctx.r11.s64 + 8786;
	// bl 0x837b0c10
	ctx.lr = 0x82BEDB74;
	sub_837B0C10(ctx, base);
loc_82BEDB74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDB80"))) PPC_WEAK_FUNC(sub_82BEDB80);
PPC_FUNC_IMPL(__imp__sub_82BEDB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEDB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82bedbc0
	if (cr6.lt) goto loc_82BEDBC0;
	// bne cr6,0x82bedbe0
	if (!cr6.eq) goto loc_82BEDBE0;
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,101
	ctx.r4.u64 = ctx.r4.u64 | 101;
	// b 0x82bedbc8
	goto loc_82BEDBC8;
loc_82BEDBC0:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
loc_82BEDBC8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d04220
	ctx.lr = 0x82BEDBD0;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bedbe4
	if (!cr6.lt) goto loc_82BEDBE4;
loc_82BEDBE0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82BEDBE4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82BEDBF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bedbf4
	if (!cr6.eq) goto loc_82BEDBF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BEDC18;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bedc38
	if (cr6.lt) goto loc_82BEDC38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BEDC38;
	sub_825952B8(ctx, base);
loc_82BEDC38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDC44"))) PPC_WEAK_FUNC(sub_82BEDC44);
PPC_FUNC_IMPL(__imp__sub_82BEDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDC48"))) PPC_WEAK_FUNC(sub_82BEDC48);
PPC_FUNC_IMPL(__imp__sub_82BEDC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BEDC50;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEDC74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BEDC7C;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BEDC8C;
	sub_82D19A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BEDC9C;
	sub_82D19A88(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r8,8980
	ctx.r29.s64 = ctx.r8.s64 + 8980;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BEDCC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BEDCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BEDCFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r28,100
	ctx.r29.s64 = ctx.r28.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82BEDD24;
	sub_8259CC28(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,168
	ctx.r5.u64 = ctx.r5.u64 | 168;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82BEDD38;
	sub_82A69A28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BEDD48;
	sub_82D2D510(ctx, base);
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,83
	ctx.r4.u64 = ctx.r4.u64 | 83;
	// bl 0x82d30340
	ctx.lr = 0x82BEDD58;
	sub_82D30340(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed410
	ctx.lr = 0x82BEDD64;
	sub_82BED410(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw. r30,r4,r7
	ctx.r30.s32 = PPCDivide(ctx.r4.s32, ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82beddc0
	if (cr0.eq) goto loc_82BEDDC0;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// bge cr6,0x82beddc0
	if (!cr6.lt) goto loc_82BEDDC0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,-28736
	ctx.r11.s64 = ctx.r8.s64 + -28736;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,72(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BEDDB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82BEDDC0;
	sub_82D1ED60(ctx, base);
loc_82BEDDC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDDCC"))) PPC_WEAK_FUNC(sub_82BEDDCC);
PPC_FUNC_IMPL(__imp__sub_82BEDDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEDDD0"))) PPC_WEAK_FUNC(sub_82BEDDD0);
PPC_FUNC_IMPL(__imp__sub_82BEDDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEDDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82BEDDEC;
	sub_82D19A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BEDDF4;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bedeb0
	if (cr6.eq) goto loc_82BEDEB0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82bede28
	if (cr6.gt) goto loc_82BEDE28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BEDE28;
	sub_831CC188(ctx, base);
loc_82BEDE28:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bede98
	if (cr6.eq) goto loc_82BEDE98;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82bede64
	if (cr6.eq) goto loc_82BEDE64;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x82bedeb0
	if (!cr6.eq) goto loc_82BEDEB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bed728
	ctx.lr = 0x82BEDE5C;
	sub_82BED728(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEDE64:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8722
	ctx.r4.s64 = ctx.r11.s64 + 8722;
	// bl 0x837b0c10
	ctx.lr = 0x82BEDE78;
	sub_837B0C10(ctx, base);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEDE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEDE98:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82BEDEA8;
	sub_82D2D510(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3b298
	ctx.lr = 0x82BEDEB0;
	sub_82D3B298(ctx, base);
loc_82BEDEB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDEB8"))) PPC_WEAK_FUNC(sub_82BEDEB8);
PPC_FUNC_IMPL(__imp__sub_82BEDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82BEDEC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r29,15
	ctx.r29.s64 = 15;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bee0b0
	if (cr6.eq) goto loc_82BEE0B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r25,r11,9424
	ctx.r25.s64 = ctx.r11.s64 + 9424;
loc_82BEDF08:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bedf80
	if (cr6.eq) goto loc_82BEDF80;
	// addi r4,r25,-8
	ctx.r4.s64 = ctx.r25.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82BEDF24;
	sub_825A1EB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82bedb80
	ctx.lr = 0x82BEDF34;
	sub_82BEDB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82BEDF48;
	sub_825A1DA8(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bedf64
	if (cr6.lt) goto loc_82BEDF64;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BEDF64;
	sub_825952B8(ctx, base);
loc_82BEDF64:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1eb8
	ctx.lr = 0x82BEDF80;
	sub_825A1EB8(ctx, base);
loc_82BEDF80:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82beda00
	ctx.lr = 0x82BEDF90;
	sub_82BEDA00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a1da8
	ctx.lr = 0x82BEDFA4;
	sub_825A1DA8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bedfc0
	if (cr6.lt) goto loc_82BEDFC0;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82BEDFC0;
	sub_825952B8(ctx, base);
loc_82BEDFC0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bgt cr6,0x82bedfec
	if (cr6.gt) goto loc_82BEDFEC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bedf08
	if (!cr6.eq) goto loc_82BEDF08;
	// b 0x82bee0a0
	goto loc_82BEE0A0;
loc_82BEDFEC:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// li r6,26
	ctx.r6.s64 = 26;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x82BEE00C;
	sub_8259CB28(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82BEE02C;
	sub_8259CB28(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bee048
	if (cr6.lt) goto loc_82BEE048;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BEE048;
	sub_825952B8(ctx, base);
loc_82BEE048:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82BEE064;
	sub_825A1EB8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82BEE078;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bee094
	if (cr6.lt) goto loc_82BEE094;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BEE094;
	sub_825952B8(ctx, base);
loc_82BEE094:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82BEE0A0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bee0b4
	if (!cr6.lt) goto loc_82BEE0B4;
loc_82BEE0B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BEE0B4:
	// stw r29,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r31.u32);
	// stb r31,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r31.u8);
loc_82BEE0C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bee0c4
	if (!cr6.eq) goto loc_82BEE0C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BEE0E8;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bee104
	if (cr6.lt) goto loc_82BEE104;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82BEE104;
	sub_825952B8(ctx, base);
loc_82BEE104:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE110"))) PPC_WEAK_FUNC(sub_82BEE110);
PPC_FUNC_IMPL(__imp__sub_82BEE110) {
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
	// bl 0x82d1c1a8
	ctx.lr = 0x82BEE12C;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEE148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beddd0
	ctx.lr = 0x82BEE154;
	sub_82BEDDD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82becda0
	ctx.lr = 0x82BEE160;
	sub_82BECDA0(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82BEE164;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82BEE16C;
	sub_82D26B18(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE184"))) PPC_WEAK_FUNC(sub_82BEE184);
PPC_FUNC_IMPL(__imp__sub_82BEE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE188"))) PPC_WEAK_FUNC(sub_82BEE188);
PPC_FUNC_IMPL(__imp__sub_82BEE188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEE190;
	__savegprlr_29(ctx, base);
	// addi r11,r4,-255
	ctx.r11.s64 = ctx.r4.s64 + -255;
	// addi r10,r5,-255
	ctx.r10.s64 = ctx.r5.s64 + -255;
	// srawi r11,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// addi r9,r6,-255
	ctx.r9.s64 = ctx.r6.s64 + -255;
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r7,-255
	ctx.r8.s64 = ctx.r7.s64 + -255;
	// srawi r10,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// not r30,r11
	ctx.r30.u64 = ~ctx.r11.u64;
	// srawi r11,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// srawi r8,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// and r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 & ctx.r29.u64;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r29,r5,24
	ctx.r29.u64 = ctx.r5.u32 & 0xFF;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | ctx.r31.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// and r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 & ctx.r29.u64;
	// srawi r5,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// and r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 & ctx.r8.u64;
	// or r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 | ctx.r10.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// and r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ctx.r10.u64;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// and r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 & ctx.r31.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r6,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// or r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// not r5,r9
	ctx.r5.u64 = ~ctx.r9.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// neg r9,r7
	ctx.r9.s64 = -ctx.r7.s64;
	// rlwinm r7,r4,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// srawi r9,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// or r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r5,r8,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// and r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 & ctx.r6.u64;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE270"))) PPC_WEAK_FUNC(sub_82BEE270);
PPC_FUNC_IMPL(__imp__sub_82BEE270) {
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
	// bl 0x83763ef8
	ctx.lr = 0x82BEE28C;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee31c
	if (cr6.eq) goto loc_82BEE31C;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bee2c4
	if (!cr6.eq) goto loc_82BEE2C4;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82bee2bc
	if (!cr6.eq) goto loc_82BEE2BC;
	// bl 0x83767798
	ctx.lr = 0x82BEE2B4;
	sub_83767798(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// b 0x82bee31c
	goto loc_82BEE31C;
loc_82BEE2BC:
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// b 0x82bee31c
	goto loc_82BEE31C;
loc_82BEE2C4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bee2f0
	if (!cr6.eq) goto loc_82BEE2F0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82bee2e8
	if (!cr6.eq) goto loc_82BEE2E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767820
	ctx.lr = 0x82BEE2E0;
	sub_83767820(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// b 0x82bee31c
	goto loc_82BEE31C;
loc_82BEE2E8:
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// b 0x82bee31c
	goto loc_82BEE31C;
loc_82BEE2F0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bee31c
	if (cr6.lt) goto loc_82BEE31C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837653c0
	ctx.lr = 0x82BEE300;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bee314
	if (!cr6.eq) goto loc_82BEE314;
	// bl 0x83767930
	ctx.lr = 0x82BEE310;
	sub_83767930(ctx, base);
	// b 0x82bee318
	goto loc_82BEE318;
loc_82BEE314:
	// bl 0x837653c0
	ctx.lr = 0x82BEE318;
	sub_837653C0(ctx, base);
loc_82BEE318:
	// stw r3,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r3.u32);
loc_82BEE31C:
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

__attribute__((alias("__imp__sub_82BEE334"))) PPC_WEAK_FUNC(sub_82BEE334);
PPC_FUNC_IMPL(__imp__sub_82BEE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE338"))) PPC_WEAK_FUNC(sub_82BEE338);
PPC_FUNC_IMPL(__imp__sub_82BEE338) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,10988
	ctx.r3.s64 = ctx.r11.s64 + 10988;
	// bl 0x82cda7a8
	ctx.lr = 0x82BEE35C;
	sub_82CDA7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee374
	if (cr6.eq) goto loc_82BEE374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BEE374;
	sub_83103100(ctx, base);
loc_82BEE374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BEE37C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BEE384;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEE390;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BEE39C;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE3B0"))) PPC_WEAK_FUNC(sub_82BEE3B0);
PPC_FUNC_IMPL(__imp__sub_82BEE3B0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BEE3DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee3fc
	if (cr6.eq) goto loc_82BEE3FC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11028
	ctx.r4.s64 = ctx.r11.s64 + 11028;
	// bl 0x82cd6258
	ctx.lr = 0x82BEE3F4;
	sub_82CD6258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bee400
	goto loc_82BEE400;
loc_82BEE3FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BEE400:
	// stw r4,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bee414
	if (cr6.eq) goto loc_82BEE414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BEE414;
	sub_83103100(ctx, base);
loc_82BEE414:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BEE420;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE434"))) PPC_WEAK_FUNC(sub_82BEE434);
PPC_FUNC_IMPL(__imp__sub_82BEE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE438"))) PPC_WEAK_FUNC(sub_82BEE438);
PPC_FUNC_IMPL(__imp__sub_82BEE438) {
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
	// bl 0x8308e078
	ctx.lr = 0x82BEE450;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x82cd54a0
	ctx.lr = 0x82BEE470;
	sub_82CD54A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// beq cr6,0x82bee4bc
	if (cr6.eq) goto loc_82BEE4BC;
	// lbz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r10,297(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 297);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,298(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 298);
	// lbz r7,299(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 299);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82d4f710
	ctx.lr = 0x82BEE4B0;
	sub_82D4F710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x83103100
	ctx.lr = 0x82BEE4BC;
	sub_83103100(ctx, base);
loc_82BEE4BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BEE4C8;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE4DC"))) PPC_WEAK_FUNC(sub_82BEE4DC);
PPC_FUNC_IMPL(__imp__sub_82BEE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE4E0"))) PPC_WEAK_FUNC(sub_82BEE4E0);
PPC_FUNC_IMPL(__imp__sub_82BEE4E0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lbz r5,216(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,11092
	ctx.r3.s64 = ctx.r11.s64 + 11092;
	// bl 0x82cda860
	ctx.lr = 0x82BEE508;
	sub_82CDA860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee520
	if (cr6.eq) goto loc_82BEE520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BEE520;
	sub_83103100(ctx, base);
loc_82BEE520:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BEE52C;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE540"))) PPC_WEAK_FUNC(sub_82BEE540);
PPC_FUNC_IMPL(__imp__sub_82BEE540) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bee5b0
	if (cr6.eq) goto loc_82BEE5B0;
	// lbz r10,303(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 303);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bee5b0
	if (cr6.eq) goto loc_82BEE5B0;
	// lbz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 304);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bee580
	if (!cr6.eq) goto loc_82BEE580;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bee5b4
	goto loc_82BEE5B4;
loc_82BEE580:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bee5a0
	if (!cr6.eq) goto loc_82BEE5A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82BEE598;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bee5c4
	goto loc_82BEE5C4;
loc_82BEE5A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82BEE5A8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bee5c4
	goto loc_82BEE5C4;
loc_82BEE5B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BEE5B4:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEE5C0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BEE5C4:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEE5D0;
	sub_82D19788(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE5E4"))) PPC_WEAK_FUNC(sub_82BEE5E4);
PPC_FUNC_IMPL(__imp__sub_82BEE5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE5E8"))) PPC_WEAK_FUNC(sub_82BEE5E8);
PPC_FUNC_IMPL(__imp__sub_82BEE5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bee618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEE618;
	// bdzf 4*cr6+eq,0x82bee620
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEE620;
	// bdzf 4*cr6+eq,0x82bee628
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEE628;
	// bne cr6,0x82bee630
	if (!cr6.eq) goto loc_82BEE630;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BEE618:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82BEE620:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BEE628:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82BEE630:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE638"))) PPC_WEAK_FUNC(sub_82BEE638);
PPC_FUNC_IMPL(__imp__sub_82BEE638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lbz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r10,-28304
	ctx.r7.s64 = ctx.r10.s64 + -28304;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lfs f0,-10804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f1,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82bee694
	if (cr6.lt) goto loc_82BEE694;
	// addi r10,r9,-7
	ctx.r10.s64 = ctx.r9.s64 + -7;
loc_82BEE668:
	// fmuls f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// blt cr6,0x82bee668
	if (cr6.lt) goto loc_82BEE668;
loc_82BEE694:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82BEE6A4:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bdnz 0x82bee6a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BEE6A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE6B0"))) PPC_WEAK_FUNC(sub_82BEE6B0);
PPC_FUNC_IMPL(__imp__sub_82BEE6B0) {
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
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,11244
	ctx.r4.s64 = ctx.r10.s64 + 11244;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BEE6E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r4,r31
	ctx.r4.s64 = ctx.r31.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82BEE6EC;
	sub_82D294D0(ctx, base);
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

__attribute__((alias("__imp__sub_82BEE700"))) PPC_WEAK_FUNC(sub_82BEE700);
PPC_FUNC_IMPL(__imp__sub_82BEE700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BEE708;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,11276
	ctx.r11.s64 = ctx.r11.s64 + 11276;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82BEE738:
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEE754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bee77c
	if (cr6.eq) goto loc_82BEE77C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82BEE76C;
	sub_82D294D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEE77C;
	sub_82D2AEC8(ctx, base);
loc_82BEE77C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82bee738
	if (!cr0.eq) goto loc_82BEE738;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE790"))) PPC_WEAK_FUNC(sub_82BEE790);
PPC_FUNC_IMPL(__imp__sub_82BEE790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bee7a0
	if (!cr6.eq) goto loc_82BEE7A0;
	// blr 
	return;
loc_82BEE7A0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x82bee7e8
	if (cr6.gt) goto loc_82BEE7E8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x82bee7e0
	if (!cr6.eq) goto loc_82BEE7E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,10476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10476);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82BEE7E0:
	// stfs f2,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82BEE7E8:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,10476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10476);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE81C"))) PPC_WEAK_FUNC(sub_82BEE81C);
PPC_FUNC_IMPL(__imp__sub_82BEE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE820"))) PPC_WEAK_FUNC(sub_82BEE820);
PPC_FUNC_IMPL(__imp__sub_82BEE820) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bee87c
	if (cr6.eq) goto loc_82BEE87C;
	// bl 0x82bee790
	ctx.lr = 0x82BEE840;
	sub_82BEE790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bl 0x82bee790
	ctx.lr = 0x82BEE85C;
	sub_82BEE790(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEE87C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE890"))) PPC_WEAK_FUNC(sub_82BEE890);
PPC_FUNC_IMPL(__imp__sub_82BEE890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82bee8d8
	if (cr6.gt) goto loc_82BEE8D8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82bee8d8
	if (cr6.eq) goto loc_82BEE8D8;
	// bdz 0x82bee8bc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BEE8BC;
	// bdz 0x82bee8c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BEE8C4;
	// bdz 0x82bee8cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82BEE8CC;
	// b 0x82bee8d4
	goto loc_82BEE8D4;
loc_82BEE8BC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bee8d8
	goto loc_82BEE8D8;
loc_82BEE8C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82bee8d8
	goto loc_82BEE8D8;
loc_82BEE8CC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82bee8d8
	goto loc_82BEE8D8;
loc_82BEE8D4:
	// li r11,16
	ctx.r11.s64 = 16;
loc_82BEE8D8:
	// lhz r10,404(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 404);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// twllei r9,0
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// andc r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE904"))) PPC_WEAK_FUNC(sub_82BEE904);
PPC_FUNC_IMPL(__imp__sub_82BEE904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEE908"))) PPC_WEAK_FUNC(sub_82BEE908);
PPC_FUNC_IMPL(__imp__sub_82BEE908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEE910;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bee890
	ctx.lr = 0x82BEE920;
	sub_82BEE890(ctx, base);
	// lhz r9,404(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 404);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// bl 0x82bee890
	ctx.lr = 0x82BEE938;
	sub_82BEE890(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// bl 0x82bee890
	ctx.lr = 0x82BEE978;
	sub_82BEE890(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lfs f8,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r3,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r3.u16);
	// bge cr6,0x82bee9cc
	if (!cr6.lt) goto loc_82BEE9CC;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// b 0x82bee9dc
	goto loc_82BEE9DC;
loc_82BEE9CC:
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82bee9dc
	if (cr6.lt) goto loc_82BEE9DC;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
loc_82BEE9DC:
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82bee9f8
	if (!cr6.lt) goto loc_82BEE9F8;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEE9F8:
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82beea08
	if (cr6.lt) goto loc_82BEEA08;
	// sth r31,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r31.u16);
loc_82BEEA08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEA10"))) PPC_WEAK_FUNC(sub_82BEEA10);
PPC_FUNC_IMPL(__imp__sub_82BEEA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEEA18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82beea6c
	if (cr6.gt) goto loc_82BEEA6C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82beea50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEA50;
	// bdzf 4*cr6+eq,0x82beea58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEA58;
	// bdzf 4*cr6+eq,0x82beea60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEA60;
	// bne cr6,0x82beea68
	if (!cr6.eq) goto loc_82BEEA68;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82beea6c
	goto loc_82BEEA6C;
loc_82BEEA50:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82beea6c
	goto loc_82BEEA6C;
loc_82BEEA58:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82beea6c
	goto loc_82BEEA6C;
loc_82BEEA60:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82beea6c
	goto loc_82BEEA6C;
loc_82BEEA68:
	// li r10,6
	ctx.r10.s64 = 6;
loc_82BEEA6C:
	// lbz r9,300(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 300);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82beeab8
	if (cr6.gt) goto loc_82BEEAB8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82beea9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEA9C;
	// bdzf 4*cr6+eq,0x82beeaa4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEAA4;
	// bdzf 4*cr6+eq,0x82beeaac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEEAAC;
	// bne cr6,0x82beeab4
	if (!cr6.eq) goto loc_82BEEAB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82beeab8
	goto loc_82BEEAB8;
loc_82BEEA9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82beeab8
	goto loc_82BEEAB8;
loc_82BEEAA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82beeab8
	goto loc_82BEEAB8;
loc_82BEEAAC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82beeab8
	goto loc_82BEEAB8;
loc_82BEEAB4:
	// li r11,6
	ctx.r11.s64 = 6;
loc_82BEEAB8:
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x82beeb6c
	if (!cr6.lt) goto loc_82BEEB6C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x82beeae8
	if (!cr6.eq) goto loc_82BEEAE8;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x82beeb6c
	if (cr6.eq) goto loc_82BEEB6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,384(r29)
	PPC_STORE_U16(ctx.r29.u32 + 384, ctx.r11.u16);
	// sth r11,386(r29)
	PPC_STORE_U16(ctx.r29.u32 + 386, ctx.r11.u16);
	// b 0x82beeb00
	goto loc_82BEEB00;
loc_82BEEAE8:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x82beeb6c
	if (cr6.eq) goto loc_82BEEB6C;
	// addi r5,r29,376
	ctx.r5.s64 = ctx.r29.s64 + 376;
	// addi r4,r29,384
	ctx.r4.s64 = ctx.r29.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bee908
	ctx.lr = 0x82BEEB00;
	sub_82BEE908(ctx, base);
loc_82BEEB00:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x82beeb6c
	if (cr6.eq) goto loc_82BEEB6C;
	// lhz r5,384(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 384);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,386(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 386);
	// sth r5,368(r29)
	PPC_STORE_U16(ctx.r29.u32 + 368, ctx.r5.u16);
	// sth r4,370(r29)
	PPC_STORE_U16(ctx.r29.u32 + 370, ctx.r4.u16);
	// bl 0x82bee638
	ctx.lr = 0x82BEEB20;
	sub_82BEE638(ctx, base);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lfs f0,360(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f9,272(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 272, temp.u32);
	// bl 0x82bee638
	ctx.lr = 0x82BEEB48;
	sub_82BEE638(ctx, base);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lfs f8,364(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f3,276(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 276, temp.u32);
loc_82BEEB6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEB74"))) PPC_WEAK_FUNC(sub_82BEEB74);
PPC_FUNC_IMPL(__imp__sub_82BEEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEB78"))) PPC_WEAK_FUNC(sub_82BEEB78);
PPC_FUNC_IMPL(__imp__sub_82BEEB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82beeba8
	if (!cr6.eq) goto loc_82BEEBA8;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82BEEBA8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82beebd4
	if (!cr6.eq) goto loc_82BEEBD4;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82BEEBD4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82beec04
	if (cr6.eq) goto loc_82BEEC04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82beec04
	if (cr6.eq) goto loc_82BEEC04;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,11796
	ctx.r4.s64 = ctx.r11.s64 + 11796;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82BEEC04:
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BEEC28"))) PPC_WEAK_FUNC(sub_82BEEC28);
PPC_FUNC_IMPL(__imp__sub_82BEEC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEEC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BEEC40;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,11896
	ctx.r30.s64 = ctx.r11.s64 + 11896;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEEC60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82beedfc
	if (cr6.eq) goto loc_82BEEDFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beee10
	if (cr6.eq) goto loc_82BEEE10;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEEC84;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x8337f1e0
	ctx.lr = 0x82BEEC90;
	sub_8337F1E0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x83545640
	ctx.lr = 0x82BEEC9C;
	sub_83545640(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82beede4
	if (cr6.gt) goto loc_82BEEDE4;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4928
	ctx.r12.s64 = ctx.r12.s64 + -4928;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BEECE8;
	case 1:
		goto loc_82BEED0C;
	case 2:
		goto loc_82BEED30;
	case 3:
		goto loc_82BEED54;
	case 4:
		goto loc_82BEED78;
	case 5:
		goto loc_82BEED78;
	case 6:
		goto loc_82BEED9C;
	case 7:
		goto loc_82BEED9C;
	case 8:
		goto loc_82BEEDC0;
	case 9:
		goto loc_82BEEDC0;
	default:
		return;
	}
	// lwz r21,-4888(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4888);
	// lwz r21,-4852(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4852);
	// lwz r21,-4816(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4816);
	// lwz r21,-4780(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4780);
	// lwz r21,-4744(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4744);
	// lwz r21,-4744(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4744);
	// lwz r21,-4708(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4708);
	// lwz r21,-4708(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4708);
	// lwz r21,-4672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4672);
	// lwz r21,-4672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4672);
loc_82BEECE8:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEED04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEED0C:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEED28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEED30:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEED4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEED54:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEED70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEED78:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEED94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEED9C:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEEDB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEEDC0:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEEDDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEEDE4:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEEDF4;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEEDFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beee10
	if (cr6.eq) goto loc_82BEEE10;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEEE10;
	sub_82D2AEC8(ctx, base);
loc_82BEEE10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEE18"))) PPC_WEAK_FUNC(sub_82BEEE18);
PPC_FUNC_IMPL(__imp__sub_82BEEE18) {
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
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,11956
	ctx.r30.s64 = ctx.r11.s64 + 11956;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEEE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82beee68
	if (!cr6.eq) goto loc_82BEEE68;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// b 0x82beee90
	goto loc_82BEEE90;
loc_82BEEE68:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82beee78
	if (!cr6.eq) goto loc_82BEEE78;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// b 0x82beee90
	goto loc_82BEEE90;
loc_82BEEE78:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82beee8c
	if (cr6.eq) goto loc_82BEEE8C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82beee90
	if (!cr6.eq) goto loc_82BEEE90;
loc_82BEEE8C:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
loc_82BEEE90:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BEEEA8;
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

__attribute__((alias("__imp__sub_82BEEEC0"))) PPC_WEAK_FUNC(sub_82BEEEC0);
PPC_FUNC_IMPL(__imp__sub_82BEEEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEEEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82beefbc
	if (cr6.eq) goto loc_82BEEFBC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82beeef8
	if (!cr6.eq) goto loc_82BEEEF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,12004
	ctx.r11.s64 = ctx.r11.s64 + 12004;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// b 0x82beef20
	goto loc_82BEEF20;
loc_82BEEEF8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x82beef10
	if (!cr6.eq) goto loc_82BEEF10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,12004
	ctx.r11.s64 = ctx.r11.s64 + 12004;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// b 0x82beef20
	goto loc_82BEEF20;
loc_82BEEF10:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82beef38
	if (!cr6.eq) goto loc_82BEEF38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,12004
	ctx.r4.s64 = ctx.r11.s64 + 12004;
loc_82BEEF20:
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BEEF38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BEEF38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BEEF58;
	sub_82D1EBF8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BEEF5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BEEF68;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEEF74;
	sub_82D2AEC8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x82beef5c
	if (cr6.lt) goto loc_82BEEF5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BEEF94;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEEFA0;
	sub_82D2AEC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BEEFAC;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BEEFBC;
	sub_82D2B608(ctx, base);
loc_82BEEFBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEFC4"))) PPC_WEAK_FUNC(sub_82BEEFC4);
PPC_FUNC_IMPL(__imp__sub_82BEEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEEFC8"))) PPC_WEAK_FUNC(sub_82BEEFC8);
PPC_FUNC_IMPL(__imp__sub_82BEEFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEEFD0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d19a10
	ctx.lr = 0x82BEEFE4;
	sub_82D19A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bef0b0
	if (cr6.eq) goto loc_82BEF0B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12036
	ctx.r4.s64 = ctx.r11.s64 + 12036;
	// bl 0x83815d38
	ctx.lr = 0x82BEF000;
	sub_83815D38(ctx, base);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f31,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82BEF028;
	sub_83815B68(ctx, base);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82BEF048;
	sub_83815B68(ctx, base);
	// lbz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82BEF068;
	sub_83815B68(ctx, base);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// bl 0x83815b68
	ctx.lr = 0x82BEF088;
	sub_83815B68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838153c8
	ctx.lr = 0x82BEF094;
	sub_838153C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83815cb8
	ctx.lr = 0x82BEF0A0;
	sub_83815CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEF0B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF0C0"))) PPC_WEAK_FUNC(sub_82BEF0C0);
PPC_FUNC_IMPL(__imp__sub_82BEF0C0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// bne cr6,0x82bef228
	if (!cr6.eq) goto loc_82BEF228;
	// bl 0x82d19ba0
	ctx.lr = 0x82BEF0E4;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bef228
	if (!cr6.eq) goto loc_82BEF228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF0F4;
	sub_82D19BB0(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x82bef208
	if (cr6.gt) goto loc_82BEF208;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bef140
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF140;
	// bdzf 4*cr6+eq,0x82bef168
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF168;
	// bdzf 4*cr6+eq,0x82bef198
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF198;
	// bdzf 4*cr6+eq,0x82bef1c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF1C8;
	// bne cr6,0x82bef200
	if (!cr6.eq) goto loc_82BEF200;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF128;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF140:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF150;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF168:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF180;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF198:
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF1B0;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF1C8:
	// li r11,18
	ctx.r11.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d19648
	ctx.lr = 0x82BEF1E0;
	sub_82D19648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF1E8;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF200:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BEF208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BEF210;
	sub_82D19BB0(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
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
loc_82BEF228:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82bef248
	if (!cr6.eq) goto loc_82BEF248;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82BEF248;
	sub_82D19648(ctx, base);
loc_82BEF248:
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

__attribute__((alias("__imp__sub_82BEF25C"))) PPC_WEAK_FUNC(sub_82BEF25C);
PPC_FUNC_IMPL(__imp__sub_82BEF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF260"))) PPC_WEAK_FUNC(sub_82BEF260);
PPC_FUNC_IMPL(__imp__sub_82BEF260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF27C"))) PPC_WEAK_FUNC(sub_82BEF27C);
PPC_FUNC_IMPL(__imp__sub_82BEF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF280"))) PPC_WEAK_FUNC(sub_82BEF280);
PPC_FUNC_IMPL(__imp__sub_82BEF280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x82bef29c
	if (cr6.eq) goto loc_82BEF29C;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// beq cr6,0x82bef29c
	if (cr6.eq) goto loc_82BEF29C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BEF29C:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF2AC"))) PPC_WEAK_FUNC(sub_82BEF2AC);
PPC_FUNC_IMPL(__imp__sub_82BEF2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF2B0"))) PPC_WEAK_FUNC(sub_82BEF2B0);
PPC_FUNC_IMPL(__imp__sub_82BEF2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x82bef2cc
	if (cr6.eq) goto loc_82BEF2CC;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// beq cr6,0x82bef2cc
	if (cr6.eq) goto loc_82BEF2CC;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BEF2CC:
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF2DC"))) PPC_WEAK_FUNC(sub_82BEF2DC);
PPC_FUNC_IMPL(__imp__sub_82BEF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF2E0"))) PPC_WEAK_FUNC(sub_82BEF2E0);
PPC_FUNC_IMPL(__imp__sub_82BEF2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x82bef2f4
	if (cr6.eq) goto loc_82BEF2F4;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BEF2F4:
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF304"))) PPC_WEAK_FUNC(sub_82BEF304);
PPC_FUNC_IMPL(__imp__sub_82BEF304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF308"))) PPC_WEAK_FUNC(sub_82BEF308);
PPC_FUNC_IMPL(__imp__sub_82BEF308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x82bef31c
	if (cr6.eq) goto loc_82BEF31C;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BEF31C:
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF32C"))) PPC_WEAK_FUNC(sub_82BEF32C);
PPC_FUNC_IMPL(__imp__sub_82BEF32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF330"))) PPC_WEAK_FUNC(sub_82BEF330);
PPC_FUNC_IMPL(__imp__sub_82BEF330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEF338;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,229
	ctx.r11.s64 = 15007744;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// ori r9,r11,46
	ctx.r9.u64 = ctx.r11.u64 | 46;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,244
	ctx.r8.s64 = 15990784;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ori r6,r8,18
	ctx.r6.u64 = ctx.r8.u64 | 18;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r5,249
	ctx.r5.s64 = 16318464;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// ori r3,r5,24
	ctx.r3.u64 = ctx.r5.u64 | 24;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lis r10,247
	ctx.r10.s64 = 16187392;
	// lis r9,249
	ctx.r9.s64 = 16318464;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ori r6,r9,61
	ctx.r6.u64 = ctx.r9.u64 | 61;
	// ori r7,r10,151
	ctx.r7.u64 = ctx.r10.u64 | 151;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82bef3e4
	if (!cr6.eq) goto loc_82BEF3E4;
	// addi r11,r11,12064
	ctx.r11.s64 = ctx.r11.s64 + 12064;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82d2ee48
	ctx.lr = 0x82BEF3E0;
	sub_82D2EE48(ctx, base);
	// b 0x82bef3f0
	goto loc_82BEF3F0;
loc_82BEF3E4:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// bl 0x82d2f6d8
	ctx.lr = 0x82BEF3F0;
	sub_82D2F6D8(ctx, base);
loc_82BEF3F0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bef430
	if (cr6.eq) goto loc_82BEF430;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x82bef410
	if (!cr6.eq) goto loc_82BEF410;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x82bef420
	goto loc_82BEF420;
loc_82BEF410:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BEF420:
	// bl 0x82d2ac30
	ctx.lr = 0x82BEF424;
	sub_82D2AC30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BEF430;
	sub_83103100(ctx, base);
loc_82BEF430:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF438"))) PPC_WEAK_FUNC(sub_82BEF438);
PPC_FUNC_IMPL(__imp__sub_82BEF438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bef454
	if (!cr6.eq) goto loc_82BEF454;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
loc_82BEF454:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bef46c
	if (!cr6.eq) goto loc_82BEF46C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
loc_82BEF46C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stbx r4,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF484"))) PPC_WEAK_FUNC(sub_82BEF484);
PPC_FUNC_IMPL(__imp__sub_82BEF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF488"))) PPC_WEAK_FUNC(sub_82BEF488);
PPC_FUNC_IMPL(__imp__sub_82BEF488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEF490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bef770
	if (cr6.eq) goto loc_82BEF770;
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// ori r30,r11,319
	ctx.r30.u64 = ctx.r11.u64 | 319;
	// bgt cr6,0x82bef724
	if (cr6.gt) goto loc_82BEF724;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bef4f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF4F8;
	// bdzf 4*cr6+eq,0x82bef610
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF610;
	// bdzf 4*cr6+eq,0x82bef678
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF678;
	// bdzf 4*cr6+eq,0x82bef4f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF4F8;
	// bdzf 4*cr6+eq,0x82bef4f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF4F8;
	// bne cr6,0x82bef584
	if (!cr6.eq) goto loc_82BEF584;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BEF4E4;
	sub_82BEE540(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF4F0;
	sub_82D1A998(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82bef694
	goto loc_82BEF694;
loc_82BEF4F8:
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF504;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF514;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF524;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF538;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF548;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF55C;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF56C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF57C;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bef708
	goto loc_82BEF708;
loc_82BEF584:
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF590;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF5A0;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF5B0;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF5C4;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF5D4;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF5E8;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF5F8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF608;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bef708
	goto loc_82BEF708;
loc_82BEF610:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BEF61C;
	sub_82BEE540(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF628;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF638;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF648;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF65C;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF66C;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// b 0x82bef6d8
	goto loc_82BEF6D8;
loc_82BEF678:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BEF684;
	sub_82BEE540(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF690;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BEF694:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF6A0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82BEF6B0;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF6C4;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF6D4;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82BEF6D8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF6E4;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF6F4;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF704;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_82BEF708:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF714;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF724;
	sub_82D20EB8(ctx, base);
loc_82BEF724:
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF738;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF748;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF758;
	sub_82D19788(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF768;
	sub_82D20EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BEF770:
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82BEF77C;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF78C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF79C;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF7B0;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF7C0;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF7D4;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF7E4;
	sub_82D19788(ctx, base);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// li r4,6
	ctx.r4.s64 = 6;
	// ori r30,r11,319
	ctx.r30.u64 = ctx.r11.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF7FC;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF80C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF81C;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF82C;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF83C;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BEF84C;
	sub_82D19788(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BEF85C;
	sub_82D20EB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF864"))) PPC_WEAK_FUNC(sub_82BEF864);
PPC_FUNC_IMPL(__imp__sub_82BEF864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEF868"))) PPC_WEAK_FUNC(sub_82BEF868);
PPC_FUNC_IMPL(__imp__sub_82BEF868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BEF870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lbz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r10,11188
	ctx.r31.s64 = ctx.r10.s64 + 11188;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BEF8A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82BEF8AC;
	sub_82D294D0(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r7,100(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lbz r28,1(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bctrl 
	ctx.lr = 0x82BEF8CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82BEF8D4;
	sub_82D294D0(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lbz r28,2(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bctrl 
	ctx.lr = 0x82BEF8F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82BEF8FC;
	sub_82D294D0(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r31,3(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// bctrl 
	ctx.lr = 0x82BEF91C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82BEF924;
	sub_82D294D0(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82beefc8
	ctx.lr = 0x82BEF938;
	sub_82BEEFC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF940"))) PPC_WEAK_FUNC(sub_82BEF940);
PPC_FUNC_IMPL(__imp__sub_82BEF940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEF948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82bee890
	ctx.lr = 0x82BEF95C;
	sub_82BEE890(ctx, base);
	// lhz r8,404(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 404);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-37
	ctx.r9.s64 = ctx.r11.s64 + -37;
	// subf r6,r3,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bgt cr6,0x82bef9f8
	if (cr6.gt) goto loc_82BEF9F8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bef9cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF9CC;
	// bdzf 4*cr6+eq,0x82bef9b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BEF9B0;
	// bne cr6,0x82bef9d4
	if (!cr6.eq) goto loc_82BEF9D4;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82bef9f8
	if (!cr6.lt) goto loc_82BEF9F8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82bef9f8
	goto loc_82BEF9F8;
loc_82BEF9B0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82bef9f8
	if (!cr6.lt) goto loc_82BEF9F8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82bef9f8
	goto loc_82BEF9F8;
loc_82BEF9CC:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// b 0x82bef9d8
	goto loc_82BEF9D8;
loc_82BEF9D4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82BEF9D8:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x82bef9f8
	if (!cr6.gt) goto loc_82BEF9F8;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_82BEF9F8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82befa18
	if (!cr6.lt) goto loc_82BEFA18;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r7.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_82BEFA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFA20"))) PPC_WEAK_FUNC(sub_82BEFA20);
PPC_FUNC_IMPL(__imp__sub_82BEFA20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82bee638
	ctx.lr = 0x82BEFA3C;
	sub_82BEE638(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_82BEFAD0"))) PPC_WEAK_FUNC(sub_82BEFAD0);
PPC_FUNC_IMPL(__imp__sub_82BEFAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BEFAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x83103d60
	ctx.lr = 0x82BEFAE8;
	sub_83103D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// bl 0x83103d20
	ctx.lr = 0x82BEFAF4;
	sub_83103D20(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82BEFB0C;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82befb9c
	if (cr6.eq) goto loc_82BEFB9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ef3e0
	ctx.lr = 0x82BEFB1C;
	sub_835EF3E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ecaf8
	ctx.lr = 0x82BEFB24;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825832f8
	ctx.lr = 0x82BEFB30;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83131d70
	ctx.lr = 0x82BEFB3C;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8307e038
	ctx.lr = 0x82BEFB48;
	sub_8307E038(ctx, base);
	// clrldi r6,r30,32
	ctx.r6.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ef5a8
	ctx.lr = 0x82BEFB5C;
	sub_835EF5A8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ebe48
	ctx.lr = 0x82BEFB70;
	sub_835EBE48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BEFB80;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82BEFB8C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ecaa8
	ctx.lr = 0x82BEFB94;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835f3ab0
	ctx.lr = 0x82BEFB9C;
	sub_835F3AB0(ctx, base);
loc_82BEFB9C:
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befbb0
	if (cr6.eq) goto loc_82BEFBB0;
	// bl 0x83103e98
	ctx.lr = 0x82BEFBAC;
	sub_83103E98(ctx, base);
	// stw r28,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r28.u32);
loc_82BEFBB0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r31,10
	ctx.r31.s64 = 10;
	// addi r30,r11,-28384
	ctx.r30.s64 = ctx.r11.s64 + -28384;
loc_82BEFBBC:
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BEFBCC;
	sub_82572FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82cd8f38
	ctx.lr = 0x82BEFBDC;
	sub_82CD8F38(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82befbbc
	if (!cr0.eq) goto loc_82BEFBBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82BEFBF4;
	sub_82572FA0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBFC"))) PPC_WEAK_FUNC(sub_82BEFBFC);
PPC_FUNC_IMPL(__imp__sub_82BEFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFC00"))) PPC_WEAK_FUNC(sub_82BEFC00);
PPC_FUNC_IMPL(__imp__sub_82BEFC00) {
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
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82befcac
	if (cr6.gt) goto loc_82BEFCAC;
	// beq cr6,0x82befc90
	if (cr6.eq) goto loc_82BEFC90;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// ori r9,r10,4148
	ctx.r9.u64 = ctx.r10.u64 | 4148;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82befcf0
	if (!cr6.eq) goto loc_82BEFCF0;
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x82d4f6d8
	ctx.lr = 0x82BEFC44;
	sub_82D4F6D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// lbz r9,173(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// lbz r8,174(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// lbz r7,175(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 175);
	// lbz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// rotlwi r11,r6,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82bef868
	ctx.lr = 0x82BEFC8C;
	sub_82BEF868(ctx, base);
	// b 0x82befcf0
	goto loc_82BEFCF0;
loc_82BEFC90:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x82befca4
	if (cr6.eq) goto loc_82BEFCA4;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bne cr6,0x82befcf0
	if (!cr6.eq) goto loc_82BEFCF0;
loc_82BEFCA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82befce4
	goto loc_82BEFCE4;
loc_82BEFCAC:
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82befcf0
	if (cr6.lt) goto loc_82BEFCF0;
	// lis r10,265
	ctx.r10.s64 = 17367040;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82befcf0
	if (cr6.gt) goto loc_82BEFCF0;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x82befce0
	if (cr6.eq) goto loc_82BEFCE0;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bne cr6,0x82befcf0
	if (!cr6.eq) goto loc_82BEFCF0;
loc_82BEFCE0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82BEFCE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82BEFCF0:
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

__attribute__((alias("__imp__sub_82BEFD08"))) PPC_WEAK_FUNC(sub_82BEFD08);
PPC_FUNC_IMPL(__imp__sub_82BEFD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BEFD10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BEFD20;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,11740
	ctx.r30.s64 = ctx.r11.s64 + 11740;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BEFD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BEFD4C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BEFD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82befde0
	if (cr6.eq) goto loc_82BEFDE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befdac
	if (cr6.eq) goto loc_82BEFDAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEFD8C;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x8337f1e0
	ctx.lr = 0x82BEFD98;
	sub_8337F1E0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x83545640
	ctx.lr = 0x82BEFDA4;
	sub_83545640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeb78
	ctx.lr = 0x82BEFDAC;
	sub_82BEEB78(ctx, base);
loc_82BEFDAC:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befe0c
	if (cr6.eq) goto loc_82BEFE0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEFDC4;
	sub_82D2AEC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x8337f1e0
	ctx.lr = 0x82BEFDD0;
	sub_8337F1E0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x83545640
	ctx.lr = 0x82BEFDDC;
	sub_83545640(ctx, base);
	// b 0x82befe0c
	goto loc_82BEFE0C;
loc_82BEFDE0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befdf4
	if (cr6.eq) goto loc_82BEFDF4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEFDF4;
	sub_82D2AEC8(ctx, base);
loc_82BEFDF4:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befe0c
	if (cr6.eq) goto loc_82BEFE0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEFE0C;
	sub_82D2AEC8(ctx, base);
loc_82BEFE0C:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82befe20
	if (cr6.eq) goto loc_82BEFE20;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82befe38
	if (!cr6.eq) goto loc_82BEFE38;
loc_82BEFE20:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82befe38
	if (cr6.eq) goto loc_82BEFE38;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BEFE38;
	sub_82D2AEC8(ctx, base);
loc_82BEFE38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFE40"))) PPC_WEAK_FUNC(sub_82BEFE40);
PPC_FUNC_IMPL(__imp__sub_82BEFE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BEFE48;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d51e00
	ctx.lr = 0x82BEFE64;
	sub_82D51E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beff48
	if (cr6.eq) goto loc_82BEFF48;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f30,f13,f11
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// beq cr6,0x82beff04
	if (cr6.eq) goto loc_82BEFF04;
	// bl 0x8308e078
	ctx.lr = 0x82BEFE98;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82d51240
	ctx.lr = 0x82BEFEA8;
	sub_82D51240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19730
	ctx.lr = 0x82BEFEB4;
	sub_82D19730(ctx, base);
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8308e078
	ctx.lr = 0x82BEFED0;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51538
	ctx.lr = 0x82BEFEE0;
	sub_82D51538(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BEFEE4;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d514b8
	ctx.lr = 0x82BEFEF4;
	sub_82D514B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BEFF04:
	// bl 0x8308e078
	ctx.lr = 0x82BEFF08;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d51240
	ctx.lr = 0x82BEFF18;
	sub_82D51240(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BEFF1C;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d51290
	ctx.lr = 0x82BEFF2C;
	sub_82D51290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19730
	ctx.lr = 0x82BEFF38;
	sub_82D19730(ctx, base);
	// bl 0x8308e078
	ctx.lr = 0x82BEFF3C;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d51578
	ctx.lr = 0x82BEFF48;
	sub_82D51578(ctx, base);
loc_82BEFF48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFF58"))) PPC_WEAK_FUNC(sub_82BEFF58);
PPC_FUNC_IMPL(__imp__sub_82BEFF58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d51e00
	ctx.lr = 0x82BEFF74;
	sub_82D51E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82beffc4
	if (cr6.eq) goto loc_82BEFFC4;
	// addi r5,r31,272
	ctx.r5.s64 = ctx.r31.s64 + 272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82befa20
	ctx.lr = 0x82BEFF90;
	sub_82BEFA20(ctx, base);
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8308e078
	ctx.lr = 0x82BEFFB4;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d514b8
	ctx.lr = 0x82BEFFC4;
	sub_82D514B8(ctx, base);
loc_82BEFFC4:
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

__attribute__((alias("__imp__sub_82BEFFDC"))) PPC_WEAK_FUNC(sub_82BEFFDC);
PPC_FUNC_IMPL(__imp__sub_82BEFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFFE0"))) PPC_WEAK_FUNC(sub_82BEFFE0);
PPC_FUNC_IMPL(__imp__sub_82BEFFE0) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf018c
	if (cr6.eq) goto loc_82BF018C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BF0018;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,12028
	ctx.r4.s64 = ctx.r10.s64 + 12028;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF0034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0050
	if (cr6.eq) goto loc_82BF0050;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF0050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF0050:
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,406(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// lbz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf015c
	if (cr6.eq) goto loc_82BF015C;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bne cr6,0x82bf00fc
	if (!cr6.eq) goto loc_82BF00FC;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lhz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lhz r7,386(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f6,f10
	ctx.f6.f64 = double(ctx.f10.s64);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fdivs f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// fdivs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f3.f64));
	// b 0x82bf015c
	goto loc_82BF015C;
loc_82BF00FC:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lhz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lhz r7,370(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fdivs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f3.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fdivs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
loc_82BF015C:
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f11,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f7,f0,f12,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF018C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF018C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF01A4"))) PPC_WEAK_FUNC(sub_82BF01A4);
PPC_FUNC_IMPL(__imp__sub_82BF01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF01A8"))) PPC_WEAK_FUNC(sub_82BF01A8);
PPC_FUNC_IMPL(__imp__sub_82BF01A8) {
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
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bne cr6,0x82bf0238
	if (!cr6.eq) goto loc_82BF0238;
	// lwz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82bf01e4
	if (!cr6.eq) goto loc_82BF01E4;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// b 0x82bf01fc
	goto loc_82BF01FC;
loc_82BF01E4:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82bf01f8
	if (!cr6.eq) goto loc_82BF01F8;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82bf01fc
	goto loc_82BF01FC;
loc_82BF01F8:
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_82BF01FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee438
	ctx.lr = 0x82BF0204;
	sub_82BEE438(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF0218;
	sub_82BEF488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF0224;
	sub_82BEEC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82BF0230;
	sub_82D19648(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BF0238:
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

__attribute__((alias("__imp__sub_82BF024C"))) PPC_WEAK_FUNC(sub_82BF024C);
PPC_FUNC_IMPL(__imp__sub_82BF024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0250"))) PPC_WEAK_FUNC(sub_82BF0250);
PPC_FUNC_IMPL(__imp__sub_82BF0250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF0258;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf0290
	if (cr6.eq) goto loc_82BF0290;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF0278;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF027C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82BF028C;
	sub_825952B8(ctx, base);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_82BF0290:
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf02bc
	if (cr6.eq) goto loc_82BF02BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF02A4;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF02A8;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BF02B8;
	sub_825952B8(ctx, base);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
loc_82BF02BC:
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf02e8
	if (cr6.eq) goto loc_82BF02E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF02D0;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF02D4;
	sub_82595188(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82BF02E4;
	sub_825952B8(ctx, base);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
loc_82BF02E8:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf02fc
	if (cr6.eq) goto loc_82BF02FC;
	// bl 0x83103e98
	ctx.lr = 0x82BF02F8;
	sub_83103E98(ctx, base);
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_82BF02FC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82BF0300:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf0320
	if (cr6.eq) goto loc_82BF0320;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83103e98
	ctx.lr = 0x82BF0318;
	sub_83103E98(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
loc_82BF0320:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,84
	cr6.compare<uint32_t>(ctx.r30.u32, 84, xer);
	// blt cr6,0x82bf0300
	if (cr6.lt) goto loc_82BF0300;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0340
	if (cr6.eq) goto loc_82BF0340;
	// bl 0x82416268
	ctx.lr = 0x82BF033C;
	sub_82416268(ctx, base);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_82BF0340:
	// lwz r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf0360
	if (cr6.eq) goto loc_82BF0360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd8c80
	ctx.lr = 0x82BF0354;
	sub_82CD8C80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82BF035C;
	sub_82416268(ctx, base);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
loc_82BF0360:
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf0380
	if (cr6.eq) goto loc_82BF0380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd9448
	ctx.lr = 0x82BF0374;
	sub_82CD9448(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82BF037C;
	sub_82416268(ctx, base);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
loc_82BF0380:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x833bbd78
	ctx.lr = 0x82BF0388;
	sub_833BBD78(ctx, base);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x833bbd78
	ctx.lr = 0x82BF0394;
	sub_833BBD78(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf03b8
	if (cr6.eq) goto loc_82BF03B8;
	// bl 0x835eb7f0
	ctx.lr = 0x82BF03AC;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82BF03B8;
	sub_82572FA0(ctx, base);
loc_82BF03B8:
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-27720(r10)
	PPC_STORE_U8(ctx.r10.u32 + -27720, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF03D0"))) PPC_WEAK_FUNC(sub_82BF03D0);
PPC_FUNC_IMPL(__imp__sub_82BF03D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF03D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82BF03E4;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82cd69b0
	ctx.lr = 0x82BF03F0;
	sub_82CD69B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0408;
	sub_82572FA0(ctx, base);
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf0494
	if (!cr6.eq) goto loc_82BF0494;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bf0584
	if (cr6.eq) goto loc_82BF0584;
	// li r5,480
	ctx.r5.s64 = 480;
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831cdcf0
	ctx.lr = 0x82BF0430;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf045c
	if (cr6.eq) goto loc_82BF045C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x8306e988
	ctx.lr = 0x82BF0448;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x82BF045C;
	sub_83773C28(ctx, base);
loc_82BF045C:
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r4,396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82a9bc48
	ctx.lr = 0x82BF046C;
	sub_82A9BC48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775270
	ctx.lr = 0x82BF0480;
	sub_83775270(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82BF048C;
	sub_82572FA0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BF0494:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf050c
	if (!cr6.eq) goto loc_82BF050C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bf0584
	if (cr6.eq) goto loc_82BF0584;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF04B8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf04b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF04B8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775ad8
	ctx.lr = 0x82BF04D4;
	sub_83775AD8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// bl 0x82a9f728
	ctx.lr = 0x82BF04E4;
	sub_82A9F728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775980
	ctx.lr = 0x82BF04F8;
	sub_83775980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82BF0504;
	sub_82572FA0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BF050C:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf0584
	if (cr6.lt) goto loc_82BF0584;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bf0584
	if (cr6.eq) goto loc_82BF0584;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF052C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf052c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF052C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r28,168(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,196(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82aad610
	ctx.lr = 0x82BF055C;
	sub_82AAD610(ctx, base);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// bl 0x82aaf090
	ctx.lr = 0x82BF056C;
	sub_82AAF090(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83777480
	ctx.lr = 0x82BF0584;
	sub_83777480(ctx, base);
loc_82BF0584:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82BF0590;
	sub_82572FA0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0598"))) PPC_WEAK_FUNC(sub_82BF0598);
PPC_FUNC_IMPL(__imp__sub_82BF0598) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,11060
	ctx.r3.s64 = ctx.r11.s64 + 11060;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cdad38
	ctx.lr = 0x82BF05C8;
	sub_82CDAD38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf05e0
	if (cr6.eq) goto loc_82BF05E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82BF05E0;
	sub_83103100(ctx, base);
loc_82BF05E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BF05EC;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82BF0600"))) PPC_WEAK_FUNC(sub_82BF0600);
PPC_FUNC_IMPL(__imp__sub_82BF0600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF0608;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d0b4c8
	ctx.lr = 0x82BF0624;
	sub_82D0B4C8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d04828
	ctx.lr = 0x82BF062C;
	sub_82D04828(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d06ef8
	ctx.lr = 0x82BF063C;
	sub_82D06EF8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf0650
	if (cr6.lt) goto loc_82BF0650;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82bf0654
	goto loc_82BF0654;
loc_82BF0650:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BF0654:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d06fa0
	ctx.lr = 0x82BF065C;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d047a8
	ctx.lr = 0x82BF0664;
	sub_82D047A8(ctx, base);
	// lfs f0,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,352(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d06ef8
	ctx.lr = 0x82BF0694;
	sub_82D06EF8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf06a8
	if (cr6.lt) goto loc_82BF06A8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82bf06ac
	goto loc_82BF06AC;
loc_82BF06A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BF06AC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d06fa0
	ctx.lr = 0x82BF06B4;
	sub_82D06FA0(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82d07060
	ctx.lr = 0x82BF06D0;
	sub_82D07060(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d07118
	ctx.lr = 0x82BF06DC;
	sub_82D07118(ctx, base);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82d07058
	ctx.lr = 0x82BF06F8;
	sub_82D07058(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a245d0
	ctx.lr = 0x82BF0704;
	sub_82A245D0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0af58
	ctx.lr = 0x82BF071C;
	sub_82D0AF58(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF072C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF0738;
	sub_82572FA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d04b60
	ctx.lr = 0x82BF0740;
	sub_82D04B60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d0b540
	ctx.lr = 0x82BF0748;
	sub_82D0B540(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0750"))) PPC_WEAK_FUNC(sub_82BF0750);
PPC_FUNC_IMPL(__imp__sub_82BF0750) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82bf07b0
	if (cr6.gt) goto loc_82BF07B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf0794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF0794;
	// bdzf 4*cr6+eq,0x82bf079c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF079C;
	// bdzf 4*cr6+eq,0x82bf07a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF07A4;
	// bne cr6,0x82bf07ac
	if (!cr6.eq) goto loc_82BF07AC;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82bf07b0
	goto loc_82BF07B0;
loc_82BF0794:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82bf07b0
	goto loc_82BF07B0;
loc_82BF079C:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82bf07b0
	goto loc_82BF07B0;
loc_82BF07A4:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82bf07b0
	goto loc_82BF07B0;
loc_82BF07AC:
	// li r10,6
	ctx.r10.s64 = 6;
loc_82BF07B0:
	// lbz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82bf07fc
	if (cr6.gt) goto loc_82BF07FC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf07e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF07E0;
	// bdzf 4*cr6+eq,0x82bf07e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF07E8;
	// bdzf 4*cr6+eq,0x82bf07f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF07F0;
	// bne cr6,0x82bf07f8
	if (!cr6.eq) goto loc_82BF07F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bf07fc
	goto loc_82BF07FC;
loc_82BF07E0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82bf07fc
	goto loc_82BF07FC;
loc_82BF07E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82bf07fc
	goto loc_82BF07FC;
loc_82BF07F0:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82bf07fc
	goto loc_82BF07FC;
loc_82BF07F8:
	// li r11,6
	ctx.r11.s64 = 6;
loc_82BF07FC:
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x82bf08dc
	if (!cr6.lt) goto loc_82BF08DC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// bne cr6,0x82bf0850
	if (!cr6.eq) goto loc_82BF0850;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf08dc
	if (cr6.eq) goto loc_82BF08DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r11.u16);
	// sth r11,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r11.u16);
	// bl 0x82bee638
	ctx.lr = 0x82BF0830;
	sub_82BEE638(ctx, base);
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82bee638
	ctx.lr = 0x82BF0840;
	sub_82BEE638(ctx, base);
	// lfs f12,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,276(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82bf08c4
	goto loc_82BF08C4;
loc_82BF0850:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf08dc
	if (cr6.eq) goto loc_82BF08DC;
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee908
	ctx.lr = 0x82BF0868;
	sub_82BEE908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee638
	ctx.lr = 0x82BF0870;
	sub_82BEE638(ctx, base);
	// lhz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f9,272(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82bee638
	ctx.lr = 0x82BF089C;
	sub_82BEE638(ctx, base);
	// lhz r8,370(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lfs f8,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f8.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f3,276(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
loc_82BF08C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BF08CC;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf08dc
	if (cr6.eq) goto loc_82BF08DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beff58
	ctx.lr = 0x82BF08DC;
	sub_82BEFF58(ctx, base);
loc_82BF08DC:
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

__attribute__((alias("__imp__sub_82BF08F0"))) PPC_WEAK_FUNC(sub_82BF08F0);
PPC_FUNC_IMPL(__imp__sub_82BF08F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF08F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,403(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 403);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf09a4
	if (cr6.eq) goto loc_82BF09A4;
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf093c
	if (!cr6.eq) goto loc_82BF093C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82a6e5e8
	ctx.lr = 0x82BF0924;
	sub_82A6E5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0934;
	sub_82572FA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82bf099c
	goto loc_82BF099C;
loc_82BF093C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf0968
	if (!cr6.eq) goto loc_82BF0968;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82a6e5e8
	ctx.lr = 0x82BF0950;
	sub_82A6E5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0960;
	sub_82572FA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x82bf099c
	goto loc_82BF099C;
loc_82BF0968:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf09a4
	if (cr6.lt) goto loc_82BF09A4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83072708
	ctx.lr = 0x82BF0988;
	sub_83072708(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0998;
	sub_82572FA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82BF099C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82BF09A4;
	sub_82572FA0(ctx, base);
loc_82BF09A4:
	// lbz r11,403(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 403);
	// li r28,27
	ctx.r28.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// beq cr6,0x82bf09f8
	if (cr6.eq) goto loc_82BF09F8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BF09C8;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82bf0a28
	if (cr6.eq) goto loc_82BF0A28;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82572fa0
	ctx.lr = 0x82BF09E8;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835ee610
	ctx.lr = 0x82BF09F4;
	sub_835EE610(ctx, base);
	// b 0x82bf0a2c
	goto loc_82BF0A2C;
loc_82BF09F8:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BF0A04;
	sub_82595718(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0a28
	if (cr6.eq) goto loc_82BF0A28;
	// lhz r11,406(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// lhz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x835ee550
	ctx.lr = 0x82BF0A24;
	sub_835EE550(ctx, base);
	// b 0x82bf0a2c
	goto loc_82BF0A2C;
loc_82BF0A28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BF0A2C:
	// lbz r11,403(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 403);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf0a8c
	if (cr6.eq) goto loc_82BF0A8C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82BF0A50;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0a80
	if (cr6.eq) goto loc_82BF0A80;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0A6C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835ee610
	ctx.lr = 0x82BF0A78;
	sub_835EE610(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// b 0x82bf0ae8
	goto loc_82BF0AE8;
loc_82BF0A80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// b 0x82bf0ae8
	goto loc_82BF0AE8;
loc_82BF0A8C:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82BF0A98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0ab8
	if (cr6.eq) goto loc_82BF0AB8;
	// lhz r11,406(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// lhz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x835ee550
	ctx.lr = 0x82BF0AB4;
	sub_835EE550(ctx, base);
	// b 0x82bf0abc
	goto loc_82BF0ABC;
loc_82BF0AB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BF0ABC:
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0AD0;
	sub_82572FA0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0ADC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF0AE8;
	sub_82572FA0(ctx, base);
loc_82BF0AE8:
	// lhz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r8,406(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// srawi r6,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// lfs f0,-26260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stb r5,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r5.u8);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x835ee688
	ctx.lr = 0x82BF0B60;
	sub_835EE688(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x833bcb58
	ctx.lr = 0x82BF0B70;
	sub_833BCB58(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833bcb58
	ctx.lr = 0x82BF0B84;
	sub_833BCB58(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beffe0
	ctx.lr = 0x82BF0B90;
	sub_82BEFFE0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0B98"))) PPC_WEAK_FUNC(sub_82BF0B98);
PPC_FUNC_IMPL(__imp__sub_82BF0B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF0BA0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf10a4
	if (cr6.eq) goto loc_82BF10A4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// beq cr6,0x82bf0bd8
	if (cr6.eq) goto loc_82BF0BD8;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x82bf0bdc
	if (!cr6.eq) goto loc_82BF0BDC;
loc_82BF0BD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BF0BDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf10a4
	if (!cr6.eq) goto loc_82BF10A4;
	// bl 0x82cd69b0
	ctx.lr = 0x82BF0BEC;
	sub_82CD69B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0C00;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0C10;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf10a4
	if (cr6.eq) goto loc_82BF10A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x8337f1e0
	ctx.lr = 0x82BF0C24;
	sub_8337F1E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x82BF0C2C;
	sub_825832E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x82BF0C38;
	sub_825832F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lis r29,-31776
	ctx.r29.s64 = -2082471936;
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f31,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// stw r11,-28532(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28532, ctx.r11.u32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// beq cr6,0x82bf0d80
	if (cr6.eq) goto loc_82BF0D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee5e8
	ctx.lr = 0x82BF0C94;
	sub_82BEE5E8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82bf0d04
	if (!cr6.eq) goto loc_82BF0D04;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lhz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lhz r9,386(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fdivs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fdivs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// b 0x82bf0d64
	goto loc_82BF0D64;
loc_82BF0D04:
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lhz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lhz r8,370(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// fdivs f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fdivs f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
loc_82BF0D64:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fdivs f10,f31,f6
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
loc_82BF0D80:
	// li r30,255
	ctx.r30.s64 = 255;
	// fadds f8,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r30,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r30.u8);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r30,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r30.u8);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r30,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r30.u8);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r30,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r30.u8);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r30,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r30.u8);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r30,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r30.u8);
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r30,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r30.u8);
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stb r30,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r30.u8);
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stb r30,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r30.u8);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r30,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r30.u8);
	// stb r30,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r30.u8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stb r30,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r30.u8);
	// bl 0x833cb2c8
	ctx.lr = 0x82BF0E20;
	sub_833CB2C8(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x82BF0E2C;
	sub_833CB348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x833cb570
	ctx.lr = 0x82BF0E38;
	sub_833CB570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83779190
	ctx.lr = 0x82BF0E44;
	sub_83779190(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x82BF0E50;
	sub_833CB390(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x82BF0E5C;
	sub_833CB398(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x82BF0E68;
	sub_833CB3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x82BF0E74;
	sub_833CB3A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x82BF0E80;
	sub_833CB3C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x82BF0E8C;
	sub_833CB3D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x82BF0EA0;
	sub_833CB4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x82BF0EAC;
	sub_833CB2F8(ctx, base);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf0f84
	if (cr6.eq) goto loc_82BF0F84;
	// bl 0x831f8200
	ctx.lr = 0x82BF0EBC;
	sub_831F8200(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0ED0;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82BF0EE0;
	sub_82572FA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8337f1e0
	ctx.lr = 0x82BF0EEC;
	sub_8337F1E0(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,-28532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28532);
	// bl 0x833cb2c8
	ctx.lr = 0x82BF0EF8;
	sub_833CB2C8(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x82BF0F04;
	sub_833CB348(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x833cb570
	ctx.lr = 0x82BF0F10;
	sub_833CB570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83779190
	ctx.lr = 0x82BF0F1C;
	sub_83779190(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x82BF0F28;
	sub_833CB390(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x82BF0F34;
	sub_833CB398(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x82BF0F40;
	sub_833CB3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x82BF0F4C;
	sub_833CB3A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x82BF0F58;
	sub_833CB3C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x82BF0F64;
	sub_833CB3D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x82BF0F78;
	sub_833CB4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x82BF0F84;
	sub_833CB2F8(ctx, base);
loc_82BF0F84:
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r30.u8);
	// lfs f13,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r30.u8);
	// lfs f12,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r30.u8);
	// lfs f11,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stb r30,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r30.u8);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stb r30,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r30.u8);
	// stfs f30,208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r30,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r30.u8);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stb r30,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r30.u8);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stb r30,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r30.u8);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stb r30,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r30.u8);
	// stfs f30,244(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stb r30,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r30.u8);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stb r30,243(r1)
	PPC_STORE_U8(ctx.r1.u32 + 243, ctx.r30.u8);
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stb r30,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r30.u8);
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stb r30,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r30.u8);
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stb r30,262(r1)
	PPC_STORE_U8(ctx.r1.u32 + 262, ctx.r30.u8);
	// stfs f7,256(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stb r30,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r30.u8);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,-28532(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28532);
	// bl 0x833cb2c8
	ctx.lr = 0x82BF1030;
	sub_833CB2C8(ctx, base);
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x833cb348
	ctx.lr = 0x82BF103C;
	sub_833CB348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb390
	ctx.lr = 0x82BF1048;
	sub_833CB390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb398
	ctx.lr = 0x82BF1054;
	sub_833CB398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x833cb3a0
	ctx.lr = 0x82BF1060;
	sub_833CB3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3a8
	ctx.lr = 0x82BF106C;
	sub_833CB3A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3c8
	ctx.lr = 0x82BF1078;
	sub_833CB3C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833cb3d8
	ctx.lr = 0x82BF1084;
	sub_833CB3D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x833cb4f8
	ctx.lr = 0x82BF1098;
	sub_833CB4F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x82BF10A4;
	sub_833CB2F8(ctx, base);
loc_82BF10A4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10B4"))) PPC_WEAK_FUNC(sub_82BF10B4);
PPC_FUNC_IMPL(__imp__sub_82BF10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10B8"))) PPC_WEAK_FUNC(sub_82BF10B8);
PPC_FUNC_IMPL(__imp__sub_82BF10B8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF10D4;
	sub_82D196E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19a30
	ctx.lr = 0x82BF10E0;
	sub_82D19A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82befd08
	ctx.lr = 0x82BF10EC;
	sub_82BEFD08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF10F8;
	sub_82BEEC28(ctx, base);
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

__attribute__((alias("__imp__sub_82BF110C"))) PPC_WEAK_FUNC(sub_82BF110C);
PPC_FUNC_IMPL(__imp__sub_82BF110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1110"))) PPC_WEAK_FUNC(sub_82BF1110);
PPC_FUNC_IMPL(__imp__sub_82BF1110) {
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
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82BF112C;
	sub_83763EF8(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf11a4
	if (!cr6.eq) goto loc_82BF11A4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1270
	if (cr6.eq) goto loc_82BF1270;
	// lwz r30,168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831cdcf0
	ctx.lr = 0x82BF1160;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf118c
	if (cr6.eq) goto loc_82BF118C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x8306e988
	ctx.lr = 0x82BF1178;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x82BF118C;
	sub_83773C28(ctx, base);
loc_82BF118C:
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82a70db0
	ctx.lr = 0x82BF119C;
	sub_82A70DB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82bf1274
	goto loc_82BF1274;
loc_82BF11A4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf11f8
	if (!cr6.eq) goto loc_82BF11F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bf1270
	if (cr6.eq) goto loc_82BF1270;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF11C8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf11c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF11C8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775ad8
	ctx.lr = 0x82BF11E0;
	sub_83775AD8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a9eab0
	ctx.lr = 0x82BF11F0;
	sub_82A9EAB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82bf1274
	goto loc_82BF1274;
loc_82BF11F8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf1270
	if (cr6.lt) goto loc_82BF1270;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82bf1270
	if (cr6.eq) goto loc_82BF1270;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF1218:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf1218
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF1218;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r7,200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x82aad610
	ctx.lr = 0x82BF123C;
	sub_82AAD610(ctx, base);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a713f0
	ctx.lr = 0x82BF124C;
	sub_82A713F0(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aaccf8
	ctx.lr = 0x82BF1258;
	sub_82AACCF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// b 0x82bf1274
	goto loc_82BF1274;
loc_82BF1270:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82BF1274:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF128C"))) PPC_WEAK_FUNC(sub_82BF128C);
PPC_FUNC_IMPL(__imp__sub_82BF128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1290"))) PPC_WEAK_FUNC(sub_82BF1290);
PPC_FUNC_IMPL(__imp__sub_82BF1290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF1298;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x82bf18c4
	if (cr6.gt) goto loc_82BF18C4;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4808
	ctx.r12.s64 = ctx.r12.s64 + 4808;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BF1360;
	case 1:
		goto loc_82BF18C4;
	case 2:
		goto loc_82BF18C4;
	case 3:
		goto loc_82BF18C4;
	case 4:
		goto loc_82BF1514;
	case 5:
		goto loc_82BF18C4;
	case 6:
		goto loc_82BF18C4;
	case 7:
		goto loc_82BF153C;
	case 8:
		goto loc_82BF18C4;
	case 9:
		goto loc_82BF18C4;
	case 10:
		goto loc_82BF18C4;
	case 11:
		goto loc_82BF18C4;
	case 12:
		goto loc_82BF15C4;
	case 13:
		goto loc_82BF18C4;
	case 14:
		goto loc_82BF18C4;
	case 15:
		goto loc_82BF18C4;
	case 16:
		goto loc_82BF18C4;
	case 17:
		goto loc_82BF18C4;
	case 18:
		goto loc_82BF18C4;
	case 19:
		goto loc_82BF18C4;
	case 20:
		goto loc_82BF18C4;
	case 21:
		goto loc_82BF18C4;
	case 22:
		goto loc_82BF18C4;
	case 23:
		goto loc_82BF18C4;
	case 24:
		goto loc_82BF18C4;
	case 25:
		goto loc_82BF1634;
	case 26:
		goto loc_82BF18C4;
	case 27:
		goto loc_82BF18C4;
	case 28:
		goto loc_82BF16B4;
	case 29:
		goto loc_82BF18C4;
	case 30:
		goto loc_82BF189C;
	case 31:
		goto loc_82BF18C4;
	case 32:
		goto loc_82BF174C;
	case 33:
		goto loc_82BF186C;
	case 34:
		goto loc_82BF18C4;
	case 35:
		goto loc_82BF18C4;
	case 36:
		goto loc_82BF18C4;
	case 37:
		goto loc_82BF1848;
	default:
		return;
	}
	// lwz r21,4960(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4960);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5396(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5396);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5436(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5436);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5572(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5572);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5684(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5684);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5812(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5812);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6300(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6300);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,5964(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5964);
	// lwz r21,6252(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6340(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6340);
	// lwz r21,6216(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
loc_82BF1360:
	// lbz r11,401(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 401);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf138c
	if (cr6.eq) goto loc_82BF138C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF1388;
	sub_82BEF488(ctx, base);
	// b 0x82bf14e4
	goto loc_82BF14E4;
loc_82BF138C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF13A0;
	sub_82572FA0(ctx, base);
	// bl 0x82d17d90
	ctx.lr = 0x82BF13A4;
	sub_82D17D90(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103d60
	ctx.lr = 0x82BF13B8;
	sub_83103D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103d20
	ctx.lr = 0x82BF13C4;
	sub_83103D20(ctx, base);
	// rotlwi r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf1458
	if (cr6.eq) goto loc_82BF1458;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ef3e0
	ctx.lr = 0x82BF13D8;
	sub_835EF3E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaf8
	ctx.lr = 0x82BF13E0;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825832f8
	ctx.lr = 0x82BF13EC;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83131d70
	ctx.lr = 0x82BF13F8;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8307e038
	ctx.lr = 0x82BF1404;
	sub_8307E038(ctx, base);
	// clrldi r6,r28,32
	ctx.r6.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ef5a8
	ctx.lr = 0x82BF1418;
	sub_835EF5A8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ebe48
	ctx.lr = 0x82BF142C;
	sub_835EBE48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF143C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82BF1448;
	sub_82572FA0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835ecaa8
	ctx.lr = 0x82BF1450;
	sub_835ECAA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835f3ab0
	ctx.lr = 0x82BF1458;
	sub_835F3AB0(ctx, base);
loc_82BF1458:
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf1484
	if (cr6.eq) goto loc_82BF1484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF146C;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF1470;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BF1480;
	sub_825952B8(ctx, base);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
loc_82BF1484:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82BF149C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf14c8
	if (cr6.eq) goto loc_82BF14C8;
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82BF14B8;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ee610
	ctx.lr = 0x82BF14C4;
	sub_835EE610(ctx, base);
	// b 0x82bf14cc
	goto loc_82BF14CC;
loc_82BF14C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BF14CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF14E4;
	sub_82572FA0(ctx, base);
loc_82BF14E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF14EC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF14F4;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF1500;
	sub_82D2AEC8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF150C;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF1514:
	// lbz r11,401(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 401);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf1594
	if (!cr6.eq) goto loc_82BF1594;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1534;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF153C:
	// lbz r11,401(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 401);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf1594
	if (!cr6.eq) goto loc_82BF1594;
	// lwz r30,168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf1578
	if (cr6.eq) goto loc_82BF1578;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF155C;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF1560;
	sub_82595188(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82BF1570;
	sub_825952B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82BF1578:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF158C;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF1594:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF15B0;
	sub_82BEF488(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF15BC;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF15C4:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf15d8
	if (cr6.eq) goto loc_82BF15D8;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// bl 0x82cd9e50
	ctx.lr = 0x82BF15D8;
	sub_82CD9E50(ctx, base);
loc_82BF15D8:
	// li r11,11
	ctx.r11.s64 = 11;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF15F4;
	sub_82BEF488(ctx, base);
	// bl 0x82d51e00
	ctx.lr = 0x82BF15F8;
	sub_82D51E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1618
	if (cr6.eq) goto loc_82BF1618;
	// bl 0x8308e078
	ctx.lr = 0x82BF1608;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d51240
	ctx.lr = 0x82BF1618;
	sub_82D51240(ctx, base);
loc_82BF1618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beff58
	ctx.lr = 0x82BF1620;
	sub_82BEFF58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF162C;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF1634:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82bef488
	ctx.lr = 0x82BF1650;
	sub_82BEF488(ctx, base);
	// bl 0x82d51e00
	ctx.lr = 0x82BF1654;
	sub_82D51E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1674
	if (cr6.eq) goto loc_82BF1674;
	// bl 0x8308e078
	ctx.lr = 0x82BF1664;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d51240
	ctx.lr = 0x82BF1674;
	sub_82D51240(ctx, base);
loc_82BF1674:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82BF1680;
	sub_82D19648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beff58
	ctx.lr = 0x82BF1688;
	sub_82BEFF58(ctx, base);
	// lbz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf18c4
	if (!cr6.eq) goto loc_82BF18C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF16A0;
	sub_82BEEC28(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF16AC;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF16B4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bf1704
	if (!cr6.eq) goto loc_82BF1704;
	// bl 0x8376b838
	ctx.lr = 0x82BF16C0;
	sub_8376B838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf16e8
	if (!cr6.eq) goto loc_82BF16E8;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF16E0;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF16E8:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF16FC;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF1704:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF1720;
	sub_82BEF488(ctx, base);
	// lbz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf18c4
	if (!cr6.eq) goto loc_82BF18C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF1738;
	sub_82BEEC28(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1744;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF174C:
	// lbz r11,401(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 401);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf17d4
	if (!cr6.eq) goto loc_82BF17D4;
	// bl 0x82d17d90
	ctx.lr = 0x82BF175C;
	sub_82D17D90(ctx, base);
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// bne cr6,0x82bf17a0
	if (!cr6.eq) goto loc_82BF17A0;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf18c4
	if (cr6.eq) goto loc_82BF18C4;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82d84728
	ctx.lr = 0x82BF178C;
	sub_82D84728(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1798;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF17A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf18c4
	if (!cr6.eq) goto loc_82BF18C4;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf18c4
	if (cr6.eq) goto loc_82BF18C4;
	// li r3,179
	ctx.r3.s64 = 179;
	// bl 0x82d84728
	ctx.lr = 0x82BF17C0;
	sub_82D84728(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF17CC;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF17D4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF17F0;
	sub_82BEF488(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF17FC;
	sub_82BEFD08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BF1804;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,11552
	ctx.r4.s64 = ctx.r10.s64 + 11552;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF1820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BF1828;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF1834;
	sub_82D2AEC8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1840;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF1848:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bf189c
	if (!cr6.eq) goto loc_82BF189C;
	// li r11,39
	ctx.r11.s64 = 39;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1864;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF186C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bf189c
	if (!cr6.eq) goto loc_82BF189C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1110
	ctx.lr = 0x82BF187C;
	sub_82BF1110(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF1894;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF189C:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF18B8;
	sub_82BEF488(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF18C4;
	sub_82BEFD08(ctx, base);
loc_82BF18C4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF18D0;
	sub_82D196E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF18D8"))) PPC_WEAK_FUNC(sub_82BF18D8);
PPC_FUNC_IMPL(__imp__sub_82BF18D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF18E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x828eda90
	ctx.lr = 0x82BF18F4;
	sub_828EDA90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf1934
	if (cr6.eq) goto loc_82BF1934;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x82bf192c
	if (cr6.eq) goto loc_82BF192C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_82BF1914:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf1924
	if (cr6.eq) goto loc_82BF1924;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82BF1924:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82bf1914
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF1914;
loc_82BF192C:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82BF1934:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF193C"))) PPC_WEAK_FUNC(sub_82BF193C);
PPC_FUNC_IMPL(__imp__sub_82BF193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1940"))) PPC_WEAK_FUNC(sub_82BF1940);
PPC_FUNC_IMPL(__imp__sub_82BF1940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BF1948;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// bl 0x8308e078
	ctx.lr = 0x82BF1968;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82BF1980;
	sub_82D253F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,27
	ctx.r29.s64 = 27;
	// addi r9,r11,12168
	ctx.r9.s64 = ctx.r11.s64 + 12168;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF19D8;
	sub_82572FA0(ctx, base);
	// std r30,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r30.u64);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x82BF19E8;
	sub_82572FA0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// std r30,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF1A0C;
	sub_82572FA0(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// lfs f31,9008(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stb r28,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r28.u8);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stfs f31,236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f31,240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// sth r30,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r30.u16);
	// sth r30,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r30.u16);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f31,268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// bl 0x82bee188
	ctx.lr = 0x82BF1AA0;
	sub_82BEE188(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// stb r30,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r30.u8);
	// li r26,15
	ctx.r26.s64 = 15;
	// stb r30,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r30.u8);
	// stb r30,302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 302, ctx.r30.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r30,303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 303, ctx.r30.u8);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// addi r28,r11,9895
	ctx.r28.s64 = ctx.r11.s64 + 9895;
	// stb r30,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r30.u8);
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r24,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r24.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r26,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r26.u32);
	// stb r30,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82BF1AF8;
	sub_8259CC28(ctx, base);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f31,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// sth r30,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r30.u16);
	// sth r30,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r30.u16);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stfs f31,376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// sth r30,384(r31)
	PPC_STORE_U16(ctx.r31.u32 + 384, ctx.r30.u16);
	// sth r30,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r30.u16);
	// stfs f31,388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// stb r30,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r30.u8);
	// stb r30,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r30.u8);
	// sth r30,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r30.u16);
	// sth r30,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r30.u16);
	// stb r27,403(r31)
	PPC_STORE_U8(ctx.r31.u32 + 403, ctx.r27.u8);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r4,-28260(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28260);
	// bl 0x82d20ae0
	ctx.lr = 0x82BF1B60;
	sub_82D20AE0(ctx, base);
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r9,-28536
	ctx.r27.s64 = ctx.r9.s64 + -28536;
	// lwz r4,-28536(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28536);
	// bl 0x82d23390
	ctx.lr = 0x82BF1B78;
	sub_82D23390(ctx, base);
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28264(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28264);
	// bl 0x82d20ae0
	ctx.lr = 0x82BF1B88;
	sub_82D20AE0(ctx, base);
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,-27720(r7)
	PPC_STORE_U8(ctx.r7.u32 + -27720, ctx.r30.u8);
	// bl 0x83104938
	ctx.lr = 0x82BF1BA8;
	sub_83104938(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1bb8
	if (cr6.eq) goto loc_82BF1BB8;
	// bl 0x83103b18
	ctx.lr = 0x82BF1BB8;
	sub_83103B18(ctx, base);
loc_82BF1BB8:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82BF1BCC;
	sub_82595718(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82BF1BD8:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BF1BF4;
	sub_8259CC28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cda1a0
	ctx.lr = 0x82BF1C04;
	sub_82CDA1A0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf1c1c
	if (!cr6.lt) goto loc_82BF1C1C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82BF1C1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x82BF1C24;
	sub_83104938(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf1c44
	if (cr6.eq) goto loc_82BF1C44;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83103b18
	ctx.lr = 0x82BF1C44;
	sub_83103B18(ctx, base);
loc_82BF1C44:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf1c60
	if (cr6.lt) goto loc_82BF1C60;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BF1C60;
	sub_825952B8(ctx, base);
loc_82BF1C60:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// cmplwi cr6,r29,84
	cr6.compare<uint32_t>(ctx.r29.u32, 84, xer);
	// blt cr6,0x82bf1bd8
	if (cr6.lt) goto loc_82BF1BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee270
	ctx.lr = 0x82BF1C84;
	sub_82BEE270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1C98"))) PPC_WEAK_FUNC(sub_82BF1C98);
PPC_FUNC_IMPL(__imp__sub_82BF1C98) {
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
	// bl 0x82a87518
	ctx.lr = 0x82BF1CB8;
	sub_82A87518(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf1cd0
	if (cr6.eq) goto loc_82BF1CD0;
	// bl 0x82416268
	ctx.lr = 0x82BF1CCC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BF1CD0:
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

__attribute__((alias("__imp__sub_82BF1CE8"))) PPC_WEAK_FUNC(sub_82BF1CE8);
PPC_FUNC_IMPL(__imp__sub_82BF1CE8) {
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
	ctx.lr = 0x82BF1CF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,11236
	ctx.r27.s64 = ctx.r11.s64 + 11236;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r9,r27,-32
	ctx.r9.s64 = ctx.r27.s64 + -32;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82bf1d28
	if (cr6.eq) goto loc_82BF1D28;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82bf1d2c
	goto loc_82BF1D2C;
loc_82BF1D28:
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82BF1D2C:
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x82bf1d40
	if (cr6.eq) goto loc_82BF1D40;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82BF1D40:
	// clrlwi r24,r23,24
	ctx.r24.u64 = ctx.r23.u32 & 0xFF;
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82bf1d58
	if (cr6.eq) goto loc_82BF1D58;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82bf1e60
	if (cr6.eq) goto loc_82BF1E60;
loc_82BF1D58:
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82BF1D6C:
	// lwz r11,220(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 220);
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1e54
	if (cr6.eq) goto loc_82BF1E54;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF1DA0;
	sub_82D2AEC8(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82bf1e54
	if (cr6.eq) goto loc_82BF1E54;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BF1DB8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf1db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF1DB8;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573118
	ctx.lr = 0x82BF1DDC;
	sub_82573118(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82BF1DF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf1df0
	if (!cr6.eq) goto loc_82BF1DF0;
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
	ctx.lr = 0x82BF1E18;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF1E2C;
	sub_82D291E0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf1e48
	if (cr6.lt) goto loc_82BF1E48;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82BF1E48;
	sub_825952B8(ctx, base);
loc_82BF1E48:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82BF1E54:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82bf1d6c
	if (!cr0.eq) goto loc_82BF1D6C;
loc_82BF1E60:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1E68"))) PPC_WEAK_FUNC(sub_82BF1E68);
PPC_FUNC_IMPL(__imp__sub_82BF1E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF1E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,9958
	ctx.r31.s64 = ctx.r11.s64 + 9958;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r31,1334
	ctx.r4.s64 = ctx.r31.s64 + 1334;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1eb8
	if (cr6.eq) goto loc_82BF1EB8;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// addi r10,r31,430
	ctx.r10.s64 = ctx.r31.s64 + 430;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d29598
	ctx.lr = 0x82BF1EB8;
	sub_82D29598(ctx, base);
loc_82BF1EB8:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r4,r31,1346
	ctx.r4.s64 = ctx.r31.s64 + 1346;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1ED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf1fa0
	if (cr6.eq) goto loc_82BF1FA0;
	// lbz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// addi r11,r31,530
	ctx.r11.s64 = ctx.r31.s64 + 530;
	// addi r9,r31,530
	ctx.r9.s64 = ctx.r31.s64 + 530;
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r8,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82BF1F08;
	sub_837B0C10(ctx, base);
	// lis r4,40
	ctx.r4.s64 = 2621440;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// ori r4,r4,197
	ctx.r4.u64 = ctx.r4.u64 | 197;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82BF1F20;
	sub_82D042A8(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x82bf1f34
	if (!cr6.lt) goto loc_82BF1F34;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82BF1F34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82BF1F3C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF1F50;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf1f70
	if (cr6.lt) goto loc_82BF1F70;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BF1F70;
	sub_825952B8(ctx, base);
loc_82BF1F70:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// blt cr6,0x82bf1fa0
	if (cr6.lt) goto loc_82BF1FA0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BF1FA0;
	sub_825952B8(ctx, base);
loc_82BF1FA0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1FA8"))) PPC_WEAK_FUNC(sub_82BF1FA8);
PPC_FUNC_IMPL(__imp__sub_82BF1FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BF1FB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,11328
	ctx.r31.s64 = ctx.r11.s64 + 11328;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1FE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82BF1FFC:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82bf1ffc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF1FFC;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r4,r31,-1369
	ctx.r4.s64 = ctx.r31.s64 + -1369;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82BF2024;
	sub_8259CC28(ctx, base);
	// lis r4,40
	ctx.r4.s64 = 2621440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,195
	ctx.r4.u64 = ctx.r4.u64 | 195;
	// bl 0x82d04220
	ctx.lr = 0x82BF2034;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf2048
	if (!cr6.lt) goto loc_82BF2048;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
loc_82BF2048:
	// lbz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// addi r10,r31,-668
	ctx.r10.s64 = ctx.r31.s64 + -668;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82573118
	ctx.lr = 0x82BF2068;
	sub_82573118(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82bf20bc
	if (cr6.eq) goto loc_82BF20BC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BF2080;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF2094;
	sub_82D291E0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf20b0
	if (cr6.lt) goto loc_82BF20B0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82BF20B0;
	sub_825952B8(ctx, base);
loc_82BF20B0:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
loc_82BF20BC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82bf20d8
	if (cr6.eq) goto loc_82BF20D8;
	// bl 0x82bf0750
	ctx.lr = 0x82BF20D4;
	sub_82BF0750(ctx, base);
	// b 0x82bf20dc
	goto loc_82BF20DC;
loc_82BF20D8:
	// bl 0x82beea10
	ctx.lr = 0x82BF20DC;
	sub_82BEEA10(ctx, base);
loc_82BF20DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beffe0
	ctx.lr = 0x82BF20E4;
	sub_82BEFFE0(ctx, base);
	// lbz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 300);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82bf20fc
	if (cr6.eq) goto loc_82BF20FC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BF20FC:
	// bl 0x82beec28
	ctx.lr = 0x82BF2100;
	sub_82BEEC28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf211c
	if (cr6.lt) goto loc_82BF211C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BF211C;
	sub_825952B8(ctx, base);
loc_82BF211C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2124"))) PPC_WEAK_FUNC(sub_82BF2124);
PPC_FUNC_IMPL(__imp__sub_82BF2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF2128"))) PPC_WEAK_FUNC(sub_82BF2128);
PPC_FUNC_IMPL(__imp__sub_82BF2128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF2130;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82BF2154;
	sub_82572FA0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf2178
	if (!cr6.eq) goto loc_82BF2178;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF216C;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF2178:
	// li r11,27
	ctx.r11.s64 = 27;
	// lhz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// lhz r9,406(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// bl 0x82595718
	ctx.lr = 0x82BF21A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf21b0
	if (cr6.eq) goto loc_82BF21B0;
	// bl 0x82cd9350
	ctx.lr = 0x82BF21AC;
	sub_82CD9350(ctx, base);
	// b 0x82bf21b4
	goto loc_82BF21B4;
loc_82BF21B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BF21B4:
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cd9238
	ctx.lr = 0x82BF21C4;
	sub_82CD9238(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd9268
	ctx.lr = 0x82BF21D0;
	sub_82CD9268(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd9278
	ctx.lr = 0x82BF21DC;
	sub_82CD9278(ctx, base);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd9340
	ctx.lr = 0x82BF21E4;
	sub_82CD9340(ctx, base);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// sth r29,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r29.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r29.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r29,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r29.u16);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd94a8
	ctx.lr = 0x82BF2204;
	sub_82CD94A8(ctx, base);
	// lbz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 296);
	// lbz r10,297(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 297);
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,298(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 298);
	// lbz r7,299(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 299);
	// li r5,0
	ctx.r5.s64 = 0;
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// bl 0x82bef868
	ctx.lr = 0x82BF2244;
	sub_82BEF868(ctx, base);
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bf2264
	if (cr6.eq) goto loc_82BF2264;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2264
	if (cr6.eq) goto loc_82BF2264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cd9e50
	ctx.lr = 0x82BF2264;
	sub_82CD9E50(ctx, base);
loc_82BF2264:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r30,r11,11244
	ctx.r30.s64 = ctx.r11.s64 + 11244;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF2298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1ce8
	ctx.lr = 0x82BF22A8;
	sub_82BF1CE8(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BF22C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BF22E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d294d0
	ctx.lr = 0x82BF22E8;
	sub_82D294D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BF22F0;
	sub_82D1C1A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bf24ec
	if (!cr6.eq) goto loc_82BF24EC;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bf23fc
	if (cr6.eq) goto loc_82BF23FC;
	// bl 0x82d1a998
	ctx.lr = 0x82BF2310;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2320;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2330;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2344;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2354;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2368;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2378;
	sub_82D19788(ctx, base);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r30,r11,319
	ctx.r30.u64 = ctx.r11.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2390;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF23A0;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF23B0;
	sub_82D20EB8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF23C8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF23D8;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF23E8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF23F8;
	sub_82D20EB8(ctx, base);
	// b 0x82bf24fc
	goto loc_82BF24FC;
loc_82BF23FC:
	// bl 0x82d1a998
	ctx.lr = 0x82BF2400;
	sub_82D1A998(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2410;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2420;
	sub_82D19788(ctx, base);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,97
	ctx.r5.u64 = ctx.r5.u64 | 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2434;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2444;
	sub_82D19788(ctx, base);
	// lis r5,41
	ctx.r5.s64 = 2686976;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2458;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2468;
	sub_82D19788(ctx, base);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r30,r11,319
	ctx.r30.u64 = ctx.r11.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF2480;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF2490;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF24A0;
	sub_82D20EB8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF24B8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF24C8;
	sub_82D20EB8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF24D8;
	sub_82D19788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF24E8;
	sub_82D20EB8(ctx, base);
	// b 0x82bf24fc
	goto loc_82BF24FC;
loc_82BF24EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bef488
	ctx.lr = 0x82BF24FC;
	sub_82BEF488(ctx, base);
loc_82BF24FC:
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF2510;
	sub_82BF1FA8(ctx, base);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x835410c0
	ctx.lr = 0x82BF2518;
	sub_835410C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// sth r29,384(r31)
	PPC_STORE_U16(ctx.r31.u32 + 384, ctx.r29.u16);
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// sth r29,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r29.u16);
	// bl 0x82befe40
	ctx.lr = 0x82BF2544;
	sub_82BEFE40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF2550;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF2560;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF256C;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2578"))) PPC_WEAK_FUNC(sub_82BF2578);
PPC_FUNC_IMPL(__imp__sub_82BF2578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF2580;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf26f8
	if (cr6.eq) goto loc_82BF26F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,11712
	ctx.r31.s64 = ctx.r11.s64 + 11712;
	// addi r11,r31,-144
	ctx.r11.s64 = ctx.r31.s64 + -144;
	// addi r10,r31,-132
	ctx.r10.s64 = ctx.r31.s64 + -132;
	// addi r9,r31,-120
	ctx.r9.s64 = ctx.r31.s64 + -120;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r31,-108
	ctx.r8.s64 = ctx.r31.s64 + -108;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r7,r31,-96
	ctx.r7.s64 = ctx.r31.s64 + -96;
	// addi r6,r31,-84
	ctx.r6.s64 = ctx.r31.s64 + -84;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r5,r31,-72
	ctx.r5.s64 = ctx.r31.s64 + -72;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r10,r31,-48
	ctx.r10.s64 = ctx.r31.s64 + -48;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r9,r31,-36
	ctx.r9.s64 = ctx.r31.s64 + -36;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x82d19bc0
	ctx.lr = 0x82BF25F8;
	sub_82D19BC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf26f8
	if (cr6.eq) goto loc_82BF26F8;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r28,132(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82BF2614;
	sub_82D2B608(ctx, base);
	// subf r28,r28,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d21408
	ctx.lr = 0x82BF262C;
	sub_82D21408(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf26d4
	if (cr6.eq) goto loc_82BF26D4;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// addi r6,r31,-24
	ctx.r6.s64 = ctx.r31.s64 + -24;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r5,r31,-20
	ctx.r5.s64 = ctx.r31.s64 + -20;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x82573118
	ctx.lr = 0x82BF2660;
	sub_82573118(ctx, base);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF267C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// bl 0x82d33db0
	ctx.lr = 0x82BF2688;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BF26A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf26d4
	if (cr6.eq) goto loc_82BF26D4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82BF26B8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF26CC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82BF26D4;
	sub_8387E8E0(ctx, base);
loc_82BF26D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF26F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF26F8:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2700"))) PPC_WEAK_FUNC(sub_82BF2700);
PPC_FUNC_IMPL(__imp__sub_82BF2700) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// bne cr6,0x82bf2780
	if (!cr6.eq) goto loc_82BF2780;
	// bl 0x82d19ba0
	ctx.lr = 0x82BF2724;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf2780
	if (!cr6.eq) goto loc_82BF2780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82BF2734;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82bf2778
	if (cr6.eq) goto loc_82BF2778;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BF275C;
	sub_82D1EBF8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF2774;
	sub_82BF1FA8(ctx, base);
	// b 0x82bf2794
	goto loc_82BF2794;
loc_82BF2778:
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x82bf2790
	goto loc_82BF2790;
loc_82BF2780:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82bf2794
	if (!cr6.eq) goto loc_82BF2794;
	// li r11,20
	ctx.r11.s64 = 20;
loc_82BF2790:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BF2794:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82BF27A0;
	sub_82D19648(ctx, base);
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

__attribute__((alias("__imp__sub_82BF27B4"))) PPC_WEAK_FUNC(sub_82BF27B4);
PPC_FUNC_IMPL(__imp__sub_82BF27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF27B8"))) PPC_WEAK_FUNC(sub_82BF27B8);
PPC_FUNC_IMPL(__imp__sub_82BF27B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,300(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 300);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r11.u8);
	// b 0x82bf1fa8
	sub_82BF1FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF27E8"))) PPC_WEAK_FUNC(sub_82BF27E8);
PPC_FUNC_IMPL(__imp__sub_82BF27E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF27EC"))) PPC_WEAK_FUNC(sub_82BF27EC);
PPC_FUNC_IMPL(__imp__sub_82BF27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF27F0"))) PPC_WEAK_FUNC(sub_82BF27F0);
PPC_FUNC_IMPL(__imp__sub_82BF27F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BF27F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf2a54
	if (cr6.eq) goto loc_82BF2A54;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82bee890
	ctx.lr = 0x82BF2820;
	sub_82BEE890(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r27,r11,-37
	ctx.r27.s64 = ctx.r11.s64 + -37;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bgt cr6,0x82bf2850
	if (cr6.gt) goto loc_82BF2850;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf2844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF2844;
	// bdzf 4*cr6+eq,0x82bf284c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF284C;
	// bne cr6,0x82bf284c
	if (!cr6.eq) goto loc_82BF284C;
loc_82BF2844:
	// lhz r30,2(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// b 0x82bf2850
	goto loc_82BF2850;
loc_82BF284C:
	// lhz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_82BF2850:
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82bee790
	ctx.lr = 0x82BF288C;
	sub_82BEE790(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf2a54
	if (!cr6.eq) goto loc_82BF2A54;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bgt cr6,0x82bf2900
	if (cr6.gt) goto loc_82BF2900;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf28b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF28B4;
	// bdzf 4*cr6+eq,0x82bf28dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF28DC;
	// bne cr6,0x82bf28dc
	if (!cr6.eq) goto loc_82BF28DC;
loc_82BF28B4:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// bl 0x82bef940
	ctx.lr = 0x82BF28D4;
	sub_82BEF940(ctx, base);
	// sth r3,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r3.u16);
	// b 0x82bf2900
	goto loc_82BF2900;
loc_82BF28DC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// bl 0x82bef940
	ctx.lr = 0x82BF28FC;
	sub_82BEF940(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
loc_82BF2900:
	// clrlwi r30,r25,24
	ctx.r30.u64 = ctx.r25.u32 & 0xFF;
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82bf291c
	if (!cr6.eq) goto loc_82BF291C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BF291C:
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF2920;
	sub_82BF1FA8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf2a48
	if (cr6.eq) goto loc_82BF2A48;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bgt cr6,0x82bf2a40
	if (cr6.gt) goto loc_82BF2A40;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf2990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF2990;
	// bdzf 4*cr6+eq,0x82bf29dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF29DC;
	// bne cr6,0x82bf2a04
	if (!cr6.eq) goto loc_82BF2A04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee638
	ctx.lr = 0x82BF294C;
	sub_82BEE638(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lfs f13,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82beffe0
	ctx.lr = 0x82BF2984;
	sub_82BEFFE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BF2990:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee638
	ctx.lr = 0x82BF2998;
	sub_82BEE638(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lfs f13,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f0,12488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82beffe0
	ctx.lr = 0x82BF29D0;
	sub_82BEFFE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BF29DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82bee638
	ctx.lr = 0x82BF29F0;
	sub_82BEE638(ctx, base);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82bf2a28
	goto loc_82BF2A28;
loc_82BF2A04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,12488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x82bee638
	ctx.lr = 0x82BF2A18;
	sub_82BEE638(ctx, base);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF2A28:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f9,276(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
loc_82BF2A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beffe0
	ctx.lr = 0x82BF2A48;
	sub_82BEFFE0(ctx, base);
loc_82BF2A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BF2A54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF2A60"))) PPC_WEAK_FUNC(sub_82BF2A60);
PPC_FUNC_IMPL(__imp__sub_82BF2A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BF2A68;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce75c
	ctx.lr = 0x82BF2A70;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8353b1d8
	ctx.lr = 0x82BF2A7C;
	sub_8353B1D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf2b5c
	if (cr6.eq) goto loc_82BF2B5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2A9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2ae8
	if (cr6.eq) goto loc_82BF2AE8;
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf2acc
	if (cr6.eq) goto loc_82BF2ACC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd9448
	ctx.lr = 0x82BF2ABC;
	sub_82CD9448(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82BF2AC4;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
loc_82BF2ACC:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7a8
	ctx.lr = 0x82BF2AE4;
	__restfpr_21(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BF2AE8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2B00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2b70
	if (cr6.eq) goto loc_82BF2B70;
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d31b0
	ctx.lr = 0x82BF2B18;
	sub_835D31B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8200
	ctx.lr = 0x82BF2B24;
	sub_831F8200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd7e88
	ctx.lr = 0x82BF2B34;
	sub_82CD7E88(ctx, base);
	// lbz r11,303(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82bf2b4c
	if (cr6.lt) goto loc_82BF2B4C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82BF2B4C:
	// stb r11,303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 303, ctx.r11.u8);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd6bf0
	ctx.lr = 0x82BF2B5C;
	sub_82CD6BF0(ctx, base);
loc_82BF2B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7a8
	ctx.lr = 0x82BF2B6C;
	__restfpr_21(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BF2B70:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2bcc
	if (cr6.eq) goto loc_82BF2BCC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19840
	ctx.lr = 0x82BF2BA0;
	sub_82D19840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf2bcc
	if (cr6.eq) goto loc_82BF2BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee438
	ctx.lr = 0x82BF2BB0;
	sub_82BEE438(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7a8
	ctx.lr = 0x82BF2BC8;
	__restfpr_21(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82BF2BCC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2BE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f23,-10804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f1,f23
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF2C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f0,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// lfs f25,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f26,f25
	cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// bne cr6,0x82bf2c28
	if (!cr6.eq) goto loc_82BF2C28;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bf2c2c
	if (cr6.eq) goto loc_82BF2C2C;
loc_82BF2C28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BF2C2C:
	// lhz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// fmr f22,f25
	ctx.f22.f64 = ctx.f25.f64;
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// lfs f31,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// neg r3,r5
	ctx.r3.s64 = -ctx.r5.s64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// li r26,0
	ctx.r26.s64 = 0;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// frsp f29,f10
	ctx.f29.f64 = double(float(ctx.f10.f64));
	// beq cr6,0x82bf2d24
	if (cr6.eq) goto loc_82BF2D24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f26
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f10,380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// addi r30,r31,376
	ctx.r30.s64 = ctx.r31.s64 + 376;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// addi r4,r31,380
	ctx.r4.s64 = ctx.r31.s64 + 380;
	// lfs f30,2952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f30.f64 = double(temp.f32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82bf2ce8
	if (!cr6.lt) goto loc_82BF2CE8;
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x82bf2cf4
	goto loc_82BF2CF4;
loc_82BF2CE8:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x82bf2d08
	if (!cr6.gt) goto loc_82BF2D08;
	// li r5,38
	ctx.r5.s64 = 38;
loc_82BF2CF4:
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF2D04;
	sub_82BF27F0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BF2D08:
	// fcmpu cr6,f26,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f25.f64);
	// ble cr6,0x82bf2d18
	if (!cr6.gt) goto loc_82BF2D18;
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82bf2e9c
	goto loc_82BF2E9C;
loc_82BF2D18:
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// bge cr6,0x82bf2eb4
	if (!cr6.lt) goto loc_82BF2EB4;
	// b 0x82bf2e98
	goto loc_82BF2E98;
loc_82BF2D24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f26,20056(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82bf2d84
	if (cr6.eq) goto loc_82BF2D84;
	// lfs f0,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r31,380
	ctx.r30.s64 = ctx.r31.s64 + 380;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF2D7C;
	sub_82BEE820(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x82bf2dd8
	goto loc_82BF2DD8;
loc_82BF2D84:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2D9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2df0
	if (cr6.eq) goto loc_82BF2DF0;
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r31,380
	ctx.r30.s64 = ctx.r31.s64 + 380;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF2DD4;
	sub_82BEE820(ctx, base);
	// li r5,38
	ctx.r5.s64 = 38;
loc_82BF2DD8:
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF2DEC;
	sub_82BF27F0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BF2DF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2E08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2e48
	if (cr6.eq) goto loc_82BF2E48;
	// lfs f0,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,376
	ctx.r30.s64 = ctx.r31.s64 + 376;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF2E40;
	sub_82BEE820(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82bf2e9c
	goto loc_82BF2E9C;
loc_82BF2E48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF2E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf2eb4
	if (cr6.eq) goto loc_82BF2EB4;
	// lfs f0,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,376
	ctx.r30.s64 = ctx.r31.s64 + 376;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF2E98;
	sub_82BEE820(ctx, base);
loc_82BF2E98:
	// li r5,39
	ctx.r5.s64 = 39;
loc_82BF2E9C:
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF2EB0;
	sub_82BF27F0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BF2EB4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f24,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,-11416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11416);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x82bf2edc
	if (!cr6.eq) goto loc_82BF2EDC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3064
	if (cr6.eq) goto loc_82BF3064;
loc_82BF2EDC:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x835410c0
	ctx.lr = 0x82BF2EE4;
	sub_835410C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82638f20
	ctx.lr = 0x82BF2F2C;
	sub_82638F20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fabs f30,f10
	ctx.f30.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f27,f9
	ctx.f27.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// bl 0x82927068
	ctx.lr = 0x82BF2F48;
	sub_82927068(ctx, base);
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fadds f8,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f29,f4,f26
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// bl 0x82927100
	ctx.lr = 0x82BF2F70;
	sub_82927100(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fadds f3,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f28,f13,f26
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// bl 0x831f81f8
	ctx.lr = 0x82BF2F98;
	sub_831F81F8(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f21,f11
	ctx.f21.f64 = double(float(ctx.f11.f64));
	// bl 0x82927068
	ctx.lr = 0x82BF2FB4;
	sub_82927068(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fsubs f10,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fnmsubs f30,f6,f24,f21
	ctx.f30.f64 = double(float(-(ctx.f6.f64 * ctx.f24.f64 - ctx.f21.f64)));
	// bl 0x82927058
	ctx.lr = 0x82BF2FDC;
	sub_82927058(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f21,f4
	ctx.f21.f64 = double(float(ctx.f4.f64));
	// bl 0x82927100
	ctx.lr = 0x82BF2FF8;
	sub_82927100(ctx, base);
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fsubs f3,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fnmsubs f13,f12,f24,f21
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f24.f64 - ctx.f21.f64)));
	// ble cr6,0x82bf302c
	if (!cr6.gt) goto loc_82BF302C;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82bf3038
	goto loc_82BF3038;
loc_82BF302C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82bf3038
	if (!cr6.lt) goto loc_82BF3038;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82BF3038:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bf304c
	if (!cr6.gt) goto loc_82BF304C;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82bf3058
	goto loc_82BF3058;
loc_82BF304C:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82bf3058
	if (!cr6.lt) goto loc_82BF3058;
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82BF3058:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd92a0
	ctx.lr = 0x82BF3064;
	sub_82CD92A0(ctx, base);
loc_82BF3064:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF307C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f30,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF3098;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f0,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f23.f64));
	// fcmpu cr6,f30,f25
	cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bne cr6,0x82bf30b0
	if (!cr6.eq) goto loc_82BF30B0;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bf30b4
	if (cr6.eq) goto loc_82BF30B4;
loc_82BF30B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BF30B4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,10476
	ctx.r30.s64 = ctx.r11.s64 + 10476;
	// beq cr6,0x82bf3120
	if (cr6.eq) goto loc_82BF3120;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,-28256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28256);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,-18360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18360);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82bf30f0
	if (!cr6.lt) goto loc_82BF30F0;
	// fmr f22,f10
	ctx.f22.f64 = ctx.f10.f64;
	// b 0x82bf30fc
	goto loc_82BF30FC;
loc_82BF30F0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bf3100
	if (!cr6.gt) goto loc_82BF3100;
	// fmr f22,f11
	ctx.f22.f64 = ctx.f11.f64;
loc_82BF30FC:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF3100:
	// fcmpu cr6,f30,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// bge cr6,0x82bf3110
	if (!cr6.lt) goto loc_82BF3110;
	// fmr f25,f11
	ctx.f25.f64 = ctx.f11.f64;
	// b 0x82bf311c
	goto loc_82BF311C;
loc_82BF3110:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x82bf3120
	if (!cr6.gt) goto loc_82BF3120;
	// fmr f25,f10
	ctx.f25.f64 = ctx.f10.f64;
loc_82BF311C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82BF3120:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf3138
	if (!cr6.eq) goto loc_82BF3138;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3350
	if (cr6.eq) goto loc_82BF3350;
loc_82BF3138:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82638f20
	ctx.lr = 0x82BF3140;
	sub_82638F20(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,-6668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6668);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f25
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f25.f64));
	// fadds f11,f11,f22
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f22.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bf3198
	if (!cr6.gt) goto loc_82BF3198;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82bf31a4
	goto loc_82BF31A4;
loc_82BF3198:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82bf31a4
	if (!cr6.lt) goto loc_82BF31A4;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82BF31A4:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82bf31b4
	if (!cr6.gt) goto loc_82BF31B4;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82bf31c0
	goto loc_82BF31C0;
loc_82BF31B4:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82bf31c0
	if (!cr6.lt) goto loc_82BF31C0;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82BF31C0:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x835410c0
	ctx.lr = 0x82BF31C8;
	sub_835410C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f27,f13
	ctx.f27.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// bl 0x82927068
	ctx.lr = 0x82BF3208;
	sub_82927068(ctx, base);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fadds f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f29,f8,f26
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// bl 0x82927100
	ctx.lr = 0x82BF3230;
	sub_82927100(ctx, base);
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fadds f7,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f28,f3,f26
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// bl 0x831f81f8
	ctx.lr = 0x82BF3258;
	sub_831F81F8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f26,f1
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// bl 0x82927068
	ctx.lr = 0x82BF3274;
	sub_82927068(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fnmsubs f30,f10,f24,f26
	ctx.f30.f64 = double(float(-(ctx.f10.f64 * ctx.f24.f64 - ctx.f26.f64)));
	// bl 0x82927058
	ctx.lr = 0x82BF329C;
	sub_82927058(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f26,f8
	ctx.f26.f64 = double(float(ctx.f8.f64));
	// bl 0x82927100
	ctx.lr = 0x82BF32B8;
	sub_82927100(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fsubs f7,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fnmsubs f13,f3,f24,f26
	ctx.f13.f64 = double(float(-(ctx.f3.f64 * ctx.f24.f64 - ctx.f26.f64)));
	// ble cr6,0x82bf32ec
	if (!cr6.gt) goto loc_82BF32EC;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x82bf32f8
	goto loc_82BF32F8;
loc_82BF32EC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82bf32f8
	if (!cr6.lt) goto loc_82BF32F8;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82BF32F8:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bf330c
	if (!cr6.gt) goto loc_82BF330C;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x82bf3318
	goto loc_82BF3318;
loc_82BF330C:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82bf3318
	if (!cr6.lt) goto loc_82BF3318;
	// stfs f28,116(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82BF3318:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd92d8
	ctx.lr = 0x82BF3324;
	sub_82CD92D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd92a0
	ctx.lr = 0x82BF3330;
	sub_82CD92A0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1ce8
	ctx.lr = 0x82BF3350;
	sub_82BF1CE8(ctx, base);
loc_82BF3350:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf337c
	if (cr6.eq) goto loc_82BF337C;
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x82bf33a4
	goto loc_82BF33A4;
loc_82BF337C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf33a8
	if (cr6.eq) goto loc_82BF33A8;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82BF33A4:
	// li r23,1
	ctx.r23.s64 = 1;
loc_82BF33A8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf33f8
	if (cr6.eq) goto loc_82BF33F8;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x835d3178
	ctx.lr = 0x82BF33BC;
	sub_835D3178(ctx, base);
	// add r30,r3,r24
	ctx.r30.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmpwi cr6,r30,360
	cr6.compare<int32_t>(ctx.r30.s32, 360, xer);
	// blt cr6,0x82bf33d0
	if (cr6.lt) goto loc_82BF33D0;
	// addi r30,r30,-360
	ctx.r30.s64 = ctx.r30.s64 + -360;
	// b 0x82bf33dc
	goto loc_82BF33DC;
loc_82BF33D0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82bf33dc
	if (!cr6.lt) goto loc_82BF33DC;
	// addi r30,r30,360
	ctx.r30.s64 = ctx.r30.s64 + 360;
loc_82BF33DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x82cd9300
	ctx.lr = 0x82BF33E8;
	sub_82CD9300(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee6b0
	ctx.lr = 0x82BF33F8;
	sub_82BEE6B0(ctx, base);
loc_82BF33F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7a8
	ctx.lr = 0x82BF3408;
	__restfpr_21(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF340C"))) PPC_WEAK_FUNC(sub_82BF340C);
PPC_FUNC_IMPL(__imp__sub_82BF340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF3410"))) PPC_WEAK_FUNC(sub_82BF3410);
PPC_FUNC_IMPL(__imp__sub_82BF3410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82BF3418;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce778
	ctx.lr = 0x82BF3420;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x8353b1d8
	ctx.lr = 0x82BF3430;
	sub_8353B1D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee638
	ctx.lr = 0x82BF343C;
	sub_82BEE638(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x82bf345c
	if (!cr6.eq) goto loc_82BF345C;
loc_82BF3448:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF3458;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82BF345C:
	// lhz r11,370(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 368);
	// lfs f13,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r27,r31,368
	ctx.r27.s64 = ctx.r31.s64 + 368;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r30,r31,360
	ctx.r30.s64 = ctx.r31.s64 + 360;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// addi r29,r31,364
	ctx.r29.s64 = ctx.r31.s64 + 364;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f4,f6,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82d51e00
	ctx.lr = 0x82BF34BC;
	sub_82D51E00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf34dc
	if (cr6.eq) goto loc_82BF34DC;
	// bl 0x8308e078
	ctx.lr = 0x82BF34CC;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d514e0
	ctx.lr = 0x82BF34DC;
	sub_82D514E0(ctx, base);
loc_82BF34DC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF34F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3448
	if (!cr6.eq) goto loc_82BF3448;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF3534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// li r20,1
	ctx.r20.s64 = 1;
	// lfs f31,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x82bf3558
	if (!cr6.eq) goto loc_82BF3558;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bf355c
	if (cr6.eq) goto loc_82BF355C;
loc_82BF3558:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82BF355C:
	// lhz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// lis r24,-32222
	ctx.r24.s64 = -2111700992;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// li r26,0
	ctx.r26.s64 = 0;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// bne cr6,0x82bf3888
	if (!cr6.eq) goto loc_82BF3888;
	// clrlwi r21,r25,24
	ctx.r21.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x82bf3888
	if (!cr6.eq) goto loc_82BF3888;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF35B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf35ec
	if (cr6.eq) goto loc_82BF35EC;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26260(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF35E4;
	sub_82BEE820(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x82bf363c
	goto loc_82BF363C;
loc_82BF35EC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf3658
	if (cr6.eq) goto loc_82BF3658;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26260(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF3638;
	sub_82BEE820(ctx, base);
	// li r5,38
	ctx.r5.s64 = 38;
loc_82BF363C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF3650;
	sub_82BF27F0(ctx, base);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BF3658:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf36ac
	if (cr6.eq) goto loc_82BF36AC;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26260(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF36A4;
	sub_82BEE820(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82bf36fc
	goto loc_82BF36FC;
loc_82BF36AC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF36C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf3718
	if (cr6.eq) goto loc_82BF3718;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-26260(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF36F8;
	sub_82BEE820(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
loc_82BF36FC:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF3710;
	sub_82BF27F0(ctx, base);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BF3718:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf39c0
	if (cr6.eq) goto loc_82BF39C0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3780
	if (cr6.eq) goto loc_82BF3780;
	// lhz r10,370(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,272(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fmuls f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// stfs f5,276(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
loc_82BF3780:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82bee700
	ctx.lr = 0x82BF37AC;
	sub_82BEE700(ctx, base);
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lfs f0,-26260(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lfs f6,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// fmuls f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f1,96(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,15760(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 15760);
	// fctiwz f10,f3
	ctx.f10.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fctiwz f8,f2
	ctx.f8.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fadd f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 + ctx.f13.f64;
	// fadd f13,f4,f13
	ctx.f13.f64 = ctx.f4.f64 + ctx.f13.f64;
	// fadds f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f8,f12,f28
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fmuls f7,f11,f28
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f7,276(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// b 0x82bf39c0
	goto loc_82BF39C0;
loc_82BF3888:
	// clrlwi r21,r25,24
	ctx.r21.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x82bf3934
	if (!cr6.eq) goto loc_82BF3934;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82bee820
	ctx.lr = 0x82BF38C4;
	sub_82BEE820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,2952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x82bf38dc
	if (!cr6.lt) goto loc_82BF38DC;
	// li r5,37
	ctx.r5.s64 = 37;
	// b 0x82bf38e8
	goto loc_82BF38E8;
loc_82BF38DC:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82bf38fc
	if (!cr6.gt) goto loc_82BF38FC;
	// li r5,38
	ctx.r5.s64 = 38;
loc_82BF38E8:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF38FC;
	sub_82BF27F0(ctx, base);
loc_82BF38FC:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x82bf390c
	if (!cr6.gt) goto loc_82BF390C;
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82bf3918
	goto loc_82BF3918;
loc_82BF390C:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bge cr6,0x82bf392c
	if (!cr6.lt) goto loc_82BF392C;
	// li r5,39
	ctx.r5.s64 = 39;
loc_82BF3918:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf27f0
	ctx.lr = 0x82BF392C;
	sub_82BF27F0(ctx, base);
loc_82BF392C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x82bf3938
	goto loc_82BF3938;
loc_82BF3934:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82BF3938:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3994
	if (cr6.eq) goto loc_82BF3994;
	// lhz r11,370(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 370);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,276(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fmuls f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// stfs f5,272(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
loc_82BF3994:
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82bee700
	ctx.lr = 0x82BF39C0;
	sub_82BEE700(ctx, base);
loc_82BF39C0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82bf39dc
	if (!cr6.eq) goto loc_82BF39DC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf39dc
	if (!cr6.eq) goto loc_82BF39DC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82bf39e4
	if (cr6.eq) goto loc_82BF39E4;
loc_82BF39DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beff58
	ctx.lr = 0x82BF39E4;
	sub_82BEFF58(ctx, base);
loc_82BF39E4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF39FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf3a18
	if (cr6.eq) goto loc_82BF3A18;
	// lbz r11,306(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 306);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf3a18
	if (!cr6.eq) goto loc_82BF3A18;
	// stb r20,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r20.u8);
loc_82BF3A18:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf3b54
	if (cr6.eq) goto loc_82BF3B54;
	// lbz r11,306(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 306);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3b54
	if (cr6.eq) goto loc_82BF3B54;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,302(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 302);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bne cr6,0x82bf3ae8
	if (!cr6.eq) goto loc_82BF3AE8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3aa8
	if (!cr6.eq) goto loc_82BF3AA8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3aac
	if (cr6.eq) goto loc_82BF3AAC;
loc_82BF3AA8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82BF3AAC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3b3c
	if (cr6.eq) goto loc_82BF3B3C;
	// addi r7,r31,296
	ctx.r7.s64 = ctx.r31.s64 + 296;
	// lbz r6,301(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 301);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cd8858
	ctx.lr = 0x82BF3AD0;
	sub_82CD8858(ctx, base);
	// stb r20,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r20.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF3AE4;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82BF3AE8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf3b20
	if (!cr6.eq) goto loc_82BF3B20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f1,-26260(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r6,301(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 301);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd8960
	ctx.lr = 0x82BF3B08;
	sub_82CD8960(ctx, base);
	// stb r20,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r20.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF3B1C;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82BF3B20:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bf3b3c
	if (!cr6.eq) goto loc_82BF3B3C;
	// addi r6,r31,296
	ctx.r6.s64 = ctx.r31.s64 + 296;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cd8330
	ctx.lr = 0x82BF3B3C;
	sub_82CD8330(ctx, base);
loc_82BF3B3C:
	// stb r20,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r20.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF3B50;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82BF3B54:
	// lbz r11,305(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 305);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3bbc
	if (cr6.eq) goto loc_82BF3BBC;
	// lbz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,303(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r10,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r10.u8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bf3b80
	if (!cr6.lt) goto loc_82BF3B80;
	// stb r11,303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 303, ctx.r11.u8);
loc_82BF3B80:
	// lbz r11,303(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 303, ctx.r10.u8);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// ble cr6,0x82bf3ba0
	if (!cr6.gt) goto loc_82BF3BA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,303(r31)
	PPC_STORE_U8(ctx.r31.u32 + 303, ctx.r11.u8);
loc_82BF3BA0:
	// lbz r11,303(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// bl 0x82cd6bf0
	ctx.lr = 0x82BF3BB0;
	sub_82CD6BF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BF3BBC;
	sub_82BEE540(ctx, base);
loc_82BF3BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF3BCC;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3BD0"))) PPC_WEAK_FUNC(sub_82BF3BD0);
PPC_FUNC_IMPL(__imp__sub_82BF3BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BF3BD8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf3c10
	if (cr6.eq) goto loc_82BF3C10;
	// bl 0x83103bb8
	ctx.lr = 0x82BF3BF4;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf3c10
	if (!cr6.eq) goto loc_82BF3C10;
loc_82BF3C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BF3C10:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BF3C18:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf3c3c
	if (cr6.eq) goto loc_82BF3C3C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83103bb8
	ctx.lr = 0x82BF3C30;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf3c00
	if (cr6.eq) goto loc_82BF3C00;
loc_82BF3C3C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,84
	cr6.compare<uint32_t>(ctx.r30.u32, 84, xer);
	// blt cr6,0x82bf3c18
	if (cr6.lt) goto loc_82BF3C18;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r11,21944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x83089ca0
	ctx.lr = 0x82BF3C5C;
	sub_83089CA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf3c00
	if (!cr6.eq) goto loc_82BF3C00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3C7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf3c00
	if (cr6.eq) goto loc_82BF3C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF3C90;
	sub_82D19A78(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beee18
	ctx.lr = 0x82BF3C9C;
	sub_82BEEE18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF3CA8;
	sub_82BEFD08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF3CB4;
	sub_82BEEC28(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r11,10976
	ctx.r28.s64 = ctx.r11.s64 + 10976;
	// addi r29,r28,-408
	ctx.r29.s64 = ctx.r28.s64 + -408;
loc_82BF3CC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3CD0;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF3CD8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf3d08
	if (cr6.eq) goto loc_82BF3D08;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-208
	ctx.r4.s64 = ctx.r28.s64 + -208;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3CF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf3d08
	if (cr6.eq) goto loc_82BF3D08;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82BF3D08;
	sub_82D29598(ctx, base);
loc_82BF3D08:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82bf3cc4
	if (cr6.lt) goto loc_82BF3CC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82BF3D28;
	sub_82D1ED60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3D34;
	sub_82D33DB0(ctx, base);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82BF3D50;
	sub_82D20F50(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r4,r28,-200
	ctx.r4.s64 = ctx.r28.s64 + -200;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3D6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BF3D90;
	sub_82D1EBF8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3D9C;
	sub_82D33DB0(ctx, base);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82BF3DB0;
	sub_82D1ED60(ctx, base);
	// lwz r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bf3e28
	if (cr6.eq) goto loc_82BF3E28;
	// addi r11,r28,-188
	ctx.r11.s64 = ctx.r28.s64 + -188;
	// addi r10,r28,-176
	ctx.r10.s64 = ctx.r28.s64 + -176;
	// addi r9,r28,-164
	ctx.r9.s64 = ctx.r28.s64 + -164;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// addi r8,r28,-152
	ctx.r8.s64 = ctx.r28.s64 + -152;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r7,r28,-140
	ctx.r7.s64 = ctx.r28.s64 + -140;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r8,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r7,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// addi r29,r1,320
	ctx.r29.s64 = ctx.r1.s64 + 320;
loc_82BF3DEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3DF8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf3e18
	if (cr6.eq) goto loc_82BF3E18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF3E18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82bf3dec
	if (cr6.lt) goto loc_82BF3DEC;
loc_82BF3E28:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF3E34;
	sub_82BEEEC0(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r25,15
	ctx.r25.s64 = 15;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf3f40
	if (cr6.eq) goto loc_82BF3F40;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82BF3E4C:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r28,-128
	ctx.r6.s64 = ctx.r28.s64 + -128;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addi r5,r28,-124
	ctx.r5.s64 = ctx.r28.s64 + -124;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x82573118
	ctx.lr = 0x82BF3E74;
	sub_82573118(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82BF3E78:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3E84;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-116
	ctx.r4.s64 = ctx.r28.s64 + -116;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF3E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf3f20
	if (cr6.eq) goto loc_82BF3F20;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82BF3EBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3ebc
	if (!cr6.eq) goto loc_82BF3EBC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BF3EE4;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF3EF8;
	sub_82D291E0(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf3f14
	if (cr6.lt) goto loc_82BF3F14;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82BF3F14;
	sub_825952B8(ctx, base);
loc_82BF3F14:
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
loc_82BF3F20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82bf3e78
	if (cr6.lt) goto loc_82BF3E78;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82bf3e4c
	if (cr6.lt) goto loc_82BF3E4C;
loc_82BF3F40:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf402c
	if (cr6.eq) goto loc_82BF402C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82BF3F50:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r28,-104
	ctx.r6.s64 = ctx.r28.s64 + -104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r28,-100
	ctx.r5.s64 = ctx.r28.s64 + -100;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82573118
	ctx.lr = 0x82BF3F70;
	sub_82573118(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82d33db0
	ctx.lr = 0x82BF3F7C;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-92
	ctx.r4.s64 = ctx.r28.s64 + -92;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF3F94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4018
	if (cr6.eq) goto loc_82BF4018;
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
loc_82BF3FB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf3fb4
	if (!cr6.eq) goto loc_82BF3FB4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BF3FDC;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82BF3FF0;
	sub_82D291E0(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf400c
	if (cr6.lt) goto loc_82BF400C;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82BF400C;
	sub_825952B8(ctx, base);
loc_82BF400C:
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
loc_82BF4018:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82bf3f50
	if (cr6.lt) goto loc_82BF3F50;
loc_82BF402C:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF4048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf405c
	if (cr6.eq) goto loc_82BF405C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF405C;
	sub_82D2AEC8(ctx, base);
loc_82BF405C:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF4078;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf408c
	if (cr6.eq) goto loc_82BF408C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF408C;
	sub_82D2AEC8(ctx, base);
loc_82BF408C:
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// addi r4,r28,-48
	ctx.r4.s64 = ctx.r28.s64 + -48;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r26,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r26.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x82BF40A8;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF40B0;
	sub_82D19A78(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf40c8
	if (!cr6.lt) goto loc_82BF40C8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82BF40C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF40D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4178
	if (cr6.eq) goto loc_82BF4178;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF4108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF4120;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d52060
	ctx.lr = 0x82BF412C;
	sub_82D52060(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// sth r7,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r7.u16);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lhz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// sth r6,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r6.u16);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f9,244(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// b 0x82bf418c
	goto loc_82BF418C;
loc_82BF4178:
	// li r11,450
	ctx.r11.s64 = 450;
	// stfs f31,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// sth r11,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r11.u16);
	// sth r11,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r11.u16);
loc_82BF418C:
	// lhz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// addi r29,r31,296
	ctx.r29.s64 = ctx.r31.s64 + 296;
	// lhz r10,406(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// sth r6,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r6.u16);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r10.u16);
	// bl 0x82bef868
	ctx.lr = 0x82BF41C8;
	sub_82BEF868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf08f0
	ctx.lr = 0x82BF41D0;
	sub_82BF08F0(ctx, base);
	// li r8,27
	ctx.r8.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82595718
	ctx.lr = 0x82BF41E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf41fc
	if (cr6.eq) goto loc_82BF41FC;
	// bl 0x82cd8bf0
	ctx.lr = 0x82BF41F4;
	sub_82CD8BF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82bf4200
	goto loc_82BF4200;
loc_82BF41FC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BF4200:
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befad0
	ctx.lr = 0x82BF420C;
	sub_82BEFAD0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r9,404(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r8,406(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// stfs f31,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stb r10,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r10.u8);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// srawi r7,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// srawi r5,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// beq cr6,0x82bf42b0
	if (cr6.eq) goto loc_82BF42B0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82cd6ec0
	ctx.lr = 0x82BF4280;
	sub_82CD6EC0(ctx, base);
	// rldicr r10,r26,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// ld r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r7,248(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// bl 0x82cd6ba8
	ctx.lr = 0x82BF42A4;
	sub_82CD6BA8(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd6f30
	ctx.lr = 0x82BF42B0;
	sub_82CD6F30(ctx, base);
loc_82BF42B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfs f0,7388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82BF42D0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF42E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4358
	if (cr6.eq) goto loc_82BF4358;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF4318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF4330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f10,264(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f9,268(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
loc_82BF4358:
	// lbz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// addi r9,r28,-488
	ctx.r9.s64 = ctx.r28.s64 + -488;
	// lhz r8,404(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 404);
	// addi r11,r28,-488
	ctx.r11.s64 = ctx.r28.s64 + -488;
	// rotlwi r7,r10,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lhz r6,406(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 406);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stb r26,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r26.u8);
	// stb r26,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r26.u8);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// stb r26,302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 302, ctx.r26.u8);
	// srawi r3,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 1;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f7,360(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// sth r26,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r26.u16);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// sth r26,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r26.u16);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// stfs f1,364(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF4418;
	sub_82BF1FA8(ctx, base);
	// stfs f31,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf3410
	ctx.lr = 0x82BF442C;
	sub_82BF3410(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF443C;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r5,r5,319
	ctx.r5.u64 = ctx.r5.u64 | 319;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF4450;
	sub_82D20EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef868
	ctx.lr = 0x82BF4460;
	sub_82BEF868(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF4470;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF4480;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF4490;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82BF44A0;
	sub_82D19788(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF44B4;
	sub_82BEF488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1e68
	ctx.lr = 0x82BF44BC;
	sub_82BF1E68(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF44D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,72(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BF44F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF4510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82bda618
	ctx.lr = 0x82BF4514;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4524
	if (cr6.eq) goto loc_82BF4524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bda498
	ctx.lr = 0x82BF4524;
	sub_82BDA498(ctx, base);
loc_82BF4524:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf4540
	if (cr6.lt) goto loc_82BF4540;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82BF4540;
	sub_825952B8(ctx, base);
loc_82BF4540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4550"))) PPC_WEAK_FUNC(sub_82BF4550);
PPC_FUNC_IMPL(__imp__sub_82BF4550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82BF4558;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf478c
	if (cr6.eq) goto loc_82BF478C;
	// li r20,0
	ctx.r20.s64 = 0;
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r20,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r20.u8);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r11,r10,10488
	ctx.r11.s64 = ctx.r10.s64 + 10488;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r22,r9,r11
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r19,r9,r8
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r19,r22
	ctx.r7.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r22.s32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bf18d8
	ctx.lr = 0x82BF45B0;
	sub_82BF18D8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x82BF45B8;
	sub_825832E8(ctx, base);
	// cmplw cr6,r22,r3
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bf45d4
	if (!cr6.lt) goto loc_82BF45D4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x82BF45C8;
	sub_825832E8(ctx, base);
	// subf r11,r22,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r22.s64;
	// rlwinm r24,r11,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82bf45d8
	goto loc_82BF45D8;
loc_82BF45D4:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82BF45D8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x82BF45E0;
	sub_825832F0(ctx, base);
	// cmplw cr6,r19,r3
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, xer);
	// bge cr6,0x82bf45fc
	if (!cr6.lt) goto loc_82BF45FC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x82BF45F0;
	sub_825832F0(ctx, base);
	// subf r11,r19,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r19.s64;
	// rlwinm r17,r11,31,1,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82bf4600
	goto loc_82BF4600;
loc_82BF45FC:
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_82BF4600:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x82bf4770
	if (cr6.lt) goto loc_82BF4770;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82bf4770
	if (cr6.lt) goto loc_82BF4770;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82dab6d0
	ctx.lr = 0x82BF4618;
	sub_82DAB6D0(ctx, base);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf. r18,r26,r11
	ctx.r18.s64 = ctx.r11.s64 - ctx.r26.s64;
	cr0.compare<int32_t>(ctx.r18.s32, 0, xer);
	// bne 0x82bf4638
	if (!cr0.eq) goto loc_82BF4638;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82BF4638;
	sub_831CC188(ctx, base);
loc_82BF4638:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x82BF4640;
	sub_825832E8(ctx, base);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// blt cr6,0x82bf4650
	if (cr6.lt) goto loc_82BF4650;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82BF4650:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x82BF4658;
	sub_825832F0(ctx, base);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, xer);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// blt cr6,0x82bf4668
	if (cr6.lt) goto loc_82BF4668;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82BF4668:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82bf46cc
	if (cr6.eq) goto loc_82BF46CC;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82BF4678:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82bf46bc
	if (cr6.eq) goto loc_82BF46BC;
	// add r29,r23,r17
	ctx.r29.u64 = ctx.r23.u64 + ctx.r17.u64;
loc_82BF4688:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x82BF4690;
	sub_825832E8(ctx, base);
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stwx r7,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r7.u32);
	// blt cr6,0x82bf4688
	if (cr6.lt) goto loc_82BF4688;
loc_82BF46BC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x82bf4678
	if (cr6.lt) goto loc_82BF4678;
loc_82BF46CC:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82BF46E4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4740
	if (cr6.eq) goto loc_82BF4740;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e877c8
	ctx.lr = 0x82BF46FC;
	sub_82E877C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x82BF4708;
	sub_825832D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// rlwinm r7,r22,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x835ebb28
	ctx.lr = 0x82BF4738;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bf4744
	goto loc_82BF4744;
loc_82BF4740:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82BF4744:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82BF474C;
	sub_82572FA0(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82bf478c
	if (cr6.eq) goto loc_82BF478C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82BF4768;
	sub_825952B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82BF4770:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf478c
	if (cr6.eq) goto loc_82BF478C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BF478C;
	sub_825952B8(ctx, base);
loc_82BF478C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4794"))) PPC_WEAK_FUNC(sub_82BF4794);
PPC_FUNC_IMPL(__imp__sub_82BF4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF4798"))) PPC_WEAK_FUNC(sub_82BF4798);
PPC_FUNC_IMPL(__imp__sub_82BF4798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF47A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r31.u8);
	// bl 0x8308e078
	ctx.lr = 0x82BF47BC;
	sub_8308E078(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r5,384
	ctx.r5.s64 = 384;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82BF47DC;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// bl 0x82cd69b0
	ctx.lr = 0x82BF47F4;
	sub_82CD69B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4808;
	sub_82572FA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf4550
	ctx.lr = 0x82BF4814;
	sub_82BF4550(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4824;
	sub_82572FA0(ctx, base);
	// lwz r3,176(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// addi r27,r29,176
	ctx.r27.s64 = ctx.r29.s64 + 176;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4844
	if (cr6.eq) goto loc_82BF4844;
	// bl 0x835eb7f0
	ctx.lr = 0x82BF4838;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4844;
	sub_82572FA0(ctx, base);
loc_82BF4844:
	// bl 0x83763ef8
	ctx.lr = 0x82BF4848;
	sub_83763EF8(ctx, base);
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf4940
	if (!cr6.eq) goto loc_82BF4940;
	// lwz r30,228(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82bf4b6c
	if (cr6.eq) goto loc_82BF4B6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a6e5e8
	ctx.lr = 0x82BF4870;
	sub_82A6E5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4880;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82572fa0
	ctx.lr = 0x82BF488C;
	sub_82572FA0(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF489C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa2888
	ctx.lr = 0x82BF48A8;
	sub_82AA2888(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r10,9957
	ctx.r11.s64 = ctx.r10.s64 + 9957;
	// addi r4,r11,-31
	ctx.r4.s64 = ctx.r11.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82BF48BC;
	sub_837B0C10(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,440
	ctx.r4.u64 = ctx.r4.u64 | 440;
	// bl 0x82d042a8
	ctx.lr = 0x82BF48CC;
	sub_82D042A8(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bf48e0
	if (!cr6.lt) goto loc_82BF48E0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82BF48E0:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x831d0b58
	ctx.lr = 0x82BF48F0;
	sub_831D0B58(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4900;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82BF4914;
	sub_8306AC18(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8307fe20
	ctx.lr = 0x82BF4934;
	sub_8307FE20(ctx, base);
	// stw r3,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82bf4b68
	goto loc_82BF4B68;
loc_82BF4940:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf4a30
	if (!cr6.eq) goto loc_82BF4A30;
	// lwz r30,232(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82bf4b6c
	if (cr6.eq) goto loc_82BF4B6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a6e5e8
	ctx.lr = 0x82BF4960;
	sub_82A6E5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4970;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82572fa0
	ctx.lr = 0x82BF497C;
	sub_82572FA0(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF498C;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa2888
	ctx.lr = 0x82BF4998;
	sub_82AA2888(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r10,9957
	ctx.r11.s64 = ctx.r10.s64 + 9957;
	// addi r4,r11,-30
	ctx.r4.s64 = ctx.r11.s64 + -30;
	// bl 0x837b0c10
	ctx.lr = 0x82BF49AC;
	sub_837B0C10(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,311
	ctx.r4.u64 = ctx.r4.u64 | 311;
	// bl 0x82d042a8
	ctx.lr = 0x82BF49BC;
	sub_82D042A8(ctx, base);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bf49d0
	if (!cr6.lt) goto loc_82BF49D0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82BF49D0:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x831d0b58
	ctx.lr = 0x82BF49E0;
	sub_831D0B58(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF49F0;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82BF4A04;
	sub_8306AC18(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8307fe20
	ctx.lr = 0x82BF4A24;
	sub_8307FE20(ctx, base);
	// stw r3,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82bf4b68
	goto loc_82BF4B68;
loc_82BF4A30:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf4b6c
	if (cr6.lt) goto loc_82BF4B6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837653c0
	ctx.lr = 0x82BF4A40;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4b6c
	if (cr6.eq) goto loc_82BF4B6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837653c0
	ctx.lr = 0x82BF4A50;
	sub_837653C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4b6c
	if (cr6.eq) goto loc_82BF4B6C;
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83072708
	ctx.lr = 0x82BF4A7C;
	sub_83072708(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4A8C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4A98;
	sub_82572FA0(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4AA8;
	sub_82572FA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83072a20
	ctx.lr = 0x82BF4AB8;
	sub_83072A20(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,9957
	ctx.r4.s64 = ctx.r10.s64 + 9957;
	// bl 0x837b0c10
	ctx.lr = 0x82BF4AC8;
	sub_837B0C10(ctx, base);
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// bl 0x82d042a8
	ctx.lr = 0x82BF4AD8;
	sub_82D042A8(ctx, base);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82bf4aec
	if (!cr6.lt) goto loc_82BF4AEC;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_82BF4AEC:
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x831d0b58
	ctx.lr = 0x82BF4AFC;
	sub_831D0B58(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x83072708
	ctx.lr = 0x82BF4B10;
	sub_83072708(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4B20;
	sub_82572FA0(ctx, base);
	// li r6,176
	ctx.r6.s64 = 176;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8306ac18
	ctx.lr = 0x82BF4B34;
	sub_8306AC18(ctx, base);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8307fe20
	ctx.lr = 0x82BF4B54;
	sub_8307FE20(ctx, base);
	// stw r3,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4B64;
	sub_82572FA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82BF4B68:
	// bl 0x8387e8e0
	ctx.lr = 0x82BF4B6C;
	sub_8387E8E0(ctx, base);
loc_82BF4B6C:
	// lwz r4,112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf4b80
	if (cr6.eq) goto loc_82BF4B80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83103100
	ctx.lr = 0x82BF4B80;
	sub_83103100(ctx, base);
loc_82BF4B80:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4B8C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4B98;
	sub_82572FA0(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4BA0"))) PPC_WEAK_FUNC(sub_82BF4BA0);
PPC_FUNC_IMPL(__imp__sub_82BF4BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF4BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,176(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4BC4;
	sub_82572FA0(ctx, base);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf4c60
	if (!cr6.eq) goto loc_82BF4C60;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BF4BE8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4c18
	if (cr6.eq) goto loc_82BF4C18;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,512
	ctx.r7.s64 = 512;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835eb768
	ctx.lr = 0x82BF4C10;
	sub_835EB768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82bf4c1c
	goto loc_82BF4C1C;
loc_82BF4C18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82BF4C1C:
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4C28;
	sub_82572FA0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82dab6d0
	ctx.lr = 0x82BF4C30;
	sub_82DAB6D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// bl 0x831cdcf0
	ctx.lr = 0x82BF4C3C;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf4550
	ctx.lr = 0x82BF4C48;
	sub_82BF4550(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4C54;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4C60;
	sub_82572FA0(ctx, base);
loc_82BF4C60:
	// bl 0x83763ef8
	ctx.lr = 0x82BF4C64;
	sub_83763EF8(ctx, base);
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf4ca0
	if (!cr6.eq) goto loc_82BF4CA0;
	// lwz r31,228(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82bf4d28
	if (cr6.eq) goto loc_82BF4D28;
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4C90;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa2888
	ctx.lr = 0x82BF4C9C;
	sub_82AA2888(ctx, base);
	// b 0x82bf4d28
	goto loc_82BF4D28;
loc_82BF4CA0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf4cd4
	if (!cr6.eq) goto loc_82BF4CD4;
	// lwz r31,232(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82bf4d28
	if (cr6.eq) goto loc_82BF4D28;
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF4CC4;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa2888
	ctx.lr = 0x82BF4CD0;
	sub_82AA2888(ctx, base);
	// b 0x82bf4d28
	goto loc_82BF4D28;
loc_82BF4CD4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf4d28
	if (cr6.lt) goto loc_82BF4D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837653c0
	ctx.lr = 0x82BF4CE4;
	sub_837653C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4d28
	if (cr6.eq) goto loc_82BF4D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837653c0
	ctx.lr = 0x82BF4CF4;
	sub_837653C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4d28
	if (cr6.eq) goto loc_82BF4D28;
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 216);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r11,-2
	ctx.r31.s64 = ctx.r11.s64 + -2;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4D18;
	sub_82572FA0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83072a20
	ctx.lr = 0x82BF4D28;
	sub_83072A20(ctx, base);
loc_82BF4D28:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4d38
	if (cr6.eq) goto loc_82BF4D38;
	// bl 0x835eb7f0
	ctx.lr = 0x82BF4D38;
	sub_835EB7F0(ctx, base);
loc_82BF4D38:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82BF4D44;
	sub_82572FA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4D4C"))) PPC_WEAK_FUNC(sub_82BF4D4C);
PPC_FUNC_IMPL(__imp__sub_82BF4D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF4D50"))) PPC_WEAK_FUNC(sub_82BF4D50);
PPC_FUNC_IMPL(__imp__sub_82BF4D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF4D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bf4e38
	if (cr6.gt) goto loc_82BF4E38;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf4da8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF4DA8;
	// bdzf 4*cr6+eq,0x82bf4e14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF4E14;
	// bne cr6,0x82bf4e30
	if (!cr6.eq) goto loc_82BF4E30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82bf4798
	ctx.lr = 0x82BF4D94;
	sub_82BF4798(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF4DA8:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bf4e38
	if (cr6.eq) goto loc_82BF4E38;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82bf4dd0
	if (!cr6.eq) goto loc_82BF4DD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF4DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf4ba0
	ctx.lr = 0x82BF4DD8;
	sub_82BF4BA0(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF4DF4;
	sub_82BEF488(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF4E00;
	sub_82BEFD08(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF4E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf03d0
	ctx.lr = 0x82BF4E1C;
	sub_82BF03D0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF4E30:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82BF4E38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4E44"))) PPC_WEAK_FUNC(sub_82BF4E44);
PPC_FUNC_IMPL(__imp__sub_82BF4E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF4E48"))) PPC_WEAK_FUNC(sub_82BF4E48);
PPC_FUNC_IMPL(__imp__sub_82BF4E48) {
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
	ctx.lr = 0x82BF4E50;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4e6c
	if (cr6.eq) goto loc_82BF4E6C;
	// bl 0x82cd9668
	ctx.lr = 0x82BF4E6C;
	sub_82CD9668(ctx, base);
loc_82BF4E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0b98
	ctx.lr = 0x82BF4E74;
	sub_82BF0B98(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bgt cr6,0x82bf4fd8
	if (cr6.gt) goto loc_82BF4FD8;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20124
	ctx.r12.s64 = ctx.r12.s64 + 20124;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BF4F40;
	case 1:
		goto loc_82BF4FD8;
	case 2:
		goto loc_82BF4F6C;
	case 3:
		goto loc_82BF4F9C;
	case 4:
		goto loc_82BF4FB8;
	case 5:
		goto loc_82BF4FD8;
	case 6:
		goto loc_82BF4FC0;
	case 7:
		goto loc_82BF5028;
	case 8:
		goto loc_82BF4FD8;
	case 9:
		goto loc_82BF504C;
	case 10:
		goto loc_82BF50DC;
	case 11:
		goto loc_82BF50D0;
	case 12:
		goto loc_82BF50DC;
	case 13:
		goto loc_82BF58FC;
	case 14:
		goto loc_82BF5278;
	case 15:
		goto loc_82BF4FD8;
	case 16:
		goto loc_82BF5324;
	case 17:
		goto loc_82BF5324;
	case 18:
		goto loc_82BF5324;
	case 19:
		goto loc_82BF5560;
	case 20:
		goto loc_82BF5628;
	case 21:
		goto loc_82BF5704;
	case 22:
		goto loc_82BF575C;
	case 23:
		goto loc_82BF57B4;
	case 24:
		goto loc_82BF5810;
	case 25:
		goto loc_82BF5870;
	case 26:
		goto loc_82BF58FC;
	case 27:
		goto loc_82BF4FD8;
	case 28:
		goto loc_82BF592C;
	case 29:
		goto loc_82BF4FD8;
	case 30:
		goto loc_82BF596C;
	case 31:
		goto loc_82BF4FD8;
	case 32:
		goto loc_82BF59A0;
	case 33:
		goto loc_82BF4FD8;
	case 34:
		goto loc_82BF4FD8;
	case 35:
		goto loc_82BF5AC0;
	case 36:
		goto loc_82BF5AC0;
	case 37:
		goto loc_82BF5ADC;
	case 38:
		goto loc_82BF4FD8;
	case 39:
		goto loc_82BF5B1C;
	case 40:
		goto loc_82BF5B5C;
	default:
		return;
	}
	// lwz r21,20288(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20288);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,20332(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20332);
	// lwz r21,20380(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20380);
	// lwz r21,20408(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20408);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,20416(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20416);
	// lwz r21,20520(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20520);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,20556(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20556);
	// lwz r21,20700(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20700);
	// lwz r21,20688(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20688);
	// lwz r21,20700(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20700);
	// lwz r21,22780(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r21,21112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21112);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,21284(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21284);
	// lwz r21,21284(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21284);
	// lwz r21,21284(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21284);
	// lwz r21,21856(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21856);
	// lwz r21,22056(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22056);
	// lwz r21,22276(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22276);
	// lwz r21,22364(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22364);
	// lwz r21,22452(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22452);
	// lwz r21,22544(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22544);
	// lwz r21,22640(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22640);
	// lwz r21,22780(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22780);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,22828(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22828);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,22892(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22892);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,22944(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22944);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,23232(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23232);
	// lwz r21,23232(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23232);
	// lwz r21,23260(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23260);
	// lwz r21,20440(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20440);
	// lwz r21,23324(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23324);
	// lwz r21,23388(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23388);
loc_82BF4F40:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// bl 0x82bee338
	ctx.lr = 0x82BF4F50;
	sub_82BEE338(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF4F64;
	sub_82BEF488(ctx, base);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF4F6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf2128
	ctx.lr = 0x82BF4F7C;
	sub_82BF2128(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82bf4f94
	if (cr6.eq) goto loc_82BF4F94;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BF4F94:
	// bl 0x82cd9288
	ctx.lr = 0x82BF4F98;
	sub_82CD9288(ctx, base);
	// b 0x82bf4fd0
	goto loc_82BF4FD0;
loc_82BF4F9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0598
	ctx.lr = 0x82BF4FA4;
	sub_82BF0598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF4FB8;
	sub_82BEF488(ctx, base);
loc_82BF4FB8:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF4FC0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BF4FC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82bf2128
	ctx.lr = 0x82BF4FD0;
	sub_82BF2128(ctx, base);
loc_82BF4FD0:
	// li r11,11
	ctx.r11.s64 = 11;
loc_82BF4FD4:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82BF4FD8:
	// lbz r11,402(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 402);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf5018
	if (!cr6.eq) goto loc_82BF5018;
	// stb r26,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r26.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82BF4FF4;
	sub_82D196E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a30
	ctx.lr = 0x82BF5000;
	sub_82D19A30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF500C;
	sub_82BEFD08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beec28
	ctx.lr = 0x82BF5018;
	sub_82BEEC28(ctx, base);
loc_82BF5018:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF5028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee3b0
	ctx.lr = 0x82BF5030;
	sub_82BEE3B0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5044;
	sub_82BEF488(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF504C:
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0600
	ctx.lr = 0x82BF5064;
	sub_82BF0600(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf50c8
	if (!cr6.eq) goto loc_82BF50C8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595718
	ctx.lr = 0x82BF5088;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf50c0
	if (cr6.eq) goto loc_82BF50C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF50A8;
	sub_82572FA0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835ee610
	ctx.lr = 0x82BF50B4;
	sub_835EE610(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82bf4fc4
	goto loc_82BF4FC4;
loc_82BF50C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
loc_82BF50C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82bf4fc4
	goto loc_82BF4FC4;
loc_82BF50D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf2a60
	ctx.lr = 0x82BF50D8;
	sub_82BF2A60(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF50DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82bf5194
	if (!cr6.eq) goto loc_82BF5194;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,11220
	ctx.r28.s64 = ctx.r11.s64 + 11220;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82BF5110:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF512C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf5140
	if (cr6.eq) goto loc_82BF5140;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF5140;
	sub_82D2AEC8(ctx, base);
loc_82BF5140:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82bf5110
	if (!cr0.eq) goto loc_82BF5110;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF5168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee6b0
	ctx.lr = 0x82BF5178;
	sub_82BEE6B0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r4,r28,156
	ctx.r4.s64 = ctx.r28.s64 + 156;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF5194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF5194:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef868
	ctx.lr = 0x82BF51A4;
	sub_82BEF868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BF51AC;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bf5240
	if (!cr6.eq) goto loc_82BF5240;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82bf5240
	if (!cr6.eq) goto loc_82BF5240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF51D8;
	sub_82BF1FA8(ctx, base);
	// li r30,27
	ctx.r30.s64 = 27;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF51EC;
	sub_82BEEEC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befe40
	ctx.lr = 0x82BF51FC;
	sub_82BEFE40(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5210;
	sub_82BEF488(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BF5230;
	sub_82D1EBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF5240:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5254;
	sub_82BEF488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF5260;
	sub_82BEEEC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befe40
	ctx.lr = 0x82BF5270;
	sub_82BEFE40(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF5278:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82bf52c8
	if (!cr6.eq) goto loc_82BF52C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 302, ctx.r11.u8);
	// bl 0x82bef868
	ctx.lr = 0x82BF529C;
	sub_82BEF868(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r10,11220
	ctx.r11.s64 = ctx.r10.s64 + 11220;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF52C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bf52fc
	goto loc_82BF52FC;
loc_82BF52C8:
	// stb r26,302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 302, ctx.r26.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bef868
	ctx.lr = 0x82BF52D4;
	sub_82BEF868(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF52F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
loc_82BF52FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF5304;
	sub_82BEEEC0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5320;
	sub_82BEF488(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5324:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// bne cr6,0x82bf5348
	if (!cr6.eq) goto loc_82BF5348;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r11,302(r31)
	PPC_STORE_U8(ctx.r31.u32 + 302, ctx.r11.u8);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef868
	ctx.lr = 0x82BF5348;
	sub_82BEF868(ctx, base);
loc_82BF5348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82BF5350;
	sub_82D19BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82BF535C;
	sub_82D1C1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BF536C;
	sub_82D19CD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82BF537C;
	sub_82D19D40(ctx, base);
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82bf53f4
	if (!cr6.eq) goto loc_82BF53F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,11220
	ctx.r30.s64 = ctx.r11.s64 + 11220;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r9,r30,-792
	ctx.r9.s64 = ctx.r30.s64 + -792;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stb r8,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r8.u8);
	// bl 0x82d33db0
	ctx.lr = 0x82BF53B0;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF53C0;
	sub_82D2B608(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BF53CC;
	sub_82D19CD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF53D8;
	sub_82D33DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF53E0;
	sub_82D33DB0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x82bf54b0
	goto loc_82BF54B0;
loc_82BF53F4:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x82bf5460
	if (!cr6.eq) goto loc_82BF5460;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r11,11220
	ctx.r30.s64 = ctx.r11.s64 + 11220;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r9,r30,-772
	ctx.r9.s64 = ctx.r30.s64 + -772;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stb r8,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r8.u8);
	// bl 0x82d33db0
	ctx.lr = 0x82BF541C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF542C;
	sub_82D2B608(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82BF5438;
	sub_82D19CD0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF5444;
	sub_82D33DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF544C;
	sub_82D33DB0(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,228
	ctx.r4.s64 = ctx.r30.s64 + 228;
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x82bf54b0
	goto loc_82BF54B0;
loc_82BF5460:
	// stb r27,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF546C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF547C;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF5488;
	sub_82D33DB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,11220
	ctx.r30.s64 = ctx.r11.s64 + 11220;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// bl 0x82d2f098
	ctx.lr = 0x82BF5498;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf54b8
	if (cr6.eq) goto loc_82BF54B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BF54B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82BF54B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BF54B8:
	// stb r27,305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 305, ctx.r27.u8);
	// lfs f0,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r27.u8);
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82bee700
	ctx.lr = 0x82BF54EC;
	sub_82BEE700(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF5508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befe40
	ctx.lr = 0x82BF5518;
	sub_82BEFE40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beff58
	ctx.lr = 0x82BF5520;
	sub_82BEFF58(ctx, base);
	// lbz r11,302(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 302);
	// li r9,19
	ctx.r9.s64 = 19;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bf554c
	if (!cr6.eq) goto loc_82BF554C;
loc_82BF5540:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82bef488
	ctx.lr = 0x82BF5548;
	sub_82BEF488(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF554C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf5540
	if (!cr6.eq) goto loc_82BF5540;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82bef488
	ctx.lr = 0x82BF555C;
	sub_82BEF488(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5560:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf3410
	ctx.lr = 0x82BF556C;
	sub_82BF3410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf4fd8
	if (!cr6.eq) goto loc_82BF4FD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF558C;
	sub_82BEF488(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee700
	ctx.lr = 0x82BF55A0;
	sub_82BEE700(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,276
	ctx.r4.s64 = ctx.r11.s64 + 276;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF55C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF55D0;
	sub_82BEEEC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befe40
	ctx.lr = 0x82BF55E0;
	sub_82BEFE40(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef868
	ctx.lr = 0x82BF55F0;
	sub_82BEF868(ctx, base);
	// li r8,27
	ctx.r8.s64 = 27;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BF5618;
	sub_82D1EBF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF5628:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF563C;
	sub_82BEF488(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee700
	ctx.lr = 0x82BF5650;
	sub_82BEE700(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF5674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,27
	ctx.r8.s64 = 27;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// bl 0x82d33db0
	ctx.lr = 0x82BF5688;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF5698;
	sub_82D2B608(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82d33db0
	ctx.lr = 0x82BF56A4;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82BF56B4;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beeec0
	ctx.lr = 0x82BF56C0;
	sub_82BEEEC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befe40
	ctx.lr = 0x82BF56D0;
	sub_82BEFE40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef868
	ctx.lr = 0x82BF56E0;
	sub_82BEF868(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82BF5700;
	sub_82D1EBF8(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5704:
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r8,r10,26215
	ctx.r8.u64 = ctx.r10.u64 | 26215;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// mulhw r7,r11,r8
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stb r5,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r5.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82bf5750
	if (cr6.eq) goto loc_82BF5750;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BF5750:
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF5754;
	sub_82BF1FA8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF575C:
	// lbz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 300);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r8,r10,26215
	ctx.r8.u64 = ctx.r10.u64 | 26215;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// mulhw r7,r11,r8
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stb r5,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r5.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82bf57a8
	if (cr6.eq) goto loc_82BF57A8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BF57A8:
	// bl 0x82bf1fa8
	ctx.lr = 0x82BF57AC;
	sub_82BF1FA8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF57B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r10,303(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// bl 0x82cd7dc8
	ctx.lr = 0x82BF57D8;
	sub_82CD7DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// lbz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf57f8
	if (cr6.eq) goto loc_82BF57F8;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
loc_82BF57F8:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd8740
	ctx.lr = 0x82BF5800;
	sub_82CD8740(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BF580C;
	sub_82BEE540(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5810:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r10,303(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// bl 0x82cd7e30
	ctx.lr = 0x82BF5834;
	sub_82CD7E30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// lbz r10,303(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 303);
	// lbz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 304);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bf5858
	if (!cr6.lt) goto loc_82BF5858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
loc_82BF5858:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82cd87d8
	ctx.lr = 0x82BF5860;
	sub_82CD87D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee540
	ctx.lr = 0x82BF586C;
	sub_82BEE540(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5870:
	// lbz r11,302(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 302);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf589c
	if (cr6.eq) goto loc_82BF589C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bf589c
	if (cr6.eq) goto loc_82BF589C;
loc_82BF5884:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF589C:
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bf58f4
	if (cr6.eq) goto loc_82BF58F4;
	// lfs f12,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lfs f0,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82cd6d68
	ctx.lr = 0x82BF58D0;
	sub_82CD6D68(ctx, base);
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf58f4
	if (cr6.eq) goto loc_82BF58F4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82bef868
	ctx.lr = 0x82BF58F4;
	sub_82BEF868(ctx, base);
loc_82BF58F4:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF58FC:
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x82bf5918
	if (!cr6.eq) goto loc_82BF5918;
	// lbz r10,302(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 302);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf5918
	if (cr6.eq) goto loc_82BF5918;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82bf5884
	if (!cr6.eq) goto loc_82BF5884;
loc_82BF5918:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r11.u8);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF592C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BF5938;
	sub_82D19858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef330
	ctx.lr = 0x82BF5944;
	sub_82BEF330(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5958;
	sub_82BEF488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF5964;
	sub_82BEFD08(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF596C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef330
	ctx.lr = 0x82BF5978;
	sub_82BEF330(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF598C;
	sub_82BEF488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF5998;
	sub_82BEFD08(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF59A0:
	// lbz r11,403(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 403);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf5a5c
	if (!cr6.eq) goto loc_82BF5A5C;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf5a44
	if (cr6.lt) goto loc_82BF5A44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf1110
	ctx.lr = 0x82BF59C8;
	sub_82BF1110(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82BF59D0;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf5a44
	if (cr6.eq) goto loc_82BF5A44;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82BF59E8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf59e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF59E8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,168(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r7,200(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r6,196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// bl 0x82aad610
	ctx.lr = 0x82BF5A08;
	sub_82AAD610(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82aaccf8
	ctx.lr = 0x82BF5A14;
	sub_82AACCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a713f0
	ctx.lr = 0x82BF5A28;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82bf5a40
	if (cr6.eq) goto loc_82BF5A40;
	// cmplwi cr6,r29,600
	cr6.compare<uint32_t>(ctx.r29.u32, 600, xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// blt cr6,0x82bf5a44
	if (cr6.lt) goto loc_82BF5A44;
loc_82BF5A40:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82BF5A44:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82bf5a70
	if (cr6.lt) goto loc_82BF5A70;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf5a70
	if (cr6.eq) goto loc_82BF5A70;
loc_82BF5A5C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef330
	ctx.lr = 0x82BF5A68;
	sub_82BEF330(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF5A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bee4e0
	ctx.lr = 0x82BF5A78;
	sub_82BEE4E0(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82BF5A88;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r10,11220
	ctx.r11.s64 = ctx.r10.s64 + 11220;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// addi r4,r11,300
	ctx.r4.s64 = ctx.r11.s64 + 300;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF5AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82BF5AB0;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82BF5ABC;
	sub_82D2AEC8(ctx, base);
	// b 0x82bf4fd8
	goto loc_82BF4FD8;
loc_82BF5AC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf4d50
	ctx.lr = 0x82BF5AC8;
	sub_82BF4D50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf4fd8
	if (cr6.eq) goto loc_82BF4FD8;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF5ADC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef330
	ctx.lr = 0x82BF5AE8;
	sub_82BEF330(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5AFC;
	sub_82BEF488(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befd08
	ctx.lr = 0x82BF5B08;
	sub_82BEFD08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82BF5B14;
	sub_82D19858(ctx, base);
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x82bf4fd4
	goto loc_82BF4FD4;
loc_82BF5B1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5B30;
	sub_82BEF488(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,316
	ctx.r5.s64 = ctx.r11.s64 + 316;
	// bl 0x82d20da8
	ctx.lr = 0x82BF5B48;
	sub_82D20DA8(ctx, base);
	// bl 0x8306abb0
	ctx.lr = 0x82BF5B4C;
	sub_8306ABB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF5B5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef488
	ctx.lr = 0x82BF5B70;
	sub_82BEF488(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,11220
	ctx.r11.s64 = ctx.r11.s64 + 11220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,324
	ctx.r5.s64 = ctx.r11.s64 + 324;
	// bl 0x82d20da8
	ctx.lr = 0x82BF5B88;
	sub_82D20DA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef438
	ctx.lr = 0x82BF5B94;
	sub_82BEF438(ctx, base);
	// bl 0x8306abb0
	ctx.lr = 0x82BF5B98;
	sub_8306ABB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5BA8"))) PPC_WEAK_FUNC(sub_82BF5BA8);
PPC_FUNC_IMPL(__imp__sub_82BF5BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6032
	ctx.r9.s64 = ctx.r11.s64 + -6032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x82a87518
	sub_82A87518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5BC4"))) PPC_WEAK_FUNC(sub_82BF5BC4);
PPC_FUNC_IMPL(__imp__sub_82BF5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF5BC8"))) PPC_WEAK_FUNC(sub_82BF5BC8);
PPC_FUNC_IMPL(__imp__sub_82BF5BC8) {
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
	// bl 0x82bf1940
	ctx.lr = 0x82BF5BE0;
	sub_82BF1940(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6032
	ctx.r9.s64 = ctx.r11.s64 + -6032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BF5C10"))) PPC_WEAK_FUNC(sub_82BF5C10);
PPC_FUNC_IMPL(__imp__sub_82BF5C10) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5C24"))) PPC_WEAK_FUNC(sub_82BF5C24);
PPC_FUNC_IMPL(__imp__sub_82BF5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF5C28"))) PPC_WEAK_FUNC(sub_82BF5C28);
PPC_FUNC_IMPL(__imp__sub_82BF5C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF5C30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,13
	ctx.r28.s64 = 13;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82BF5C54;
	sub_8314B1C8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8314b1c8
	ctx.lr = 0x82BF5C6C;
	sub_8314B1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82bf5ce0
	if (!cr6.eq) goto loc_82BF5CE0;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// ld r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf5cb8
	if (cr6.eq) goto loc_82BF5CB8;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5CB8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5CE0:
	// subf r3,r29,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5CEC"))) PPC_WEAK_FUNC(sub_82BF5CEC);
PPC_FUNC_IMPL(__imp__sub_82BF5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF5CF0"))) PPC_WEAK_FUNC(sub_82BF5CF0);
PPC_FUNC_IMPL(__imp__sub_82BF5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r11,r9,56
	ctx.r11.s64 = ctx.r9.s64 + 56;
loc_82BF5D00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82bf5d00
	if (cr6.eq) goto loc_82BF5D00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5D28"))) PPC_WEAK_FUNC(sub_82BF5D28);
PPC_FUNC_IMPL(__imp__sub_82BF5D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF5D30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,12
	ctx.r29.s64 = 12;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x82BF5D54;
	sub_83120738(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83120738
	ctx.lr = 0x82BF5D6C;
	sub_83120738(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x82bf5de0
	if (!cr6.eq) goto loc_82BF5DE0;
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// ld r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf5db8
	if (cr6.eq) goto loc_82BF5DB8;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5DB8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5DE0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x82BF5DF4;
	sub_83120738(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83120738
	ctx.lr = 0x82BF5E0C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5E1C"))) PPC_WEAK_FUNC(sub_82BF5E1C);
PPC_FUNC_IMPL(__imp__sub_82BF5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF5E20"))) PPC_WEAK_FUNC(sub_82BF5E20);
PPC_FUNC_IMPL(__imp__sub_82BF5E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF5E28;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x831236a0
	ctx.lr = 0x82BF5E44;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82BF5E54;
	sub_83120738(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82BF5E68;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82BF5E78;
	sub_83120738(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf5ef0
	if (!cr6.eq) goto loc_82BF5EF0;
	// ld r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// ld r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf5ec8
	if (cr6.eq) goto loc_82BF5EC8;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5EC8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF5EF0:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831236a0
	ctx.lr = 0x82BF5EFC;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x82BF5F0C;
	sub_83120738(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x82BF5F20;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82BF5F30;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subf r3,r9,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5F44"))) PPC_WEAK_FUNC(sub_82BF5F44);
PPC_FUNC_IMPL(__imp__sub_82BF5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF5F48"))) PPC_WEAK_FUNC(sub_82BF5F48);
PPC_FUNC_IMPL(__imp__sub_82BF5F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 188);
	// lhz r8,188(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 188);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bf5fc0
	if (!cr6.eq) goto loc_82BF5FC0;
	// ld r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// ld r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 44);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lhz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf5f9c
	if (cr6.eq) goto loc_82BF5F9C;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
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
loc_82BF5F9C:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
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
loc_82BF5FC0:
	// lhz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 188);
	// lhz r10,188(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 188);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5FD0"))) PPC_WEAK_FUNC(sub_82BF5FD0);
PPC_FUNC_IMPL(__imp__sub_82BF5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF5FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,6
	cr6.compare<int32_t>(ctx.r7.s32, 6, xer);
	// bge cr6,0x82bf60cc
	if (!cr6.lt) goto loc_82BF60CC;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-28124
	ctx.r9.s64 = ctx.r11.s64 + -28124;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x831d88b0
	ctx.lr = 0x82BF6014;
	sub_831D88B0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bf6044
	if (cr6.eq) goto loc_82BF6044;
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
	ctx.lr = 0x82BF603C;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82BF6044:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x82BF6050;
	sub_82AD5E38(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x82bf6098
	if (!cr6.eq) goto loc_82BF6098;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf60cc
	if (cr6.eq) goto loc_82BF60CC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82BF6068:
	// lwzu r11,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82BF6088;
	sub_835977D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82bf6068
	if (!cr0.eq) goto loc_82BF6068;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF6098:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf60cc
	if (cr6.eq) goto loc_82BF60CC;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
loc_82BF60A4:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x82BF60C4;
	sub_835977D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82bf60a4
	if (!cr0.eq) goto loc_82BF60A4;
loc_82BF60CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF60D4"))) PPC_WEAK_FUNC(sub_82BF60D4);
PPC_FUNC_IMPL(__imp__sub_82BF60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF60D8"))) PPC_WEAK_FUNC(sub_82BF60D8);
PPC_FUNC_IMPL(__imp__sub_82BF60D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82BF60E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r25,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82bf61b4
	if (cr0.eq) goto loc_82BF61B4;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bf611c
	if (!cr6.gt) goto loc_82BF611C;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82BF611C:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BF6130;
	sub_82595718(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf61b4
	if (cr6.eq) goto loc_82BF61B4;
	// bl 0x831156e8
	ctx.lr = 0x82BF6140;
	sub_831156E8(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf6184
	if (cr6.eq) goto loc_82BF6184;
	// addi r30,r26,-4
	ctx.r30.s64 = ctx.r26.s64 + -4;
loc_82BF6158:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bd68
	ctx.lr = 0x82BF6170;
	sub_8311BD68(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bf6158
	if (!cr6.eq) goto loc_82BF6158;
loc_82BF6184:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bf5fd0
	ctx.lr = 0x82BF61A0;
	sub_82BF5FD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82BF61B4;
	sub_825952B8(ctx, base);
loc_82BF61B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF61BC"))) PPC_WEAK_FUNC(sub_82BF61BC);
PPC_FUNC_IMPL(__imp__sub_82BF61BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF61C0"))) PPC_WEAK_FUNC(sub_82BF61C0);
PPC_FUNC_IMPL(__imp__sub_82BF61C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF61C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82BF61D4;
	sub_83A7D958(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// bl 0x82bda618
	ctx.lr = 0x82BF61DC;
	sub_82BDA618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf62a0
	if (cr6.eq) goto loc_82BF62A0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,21212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lfs f12,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BF6234;
	sub_82D19BB0(ctx, base);
	// lwz r7,344(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF624C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bf627c
	if (cr6.eq) goto loc_82BF627C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf627c
	if (!cr6.eq) goto loc_82BF627C;
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bda170
	ctx.lr = 0x82BF6274;
	sub_82BDA170(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF627C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-11340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// bl 0x82bda170
	ctx.lr = 0x82BF62A0;
	sub_82BDA170(ctx, base);
loc_82BF62A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF62A8"))) PPC_WEAK_FUNC(sub_82BF62A8);
PPC_FUNC_IMPL(__imp__sub_82BF62A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF62B0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce778
	ctx.lr = 0x82BF62B8;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82BF62C4;
	sub_82BDA618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6460
	if (cr6.eq) goto loc_82BF6460;
	// bl 0x83a7d958
	ctx.lr = 0x82BF62D4;
	sub_83A7D958(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82BF62E4;
	sub_83524138(ctx, base);
	// bl 0x831ce710
	ctx.lr = 0x82BF62E8;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f28,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f0,f28
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82bd9d58
	ctx.lr = 0x82BF6300;
	sub_82BD9D58(ctx, base);
	// lbz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf6460
	if (cr6.eq) goto loc_82BF6460;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,21212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// bl 0x82d19bb0
	ctx.lr = 0x82BF6358;
	sub_82D19BB0(ctx, base);
	// lwz r7,344(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF6370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bf6460
	if (cr6.eq) goto loc_82BF6460;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bf6460
	if (cr6.eq) goto loc_82BF6460;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82bf63a0
	if (!cr6.gt) goto loc_82BF63A0;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x82bf6460
	if (cr6.gt) goto loc_82BF6460;
	// stfs f30,280(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_82BF63A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82bf63c4
	if (!cr6.gt) goto loc_82BF63C4;
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// b 0x82bf63f0
	goto loc_82BF63F0;
loc_82BF63C4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x82bf63ec
	if (!cr6.gt) goto loc_82BF63EC;
	// fsubs f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f31
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82bf63ec
	if (!cr6.lt) goto loc_82BF63EC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_82BF63EC:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82BF63F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83524138
	ctx.lr = 0x82BF63F8;
	sub_83524138(ctx, base);
	// bl 0x831ce710
	ctx.lr = 0x82BF63FC;
	sub_831CE710(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x82a5aa98
	ctx.lr = 0x82BF643C;
	sub_82A5AA98(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,13616(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13616);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13612(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13612);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f1,f0,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82bda170
	ctx.lr = 0x82BF6460;
	sub_82BDA170(ctx, base);
loc_82BF6460:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x82BF6470;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6474"))) PPC_WEAK_FUNC(sub_82BF6474);
PPC_FUNC_IMPL(__imp__sub_82BF6474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF6478"))) PPC_WEAK_FUNC(sub_82BF6478);
PPC_FUNC_IMPL(__imp__sub_82BF6478) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13624
	ctx.r9.s64 = ctx.r11.s64 + 13624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82bda618
	ctx.lr = 0x82BF64AC;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6508
	if (cr6.eq) goto loc_82BF6508;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,21212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lfs f12,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// bl 0x82bda170
	ctx.lr = 0x82BF6500;
	sub_82BDA170(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r6.u8);
loc_82BF6508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdc910
	ctx.lr = 0x82BF6510;
	sub_82BDC910(ctx, base);
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

__attribute__((alias("__imp__sub_82BF6528"))) PPC_WEAK_FUNC(sub_82BF6528);
PPC_FUNC_IMPL(__imp__sub_82BF6528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF6530;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF654C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6648
	if (!cr6.eq) goto loc_82BF6648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF6560;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6568;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6648
	if (cr6.eq) goto loc_82BF6648;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6578;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6648
	if (cr6.eq) goto loc_82BF6648;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,13508
	ctx.r4.s64 = ctx.r10.s64 + 13508;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF659C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6648
	if (cr6.eq) goto loc_82BF6648;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x82BF65C0;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF65D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83740288
	ctx.lr = 0x82BF65F0;
	sub_83740288(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82bf663c
	if (cr6.eq) goto loc_82BF663C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a76558
	ctx.lr = 0x82BF6608;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf663c
	if (cr6.eq) goto loc_82BF663C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82BF663C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3bc50
	ctx.lr = 0x82BF6648;
	sub_82D3BC50(ctx, base);
loc_82BF6648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6650"))) PPC_WEAK_FUNC(sub_82BF6650);
PPC_FUNC_IMPL(__imp__sub_82BF6650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF6658;
	__savegprlr_26(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF6670;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6678;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6840
	if (cr6.eq) goto loc_82BF6840;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf66c0
	if (cr6.eq) goto loc_82BF66C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6694;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,13516
	ctx.r4.s64 = ctx.r11.s64 + 13516;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF66B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf66c0
	if (cr6.eq) goto loc_82BF66C0;
	// bl 0x83a970c8
	ctx.lr = 0x82BF66BC;
	sub_83A970C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BF66C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF66D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6840
	if (!cr6.eq) goto loc_82BF6840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF66FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,376(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF671C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82a76558
	ctx.lr = 0x82BF6740;
	sub_82A76558(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82bf6778
	if (cr6.eq) goto loc_82BF6778;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bf6778
	if (cr6.eq) goto loc_82BF6778;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x82BF6768;
	sub_825A10C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744c18
	ctx.lr = 0x82BF6770;
	sub_83744C18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BF6778:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf6840
	if (cr6.eq) goto loc_82BF6840;
	// bl 0x83a7d958
	ctx.lr = 0x82BF6788;
	sub_83A7D958(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82BF67A4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf67bc
	if (cr6.eq) goto loc_82BF67BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83777d88
	ctx.lr = 0x82BF67BC;
	sub_83777D88(ctx, base);
loc_82BF67BC:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf67dc
	if (cr6.eq) goto loc_82BF67DC;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BF67DC;
	sub_831CE980(ctx, base);
loc_82BF67DC:
	// bl 0x82bda618
	ctx.lr = 0x82BF67E0;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6840
	if (cr6.eq) goto loc_82BF6840;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BF67FC;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(ctx.r29.s32, 19, xer);
	// blt cr6,0x82bf681c
	if (cr6.lt) goto loc_82BF681C;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(ctx.r29.s32, 21, xer);
	// bgt cr6,0x82bf681c
	if (cr6.gt) goto loc_82BF681C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbeb0
	ctx.lr = 0x82BF6814;
	sub_82BDBEB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82BF681C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82BF6828;
	sub_82BD9DB8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaec0
	ctx.lr = 0x82BF6834;
	sub_82BDAEC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82BF6840;
	sub_82BD9DB8(ctx, base);
loc_82BF6840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6848"))) PPC_WEAK_FUNC(sub_82BF6848);
PPC_FUNC_IMPL(__imp__sub_82BF6848) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bdc848
	ctx.lr = 0x82BF6868;
	sub_82BDC848(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// addi r9,r11,13624
	ctx.r9.s64 = ctx.r11.s64 + 13624;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82BF6894;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r7.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82BF68A0;
	sub_83A7D958(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82BF68C4;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BF68E0"))) PPC_WEAK_FUNC(sub_82BF68E0);
PPC_FUNC_IMPL(__imp__sub_82BF68E0) {
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
	// bl 0x82bf6478
	ctx.lr = 0x82BF6900;
	sub_82BF6478(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf6918
	if (cr6.eq) goto loc_82BF6918;
	// bl 0x82416268
	ctx.lr = 0x82BF6914;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BF6918:
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

__attribute__((alias("__imp__sub_82BF6930"))) PPC_WEAK_FUNC(sub_82BF6930);
PPC_FUNC_IMPL(__imp__sub_82BF6930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82bf6650
	sub_82BF6650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF694C"))) PPC_WEAK_FUNC(sub_82BF694C);
PPC_FUNC_IMPL(__imp__sub_82BF694C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6950"))) PPC_WEAK_FUNC(sub_82BF6950);
PPC_FUNC_IMPL(__imp__sub_82BF6950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82bf6650
	sub_82BF6650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF696C"))) PPC_WEAK_FUNC(sub_82BF696C);
PPC_FUNC_IMPL(__imp__sub_82BF696C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6970"))) PPC_WEAK_FUNC(sub_82BF6970);
PPC_FUNC_IMPL(__imp__sub_82BF6970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BF6978;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6c0c
	if (!cr6.eq) goto loc_82BF6C0C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF69A8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF69B0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6c0c
	if (cr6.eq) goto loc_82BF6C0C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF69C0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6c0c
	if (cr6.eq) goto loc_82BF6C0C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,13480
	ctx.r4.s64 = ctx.r10.s64 + 13480;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF69E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6c0c
	if (cr6.eq) goto loc_82BF6C0C;
	// bl 0x82d3b3f8
	ctx.lr = 0x82BF69F4;
	sub_82D3B3F8(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF6A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF6A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,128
	cr6.compare<int32_t>(ctx.r30.s32, 128, xer);
	// beq cr6,0x82bf6ab0
	if (cr6.eq) goto loc_82BF6AB0;
	// addi r29,r28,200
	ctx.r29.s64 = ctx.r28.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8b528
	ctx.lr = 0x82BF6A64;
	sub_82A8B528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a90728
	ctx.lr = 0x82BF6A74;
	sub_82A90728(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a77be0
	ctx.lr = 0x82BF6A84;
	sub_82A77BE0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a76558
	ctx.lr = 0x82BF6AAC;
	sub_82A76558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BF6AB0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,15
	ctx.r8.s64 = 15;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// subf r29,r11,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// subf r30,r11,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bne cr6,0x82bf6b1c
	if (!cr6.eq) goto loc_82BF6B1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf70a0
	ctx.lr = 0x82BF6AF0;
	sub_82BF70A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf6b04
	if (!cr6.lt) goto loc_82BF6B04;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82BF6B04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82BF6B0C;
	sub_82D3B548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82BF6B14;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82BF6B1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6B38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6c04
	if (!cr6.eq) goto loc_82BF6C04;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82bf6bdc
	if (cr6.gt) goto loc_82BF6BDC;
loc_82BF6B50:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x82bf6ba4
	if (cr6.lt) goto loc_82BF6BA4;
	// beq cr6,0x82bf6b9c
	if (cr6.eq) goto loc_82BF6B9C;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// beq cr6,0x82bf6b7c
	if (cr6.eq) goto loc_82BF6B7C;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf7018
	ctx.lr = 0x82BF6B78;
	sub_82BF7018(ctx, base);
	// b 0x82bf6bb4
	goto loc_82BF6BB4;
loc_82BF6B7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6B98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bf6bb4
	goto loc_82BF6BB4;
loc_82BF6B9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82bf6ba8
	goto loc_82BF6BA8;
loc_82BF6BA4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_82BF6BA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf70a0
	ctx.lr = 0x82BF6BB4;
	sub_82BF70A0(ctx, base);
loc_82BF6BB4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf6bc8
	if (!cr6.lt) goto loc_82BF6BC8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82BF6BC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82BF6BD0;
	sub_82D3B548(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// ble cr6,0x82bf6b50
	if (!cr6.gt) goto loc_82BF6B50;
loc_82BF6BDC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6BF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82BF6C04;
	sub_82D3B298(ctx, base);
loc_82BF6C04:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82BF6C0C;
	sub_8387E8E0(ctx, base);
loc_82BF6C0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6C14"))) PPC_WEAK_FUNC(sub_82BF6C14);
PPC_FUNC_IMPL(__imp__sub_82BF6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF6C18"))) PPC_WEAK_FUNC(sub_82BF6C18);
PPC_FUNC_IMPL(__imp__sub_82BF6C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82BF6C20;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6e2c
	if (!cr6.eq) goto loc_82BF6E2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF6C50;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6C58;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6e2c
	if (cr6.eq) goto loc_82BF6E2C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6C68;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6e2c
	if (cr6.eq) goto loc_82BF6E2C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,13492
	ctx.r4.s64 = ctx.r10.s64 + 13492;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF6C8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6e2c
	if (cr6.eq) goto loc_82BF6E2C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r9,340(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF6CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BF6CEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,128
	cr6.compare<int32_t>(ctx.r29.s32, 128, xer);
	// beq cr6,0x82bf6d54
	if (cr6.eq) goto loc_82BF6D54;
	// addi r28,r31,200
	ctx.r28.s64 = ctx.r31.s64 + 200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a8b528
	ctx.lr = 0x82BF6D08;
	sub_82A8B528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a90728
	ctx.lr = 0x82BF6D18;
	sub_82A90728(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a77be0
	ctx.lr = 0x82BF6D28;
	sub_82A77BE0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a76558
	ctx.lr = 0x82BF6D50;
	sub_82A76558(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BF6D54:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// subf r29,r9,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bne cr6,0x82bf6d88
	if (!cr6.eq) goto loc_82BF6D88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bf6e10
	goto loc_82BF6E10;
loc_82BF6D88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf6e18
	if (!cr6.eq) goto loc_82BF6E18;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// blt cr6,0x82bf6e08
	if (cr6.lt) goto loc_82BF6E08;
	// beq cr6,0x82bf6e00
	if (cr6.eq) goto loc_82BF6E00;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// beq cr6,0x82bf6ddc
	if (cr6.eq) goto loc_82BF6DDC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bf7018
	ctx.lr = 0x82BF6DD8;
	sub_82BF7018(ctx, base);
	// b 0x82bf6e18
	goto loc_82BF6E18;
loc_82BF6DDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6DFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bf6e18
	goto loc_82BF6E18;
loc_82BF6E00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82bf6e0c
	goto loc_82BF6E0C;
loc_82BF6E08:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BF6E0C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82BF6E10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bf70a0
	ctx.lr = 0x82BF6E18;
	sub_82BF70A0(ctx, base);
loc_82BF6E18:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82BF6E24;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82BF6E2C;
	sub_8387E8E0(ctx, base);
loc_82BF6E2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6E34"))) PPC_WEAK_FUNC(sub_82BF6E34);
PPC_FUNC_IMPL(__imp__sub_82BF6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF6E38"))) PPC_WEAK_FUNC(sub_82BF6E38);
PPC_FUNC_IMPL(__imp__sub_82BF6E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF6E40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82BF6E4C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6e60
	if (cr6.eq) goto loc_82BF6E60;
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// bl 0x83777e50
	ctx.lr = 0x82BF6E60;
	sub_83777E50(ctx, base);
loc_82BF6E60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6E74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6efc
	if (cr6.eq) goto loc_82BF6EFC;
loc_82BF6E84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bf6ebc
	if (!cr6.eq) goto loc_82BF6EBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82bf6ec0
	goto loc_82BF6EC0;
loc_82BF6EBC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82BF6EC0:
	// bl 0x82bdc948
	ctx.lr = 0x82BF6EC4;
	sub_82BDC948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82d233b0
	ctx.lr = 0x82BF6EF0;
	sub_82D233B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82bf6e84
	if (cr6.lt) goto loc_82BF6E84;
loc_82BF6EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82BF6F04;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6F0C;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6ff8
	if (cr6.eq) goto loc_82BF6FF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6ff0
	if (cr6.eq) goto loc_82BF6FF0;
loc_82BF6F3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82BF6F48;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf6fe4
	if (cr6.eq) goto loc_82BF6FE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6F6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82bf6fa0
	if (cr6.lt) goto loc_82BF6FA0;
	// beq cr6,0x82bf6f90
	if (cr6.eq) goto loc_82BF6F90;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x82bf6fac
	if (!cr6.eq) goto loc_82BF6FAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6528
	ctx.lr = 0x82BF6F8C;
	sub_82BF6528(ctx, base);
	// b 0x82bf6fac
	goto loc_82BF6FAC;
loc_82BF6F90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6970
	ctx.lr = 0x82BF6F9C;
	sub_82BF6970(ctx, base);
	// b 0x82bf6fac
	goto loc_82BF6FAC;
loc_82BF6FA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6c18
	ctx.lr = 0x82BF6FAC;
	sub_82BF6C18(ctx, base);
loc_82BF6FAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF6FC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bf6fe4
	if (cr6.eq) goto loc_82BF6FE4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82BF6FE4;
	sub_82D2B608(ctx, base);
loc_82BF6FE4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82bf6f3c
	if (cr6.lt) goto loc_82BF6F3C;
loc_82BF6FF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1dc40
	ctx.lr = 0x82BF6FF8;
	sub_82D1DC40(ctx, base);
loc_82BF6FF8:
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82BF700C;
	sub_82D20EB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7018"))) PPC_WEAK_FUNC(sub_82BF7018);
PPC_FUNC_IMPL(__imp__sub_82BF7018) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// bl 0x82d042a8
	ctx.lr = 0x82BF7054;
	sub_82D042A8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82BF7068;
	sub_8259CB28(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82bf7088
	if (cr6.lt) goto loc_82BF7088;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BF7088;
	sub_825952B8(ctx, base);
loc_82BF7088:
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

__attribute__((alias("__imp__sub_82BF709C"))) PPC_WEAK_FUNC(sub_82BF709C);
PPC_FUNC_IMPL(__imp__sub_82BF709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF70A0"))) PPC_WEAK_FUNC(sub_82BF70A0);
PPC_FUNC_IMPL(__imp__sub_82BF70A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF70A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8c428
	ctx.lr = 0x82BF70C8;
	sub_82A8C428(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x82bf70f8
	if (cr6.eq) goto loc_82BF70F8;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
loc_82BF70F8:
	// bl 0x82474050
	ctx.lr = 0x82BF70FC;
	sub_82474050(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82BF7108;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf711c
	if (!cr6.lt) goto loc_82BF711C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BF711C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BF7120:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf7120
	if (!cr6.eq) goto loc_82BF7120;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BF7144;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf7158
	if (cr6.lt) goto loc_82BF7158;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82BF7158;
	sub_82416268(ctx, base);
loc_82BF7158:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82a79160
	ctx.lr = 0x82BF7174;
	sub_82A79160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r8,r9,15320
	ctx.r8.s64 = ctx.r9.s64 + 15320;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BF7188;
	sub_831CCF00(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7190"))) PPC_WEAK_FUNC(sub_82BF7190);
PPC_FUNC_IMPL(__imp__sub_82BF7190) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF719C"))) PPC_WEAK_FUNC(sub_82BF719C);
PPC_FUNC_IMPL(__imp__sub_82BF719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF71A0"))) PPC_WEAK_FUNC(sub_82BF71A0);
PPC_FUNC_IMPL(__imp__sub_82BF71A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf71b4
	if (cr6.eq) goto loc_82BF71B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF71B4:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF71C8"))) PPC_WEAK_FUNC(sub_82BF71C8);
PPC_FUNC_IMPL(__imp__sub_82BF71C8) {
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
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82bf7220
	if (!cr6.eq) goto loc_82BF7220;
	// bl 0x82bda618
	ctx.lr = 0x82BF71F4;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82bf7210
	if (cr6.eq) goto loc_82BF7210;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// bl 0x831ce980
	ctx.lr = 0x82BF720C;
	sub_831CE980(ctx, base);
	// b 0x82bf7220
	goto loc_82BF7220;
loc_82BF7210:
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x831ce980
	ctx.lr = 0x82BF7218;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
loc_82BF7220:
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

__attribute__((alias("__imp__sub_82BF7238"))) PPC_WEAK_FUNC(sub_82BF7238);
PPC_FUNC_IMPL(__imp__sub_82BF7238) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7280
	if (cr6.eq) goto loc_82BF7280;
	// bl 0x833bbd78
	ctx.lr = 0x82BF725C;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
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
loc_82BF7280:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82BF729C"))) PPC_WEAK_FUNC(sub_82BF729C);
PPC_FUNC_IMPL(__imp__sub_82BF729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF72A0"))) PPC_WEAK_FUNC(sub_82BF72A0);
PPC_FUNC_IMPL(__imp__sub_82BF72A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 108);
	// lbz r10,109(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 109);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,110(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 110);
	// lbz r7,111(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 111);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF72D0"))) PPC_WEAK_FUNC(sub_82BF72D0);
PPC_FUNC_IMPL(__imp__sub_82BF72D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf72ec
	if (!cr6.eq) goto loc_82BF72EC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82BF72EC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stb r10,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7300"))) PPC_WEAK_FUNC(sub_82BF7300);
PPC_FUNC_IMPL(__imp__sub_82BF7300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82bf7318
	if (!cr6.eq) goto loc_82BF7318;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82BF7318:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 568, ctx.r11.u8);
	// stb r10,569(r3)
	PPC_STORE_U8(ctx.r3.u32 + 569, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7330"))) PPC_WEAK_FUNC(sub_82BF7330);
PPC_FUNC_IMPL(__imp__sub_82BF7330) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7340"))) PPC_WEAK_FUNC(sub_82BF7340);
PPC_FUNC_IMPL(__imp__sub_82BF7340) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF7358;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf73a8
	if (cr6.eq) goto loc_82BF73A8;
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf73a8
	if (!cr6.eq) goto loc_82BF73A8;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf73a8
	if (cr6.eq) goto loc_82BF73A8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bf73a8
	if (cr6.eq) goto loc_82BF73A8;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// bl 0x82bda928
	ctx.lr = 0x82BF7388;
	sub_82BDA928(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82BF73A8:
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

__attribute__((alias("__imp__sub_82BF73C0"))) PPC_WEAK_FUNC(sub_82BF73C0);
PPC_FUNC_IMPL(__imp__sub_82BF73C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,570(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 570);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r4,570(r3)
	PPC_STORE_U8(ctx.r3.u32 + 570, ctx.r4.u8);
	// stb r11,571(r3)
	PPC_STORE_U8(ctx.r3.u32 + 571, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF73E0"))) PPC_WEAK_FUNC(sub_82BF73E0);
PPC_FUNC_IMPL(__imp__sub_82BF73E0) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF73F8;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf7438
	if (!cr6.eq) goto loc_82BF7438;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7438
	if (!cr6.eq) goto loc_82BF7438;
	// lwz r3,552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x82bf7430
	if (cr6.lt) goto loc_82BF7430;
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
loc_82BF7430:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82bdc5e8
	ctx.lr = 0x82BF7438;
	sub_82BDC5E8(ctx, base);
loc_82BF7438:
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

__attribute__((alias("__imp__sub_82BF7450"))) PPC_WEAK_FUNC(sub_82BF7450);
PPC_FUNC_IMPL(__imp__sub_82BF7450) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF7468;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf748c
	if (cr6.eq) goto loc_82BF748C;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf748c
	if (cr6.eq) goto loc_82BF748C;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82bd9df0
	ctx.lr = 0x82BF7484;
	sub_82BD9DF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_82BF748C:
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

__attribute__((alias("__imp__sub_82BF74A0"))) PPC_WEAK_FUNC(sub_82BF74A0);
PPC_FUNC_IMPL(__imp__sub_82BF74A0) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF74B8;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf74e8
	if (cr6.eq) goto loc_82BF74E8;
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf74e8
	if (cr6.eq) goto loc_82BF74E8;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// bl 0x82bdb800
	ctx.lr = 0x82BF74D4;
	sub_82BDB800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf74e8
	if (cr6.eq) goto loc_82BF74E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
loc_82BF74E8:
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

__attribute__((alias("__imp__sub_82BF74FC"))) PPC_WEAK_FUNC(sub_82BF74FC);
PPC_FUNC_IMPL(__imp__sub_82BF74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7500"))) PPC_WEAK_FUNC(sub_82BF7500);
PPC_FUNC_IMPL(__imp__sub_82BF7500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF7508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82bda618
	ctx.lr = 0x82BF7514;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf75b0
	if (cr6.eq) goto loc_82BF75B0;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7544
	if (!cr6.eq) goto loc_82BF7544;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82bf7544
	if (cr6.lt) goto loc_82BF7544;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82bf7548
	if (!cr6.gt) goto loc_82BF7548;
loc_82BF7544:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BF7548:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf75b0
	if (cr6.eq) goto loc_82BF75B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,14252
	ctx.r30.s64 = ctx.r11.s64 + 14252;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-52
	ctx.r9.s64 = ctx.r30.s64 + -52;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// bl 0x82bd9e08
	ctx.lr = 0x82BF7584;
	sub_82BD9E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9f18
	ctx.lr = 0x82BF7590;
	sub_82BD9F18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82BF75A4;
	sub_82BDBB88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF75B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75BC"))) PPC_WEAK_FUNC(sub_82BF75BC);
PPC_FUNC_IMPL(__imp__sub_82BF75BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF75C0"))) PPC_WEAK_FUNC(sub_82BF75C0);
PPC_FUNC_IMPL(__imp__sub_82BF75C0) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF75D4;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf766c
	if (cr6.eq) goto loc_82BF766C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7604
	if (!cr6.eq) goto loc_82BF7604;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82bf7604
	if (cr6.lt) goto loc_82BF7604;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82bf7608
	if (!cr6.gt) goto loc_82BF7608;
loc_82BF7604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BF7608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf766c
	if (cr6.eq) goto loc_82BF766C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82BF7634;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9f18
	ctx.lr = 0x82BF7640;
	sub_82BD9F18(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82BF7654;
	sub_82BDBB88(ctx, base);
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
loc_82BF766C:
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

__attribute__((alias("__imp__sub_82BF7684"))) PPC_WEAK_FUNC(sub_82BF7684);
PPC_FUNC_IMPL(__imp__sub_82BF7684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7688"))) PPC_WEAK_FUNC(sub_82BF7688);
PPC_FUNC_IMPL(__imp__sub_82BF7688) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF76A0;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf76e8
	if (cr6.eq) goto loc_82BF76E8;
	// lbz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf76e8
	if (cr6.eq) goto loc_82BF76E8;
	// lbz r11,569(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 569);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf76cc
	if (cr6.eq) goto loc_82BF76CC;
	// bl 0x82bf75c0
	ctx.lr = 0x82BF76C8;
	sub_82BF75C0(ctx, base);
	// b 0x82bf76d4
	goto loc_82BF76D4;
loc_82BF76CC:
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82bf7500
	ctx.lr = 0x82BF76D4;
	sub_82BF7500(ctx, base);
loc_82BF76D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf76e8
	if (cr6.eq) goto loc_82BF76E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
loc_82BF76E8:
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

__attribute__((alias("__imp__sub_82BF76FC"))) PPC_WEAK_FUNC(sub_82BF76FC);
PPC_FUNC_IMPL(__imp__sub_82BF76FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7700"))) PPC_WEAK_FUNC(sub_82BF7700);
PPC_FUNC_IMPL(__imp__sub_82BF7700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF7708;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82BF7714;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7720
	if (cr6.eq) goto loc_82BF7720;
	// bl 0x82bda660
	ctx.lr = 0x82BF7720;
	sub_82BDA660(ctx, base);
loc_82BF7720:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7738
	if (cr6.eq) goto loc_82BF7738;
	// bl 0x833bbd78
	ctx.lr = 0x82BF7734;
	sub_833BBD78(ctx, base);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
loc_82BF7738:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf774c
	if (cr6.eq) goto loc_82BF774C;
	// bl 0x833bbd78
	ctx.lr = 0x82BF7748;
	sub_833BBD78(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_82BF774C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf776c
	if (cr6.eq) goto loc_82BF776C;
	// bl 0x835eb7f0
	ctx.lr = 0x82BF7760;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82BF776C;
	sub_82572FA0(ctx, base);
loc_82BF776C:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82bf7798
	if (cr6.eq) goto loc_82BF7798;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835ed308
	ctx.lr = 0x82BF7780;
	sub_835ED308(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x82BF7784;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82BF7794;
	sub_825952B8(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82BF7798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF77A0"))) PPC_WEAK_FUNC(sub_82BF77A0);
PPC_FUNC_IMPL(__imp__sub_82BF77A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF77A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf77fc
	if (!cr6.eq) goto loc_82BF77FC;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BF77DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf77f4
	if (cr6.eq) goto loc_82BF77F4;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x835ee550
	ctx.lr = 0x82BF77F0;
	sub_835EE550(ctx, base);
	// b 0x82bf77f8
	goto loc_82BF77F8;
loc_82BF77F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF77F8:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_82BF77FC:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7860
	if (!cr6.eq) goto loc_82BF7860;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,111(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 111);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,110(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// or r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82bf78dc
	if (cr6.eq) goto loc_82BF78DC;
loc_82BF7860:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x835ed758
	ctx.lr = 0x82BF7874;
	sub_835ED758(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF788C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82BF789C;
	sub_82572FA0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf78c0
	if (cr6.eq) goto loc_82BF78C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82BF78B0;
	sub_8337F1E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82BF78C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bcb58
	ctx.lr = 0x82BF78D0;
	sub_833BCB58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_82BF78DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF78E4"))) PPC_WEAK_FUNC(sub_82BF78E4);
PPC_FUNC_IMPL(__imp__sub_82BF78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF78E8"))) PPC_WEAK_FUNC(sub_82BF78E8);
PPC_FUNC_IMPL(__imp__sub_82BF78E8) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7964
	if (cr6.eq) goto loc_82BF7964;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF7920;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x82BF7930;
	sub_82572FA0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7948
	if (cr6.eq) goto loc_82BF7948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82BF7944;
	sub_8337F1E0(ctx, base);
	// b 0x82bf795c
	goto loc_82BF795C;
loc_82BF7948:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833bcb58
	ctx.lr = 0x82BF7958;
	sub_833BCB58(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_82BF795C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_82BF7964:
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

__attribute__((alias("__imp__sub_82BF797C"))) PPC_WEAK_FUNC(sub_82BF797C);
PPC_FUNC_IMPL(__imp__sub_82BF797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7980"))) PPC_WEAK_FUNC(sub_82BF7980);
PPC_FUNC_IMPL(__imp__sub_82BF7980) {
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
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf79cc
	if (cr6.eq) goto loc_82BF79CC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82bf79cc
	if (cr6.eq) goto loc_82BF79CC;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf79c0
	if (cr6.eq) goto loc_82BF79C0;
	// bl 0x835eb7f0
	ctx.lr = 0x82BF79C0;
	sub_835EB7F0(ctx, base);
loc_82BF79C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82BF79CC;
	sub_82572FA0(ctx, base);
loc_82BF79CC:
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

__attribute__((alias("__imp__sub_82BF79E4"))) PPC_WEAK_FUNC(sub_82BF79E4);
PPC_FUNC_IMPL(__imp__sub_82BF79E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF79E8"))) PPC_WEAK_FUNC(sub_82BF79E8);
PPC_FUNC_IMPL(__imp__sub_82BF79E8) {
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
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7a10
	if (cr6.eq) goto loc_82BF7A10;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_82BF7A10:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf77a0
	ctx.lr = 0x82BF7A20;
	sub_82BF77A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// stb r10,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r10.u8);
	// bl 0x82bda618
	ctx.lr = 0x82BF7A34;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf7a54
	if (!cr6.eq) goto loc_82BF7A54;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82BF7A54:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82bf7a64
	if (cr6.lt) goto loc_82BF7A64;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82BF7A64:
	// lwz r4,552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82bf7a74
	if (cr6.eq) goto loc_82BF7A74;
	// bl 0x82bda9d8
	ctx.lr = 0x82BF7A74;
	sub_82BDA9D8(ctx, base);
loc_82BF7A74:
	// li r3,5
	ctx.r3.s64 = 5;
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

__attribute__((alias("__imp__sub_82BF7A8C"))) PPC_WEAK_FUNC(sub_82BF7A8C);
PPC_FUNC_IMPL(__imp__sub_82BF7A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7A90"))) PPC_WEAK_FUNC(sub_82BF7A90);
PPC_FUNC_IMPL(__imp__sub_82BF7A90) {
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
	// lbz r11,549(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 549);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7ae4
	if (cr6.eq) goto loc_82BF7AE4;
	// bl 0x82bda618
	ctx.lr = 0x82BF7AB4;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7ae4
	if (cr6.eq) goto loc_82BF7AE4;
	// lbz r11,570(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf7ad4
	if (cr6.eq) goto loc_82BF7AD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r11.u8);
	// stb r11,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r11.u8);
loc_82BF7AD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf78e8
	ctx.lr = 0x82BF7ADC;
	sub_82BF78E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r11.u8);
loc_82BF7AE4:
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

__attribute__((alias("__imp__sub_82BF7AF8"))) PPC_WEAK_FUNC(sub_82BF7AF8);
PPC_FUNC_IMPL(__imp__sub_82BF7AF8) {
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
	// lis r11,-28763
	ctx.r11.s64 = -1885011968;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r11,52479
	ctx.r11.u64 = ctx.r11.u64 | 52479;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bf77a0
	ctx.lr = 0x82BF7B1C;
	sub_82BF77A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7B2C"))) PPC_WEAK_FUNC(sub_82BF7B2C);
PPC_FUNC_IMPL(__imp__sub_82BF7B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7B30"))) PPC_WEAK_FUNC(sub_82BF7B30);
PPC_FUNC_IMPL(__imp__sub_82BF7B30) {
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
	// lis r31,-31760
	ctx.r31.s64 = -2081423360;
	// lwz r11,-22728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7b84
	if (cr6.eq) goto loc_82BF7B84;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF7B64;
	sub_82572FA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-22728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// bl 0x82bf7980
	ctx.lr = 0x82BF7B70;
	sub_82BF7980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82BF7B7C;
	sub_82572FA0(ctx, base);
	// lwz r11,-22728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// stb r30,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r30.u8);
loc_82BF7B84:
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

__attribute__((alias("__imp__sub_82BF7B9C"))) PPC_WEAK_FUNC(sub_82BF7B9C);
PPC_FUNC_IMPL(__imp__sub_82BF7B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7BA0"))) PPC_WEAK_FUNC(sub_82BF7BA0);
PPC_FUNC_IMPL(__imp__sub_82BF7BA0) {
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
	// bl 0x82bf7700
	ctx.lr = 0x82BF7BB0;
	sub_82BF7700(ctx, base);
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

__attribute__((alias("__imp__sub_82BF7BC4"))) PPC_WEAK_FUNC(sub_82BF7BC4);
PPC_FUNC_IMPL(__imp__sub_82BF7BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7BC8"))) PPC_WEAK_FUNC(sub_82BF7BC8);
PPC_FUNC_IMPL(__imp__sub_82BF7BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF7BD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x82bf7ca8
	if (!cr6.lt) goto loc_82BF7CA8;
	// bl 0x82bda618
	ctx.lr = 0x82BF7BE8;
	sub_82BDA618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf7c14
	if (!cr6.eq) goto loc_82BF7C14;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x82bf7ca8
	if (!cr6.gt) goto loc_82BF7CA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF7C14:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82bf7c24
	if (cr6.lt) goto loc_82BF7C24;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82BF7C24:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82bf7ca8
	if (cr6.eq) goto loc_82BF7CA8;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stb r30,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r30.u8);
	// bne cr6,0x82bf7c64
	if (!cr6.eq) goto loc_82BF7C64;
	// lbz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 644);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7c64
	if (!cr6.eq) goto loc_82BF7C64;
	// addi r4,r29,216
	ctx.r4.s64 = ctx.r29.s64 + 216;
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82BF7C60;
	sub_831CE980(ctx, base);
	// stb r30,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r30.u8);
loc_82BF7C64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82BF7C70;
	sub_82BD9DB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// bl 0x82bda9d8
	ctx.lr = 0x82BF7C7C;
	sub_82BDA9D8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bf7c9c
	if (!cr6.eq) goto loc_82BF7C9C;
	// bl 0x82bf7238
	ctx.lr = 0x82BF7C8C;
	sub_82BF7238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7450
	ctx.lr = 0x82BF7C94;
	sub_82BF7450(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF7C9C:
	// bl 0x82bf78e8
	ctx.lr = 0x82BF7CA0;
	sub_82BF78E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7450
	ctx.lr = 0x82BF7CA8;
	sub_82BF7450(ctx, base);
loc_82BF7CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7CB0"))) PPC_WEAK_FUNC(sub_82BF7CB0);
PPC_FUNC_IMPL(__imp__sub_82BF7CB0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82bf77a0
	ctx.lr = 0x82BF7CF4;
	sub_82BF77A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7D04"))) PPC_WEAK_FUNC(sub_82BF7D04);
PPC_FUNC_IMPL(__imp__sub_82BF7D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF7D08"))) PPC_WEAK_FUNC(sub_82BF7D08);
PPC_FUNC_IMPL(__imp__sub_82BF7D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82BF7D10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82BF7D1C;
	sub_82BDA618(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7f5c
	if (cr6.eq) goto loc_82BF7F5C;
	// lbz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7f5c
	if (!cr6.eq) goto loc_82BF7F5C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7d5c
	if (!cr6.eq) goto loc_82BF7D5C;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82bf7d5c
	if (cr6.lt) goto loc_82BF7D5C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82bf7d60
	if (!cr6.gt) goto loc_82BF7D60;
loc_82BF7D5C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BF7D60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf7d78
	if (!cr6.eq) goto loc_82BF7D78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82BF7D78:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82BF7D84;
	sub_82BD9DB8(ctx, base);
	// lwz r11,560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf7e74
	if (cr6.eq) goto loc_82BF7E74;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// lis r27,3
	ctx.r27.s64 = 196608;
	// ori r10,r11,160
	ctx.r10.u64 = ctx.r11.u64 | 160;
	// ori r27,r27,65523
	ctx.r27.u64 = ctx.r27.u64 | 65523;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82BF7DAC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf7e30
	if (cr6.eq) goto loc_82BF7E30;
	// ld r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf7de0
	if (!cr6.eq) goto loc_82BF7DE0;
	// addi r10,r11,-27688
	ctx.r10.s64 = ctx.r11.s64 + -27688;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82bf7e0c
	goto loc_82BF7E0C;
loc_82BF7DE0:
	// addi r11,r11,-27688
	ctx.r11.s64 = ctx.r11.s64 + -27688;
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bf7e04
	if (!cr6.eq) goto loc_82BF7E04;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82bf7e08
	if (cr6.eq) goto loc_82BF7E08;
loc_82BF7E04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BF7E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82BF7E0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7e28
	if (cr6.eq) goto loc_82BF7E28;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a8f3f8
	ctx.lr = 0x82BF7E24;
	sub_82A8F3F8(ctx, base);
	// b 0x82bf7e34
	goto loc_82BF7E34;
loc_82BF7E28:
	// ld r30,160(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// b 0x82bf7e34
	goto loc_82BF7E34;
loc_82BF7E30:
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF7E34:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14198
	ctx.r4.s64 = ctx.r11.s64 + 14198;
	// bl 0x82bdc248
	ctx.lr = 0x82BF7E44;
	sub_82BDC248(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc228
	ctx.lr = 0x82BF7E50;
	sub_82BDC228(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdc118
	ctx.lr = 0x82BF7E70;
	sub_82BDC118(ctx, base);
	// b 0x82bf7ed0
	goto loc_82BF7ED0;
loc_82BF7E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9fa8
	ctx.lr = 0x82BF7E7C;
	sub_82BD9FA8(ctx, base);
	// lbz r11,644(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 644);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7ed0
	if (cr6.eq) goto loc_82BF7ED0;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// addi r4,r28,572
	ctx.r4.s64 = ctx.r28.s64 + 572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82BF7E9C;
	sub_831CE980(ctx, base);
	// stw r29,564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 564, ctx.r29.u32);
	// addi r4,r28,564
	ctx.r4.s64 = ctx.r28.s64 + 564;
	// li r5,126
	ctx.r5.s64 = 126;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x82BF7EB0;
	sub_82A76558(ctx, base);
	// stb r29,644(r28)
	PPC_STORE_U8(ctx.r28.u32 + 644, ctx.r29.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaec0
	ctx.lr = 0x82BF7EC0;
	sub_82BDAEC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdaff8
	ctx.lr = 0x82BF7EC8;
	sub_82BDAFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdb278
	ctx.lr = 0x82BF7ED0;
	sub_82BDB278(ctx, base);
loc_82BF7ED0:
	// lwz r11,552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf7efc
	if (cr6.eq) goto loc_82BF7EFC;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r4,r11,31536
	ctx.r4.s64 = ctx.r11.s64 + 31536;
	// bl 0x82bda190
	ctx.lr = 0x82BF7EEC;
	sub_82BDA190(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,564(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 564);
	// bl 0x82bf7500
	ctx.lr = 0x82BF7EF8;
	sub_82BF7500(ctx, base);
	// b 0x82bf7f38
	goto loc_82BF7F38;
loc_82BF7EFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bd9e08
	ctx.lr = 0x82BF7F18;
	sub_82BD9E08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9f18
	ctx.lr = 0x82BF7F24;
	sub_82BD9F18(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdbb88
	ctx.lr = 0x82BF7F38;
	sub_82BDBB88(ctx, base);
loc_82BF7F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,544(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 544);
	// bl 0x82bd9f68
	ctx.lr = 0x82BF7F44;
	sub_82BD9F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,570(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 570);
	// bl 0x82bda498
	ctx.lr = 0x82BF7F50;
	sub_82BDA498(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9db8
	ctx.lr = 0x82BF7F5C;
	sub_82BD9DB8(ctx, base);
loc_82BF7F5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7F68"))) PPC_WEAK_FUNC(sub_82BF7F68);
PPC_FUNC_IMPL(__imp__sub_82BF7F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF7F70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,14648
	ctx.r10.s64 = ctx.r11.s64 + 14648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82bf7700
	ctx.lr = 0x82BF7F88;
	sub_82BF7700(ctx, base);
	// lis r9,-31760
	ctx.r9.s64 = -2081423360;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,536
	ctx.r31.s64 = ctx.r28.s64 + 536;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r30,12
	ctx.r30.s64 = 12;
	// stw r29,-22728(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22728, ctx.r29.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
loc_82BF7FA8:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf7fc8
	if (cr6.lt) goto loc_82BF7FC8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BF7FC8;
	sub_825952B8(ctx, base);
loc_82BF7FC8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82bf7fa8
	if (!cr0.lt) goto loc_82BF7FA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82BF7FE8;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831032a0
	ctx.lr = 0x82BF7FF0;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7FF8"))) PPC_WEAK_FUNC(sub_82BF7FF8);
PPC_FUNC_IMPL(__imp__sub_82BF7FF8) {
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
	// bl 0x82bf7f68
	ctx.lr = 0x82BF8018;
	sub_82BF7F68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8030
	if (cr6.eq) goto loc_82BF8030;
	// bl 0x82416268
	ctx.lr = 0x82BF802C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BF8030:
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

__attribute__((alias("__imp__sub_82BF8048"))) PPC_WEAK_FUNC(sub_82BF8048);
PPC_FUNC_IMPL(__imp__sub_82BF8048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82BF8050;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,14536
	ctx.r4.s64 = ctx.r11.s64 + 14536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82BF8068;
	sub_83103328(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,14648
	ctx.r9.s64 = ctx.r10.s64 + 14648;
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82BF8094;
	sub_82572FA0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// addi r11,r28,-32
	ctx.r11.s64 = ctx.r28.s64 + -32;
loc_82BF80C0:
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stbu r30,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf80c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF80C0;
	// addi r26,r31,572
	ctx.r26.s64 = ctx.r31.s64 + 572;
	// stw r29,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r29.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r29,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stb r30,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r30.u8);
	// stb r27,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r27.u8);
	// stb r30,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r30.u8);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// stb r30,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r30.u8);
	// stb r27,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r27.u8);
	// stb r30,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82BF8118;
	sub_831CDCF0(ctx, base);
	// lis r11,-28763
	ctx.r11.s64 = -1885011968;
	// stb r27,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r27.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// ori r10,r11,52479
	ctx.r10.u64 = ctx.r11.u64 | 52479;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x82BF8140;
	sub_82BEE188(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BF8154:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf816c
	if (cr6.lt) goto loc_82BF816C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82bf8170
	goto loc_82BF8170;
loc_82BF816C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BF8170:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82bf8154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF8154;
	// bl 0x83763ef8
	ctx.lr = 0x82BF8184;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf823c
	if (cr6.eq) goto loc_82BF823C;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bf81b8
	if (!cr6.eq) goto loc_82BF81B8;
	// addi r10,r11,-27688
	ctx.r10.s64 = ctx.r11.s64 + -27688;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82bf81e4
	goto loc_82BF81E4;
loc_82BF81B8:
	// addi r11,r11,-27688
	ctx.r11.s64 = ctx.r11.s64 + -27688;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bf81dc
	if (!cr6.eq) goto loc_82BF81DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82bf81e0
	if (cr6.eq) goto loc_82BF81E0;
loc_82BF81DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BF81E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82BF81E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8204
	if (cr6.eq) goto loc_82BF8204;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// ori r10,r11,160
	ctx.r10.u64 = ctx.r11.u64 | 160;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF8204:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BF8210:
	// stdu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82bf8210
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BF8210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF822C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82BF823C;
	sub_831CE980(ctx, base);
loc_82BF823C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8248"))) PPC_WEAK_FUNC(sub_82BF8248);
PPC_FUNC_IMPL(__imp__sub_82BF8248) {
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
	// lis r31,-31760
	ctx.r31.s64 = -2081423360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-22728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf82b8
	if (!cr6.eq) goto loc_82BF82B8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,648
	ctx.r4.s64 = 648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82BF8288;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf82a0
	if (cr6.eq) goto loc_82BF82A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bf8048
	ctx.lr = 0x82BF8298;
	sub_82BF8048(ctx, base);
	// stw r3,-22728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22728, ctx.r3.u32);
	// b 0x82bf82a8
	goto loc_82BF82A8;
loc_82BF82A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22728, ctx.r11.u32);
loc_82BF82A8:
	// bl 0x83763ef8
	ctx.lr = 0x82BF82AC;
	sub_83763EF8(ctx, base);
	// lwz r4,-22728(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
	// bl 0x83103100
	ctx.lr = 0x82BF82B4;
	sub_83103100(ctx, base);
	// lwz r3,-22728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22728);
loc_82BF82B8:
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

__attribute__((alias("__imp__sub_82BF82D0"))) PPC_WEAK_FUNC(sub_82BF82D0);
PPC_FUNC_IMPL(__imp__sub_82BF82D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82BF82D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf82f8
	if (cr6.eq) goto loc_82BF82F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82BF82F8:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,120
	ctx.r31.s64 = ctx.r28.s64 + 120;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82BF8310:
	// lbz r11,548(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf83b0
	if (cr6.eq) goto loc_82BF83B0;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82BF833C;
	sub_8259CB28(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8388
	if (cr6.eq) goto loc_82BF8388;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82bf835c
	if (!cr6.lt) goto loc_82BF835C;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82BF835C:
	// bl 0x83816968
	ctx.lr = 0x82BF8360;
	sub_83816968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83816378
	ctx.lr = 0x82BF8368;
	sub_83816378(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf8380
	if (cr6.lt) goto loc_82BF8380;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82bf8384
	goto loc_82BF8384;
loc_82BF8380:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BF8384:
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
loc_82BF8388:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf83a4
	if (cr6.lt) goto loc_82BF83A4;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82BF83A4;
	sub_825952B8(ctx, base);
loc_82BF83A4:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_82BF83B0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf83c4
	if (cr6.eq) goto loc_82BF83C4;
	// bl 0x833bbd78
	ctx.lr = 0x82BF83C0;
	sub_833BBD78(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82BF83C4:
	// lwz r11,540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 540);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x82bf8310
	if (!cr6.gt) goto loc_82BF8310;
	// bl 0x82bda618
	ctx.lr = 0x82BF83DC;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf83ec
	if (cr6.eq) goto loc_82BF83EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bda928
	ctx.lr = 0x82BF83EC;
	sub_82BDA928(ctx, base);
loc_82BF83EC:
	// lbz r11,549(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 549);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf841c
	if (cr6.eq) goto loc_82BF841C;
	// lbz r11,570(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 570);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82bf8410
	if (cr6.eq) goto loc_82BF8410;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,570(r28)
	PPC_STORE_U8(ctx.r28.u32 + 570, ctx.r11.u8);
	// stb r11,571(r28)
	PPC_STORE_U8(ctx.r28.u32 + 571, ctx.r11.u8);
loc_82BF8410:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf78e8
	ctx.lr = 0x82BF8418;
	sub_82BF78E8(ctx, base);
	// stb r29,549(r28)
	PPC_STORE_U8(ctx.r28.u32 + 549, ctx.r29.u8);
loc_82BF841C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,540(r28)
	PPC_STORE_U32(ctx.r28.u32 + 540, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF842C"))) PPC_WEAK_FUNC(sub_82BF842C);
PPC_FUNC_IMPL(__imp__sub_82BF842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8430"))) PPC_WEAK_FUNC(sub_82BF8430);
PPC_FUNC_IMPL(__imp__sub_82BF8430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF8438;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82bf8460
	if (cr6.lt) goto loc_82BF8460;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82bf8464
	goto loc_82BF8464;
loc_82BF8460:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BF8464:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r4,-27724(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27724);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BF8474:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bf8474
	if (!cr6.eq) goto loc_82BF8474;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82BF8498;
	sub_8259CC28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x82BF84A8;
	sub_82A8C428(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82474170
	ctx.lr = 0x82BF84C4;
	sub_82474170(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a9c4c0
	ctx.lr = 0x82BF84D0;
	sub_82A9C4C0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82BF84E4;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82bf8504
	if (cr6.lt) goto loc_82BF8504;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82BF8504;
	sub_825952B8(ctx, base);
loc_82BF8504:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82a79160
	ctx.lr = 0x82BF8518;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82BF852C;
	sub_831CCF00(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8534"))) PPC_WEAK_FUNC(sub_82BF8534);
PPC_FUNC_IMPL(__imp__sub_82BF8534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8538"))) PPC_WEAK_FUNC(sub_82BF8538);
PPC_FUNC_IMPL(__imp__sub_82BF8538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82BF8540;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bda618
	ctx.lr = 0x82BF854C;
	sub_82BDA618(ctx, base);
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf85f0
	if (!cr6.eq) goto loc_82BF85F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf85f0
	if (cr6.eq) goto loc_82BF85F0;
	// lbz r11,570(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8580
	if (cr6.eq) goto loc_82BF8580;
	// stb r29,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r29.u8);
	// stb r30,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r30.u8);
loc_82BF8580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7238
	ctx.lr = 0x82BF8588;
	sub_82BF7238(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7500
	ctx.lr = 0x82BF8594;
	sub_82BF7500(ctx, base);
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bda928
	ctx.lr = 0x82BF85A0;
	sub_82BDA928(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf8430
	ctx.lr = 0x82BF85C0;
	sub_82BF8430(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8259cb28
	ctx.lr = 0x82BF85D4;
	sub_8259CB28(ctx, base);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stb r30,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82BF85E4;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82BF85F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8604"))) PPC_WEAK_FUNC(sub_82BF8604);
PPC_FUNC_IMPL(__imp__sub_82BF8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8608"))) PPC_WEAK_FUNC(sub_82BF8608);
PPC_FUNC_IMPL(__imp__sub_82BF8608) {
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
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf86f8
	if (!cr6.eq) goto loc_82BF86F8;
	// bl 0x82bda618
	ctx.lr = 0x82BF8630;
	sub_82BDA618(ctx, base);
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf86f0
	if (!cr6.eq) goto loc_82BF86F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf86f0
	if (cr6.eq) goto loc_82BF86F0;
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf86f8
	if (!cr6.eq) goto loc_82BF86F8;
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x82bf8670
	if (cr6.lt) goto loc_82BF8670;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bda928
	ctx.lr = 0x82BF8668;
	sub_82BDA928(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf86fc
	goto loc_82BF86FC;
loc_82BF8670:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r4.u32);
	// bl 0x82bf7500
	ctx.lr = 0x82BF8680;
	sub_82BF7500(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// bl 0x82bda928
	ctx.lr = 0x82BF8698;
	sub_82BDA928(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82bf8430
	ctx.lr = 0x82BF86BC;
	sub_82BF8430(ctx, base);
	// lwz r9,540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r6,-1
	ctx.r6.s64 = -1;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x8259cb28
	ctx.lr = 0x82BF86DC;
	sub_8259CB28(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r8,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r8.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x82BF86EC;
	sub_8387E8E0(ctx, base);
	// b 0x82bf86f8
	goto loc_82BF86F8;
loc_82BF86F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_82BF86F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF86FC:
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

__attribute__((alias("__imp__sub_82BF8714"))) PPC_WEAK_FUNC(sub_82BF8714);
PPC_FUNC_IMPL(__imp__sub_82BF8714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8718"))) PPC_WEAK_FUNC(sub_82BF8718);
PPC_FUNC_IMPL(__imp__sub_82BF8718) {
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
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82bf87c0
	if (cr6.gt) goto loc_82BF87C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82bf876c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF876C;
	// bdzf 4*cr6+eq,0x82bf8788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82BF8788;
	// bne cr6,0x82bf87a4
	if (!cr6.eq) goto loc_82BF87A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf8538
	ctx.lr = 0x82BF8758;
	sub_82BF8538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf87c0
	if (cr6.eq) goto loc_82BF87C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bf87bc
	goto loc_82BF87BC;
loc_82BF876C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf8608
	ctx.lr = 0x82BF8774;
	sub_82BF8608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf87c0
	if (cr6.eq) goto loc_82BF87C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82bf87bc
	goto loc_82BF87BC;
loc_82BF8788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7a90
	ctx.lr = 0x82BF8790;
	sub_82BF7A90(ctx, base);
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
loc_82BF87A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf82d0
	ctx.lr = 0x82BF87AC;
	sub_82BF82D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf87c0
	if (cr6.eq) goto loc_82BF87C0;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82BF87BC:
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_82BF87C0:
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

__attribute__((alias("__imp__sub_82BF87D4"))) PPC_WEAK_FUNC(sub_82BF87D4);
PPC_FUNC_IMPL(__imp__sub_82BF87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF87D8"))) PPC_WEAK_FUNC(sub_82BF87D8);
PPC_FUNC_IMPL(__imp__sub_82BF87D8) {
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
	// bl 0x82bda618
	ctx.lr = 0x82BF87F4;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf8804
	if (!cr6.eq) goto loc_82BF8804;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bf8894
	goto loc_82BF8894;
loc_82BF8804:
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8824
	if (cr6.eq) goto loc_82BF8824;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf8824
	if (!cr6.eq) goto loc_82BF8824;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bf8894
	goto loc_82BF8894;
loc_82BF8824:
	// bl 0x82bda618
	ctx.lr = 0x82BF8828;
	sub_82BDA618(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf884c
	if (cr6.eq) goto loc_82BF884C;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf884c
	if (cr6.eq) goto loc_82BF884C;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82bd9df0
	ctx.lr = 0x82BF8848;
	sub_82BD9DF0(ctx, base);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
loc_82BF884C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf74a0
	ctx.lr = 0x82BF8854;
	sub_82BF74A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7688
	ctx.lr = 0x82BF885C;
	sub_82BF7688(ctx, base);
	// bl 0x82bda618
	ctx.lr = 0x82BF8860;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8880
	if (cr6.eq) goto loc_82BF8880;
	// lbz r11,571(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 571);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8880
	if (cr6.eq) goto loc_82BF8880;
	// lbz r4,570(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// bl 0x82bda498
	ctx.lr = 0x82BF887C;
	sub_82BDA498(ctx, base);
	// stb r30,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r30.u8);
loc_82BF8880:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf8718
	ctx.lr = 0x82BF8888;
	sub_82BF8718(ctx, base);
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82BF8894:
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

__attribute__((alias("__imp__sub_82BF88AC"))) PPC_WEAK_FUNC(sub_82BF88AC);
PPC_FUNC_IMPL(__imp__sub_82BF88AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF88B0"))) PPC_WEAK_FUNC(sub_82BF88B0);
PPC_FUNC_IMPL(__imp__sub_82BF88B0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82bf8a88
	if (cr6.gt) goto loc_82BF8A88;
	// lis r12,-32064
	ctx.r12.s64 = -2101346304;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30488
	ctx.r12.s64 = ctx.r12.s64 + -30488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82BF8A90;
	case 1:
		goto loc_82BF8910;
	case 2:
		goto loc_82BF8930;
	case 3:
		goto loc_82BF8950;
	case 4:
		goto loc_82BF8980;
	case 5:
		goto loc_82BF89C0;
	case 6:
		goto loc_82BF89DC;
	case 7:
		goto loc_82BF8A30;
	case 8:
		goto loc_82BF8A58;
	case 9:
		goto loc_82BF8A90;
	default:
		return;
	}
	// lwz r21,-30064(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30064);
	// lwz r21,-30448(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30448);
	// lwz r21,-30416(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30416);
	// lwz r21,-30384(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30384);
	// lwz r21,-30336(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30336);
	// lwz r21,-30272(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30272);
	// lwz r21,-30244(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30244);
	// lwz r21,-30160(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30160);
	// lwz r21,-30120(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30120);
	// lwz r21,-30064(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30064);
loc_82BF8910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf79e8
	ctx.lr = 0x82BF8918;
	sub_82BF79E8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
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
loc_82BF8930:
	// bl 0x82bda618
	ctx.lr = 0x82BF8934;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8948
	if (cr6.eq) goto loc_82BF8948;
	// bl 0x82bda660
	ctx.lr = 0x82BF8940;
	sub_82BDA660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r11.u8);
loc_82BF8948:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82bf8a8c
	goto loc_82BF8A8C;
loc_82BF8950:
	// bl 0x82bda618
	ctx.lr = 0x82BF8954;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bf8964
	if (!cr6.eq) goto loc_82BF8964;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bf896c
	goto loc_82BF896C;
loc_82BF8964:
	// bl 0x82bda660
	ctx.lr = 0x82BF8968;
	sub_82BDA660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BF896C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a90
	if (cr6.eq) goto loc_82BF8A90;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82bf8a8c
	goto loc_82BF8A8C;
loc_82BF8980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf73e0
	ctx.lr = 0x82BF8988;
	sub_82BF73E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a90
	if (cr6.eq) goto loc_82BF8A90;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
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
loc_82BF89C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf7d08
	ctx.lr = 0x82BF89C8;
	sub_82BF7D08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a90
	if (cr6.eq) goto loc_82BF8A90;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82bf8a8c
	goto loc_82BF8A8C;
loc_82BF89DC:
	// lbz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a14
	if (cr6.eq) goto loc_82BF8A14;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf8a14
	if (!cr6.eq) goto loc_82BF8A14;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r11.u8);
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
loc_82BF8A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf87d8
	ctx.lr = 0x82BF8A1C;
	sub_82BF87D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a90
	if (cr6.eq) goto loc_82BF8A90;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82bf8a8c
	goto loc_82BF8A8C;
loc_82BF8A30:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82bf8a90
	if (!cr6.eq) goto loc_82BF8A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf82d0
	ctx.lr = 0x82BF8A44;
	sub_82BF82D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8a90
	if (cr6.eq) goto loc_82BF8A90;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82bf8a8c
	goto loc_82BF8A8C;
loc_82BF8A58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF8A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
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
loc_82BF8A88:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82BF8A8C:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82BF8A90:
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

__attribute__((alias("__imp__sub_82BF8AA4"))) PPC_WEAK_FUNC(sub_82BF8AA4);
PPC_FUNC_IMPL(__imp__sub_82BF8AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8AA8"))) PPC_WEAK_FUNC(sub_82BF8AA8);
PPC_FUNC_IMPL(__imp__sub_82BF8AA8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15032
	ctx.r9.s64 = ctx.r11.s64 + 15032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// bl 0x82bda618
	ctx.lr = 0x82BF8AD8;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8ae8
	if (cr6.eq) goto loc_82BF8AE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
loc_82BF8AE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be0430
	ctx.lr = 0x82BF8AF0;
	sub_82BE0430(ctx, base);
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

__attribute__((alias("__imp__sub_82BF8B04"))) PPC_WEAK_FUNC(sub_82BF8B04);
PPC_FUNC_IMPL(__imp__sub_82BF8B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8B08"))) PPC_WEAK_FUNC(sub_82BF8B08);
PPC_FUNC_IMPL(__imp__sub_82BF8B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82BF8B10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x82BF8B20;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8b38
	if (cr6.eq) goto loc_82BF8B38;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// bl 0x83777d88
	ctx.lr = 0x82BF8B38;
	sub_83777D88(ctx, base);
loc_82BF8B38:
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,-30536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8b58
	if (cr6.eq) goto loc_82BF8B58;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82BF8B58;
	sub_831CE980(ctx, base);
loc_82BF8B58:
	// bl 0x82bda618
	ctx.lr = 0x82BF8B5C;
	sub_82BDA618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8b8c
	if (cr6.eq) goto loc_82BF8B8C;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x82BF8B78;
	sub_831CE980(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8b8c
	if (cr6.eq) goto loc_82BF8B8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bdaff8
	ctx.lr = 0x82BF8B8C;
	sub_82BDAFF8(ctx, base);
loc_82BF8B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8B94"))) PPC_WEAK_FUNC(sub_82BF8B94);
PPC_FUNC_IMPL(__imp__sub_82BF8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF8B98"))) PPC_WEAK_FUNC(sub_82BF8B98);
PPC_FUNC_IMPL(__imp__sub_82BF8B98) {
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
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82bf8bf0
	if (!cr6.eq) goto loc_82BF8BF0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83740660
	ctx.lr = 0x82BF8BDC;
	sub_83740660(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82bf8bf0
	if (!cr6.eq) goto loc_82BF8BF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf8b08
	ctx.lr = 0x82BF8BF0;
	sub_82BF8B08(ctx, base);
loc_82BF8BF0:
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

__attribute__((alias("__imp__sub_82BF8C08"))) PPC_WEAK_FUNC(sub_82BF8C08);
PPC_FUNC_IMPL(__imp__sub_82BF8C08) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,15032
	ctx.r9.s64 = ctx.r11.s64 + 15032;
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
	// bl 0x82bda618
	ctx.lr = 0x82BF8C40;
	sub_82BDA618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bf8c50
	if (cr6.eq) goto loc_82BF8C50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
loc_82BF8C50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be0430
	ctx.lr = 0x82BF8C58;
	sub_82BE0430(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82bf8c70
	if (cr6.eq) goto loc_82BF8C70;
	// bl 0x82416268
	ctx.lr = 0x82BF8C6C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BF8C70:
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

